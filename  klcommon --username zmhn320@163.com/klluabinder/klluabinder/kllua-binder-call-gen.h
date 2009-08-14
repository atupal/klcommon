/// this file was generated by a tiny program.


/// 1 param(s).


template <typename _Tp, typename P1 > struct caller1 { typedef P1 p1_type; typedef _Tp result_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1 ) { result_type r = fn( p1 ); lua::return_traits<result_type>::set_result( L, r );; } }; template <typename P1> struct caller1<void, P1 > { typedef P1 p1_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1 ) { fn( p1 ); } };

/// 2 param(s).


template <typename _Tp, typename P1,typename P2 > struct caller2 { typedef P1 p1_type;typedef P2 p2_type; typedef _Tp result_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2 ) { result_type r = fn( p1,p2 ); lua::return_traits<result_type>::set_result( L, r );; } }; template <typename P1,typename P2> struct caller2<void, P1,P2 > { typedef P1 p1_type;typedef P2 p2_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2 ) { fn( p1,p2 ); } };

/// 3 param(s).


template <typename _Tp, typename P1,typename P2,typename P3 > struct caller3 { typedef P1 p1_type;typedef P2 p2_type;typedef P3 p3_type; typedef _Tp result_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2,p3_type &p3 ) { result_type r = fn( p1,p2,p3 ); lua::return_traits<result_type>::set_result( L, r );; } }; template <typename P1,typename P2,typename P3> struct caller3<void, P1,P2,P3 > { typedef P1 p1_type;typedef P2 p2_type;typedef P3 p3_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2,p3_type &p3 ) { fn( p1,p2,p3 ); } };

/// 4 param(s).


template <typename _Tp, typename P1,typename P2,typename P3,typename P4 > struct caller4 { typedef P1 p1_type;typedef P2 p2_type;typedef P3 p3_type;typedef P4 p4_type; typedef _Tp result_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2,p3_type &p3,p4_type &p4 ) { result_type r = fn( p1,p2,p3,p4 ); lua::return_traits<result_type>::set_result( L, r );; } }; template <typename P1,typename P2,typename P3,typename P4> struct caller4<void, P1,P2,P3,P4 > { typedef P1 p1_type;typedef P2 p2_type;typedef P3 p3_type;typedef P4 p4_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2,p3_type &p3,p4_type &p4 ) { fn( p1,p2,p3,p4 ); } };

/// 5 param(s).


template <typename _Tp, typename P1,typename P2,typename P3,typename P4,typename P5 > struct caller5 { typedef P1 p1_type;typedef P2 p2_type;typedef P3 p3_type;typedef P4 p4_type;typedef P5 p5_type; typedef _Tp result_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2,p3_type &p3,p4_type &p4,p5_type &p5 ) { result_type r = fn( p1,p2,p3,p4,p5 ); lua::return_traits<result_type>::set_result( L, r );; } }; template <typename P1,typename P2,typename P3,typename P4,typename P5> struct caller5<void, P1,P2,P3,P4,P5 > { typedef P1 p1_type;typedef P2 p2_type;typedef P3 p3_type;typedef P4 p4_type;typedef P5 p5_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2,p3_type &p3,p4_type &p4,p5_type &p5 ) { fn( p1,p2,p3,p4,p5 ); } };

/// 6 param(s).


template <typename _Tp, typename P1,typename P2,typename P3,typename P4,typename P5,typename P6 > struct caller6 { typedef P1 p1_type;typedef P2 p2_type;typedef P3 p3_type;typedef P4 p4_type;typedef P5 p5_type;typedef P6 p6_type; typedef _Tp result_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2,p3_type &p3,p4_type &p4,p5_type &p5,p6_type &p6 ) { result_type r = fn( p1,p2,p3,p4,p5,p6 ); lua::return_traits<result_type>::set_result( L, r );; } }; template <typename P1,typename P2,typename P3,typename P4,typename P5,typename P6> struct caller6<void, P1,P2,P3,P4,P5,P6 > { typedef P1 p1_type;typedef P2 p2_type;typedef P3 p3_type;typedef P4 p4_type;typedef P5 p5_type;typedef P6 p6_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2,p3_type &p3,p4_type &p4,p5_type &p5,p6_type &p6 ) { fn( p1,p2,p3,p4,p5,p6 ); } };

/// 7 param(s).


template <typename _Tp, typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7 > struct caller7 { typedef P1 p1_type;typedef P2 p2_type;typedef P3 p3_type;typedef P4 p4_type;typedef P5 p5_type;typedef P6 p6_type;typedef P7 p7_type; typedef _Tp result_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2,p3_type &p3,p4_type &p4,p5_type &p5,p6_type &p6,p7_type &p7 ) { result_type r = fn( p1,p2,p3,p4,p5,p6,p7 ); lua::return_traits<result_type>::set_result( L, r );; } }; template <typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7> struct caller7<void, P1,P2,P3,P4,P5,P6,P7 > { typedef P1 p1_type;typedef P2 p2_type;typedef P3 p3_type;typedef P4 p4_type;typedef P5 p5_type;typedef P6 p6_type;typedef P7 p7_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2,p3_type &p3,p4_type &p4,p5_type &p5,p6_type &p6,p7_type &p7 ) { fn( p1,p2,p3,p4,p5,p6,p7 ); } };

/// 8 param(s).


template <typename _Tp, typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7,typename P8 > struct caller8 { typedef P1 p1_type;typedef P2 p2_type;typedef P3 p3_type;typedef P4 p4_type;typedef P5 p5_type;typedef P6 p6_type;typedef P7 p7_type;typedef P8 p8_type; typedef _Tp result_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2,p3_type &p3,p4_type &p4,p5_type &p5,p6_type &p6,p7_type &p7,p8_type &p8 ) { result_type r = fn( p1,p2,p3,p4,p5,p6,p7,p8 ); lua::return_traits<result_type>::set_result( L, r );; } }; template <typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7,typename P8> struct caller8<void, P1,P2,P3,P4,P5,P6,P7,P8 > { typedef P1 p1_type;typedef P2 p2_type;typedef P3 p3_type;typedef P4 p4_type;typedef P5 p5_type;typedef P6 p6_type;typedef P7 p7_type;typedef P8 p8_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2,p3_type &p3,p4_type &p4,p5_type &p5,p6_type &p6,p7_type &p7,p8_type &p8 ) { fn( p1,p2,p3,p4,p5,p6,p7,p8 ); } };

/// 9 param(s).


template <typename _Tp, typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7,typename P8,typename P9 > struct caller9 { typedef P1 p1_type;typedef P2 p2_type;typedef P3 p3_type;typedef P4 p4_type;typedef P5 p5_type;typedef P6 p6_type;typedef P7 p7_type;typedef P8 p8_type;typedef P9 p9_type; typedef _Tp result_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2,p3_type &p3,p4_type &p4,p5_type &p5,p6_type &p6,p7_type &p7,p8_type &p8,p9_type &p9 ) { result_type r = fn( p1,p2,p3,p4,p5,p6,p7,p8,p9 ); lua::return_traits<result_type>::set_result( L, r );; } }; template <typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7,typename P8,typename P9> struct caller9<void, P1,P2,P3,P4,P5,P6,P7,P8,P9 > { typedef P1 p1_type;typedef P2 p2_type;typedef P3 p3_type;typedef P4 p4_type;typedef P5 p5_type;typedef P6 p6_type;typedef P7 p7_type;typedef P8 p8_type;typedef P9 p9_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2,p3_type &p3,p4_type &p4,p5_type &p5,p6_type &p6,p7_type &p7,p8_type &p8,p9_type &p9 ) { fn( p1,p2,p3,p4,p5,p6,p7,p8,p9 ); } };

/// 10 param(s).


template <typename _Tp, typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7,typename P8,typename P9,typename P10 > struct caller10 { typedef P1 p1_type;typedef P2 p2_type;typedef P3 p3_type;typedef P4 p4_type;typedef P5 p5_type;typedef P6 p6_type;typedef P7 p7_type;typedef P8 p8_type;typedef P9 p9_type;typedef P10 p10_type; typedef _Tp result_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2,p3_type &p3,p4_type &p4,p5_type &p5,p6_type &p6,p7_type &p7,p8_type &p8,p9_type &p9,p10_type &p10 ) { result_type r = fn( p1,p2,p3,p4,p5,p6,p7,p8,p9,p10 ); lua::return_traits<result_type>::set_result( L, r );; } }; template <typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7,typename P8,typename P9,typename P10> struct caller10<void, P1,P2,P3,P4,P5,P6,P7,P8,P9,P10 > { typedef P1 p1_type;typedef P2 p2_type;typedef P3 p3_type;typedef P4 p4_type;typedef P5 p5_type;typedef P6 p6_type;typedef P7 p7_type;typedef P8 p8_type;typedef P9 p9_type;typedef P10 p10_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2,p3_type &p3,p4_type &p4,p5_type &p5,p6_type &p6,p7_type &p7,p8_type &p8,p9_type &p9,p10_type &p10 ) { fn( p1,p2,p3,p4,p5,p6,p7,p8,p9,p10 ); } };

/// 11 param(s).


template <typename _Tp, typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7,typename P8,typename P9,typename P10,typename P11 > struct caller11 { typedef P1 p1_type;typedef P2 p2_type;typedef P3 p3_type;typedef P4 p4_type;typedef P5 p5_type;typedef P6 p6_type;typedef P7 p7_type;typedef P8 p8_type;typedef P9 p9_type;typedef P10 p10_type;typedef P11 p11_type; typedef _Tp result_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2,p3_type &p3,p4_type &p4,p5_type &p5,p6_type &p6,p7_type &p7,p8_type &p8,p9_type &p9,p10_type &p10,p11_type &p11 ) { result_type r = fn( p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11 ); lua::return_traits<result_type>::set_result( L, r );; } }; template <typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7,typename P8,typename P9,typename P10,typename P11> struct caller11<void, P1,P2,P3,P4,P5,P6,P7,P8,P9,P10,P11 > { typedef P1 p1_type;typedef P2 p2_type;typedef P3 p3_type;typedef P4 p4_type;typedef P5 p5_type;typedef P6 p6_type;typedef P7 p7_type;typedef P8 p8_type;typedef P9 p9_type;typedef P10 p10_type;typedef P11 p11_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2,p3_type &p3,p4_type &p4,p5_type &p5,p6_type &p6,p7_type &p7,p8_type &p8,p9_type &p9,p10_type &p10,p11_type &p11 ) { fn( p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11 ); } };

/// 12 param(s).


template <typename _Tp, typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7,typename P8,typename P9,typename P10,typename P11,typename P12 > struct caller12 { typedef P1 p1_type;typedef P2 p2_type;typedef P3 p3_type;typedef P4 p4_type;typedef P5 p5_type;typedef P6 p6_type;typedef P7 p7_type;typedef P8 p8_type;typedef P9 p9_type;typedef P10 p10_type;typedef P11 p11_type;typedef P12 p12_type; typedef _Tp result_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2,p3_type &p3,p4_type &p4,p5_type &p5,p6_type &p6,p7_type &p7,p8_type &p8,p9_type &p9,p10_type &p10,p11_type &p11,p12_type &p12 ) { result_type r = fn( p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12 ); lua::return_traits<result_type>::set_result( L, r );; } }; template <typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7,typename P8,typename P9,typename P10,typename P11,typename P12> struct caller12<void, P1,P2,P3,P4,P5,P6,P7,P8,P9,P10,P11,P12 > { typedef P1 p1_type;typedef P2 p2_type;typedef P3 p3_type;typedef P4 p4_type;typedef P5 p5_type;typedef P6 p6_type;typedef P7 p7_type;typedef P8 p8_type;typedef P9 p9_type;typedef P10 p10_type;typedef P11 p11_type;typedef P12 p12_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2,p3_type &p3,p4_type &p4,p5_type &p5,p6_type &p6,p7_type &p7,p8_type &p8,p9_type &p9,p10_type &p10,p11_type &p11,p12_type &p12 ) { fn( p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12 ); } };

/// 13 param(s).


template <typename _Tp, typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7,typename P8,typename P9,typename P10,typename P11,typename P12,typename P13 > struct caller13 { typedef P1 p1_type;typedef P2 p2_type;typedef P3 p3_type;typedef P4 p4_type;typedef P5 p5_type;typedef P6 p6_type;typedef P7 p7_type;typedef P8 p8_type;typedef P9 p9_type;typedef P10 p10_type;typedef P11 p11_type;typedef P12 p12_type;typedef P13 p13_type; typedef _Tp result_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2,p3_type &p3,p4_type &p4,p5_type &p5,p6_type &p6,p7_type &p7,p8_type &p8,p9_type &p9,p10_type &p10,p11_type &p11,p12_type &p12,p13_type &p13 ) { result_type r = fn( p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13 ); lua::return_traits<result_type>::set_result( L, r );; } }; template <typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7,typename P8,typename P9,typename P10,typename P11,typename P12,typename P13> struct caller13<void, P1,P2,P3,P4,P5,P6,P7,P8,P9,P10,P11,P12,P13 > { typedef P1 p1_type;typedef P2 p2_type;typedef P3 p3_type;typedef P4 p4_type;typedef P5 p5_type;typedef P6 p6_type;typedef P7 p7_type;typedef P8 p8_type;typedef P9 p9_type;typedef P10 p10_type;typedef P11 p11_type;typedef P12 p12_type;typedef P13 p13_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2,p3_type &p3,p4_type &p4,p5_type &p5,p6_type &p6,p7_type &p7,p8_type &p8,p9_type &p9,p10_type &p10,p11_type &p11,p12_type &p12,p13_type &p13 ) { fn( p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13 ); } };

/// 14 param(s).


template <typename _Tp, typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7,typename P8,typename P9,typename P10,typename P11,typename P12,typename P13,typename P14 > struct caller14 { typedef P1 p1_type;typedef P2 p2_type;typedef P3 p3_type;typedef P4 p4_type;typedef P5 p5_type;typedef P6 p6_type;typedef P7 p7_type;typedef P8 p8_type;typedef P9 p9_type;typedef P10 p10_type;typedef P11 p11_type;typedef P12 p12_type;typedef P13 p13_type;typedef P14 p14_type; typedef _Tp result_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2,p3_type &p3,p4_type &p4,p5_type &p5,p6_type &p6,p7_type &p7,p8_type &p8,p9_type &p9,p10_type &p10,p11_type &p11,p12_type &p12,p13_type &p13,p14_type &p14 ) { result_type r = fn( p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14 ); lua::return_traits<result_type>::set_result( L, r );; } }; template <typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7,typename P8,typename P9,typename P10,typename P11,typename P12,typename P13,typename P14> struct caller14<void, P1,P2,P3,P4,P5,P6,P7,P8,P9,P10,P11,P12,P13,P14 > { typedef P1 p1_type;typedef P2 p2_type;typedef P3 p3_type;typedef P4 p4_type;typedef P5 p5_type;typedef P6 p6_type;typedef P7 p7_type;typedef P8 p8_type;typedef P9 p9_type;typedef P10 p10_type;typedef P11 p11_type;typedef P12 p12_type;typedef P13 p13_type;typedef P14 p14_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2,p3_type &p3,p4_type &p4,p5_type &p5,p6_type &p6,p7_type &p7,p8_type &p8,p9_type &p9,p10_type &p10,p11_type &p11,p12_type &p12,p13_type &p13,p14_type &p14 ) { fn( p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14 ); } };

/// 15 param(s).


template <typename _Tp, typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7,typename P8,typename P9,typename P10,typename P11,typename P12,typename P13,typename P14,typename P15 > struct caller15 { typedef P1 p1_type;typedef P2 p2_type;typedef P3 p3_type;typedef P4 p4_type;typedef P5 p5_type;typedef P6 p6_type;typedef P7 p7_type;typedef P8 p8_type;typedef P9 p9_type;typedef P10 p10_type;typedef P11 p11_type;typedef P12 p12_type;typedef P13 p13_type;typedef P14 p14_type;typedef P15 p15_type; typedef _Tp result_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2,p3_type &p3,p4_type &p4,p5_type &p5,p6_type &p6,p7_type &p7,p8_type &p8,p9_type &p9,p10_type &p10,p11_type &p11,p12_type &p12,p13_type &p13,p14_type &p14,p15_type &p15 ) { result_type r = fn( p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15 ); lua::return_traits<result_type>::set_result( L, r );; } }; template <typename P1,typename P2,typename P3,typename P4,typename P5,typename P6,typename P7,typename P8,typename P9,typename P10,typename P11,typename P12,typename P13,typename P14,typename P15> struct caller15<void, P1,P2,P3,P4,P5,P6,P7,P8,P9,P10,P11,P12,P13,P14,P15 > { typedef P1 p1_type;typedef P2 p2_type;typedef P3 p3_type;typedef P4 p4_type;typedef P5 p5_type;typedef P6 p6_type;typedef P7 p7_type;typedef P8 p8_type;typedef P9 p9_type;typedef P10 p10_type;typedef P11 p11_type;typedef P12 p12_type;typedef P13 p13_type;typedef P14 p14_type;typedef P15 p15_type; template <typename _Func> static void call( _Func &fn, lua_State *L, p1_type &p1,p2_type &p2,p3_type &p3,p4_type &p4,p5_type &p5,p6_type &p6,p7_type &p7,p8_type &p8,p9_type &p9,p10_type &p10,p11_type &p11,p12_type &p12,p13_type &p13,p14_type &p14,p15_type &p15 ) { fn( p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15 ); } };

