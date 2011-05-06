
#include <map>
#include <string>
#include "gvalue_util.h"

typedef GValue Value;

class ParamTable {
public:
    typedef std::map<std::string, Value> ValTable;
    /// It's not necessary to copy all properties of an object to this, so
    /// when the property does not exist here, it will call these Getter/Settter
    /// to access the property.
    typedef const Value* (*Getter) (const ParamTable&, const std::string&);
    typedef bool (*Setter) (const ParamTable&, const std::string&, const Value&);
public:
    ParamTable (Getter g = NULL, Setter s = NULL);

    /// Get a property value.
    const Value *Get (const std::string &name) const;

    /// If the value does not exist, add a new one.
    bool Set (const std::string &name, const Value &val);

    /// Dump all cached properties by settter. And clear the cache.
    void Dump ();
private:
    void Add (const std::string &name, const Value &val);
private:
    ValTable m_vals;
    Getter m_getter;
    Setter m_setter;
};

/// Wrap ParamTable in the Value.
enum { EXT_PARAMTABLE = EXT_GUID + 1 };

inline GValue CreateGValue (ParamTable *t) {
    // here is a trick, be sure you can understand this
    return GValue (&t, sizeof(&t), EXT_PARAMTABLE);
}

inline ParamTable *CastParamTable (const GValue &val) {
    if (val.Type() != EXT_PARAMTABLE) return NULL;
    void *p = val.GetRaw()->p;
    return *(ParamTable**) p;
}
