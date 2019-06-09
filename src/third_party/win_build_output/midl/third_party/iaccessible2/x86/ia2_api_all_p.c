

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.xx.xxxx */
/* at a redacted point in time
 */
/* Compiler settings for ../../third_party/iaccessible2/ia2_api_all.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.xx.xxxx 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "ia2_api_all.h"

#define TYPE_FORMAT_STRING_SIZE   1589                              
#define PROC_FORMAT_STRING_SIZE   5281                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   3            

typedef struct _ia2_api_all_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ia2_api_all_MIDL_TYPE_FORMAT_STRING;

typedef struct _ia2_api_all_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ia2_api_all_MIDL_PROC_FORMAT_STRING;

typedef struct _ia2_api_all_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ia2_api_all_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const ia2_api_all_MIDL_TYPE_FORMAT_STRING ia2_api_all__MIDL_TypeFormatString;
extern const ia2_api_all_MIDL_PROC_FORMAT_STRING ia2_api_all__MIDL_ProcFormatString;
extern const ia2_api_all_MIDL_EXPR_FORMAT_STRING ia2_api_all__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleRelation_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleRelation_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleAction_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleAction_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessible2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessible2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessible2_2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessible2_2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessible2_3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessible2_3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessible2_4_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessible2_4_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleComponent_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleComponent_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleValue_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleValue_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleText_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleText_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleText2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleText2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleEditableText_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleEditableText_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleHyperlink_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleHyperlink_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleHypertext_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleHypertext_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleHypertext2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleHypertext2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleTable_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleTable_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleTable2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleTable2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleTableCell_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleTableCell_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleImage_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleImage_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleApplication_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleApplication_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleDocument_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleDocument_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const ia2_api_all_MIDL_PROC_FORMAT_STRING ia2_api_all__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure get_appName */


	/* Procedure get_description */


	/* Procedure get_relationType */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 18 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */


	/* Parameter description */


	/* Parameter relationType */

/* 24 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_appVersion */


	/* Procedure get_localizedRelationType */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x4 ),	/* 4 */
/* 44 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 46 */	NdrFcShort( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 52 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 54 */	NdrFcShort( 0x1 ),	/* 1 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter version */


	/* Parameter localizedRelationType */

/* 60 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 62 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 64 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */

/* 66 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 68 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnIndex */


	/* Procedure get_caretOffset */


	/* Procedure get_background */


	/* Procedure get_nTargets */

/* 72 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 74 */	NdrFcLong( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x5 ),	/* 5 */
/* 80 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x24 ),	/* 36 */
/* 86 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 88 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 90 */	NdrFcShort( 0x0 ),	/* 0 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter columnIndex */


	/* Parameter offset */


	/* Parameter background */


	/* Parameter nTargets */

/* 96 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 98 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_target */

/* 108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0x6 ),	/* 6 */
/* 116 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 122 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 124 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter targetIndex */

/* 132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter target */

/* 138 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 140 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 142 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 146 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_targets */

/* 150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x7 ),	/* 7 */
/* 158 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 160 */	NdrFcShort( 0x8 ),	/* 8 */
/* 162 */	NdrFcShort( 0x24 ),	/* 36 */
/* 164 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 166 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 168 */	NdrFcShort( 0x1 ),	/* 1 */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter maxTargets */

/* 174 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 176 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter targets */

/* 180 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 182 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 184 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter nTargets */

/* 186 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 192 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 194 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnExtent */


	/* Procedure nActions */

/* 198 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 200 */	NdrFcLong( 0x0 ),	/* 0 */
/* 204 */	NdrFcShort( 0x3 ),	/* 3 */
/* 206 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x24 ),	/* 36 */
/* 212 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 214 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nColumnsSpanned */


	/* Parameter nActions */

/* 222 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 224 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 230 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure doAction */

/* 234 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 240 */	NdrFcShort( 0x4 ),	/* 4 */
/* 242 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 244 */	NdrFcShort( 0x8 ),	/* 8 */
/* 246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 248 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 250 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter actionIndex */

/* 258 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 260 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 266 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnDescription */


	/* Procedure get_description */

/* 270 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0x5 ),	/* 5 */
/* 278 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 280 */	NdrFcShort( 0x8 ),	/* 8 */
/* 282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 284 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 286 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 288 */	NdrFcShort( 0x1 ),	/* 1 */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter column */


	/* Parameter actionIndex */

/* 294 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 296 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter description */


	/* Parameter description */

/* 300 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 302 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 304 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */

/* 306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 308 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_keyBinding */

/* 312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x6 ),	/* 6 */
/* 320 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 322 */	NdrFcShort( 0x10 ),	/* 16 */
/* 324 */	NdrFcShort( 0x24 ),	/* 36 */
/* 326 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 328 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 330 */	NdrFcShort( 0x1 ),	/* 1 */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter actionIndex */

/* 336 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 338 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nMaxBindings */

/* 342 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 344 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter keyBindings */

/* 348 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 350 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 352 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */

	/* Parameter nBindings */

/* 354 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 356 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 362 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_name */

/* 366 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x7 ),	/* 7 */
/* 374 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 376 */	NdrFcShort( 0x8 ),	/* 8 */
/* 378 */	NdrFcShort( 0x8 ),	/* 8 */
/* 380 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 382 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 384 */	NdrFcShort( 0x1 ),	/* 1 */
/* 386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter actionIndex */

/* 390 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 392 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 396 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 398 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 400 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 404 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_localizedName */

/* 408 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0x8 ),	/* 8 */
/* 416 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 418 */	NdrFcShort( 0x8 ),	/* 8 */
/* 420 */	NdrFcShort( 0x8 ),	/* 8 */
/* 422 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 424 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 426 */	NdrFcShort( 0x1 ),	/* 1 */
/* 428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter actionIndex */

/* 432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 434 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter localizedName */

/* 438 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 440 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 442 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 446 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nRelations */

/* 450 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 456 */	NdrFcShort( 0x1c ),	/* 28 */
/* 458 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x24 ),	/* 36 */
/* 464 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 466 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nRelations */

/* 474 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 476 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 482 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_relation */

/* 486 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 492 */	NdrFcShort( 0x1d ),	/* 29 */
/* 494 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 496 */	NdrFcShort( 0x8 ),	/* 8 */
/* 498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 500 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 502 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter relationIndex */

/* 510 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 512 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter relation */

/* 516 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 518 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 520 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Return value */

/* 522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 524 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_relations */

/* 528 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 534 */	NdrFcShort( 0x1e ),	/* 30 */
/* 536 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 538 */	NdrFcShort( 0x8 ),	/* 8 */
/* 540 */	NdrFcShort( 0x24 ),	/* 36 */
/* 542 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 544 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 546 */	NdrFcShort( 0x1 ),	/* 1 */
/* 548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 550 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter maxRelations */

/* 552 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 554 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter relations */

/* 558 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 560 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 562 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Parameter nRelations */

/* 564 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 566 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 572 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure role */

/* 576 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x1f ),	/* 31 */
/* 584 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0x24 ),	/* 36 */
/* 590 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 592 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter role */

/* 600 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 602 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 608 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure scrollTo */

/* 612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x20 ),	/* 32 */
/* 620 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 622 */	NdrFcShort( 0x6 ),	/* 6 */
/* 624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 626 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 628 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter scrollType */

/* 636 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 638 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 640 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 644 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure scrollToPoint */

/* 648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x21 ),	/* 33 */
/* 656 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 658 */	NdrFcShort( 0x16 ),	/* 22 */
/* 660 */	NdrFcShort( 0x8 ),	/* 8 */
/* 662 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 664 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter coordinateType */

/* 672 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 676 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter x */

/* 678 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 680 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 684 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 686 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 692 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_groupPosition */

/* 696 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0x22 ),	/* 34 */
/* 704 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 708 */	NdrFcShort( 0x5c ),	/* 92 */
/* 710 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 712 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter groupLevel */

/* 720 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 722 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter similarItemsInGroup */

/* 726 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 728 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter positionInGroup */

/* 732 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 734 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 740 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_states */

/* 744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x23 ),	/* 35 */
/* 752 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 756 */	NdrFcShort( 0x24 ),	/* 36 */
/* 758 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 760 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter states */

/* 768 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 770 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 774 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 776 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_extendedRole */

/* 780 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 786 */	NdrFcShort( 0x24 ),	/* 36 */
/* 788 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 792 */	NdrFcShort( 0x8 ),	/* 8 */
/* 794 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 796 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 798 */	NdrFcShort( 0x1 ),	/* 1 */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter extendedRole */

/* 804 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 806 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 808 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 810 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 812 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_localizedExtendedRole */

/* 816 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 818 */	NdrFcLong( 0x0 ),	/* 0 */
/* 822 */	NdrFcShort( 0x25 ),	/* 37 */
/* 824 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 828 */	NdrFcShort( 0x8 ),	/* 8 */
/* 830 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 832 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 834 */	NdrFcShort( 0x1 ),	/* 1 */
/* 836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter localizedExtendedRole */

/* 840 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 842 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 844 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 846 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 848 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nExtendedStates */

/* 852 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 854 */	NdrFcLong( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x26 ),	/* 38 */
/* 860 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 864 */	NdrFcShort( 0x24 ),	/* 36 */
/* 866 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 868 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 874 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nExtendedStates */

/* 876 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 878 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 882 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 884 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_extendedStates */

/* 888 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 890 */	NdrFcLong( 0x0 ),	/* 0 */
/* 894 */	NdrFcShort( 0x27 ),	/* 39 */
/* 896 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 898 */	NdrFcShort( 0x8 ),	/* 8 */
/* 900 */	NdrFcShort( 0x24 ),	/* 36 */
/* 902 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 904 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 906 */	NdrFcShort( 0x1 ),	/* 1 */
/* 908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 910 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter maxExtendedStates */

/* 912 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 914 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter extendedStates */

/* 918 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 920 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 922 */	NdrFcShort( 0xac ),	/* Type Offset=172 */

	/* Parameter nExtendedStates */

/* 924 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 926 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 930 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 932 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_localizedExtendedStates */

/* 936 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 938 */	NdrFcLong( 0x0 ),	/* 0 */
/* 942 */	NdrFcShort( 0x28 ),	/* 40 */
/* 944 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 946 */	NdrFcShort( 0x8 ),	/* 8 */
/* 948 */	NdrFcShort( 0x24 ),	/* 36 */
/* 950 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 952 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 954 */	NdrFcShort( 0x1 ),	/* 1 */
/* 956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 958 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter maxLocalizedExtendedStates */

/* 960 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 962 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter localizedExtendedStates */

/* 966 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 968 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 970 */	NdrFcShort( 0xac ),	/* Type Offset=172 */

	/* Parameter nLocalizedExtendedStates */

/* 972 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 974 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 980 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_uniqueID */

/* 984 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 990 */	NdrFcShort( 0x29 ),	/* 41 */
/* 992 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 996 */	NdrFcShort( 0x24 ),	/* 36 */
/* 998 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1000 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter uniqueID */

/* 1008 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1010 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1014 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1016 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_windowHandle */

/* 1020 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1026 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1028 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1032 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1034 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1036 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1038 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1042 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter windowHandle */

/* 1044 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1046 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1048 */	NdrFcShort( 0xe6 ),	/* Type Offset=230 */

	/* Return value */

/* 1050 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1052 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_indexInParent */

/* 1056 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1058 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1062 */	NdrFcShort( 0x2b ),	/* 43 */
/* 1064 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1068 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1070 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1072 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1078 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter indexInParent */

/* 1080 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1082 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1086 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1088 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_locale */

/* 1092 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1098 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1100 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1106 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1108 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1110 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter locale */

/* 1116 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1118 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1120 */	NdrFcShort( 0xf4 ),	/* Type Offset=244 */

	/* Return value */

/* 1122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1124 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_attributes */

/* 1128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1134 */	NdrFcShort( 0x2d ),	/* 45 */
/* 1136 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1142 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1144 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1146 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter attributes */

/* 1152 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1154 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1156 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 1158 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1160 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_attribute */

/* 1164 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1170 */	NdrFcShort( 0x2e ),	/* 46 */
/* 1172 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1176 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1178 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1180 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1182 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1184 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1186 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 1188 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1190 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1192 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter attribute */

/* 1194 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1196 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1198 */	NdrFcShort( 0x4ee ),	/* Type Offset=1262 */

	/* Return value */

/* 1200 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1202 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_accessibleWithCaret */

/* 1206 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1208 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1212 */	NdrFcShort( 0x2f ),	/* 47 */
/* 1214 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1218 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1220 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1222 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1228 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter accessible */

/* 1230 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1232 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1234 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter caretOffset */

/* 1236 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1238 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1242 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1244 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_relationTargetsOfType */

/* 1248 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1254 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1256 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1260 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1262 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1264 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1266 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1268 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1270 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 1272 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1274 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1276 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter maxTargets */

/* 1278 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1280 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter targets */

/* 1284 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1286 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1288 */	NdrFcShort( 0x4f8 ),	/* Type Offset=1272 */

	/* Parameter nTargets */

/* 1290 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1292 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1296 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1298 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selectionRanges */

/* 1302 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1308 */	NdrFcShort( 0x31 ),	/* 49 */
/* 1310 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1314 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1316 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1318 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1320 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1324 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ranges */

/* 1326 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1328 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1330 */	NdrFcShort( 0x516 ),	/* Type Offset=1302 */

	/* Parameter nRanges */

/* 1332 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1334 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1340 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSelectionRanges */

/* 1344 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1350 */	NdrFcShort( 0x32 ),	/* 50 */
/* 1352 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1356 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1358 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1360 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1364 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nRanges */

/* 1368 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1370 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ranges */

/* 1374 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1376 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1378 */	NdrFcShort( 0x54c ),	/* Type Offset=1356 */

	/* Return value */

/* 1380 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1382 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_locationInParent */

/* 1386 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1392 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1394 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1398 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1400 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1402 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1408 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x */

/* 1410 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1412 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 1416 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1418 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1422 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1424 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_foreground */

/* 1428 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1430 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1434 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1436 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1440 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1442 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1444 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1450 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter foreground */

/* 1452 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1454 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1458 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1460 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_currentValue */

/* 1464 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1466 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1470 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1472 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1476 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1478 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1480 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1482 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1486 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter currentValue */

/* 1488 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1490 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1492 */	NdrFcShort( 0x4ee ),	/* Type Offset=1262 */

	/* Return value */

/* 1494 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1496 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setCurrentValue */

/* 1500 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1506 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1508 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1512 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1514 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1516 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1520 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1522 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 1524 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1526 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1528 */	NdrFcShort( 0x566 ),	/* Type Offset=1382 */

	/* Return value */

/* 1530 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1532 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_maximumValue */

/* 1536 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1538 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1542 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1544 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1548 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1550 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1552 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1554 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1558 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter maximumValue */

/* 1560 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1562 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1564 */	NdrFcShort( 0x4ee ),	/* Type Offset=1262 */

	/* Return value */

/* 1566 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1568 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_minimumValue */

/* 1572 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1574 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1578 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1580 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1584 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1586 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1588 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1590 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1594 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter minimumValue */

/* 1596 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1598 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1600 */	NdrFcShort( 0x4ee ),	/* Type Offset=1262 */

	/* Return value */

/* 1602 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1604 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure copyText */


	/* Procedure addSelection */

/* 1608 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1610 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1614 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1616 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1618 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1620 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1622 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1624 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1630 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter startOffset */


	/* Parameter startOffset */

/* 1632 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1634 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */


	/* Parameter endOffset */

/* 1638 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1640 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1644 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1646 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_attributes */

/* 1650 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1652 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1656 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1658 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1660 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1662 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1664 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1666 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1668 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1672 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter offset */

/* 1674 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1676 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 1680 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1682 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1684 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 1686 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1688 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter textAttributes */

/* 1692 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1694 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1696 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 1698 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1700 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_characterExtents */

/* 1704 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1710 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1712 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1714 */	NdrFcShort( 0xe ),	/* 14 */
/* 1716 */	NdrFcShort( 0x78 ),	/* 120 */
/* 1718 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 1720 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1726 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter offset */

/* 1728 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1730 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter coordType */

/* 1734 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1736 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1738 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter x */

/* 1740 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1742 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 1746 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1748 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter width */

/* 1752 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1754 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter height */

/* 1758 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1760 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1764 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1766 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nRows */


	/* Procedure get_nSelections */

/* 1770 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1772 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1776 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1778 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1782 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1784 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1786 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1792 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rowCount */


	/* Parameter nSelections */

/* 1794 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1796 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1800 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1802 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_offsetAtPoint */

/* 1806 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1808 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1812 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1814 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1816 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1818 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1820 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 1822 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1828 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x */

/* 1830 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1832 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 1836 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1838 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter coordType */

/* 1842 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1844 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1846 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter offset */

/* 1848 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1850 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1854 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1856 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selection */

/* 1860 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1866 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1868 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1872 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1874 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1876 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1882 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter selectionIndex */

/* 1884 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1886 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 1890 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1892 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 1896 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1898 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1902 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1904 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_text */

/* 1908 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1914 */	NdrFcShort( 0xa ),	/* 10 */
/* 1916 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1918 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1920 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1922 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1924 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1926 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1930 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter startOffset */

/* 1932 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1934 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 1938 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1940 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter text */

/* 1944 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1946 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1948 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 1950 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1952 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_textBeforeOffset */

/* 1956 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1958 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1962 */	NdrFcShort( 0xb ),	/* 11 */
/* 1964 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1966 */	NdrFcShort( 0xe ),	/* 14 */
/* 1968 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1970 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 1972 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1974 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1978 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter offset */

/* 1980 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1982 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter boundaryType */

/* 1986 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1988 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1990 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 1992 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1994 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 1998 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2000 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter text */

/* 2004 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2006 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2008 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 2010 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2012 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_textAfterOffset */

/* 2016 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2018 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2022 */	NdrFcShort( 0xc ),	/* 12 */
/* 2024 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2026 */	NdrFcShort( 0xe ),	/* 14 */
/* 2028 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2030 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 2032 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2034 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2038 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter offset */

/* 2040 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2042 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter boundaryType */

/* 2046 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2048 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2050 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 2052 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2054 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2058 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2060 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter text */

/* 2064 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2066 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2068 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 2070 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2072 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_textAtOffset */

/* 2076 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2082 */	NdrFcShort( 0xd ),	/* 13 */
/* 2084 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2086 */	NdrFcShort( 0xe ),	/* 14 */
/* 2088 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2090 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 2092 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2094 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2098 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter offset */

/* 2100 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2102 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter boundaryType */

/* 2106 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2108 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2110 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 2112 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2114 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2118 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2120 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter text */

/* 2124 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2126 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2128 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 2130 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2132 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeSelection */

/* 2136 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2138 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2142 */	NdrFcShort( 0xe ),	/* 14 */
/* 2144 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2146 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2148 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2150 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2152 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2158 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter selectionIndex */

/* 2160 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2162 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2166 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2168 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setCaretOffset */

/* 2172 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2174 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2178 */	NdrFcShort( 0xf ),	/* 15 */
/* 2180 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2182 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2184 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2186 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2188 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2194 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter offset */

/* 2196 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2198 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2202 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2204 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSelection */

/* 2208 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2210 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2214 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2216 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2218 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2220 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2222 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 2224 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2230 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter selectionIndex */

/* 2232 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2234 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 2238 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2240 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2244 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2246 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2250 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2252 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nCharacters */

/* 2256 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2258 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2262 */	NdrFcShort( 0x11 ),	/* 17 */
/* 2264 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2268 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2270 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2272 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2278 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nCharacters */

/* 2280 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2282 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2284 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2286 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2288 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2290 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure scrollSubstringTo */

/* 2292 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2294 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2298 */	NdrFcShort( 0x12 ),	/* 18 */
/* 2300 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2302 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2304 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2306 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 2308 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2314 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter startIndex */

/* 2316 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2318 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endIndex */

/* 2322 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2324 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter scrollType */

/* 2328 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2330 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2332 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 2334 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2336 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure scrollSubstringToPoint */

/* 2340 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2346 */	NdrFcShort( 0x13 ),	/* 19 */
/* 2348 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2350 */	NdrFcShort( 0x26 ),	/* 38 */
/* 2352 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2354 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 2356 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2362 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter startIndex */

/* 2364 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2366 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endIndex */

/* 2370 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2372 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter coordinateType */

/* 2376 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2378 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2380 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter x */

/* 2382 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2384 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 2388 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2390 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2394 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2396 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_newText */

/* 2400 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2406 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2408 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2412 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2414 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2416 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2418 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2422 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newText */

/* 2424 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2426 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2428 */	NdrFcShort( 0x574 ),	/* Type Offset=1396 */

	/* Return value */

/* 2430 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2432 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_oldText */

/* 2436 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2438 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2442 */	NdrFcShort( 0x15 ),	/* 21 */
/* 2444 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2448 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2450 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2452 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2454 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2458 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter oldText */

/* 2460 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2462 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2464 */	NdrFcShort( 0x574 ),	/* Type Offset=1396 */

	/* Return value */

/* 2466 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2468 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_attributeRange */

/* 2472 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2474 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2478 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2480 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2482 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2484 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2486 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2488 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2490 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2492 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2494 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter offset */

/* 2496 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2498 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter filter */

/* 2502 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2504 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2506 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter startOffset */

/* 2508 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2510 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2512 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2514 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2516 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter attributeValues */

/* 2520 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2522 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2524 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 2526 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2528 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure deleteText */

/* 2532 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2534 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2538 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2540 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2542 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2544 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2546 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2548 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2554 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter startOffset */

/* 2556 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2558 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2562 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2564 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2568 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2570 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure insertText */

/* 2574 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2580 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2582 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2584 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2586 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2588 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2590 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2594 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2596 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter offset */

/* 2598 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2600 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter text */

/* 2604 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2606 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2608 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Return value */

/* 2610 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2612 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure cutText */

/* 2616 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2622 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2624 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2626 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2628 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2630 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2632 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2638 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter startOffset */

/* 2640 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2642 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2644 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2646 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2648 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2652 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2654 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure pasteText */

/* 2658 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2660 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2664 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2666 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2668 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2670 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2672 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2674 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2680 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter offset */

/* 2682 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2684 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2688 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2690 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure replaceText */

/* 2694 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2696 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2700 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2702 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2704 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2706 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2708 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2710 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2714 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2716 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter startOffset */

/* 2718 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2720 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2724 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2726 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter text */

/* 2730 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2732 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2734 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Return value */

/* 2736 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2738 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2740 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setAttributes */

/* 2742 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2744 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2748 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2750 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2752 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2754 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2756 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2758 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2762 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2764 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter startOffset */

/* 2766 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2768 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2772 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2774 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter attributes */

/* 2778 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2780 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2782 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Return value */

/* 2784 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2786 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_anchor */

/* 2790 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2796 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2798 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2800 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2802 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2804 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2806 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2808 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2812 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 2814 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2816 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter anchor */

/* 2820 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2822 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2824 */	NdrFcShort( 0x4ee ),	/* Type Offset=1262 */

	/* Return value */

/* 2826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2828 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_anchorTarget */

/* 2832 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2838 */	NdrFcShort( 0xa ),	/* 10 */
/* 2840 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2842 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2846 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2848 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2850 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2854 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 2856 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2858 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2860 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter anchorTarget */

/* 2862 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2864 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2866 */	NdrFcShort( 0x4ee ),	/* Type Offset=1262 */

	/* Return value */

/* 2868 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2870 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nRows */


	/* Procedure get_startIndex */

/* 2874 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2880 */	NdrFcShort( 0xb ),	/* 11 */
/* 2882 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2886 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2888 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2890 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2896 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rowCount */


	/* Parameter index */

/* 2898 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2900 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2904 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2906 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nSelectedChildren */


	/* Procedure get_endIndex */

/* 2910 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2912 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2916 */	NdrFcShort( 0xc ),	/* 12 */
/* 2918 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2922 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2924 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2926 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2932 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cellCount */


	/* Parameter index */

/* 2934 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2936 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2940 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2942 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_valid */

/* 2946 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2948 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2952 */	NdrFcShort( 0xd ),	/* 13 */
/* 2954 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2958 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2960 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2962 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2968 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter valid */

/* 2970 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2972 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2974 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2976 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2978 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nHyperlinks */

/* 2982 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2984 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2988 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2990 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2994 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2996 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2998 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3004 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hyperlinkCount */

/* 3006 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3008 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3012 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3014 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_hyperlink */

/* 3018 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3020 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3024 */	NdrFcShort( 0x17 ),	/* 23 */
/* 3026 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3028 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3030 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3032 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3034 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3040 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 3042 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3044 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hyperlink */

/* 3048 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3050 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3052 */	NdrFcShort( 0x58c ),	/* Type Offset=1420 */

	/* Return value */

/* 3054 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3056 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_hyperlinkIndex */

/* 3060 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3062 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3066 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3068 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3070 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3072 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3074 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3076 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3082 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter charIndex */

/* 3084 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3086 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hyperlinkIndex */

/* 3090 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3092 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3096 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3098 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_hyperlinks */

/* 3102 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3108 */	NdrFcShort( 0x19 ),	/* 25 */
/* 3110 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3114 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3116 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3118 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3120 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hyperlinks */

/* 3126 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3128 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3130 */	NdrFcShort( 0x5a2 ),	/* Type Offset=1442 */

	/* Parameter nHyperlinks */

/* 3132 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3134 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3140 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_cellAt */


	/* Procedure get_accessibleAt */

/* 3144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3150 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3152 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3154 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3158 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 3160 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter row */


	/* Parameter row */

/* 3168 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter column */


	/* Parameter column */

/* 3174 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3176 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cell */


	/* Parameter accessible */

/* 3180 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3182 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3184 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 3186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3188 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_caption */


	/* Procedure get_caption */

/* 3192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3198 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3200 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3206 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3208 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter accessible */


	/* Parameter accessible */

/* 3216 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3220 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 3222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3224 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_childIndex */

/* 3228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3234 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3236 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3238 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3240 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3242 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3244 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rowIndex */

/* 3252 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3254 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter columnIndex */

/* 3258 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3260 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cellIndex */

/* 3264 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3266 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3272 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnDescription */

/* 3276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3282 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3284 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3286 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3288 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3290 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3292 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3294 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter column */

/* 3300 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3302 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter description */

/* 3306 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3308 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3310 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 3312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3314 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnExtentAt */

/* 3318 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3324 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3326 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3328 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3330 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3332 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3334 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter row */

/* 3342 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3344 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter column */

/* 3348 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3350 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nColumnsSpanned */

/* 3354 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3356 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3362 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnHeader */

/* 3366 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3374 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3378 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3380 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3382 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter accessibleTable */

/* 3390 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3392 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3394 */	NdrFcShort( 0x5c0 ),	/* Type Offset=1472 */

	/* Parameter startingRowIndex */

/* 3396 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3398 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3404 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnIndex */

/* 3408 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3414 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3416 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3418 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3420 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3422 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3424 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cellIndex */

/* 3432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3434 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter columnIndex */

/* 3438 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3440 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3446 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nSelectedRows */


	/* Procedure get_nColumns */

/* 3450 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3456 */	NdrFcShort( 0xa ),	/* 10 */
/* 3458 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3462 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3464 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3466 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rowCount */


	/* Parameter columnCount */

/* 3474 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3476 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3482 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nSelectedColumns */

/* 3486 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3492 */	NdrFcShort( 0xd ),	/* 13 */
/* 3494 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3498 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3500 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3502 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter columnCount */

/* 3510 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3512 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3516 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3518 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nSelectedRows */

/* 3522 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3528 */	NdrFcShort( 0xe ),	/* 14 */
/* 3530 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3534 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3536 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3538 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3544 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rowCount */

/* 3546 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3548 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3552 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3554 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowDescription */

/* 3558 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3564 */	NdrFcShort( 0xf ),	/* 15 */
/* 3566 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3568 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3570 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3572 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3574 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3576 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3580 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter row */

/* 3582 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3584 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter description */

/* 3588 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3590 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3592 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 3594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3596 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowExtentAt */

/* 3600 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3606 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3608 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3610 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3612 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3614 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3616 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter row */

/* 3624 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3626 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter column */

/* 3630 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3632 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nRowsSpanned */

/* 3636 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3638 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3644 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowHeader */

/* 3648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3654 */	NdrFcShort( 0x11 ),	/* 17 */
/* 3656 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3660 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3662 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3664 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter accessibleTable */

/* 3672 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3676 */	NdrFcShort( 0x5c0 ),	/* Type Offset=1472 */

	/* Parameter startingColumnIndex */

/* 3678 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3680 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3684 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3686 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowIndex */

/* 3690 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3696 */	NdrFcShort( 0x12 ),	/* 18 */
/* 3698 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3700 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3702 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3704 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3706 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3712 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cellIndex */

/* 3714 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3716 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rowIndex */

/* 3720 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3722 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3726 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3728 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selectedChildren */

/* 3732 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3738 */	NdrFcShort( 0x13 ),	/* 19 */
/* 3740 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3742 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3744 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3746 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 3748 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3750 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3754 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter maxChildren */

/* 3756 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3758 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter children */

/* 3762 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3764 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3766 */	NdrFcShort( 0x5d6 ),	/* Type Offset=1494 */

	/* Parameter nChildren */

/* 3768 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3770 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3774 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3776 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selectedColumns */

/* 3780 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3786 */	NdrFcShort( 0x14 ),	/* 20 */
/* 3788 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3790 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3792 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3794 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 3796 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3798 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3802 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter maxColumns */

/* 3804 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3806 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter columns */

/* 3810 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3812 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3814 */	NdrFcShort( 0x5d6 ),	/* Type Offset=1494 */

	/* Parameter nColumns */

/* 3816 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3818 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3824 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selectedRows */

/* 3828 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3834 */	NdrFcShort( 0x15 ),	/* 21 */
/* 3836 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3838 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3840 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3842 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 3844 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3846 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3850 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter maxRows */

/* 3852 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3854 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rows */

/* 3858 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3860 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3862 */	NdrFcShort( 0x5d6 ),	/* Type Offset=1494 */

	/* Parameter nRows */

/* 3864 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3866 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3870 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3872 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_summary */

/* 3876 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3882 */	NdrFcShort( 0x16 ),	/* 22 */
/* 3884 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3888 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3890 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3892 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3898 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter accessible */

/* 3900 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3902 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3904 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 3906 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3908 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isColumnSelected */

/* 3912 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3914 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3918 */	NdrFcShort( 0x17 ),	/* 23 */
/* 3920 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3924 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3926 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3928 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3934 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter column */

/* 3936 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3938 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 3942 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3944 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3946 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3948 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3950 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isRowSelected */

/* 3954 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3956 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3960 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3962 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3964 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3966 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3968 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3970 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3976 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter row */

/* 3978 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3980 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 3984 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3986 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3988 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3990 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3992 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isSelected */

/* 3996 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3998 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4002 */	NdrFcShort( 0x19 ),	/* 25 */
/* 4004 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4006 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4008 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4010 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 4012 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4018 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter row */

/* 4020 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4022 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter column */

/* 4026 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4028 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 4032 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4034 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4036 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4038 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4040 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure selectRow */

/* 4044 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4046 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4050 */	NdrFcShort( 0x1a ),	/* 26 */
/* 4052 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4054 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4056 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4058 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4060 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4066 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter row */

/* 4068 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4070 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4074 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4076 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure selectColumn */

/* 4080 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4086 */	NdrFcShort( 0x1b ),	/* 27 */
/* 4088 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4090 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4092 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4094 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4096 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4102 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter column */

/* 4104 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4106 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4110 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4112 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unselectRow */

/* 4116 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4118 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4122 */	NdrFcShort( 0x1c ),	/* 28 */
/* 4124 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4126 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4128 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4130 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4132 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4138 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter row */

/* 4140 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4142 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4146 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4148 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unselectColumn */

/* 4152 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4154 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4158 */	NdrFcShort( 0x1d ),	/* 29 */
/* 4160 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4164 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4166 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4168 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4174 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter column */

/* 4176 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4178 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4184 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowColumnExtentsAtIndex */

/* 4188 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4194 */	NdrFcShort( 0x1e ),	/* 30 */
/* 4196 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4200 */	NdrFcShort( 0x91 ),	/* 145 */
/* 4202 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 4204 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4210 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 4212 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4214 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter row */

/* 4218 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4220 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter column */

/* 4224 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4226 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rowExtents */

/* 4230 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4232 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter columnExtents */

/* 4236 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4238 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 4242 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4244 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4246 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4248 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4250 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_modelChange */

/* 4254 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4256 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4260 */	NdrFcShort( 0x1f ),	/* 31 */
/* 4262 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4266 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4268 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4270 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4276 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter modelChange */

/* 4278 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 4280 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4282 */	NdrFcShort( 0x5f4 ),	/* Type Offset=1524 */

	/* Return value */

/* 4284 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4286 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowExtent */


	/* Procedure get_nColumns */

/* 4290 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4296 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4298 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4302 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4304 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4306 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4312 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nRowsSpanned */


	/* Parameter columnCount */

/* 4314 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4316 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4320 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4322 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowIndex */


	/* Procedure get_nSelectedCells */

/* 4326 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4334 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4338 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4340 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4342 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4348 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rowIndex */


	/* Parameter cellCount */

/* 4350 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4352 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4356 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4358 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nSelectedColumns */

/* 4362 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4368 */	NdrFcShort( 0x9 ),	/* 9 */
/* 4370 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4374 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4376 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4378 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4384 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter columnCount */

/* 4386 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4388 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4392 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4394 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowDescription */

/* 4398 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4404 */	NdrFcShort( 0xb ),	/* 11 */
/* 4406 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4408 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4410 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4412 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4414 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4416 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4420 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter row */

/* 4422 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4424 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter description */

/* 4428 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4430 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4432 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 4434 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4436 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selectedCells */

/* 4440 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4446 */	NdrFcShort( 0xc ),	/* 12 */
/* 4448 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4452 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4454 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4456 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4458 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4462 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cells */

/* 4464 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 4466 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4468 */	NdrFcShort( 0x602 ),	/* Type Offset=1538 */

	/* Parameter nSelectedCells */

/* 4470 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4472 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4476 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4478 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selectedColumns */

/* 4482 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4488 */	NdrFcShort( 0xd ),	/* 13 */
/* 4490 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4494 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4496 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4498 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4500 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4504 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter selectedColumns */

/* 4506 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 4508 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4510 */	NdrFcShort( 0x620 ),	/* Type Offset=1568 */

	/* Parameter nColumns */

/* 4512 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4514 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4518 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4520 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selectedRows */

/* 4524 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4530 */	NdrFcShort( 0xe ),	/* 14 */
/* 4532 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4536 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4538 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4540 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4542 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4546 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter selectedRows */

/* 4548 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 4550 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4552 */	NdrFcShort( 0x620 ),	/* Type Offset=1568 */

	/* Parameter nRows */

/* 4554 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4556 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4560 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4562 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4564 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_summary */

/* 4566 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4568 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4572 */	NdrFcShort( 0xf ),	/* 15 */
/* 4574 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4578 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4580 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4582 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4588 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter accessible */

/* 4590 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4592 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4594 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 4596 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4598 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isColumnSelected */

/* 4602 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4608 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4610 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4612 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4614 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4616 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 4618 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4624 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter column */

/* 4626 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4628 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 4632 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4634 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4636 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4638 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4640 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isRowSelected */

/* 4644 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4650 */	NdrFcShort( 0x11 ),	/* 17 */
/* 4652 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4654 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4656 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4658 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 4660 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4666 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter row */

/* 4668 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4670 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 4674 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4676 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4678 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4680 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4682 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4684 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure selectRow */

/* 4686 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4688 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4692 */	NdrFcShort( 0x12 ),	/* 18 */
/* 4694 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4696 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4698 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4700 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4702 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4708 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter row */

/* 4710 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4712 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4716 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4718 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure selectColumn */

/* 4722 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4724 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4728 */	NdrFcShort( 0x13 ),	/* 19 */
/* 4730 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4732 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4734 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4736 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4738 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4744 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter column */

/* 4746 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4748 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4752 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4754 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unselectRow */

/* 4758 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4760 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4764 */	NdrFcShort( 0x14 ),	/* 20 */
/* 4766 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4770 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4772 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4774 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4780 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter row */

/* 4782 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4784 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4788 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4790 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unselectColumn */

/* 4794 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4800 */	NdrFcShort( 0x15 ),	/* 21 */
/* 4802 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4804 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4806 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4808 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4810 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4816 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter column */

/* 4818 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4820 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4824 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4826 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_modelChange */

/* 4830 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4832 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4836 */	NdrFcShort( 0x16 ),	/* 22 */
/* 4838 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4842 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4844 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4846 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter modelChange */

/* 4854 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 4856 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4858 */	NdrFcShort( 0x5f4 ),	/* Type Offset=1524 */

	/* Return value */

/* 4860 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4862 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnHeaderCells */

/* 4866 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4868 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4872 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4874 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4878 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4880 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4882 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4884 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4888 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cellAccessibles */

/* 4890 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 4892 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4894 */	NdrFcShort( 0x602 ),	/* Type Offset=1538 */

	/* Parameter nColumnHeaderCells */

/* 4896 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4898 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4902 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4904 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowHeaderCells */

/* 4908 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4914 */	NdrFcShort( 0x7 ),	/* 7 */
/* 4916 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4920 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4922 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4924 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4926 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4930 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cellAccessibles */

/* 4932 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 4934 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4936 */	NdrFcShort( 0x602 ),	/* Type Offset=1538 */

	/* Parameter nRowHeaderCells */

/* 4938 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4940 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4944 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4946 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4948 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isSelected */

/* 4950 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4952 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4956 */	NdrFcShort( 0x9 ),	/* 9 */
/* 4958 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4962 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4964 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4966 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4972 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter isSelected */

/* 4974 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4976 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4978 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4980 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4982 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowColumnExtents */

/* 4986 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4992 */	NdrFcShort( 0xa ),	/* 10 */
/* 4994 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4998 */	NdrFcShort( 0x91 ),	/* 145 */
/* 5000 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 5002 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5008 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter row */

/* 5010 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5012 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter column */

/* 5016 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5018 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rowExtents */

/* 5022 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5024 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter columnExtents */

/* 5028 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5030 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 5034 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5036 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5038 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5040 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5042 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_table */

/* 5046 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5048 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5052 */	NdrFcShort( 0xb ),	/* 11 */
/* 5054 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5058 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5060 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5062 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5068 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter table */

/* 5070 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5072 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5074 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 5076 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5078 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_imagePosition */

/* 5082 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5084 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5088 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5090 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5092 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5094 */	NdrFcShort( 0x40 ),	/* 64 */
/* 5096 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 5098 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5104 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter coordinateType */

/* 5106 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5108 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5110 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter x */

/* 5112 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5114 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 5118 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5120 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5124 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5126 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_imageSize */

/* 5130 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5132 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5136 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5138 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5142 */	NdrFcShort( 0x40 ),	/* 64 */
/* 5144 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5146 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5152 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter height */

/* 5154 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5156 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter width */

/* 5160 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5162 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5166 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5168 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_toolkitName */

/* 5172 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5174 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5178 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5180 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5184 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5186 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5188 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5190 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5194 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 5196 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5198 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5200 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 5202 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5204 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_toolkitVersion */

/* 5208 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5210 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5214 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5216 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5220 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5222 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5224 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5226 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5230 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter version */

/* 5232 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5234 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5236 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 5238 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5240 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_anchorTarget */

/* 5244 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5246 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5250 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5252 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5256 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5258 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5260 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5266 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter accessible */

/* 5268 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5270 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5272 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 5274 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5276 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ia2_api_all_MIDL_TYPE_FORMAT_STRING ia2_api_all__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  4 */	NdrFcShort( 0x1c ),	/* Offset= 28 (32) */
/*  6 */	
			0x13, 0x0,	/* FC_OP */
/*  8 */	NdrFcShort( 0xe ),	/* Offset= 14 (22) */
/* 10 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 12 */	NdrFcShort( 0x2 ),	/* 2 */
/* 14 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 16 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 18 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 20 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 22 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 24 */	NdrFcShort( 0x8 ),	/* 8 */
/* 26 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (10) */
/* 28 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 30 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 32 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0x4 ),	/* 4 */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0xffde ),	/* Offset= -34 (6) */
/* 42 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 44 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 46 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 48 */	NdrFcShort( 0x2 ),	/* Offset= 2 (50) */
/* 50 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 52 */	NdrFcLong( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 62 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 64 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 66 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 68 */	
			0x11, 0x0,	/* FC_RP */
/* 70 */	NdrFcShort( 0x2 ),	/* Offset= 2 (72) */
/* 72 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */
/* 76 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 78 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 80 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 82 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 84 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 86 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 88 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 90 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (50) */
/* 92 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 94 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 96 */	NdrFcShort( 0x2 ),	/* Offset= 2 (98) */
/* 98 */	
			0x13, 0x0,	/* FC_OP */
/* 100 */	NdrFcShort( 0x2 ),	/* Offset= 2 (102) */
/* 102 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 108 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 110 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 112 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 114 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 116 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 118 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 120 */	NdrFcShort( 0xffa8 ),	/* Offset= -88 (32) */
/* 122 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 124 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 126 */	NdrFcShort( 0x2 ),	/* Offset= 2 (128) */
/* 128 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 130 */	NdrFcLong( 0x7cdf86ee ),	/* 2095023854 */
/* 134 */	NdrFcShort( 0xc3da ),	/* -15398 */
/* 136 */	NdrFcShort( 0x496a ),	/* 18794 */
/* 138 */	0xbd,		/* 189 */
			0xa4,		/* 164 */
/* 140 */	0x28,		/* 40 */
			0x1b,		/* 27 */
/* 142 */	0x33,		/* 51 */
			0x6e,		/* 110 */
/* 144 */	0x1f,		/* 31 */
			0xdc,		/* 220 */
/* 146 */	
			0x11, 0x0,	/* FC_RP */
/* 148 */	NdrFcShort( 0x2 ),	/* Offset= 2 (150) */
/* 150 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 154 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 156 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 158 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 160 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 162 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 164 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 166 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 168 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (128) */
/* 170 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 172 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 174 */	NdrFcShort( 0x2 ),	/* Offset= 2 (176) */
/* 176 */	
			0x13, 0x0,	/* FC_OP */
/* 178 */	NdrFcShort( 0x2 ),	/* Offset= 2 (180) */
/* 180 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 184 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 186 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 188 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 190 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 192 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 194 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 196 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 198 */	NdrFcShort( 0xff5a ),	/* Offset= -166 (32) */
/* 200 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 202 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 204 */	NdrFcShort( 0x1a ),	/* Offset= 26 (230) */
/* 206 */	
			0x13, 0x0,	/* FC_OP */
/* 208 */	NdrFcShort( 0x2 ),	/* Offset= 2 (210) */
/* 210 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 212 */	NdrFcShort( 0x4 ),	/* 4 */
/* 214 */	NdrFcShort( 0x2 ),	/* 2 */
/* 216 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 220 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 222 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 226 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 228 */	NdrFcShort( 0xffff ),	/* Offset= -1 (227) */
/* 230 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 232 */	NdrFcShort( 0x1 ),	/* 1 */
/* 234 */	NdrFcShort( 0x4 ),	/* 4 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (206) */
/* 240 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 242 */	NdrFcShort( 0x2 ),	/* Offset= 2 (244) */
/* 244 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 246 */	NdrFcShort( 0xc ),	/* 12 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* Offset= 0 (250) */
/* 252 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 254 */	NdrFcShort( 0xff22 ),	/* Offset= -222 (32) */
/* 256 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 258 */	NdrFcShort( 0xff1e ),	/* Offset= -226 (32) */
/* 260 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 262 */	NdrFcShort( 0xff1a ),	/* Offset= -230 (32) */
/* 264 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 266 */	
			0x12, 0x0,	/* FC_UP */
/* 268 */	NdrFcShort( 0xff0a ),	/* Offset= -246 (22) */
/* 270 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 274 */	NdrFcShort( 0x4 ),	/* 4 */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (266) */
/* 280 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 282 */	NdrFcShort( 0x3d4 ),	/* Offset= 980 (1262) */
/* 284 */	
			0x13, 0x0,	/* FC_OP */
/* 286 */	NdrFcShort( 0x3bc ),	/* Offset= 956 (1242) */
/* 288 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 290 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 292 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 294 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 296 */	NdrFcShort( 0x2 ),	/* Offset= 2 (298) */
/* 298 */	NdrFcShort( 0x10 ),	/* 16 */
/* 300 */	NdrFcShort( 0x2f ),	/* 47 */
/* 302 */	NdrFcLong( 0x14 ),	/* 20 */
/* 306 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 308 */	NdrFcLong( 0x3 ),	/* 3 */
/* 312 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 314 */	NdrFcLong( 0x11 ),	/* 17 */
/* 318 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 320 */	NdrFcLong( 0x2 ),	/* 2 */
/* 324 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 326 */	NdrFcLong( 0x4 ),	/* 4 */
/* 330 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 332 */	NdrFcLong( 0x5 ),	/* 5 */
/* 336 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 338 */	NdrFcLong( 0xb ),	/* 11 */
/* 342 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 344 */	NdrFcLong( 0xa ),	/* 10 */
/* 348 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 350 */	NdrFcLong( 0x6 ),	/* 6 */
/* 354 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (586) */
/* 356 */	NdrFcLong( 0x7 ),	/* 7 */
/* 360 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 362 */	NdrFcLong( 0x8 ),	/* 8 */
/* 366 */	NdrFcShort( 0xfe98 ),	/* Offset= -360 (6) */
/* 368 */	NdrFcLong( 0xd ),	/* 13 */
/* 372 */	NdrFcShort( 0xfebe ),	/* Offset= -322 (50) */
/* 374 */	NdrFcLong( 0x9 ),	/* 9 */
/* 378 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (592) */
/* 380 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 384 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (610) */
/* 386 */	NdrFcLong( 0x24 ),	/* 36 */
/* 390 */	NdrFcShort( 0x30a ),	/* Offset= 778 (1168) */
/* 392 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 396 */	NdrFcShort( 0x304 ),	/* Offset= 772 (1168) */
/* 398 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 402 */	NdrFcShort( 0x302 ),	/* Offset= 770 (1172) */
/* 404 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 408 */	NdrFcShort( 0x300 ),	/* Offset= 768 (1176) */
/* 410 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 414 */	NdrFcShort( 0x2fe ),	/* Offset= 766 (1180) */
/* 416 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 420 */	NdrFcShort( 0x2fc ),	/* Offset= 764 (1184) */
/* 422 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 426 */	NdrFcShort( 0x2fa ),	/* Offset= 762 (1188) */
/* 428 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 432 */	NdrFcShort( 0x2f8 ),	/* Offset= 760 (1192) */
/* 434 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 438 */	NdrFcShort( 0x2e2 ),	/* Offset= 738 (1176) */
/* 440 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 444 */	NdrFcShort( 0x2e0 ),	/* Offset= 736 (1180) */
/* 446 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 450 */	NdrFcShort( 0x2ea ),	/* Offset= 746 (1196) */
/* 452 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 456 */	NdrFcShort( 0x2e0 ),	/* Offset= 736 (1192) */
/* 458 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 462 */	NdrFcShort( 0x2e2 ),	/* Offset= 738 (1200) */
/* 464 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 468 */	NdrFcShort( 0x2e0 ),	/* Offset= 736 (1204) */
/* 470 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 474 */	NdrFcShort( 0x2de ),	/* Offset= 734 (1208) */
/* 476 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 480 */	NdrFcShort( 0x2dc ),	/* Offset= 732 (1212) */
/* 482 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 486 */	NdrFcShort( 0x2da ),	/* Offset= 730 (1216) */
/* 488 */	NdrFcLong( 0x10 ),	/* 16 */
/* 492 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 494 */	NdrFcLong( 0x12 ),	/* 18 */
/* 498 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 500 */	NdrFcLong( 0x13 ),	/* 19 */
/* 504 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 506 */	NdrFcLong( 0x15 ),	/* 21 */
/* 510 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 512 */	NdrFcLong( 0x16 ),	/* 22 */
/* 516 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 518 */	NdrFcLong( 0x17 ),	/* 23 */
/* 522 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 524 */	NdrFcLong( 0xe ),	/* 14 */
/* 528 */	NdrFcShort( 0x2b8 ),	/* Offset= 696 (1224) */
/* 530 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 534 */	NdrFcShort( 0x2bc ),	/* Offset= 700 (1234) */
/* 536 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 540 */	NdrFcShort( 0x2ba ),	/* Offset= 698 (1238) */
/* 542 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 546 */	NdrFcShort( 0x276 ),	/* Offset= 630 (1176) */
/* 548 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 552 */	NdrFcShort( 0x274 ),	/* Offset= 628 (1180) */
/* 554 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 558 */	NdrFcShort( 0x272 ),	/* Offset= 626 (1184) */
/* 560 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 564 */	NdrFcShort( 0x268 ),	/* Offset= 616 (1180) */
/* 566 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 570 */	NdrFcShort( 0x262 ),	/* Offset= 610 (1180) */
/* 572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 576 */	NdrFcShort( 0x0 ),	/* Offset= 0 (576) */
/* 578 */	NdrFcLong( 0x1 ),	/* 1 */
/* 582 */	NdrFcShort( 0x0 ),	/* Offset= 0 (582) */
/* 584 */	NdrFcShort( 0xffff ),	/* Offset= -1 (583) */
/* 586 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 590 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 592 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 594 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 602 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 604 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 606 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 608 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 610 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 612 */	NdrFcShort( 0x2 ),	/* Offset= 2 (614) */
/* 614 */	
			0x13, 0x0,	/* FC_OP */
/* 616 */	NdrFcShort( 0x216 ),	/* Offset= 534 (1150) */
/* 618 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 620 */	NdrFcShort( 0x18 ),	/* 24 */
/* 622 */	NdrFcShort( 0xa ),	/* 10 */
/* 624 */	NdrFcLong( 0x8 ),	/* 8 */
/* 628 */	NdrFcShort( 0x5a ),	/* Offset= 90 (718) */
/* 630 */	NdrFcLong( 0xd ),	/* 13 */
/* 634 */	NdrFcShort( 0x7e ),	/* Offset= 126 (760) */
/* 636 */	NdrFcLong( 0x9 ),	/* 9 */
/* 640 */	NdrFcShort( 0x9e ),	/* Offset= 158 (798) */
/* 642 */	NdrFcLong( 0xc ),	/* 12 */
/* 646 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (846) */
/* 648 */	NdrFcLong( 0x24 ),	/* 36 */
/* 652 */	NdrFcShort( 0x124 ),	/* Offset= 292 (944) */
/* 654 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 658 */	NdrFcShort( 0x140 ),	/* Offset= 320 (978) */
/* 660 */	NdrFcLong( 0x10 ),	/* 16 */
/* 664 */	NdrFcShort( 0x15a ),	/* Offset= 346 (1010) */
/* 666 */	NdrFcLong( 0x2 ),	/* 2 */
/* 670 */	NdrFcShort( 0x174 ),	/* Offset= 372 (1042) */
/* 672 */	NdrFcLong( 0x3 ),	/* 3 */
/* 676 */	NdrFcShort( 0x18e ),	/* Offset= 398 (1074) */
/* 678 */	NdrFcLong( 0x14 ),	/* 20 */
/* 682 */	NdrFcShort( 0x1a8 ),	/* Offset= 424 (1106) */
/* 684 */	NdrFcShort( 0xffff ),	/* Offset= -1 (683) */
/* 686 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 688 */	NdrFcShort( 0x4 ),	/* 4 */
/* 690 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 694 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 696 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 698 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 700 */	NdrFcShort( 0x4 ),	/* 4 */
/* 702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 704 */	NdrFcShort( 0x1 ),	/* 1 */
/* 706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 710 */	0x13, 0x0,	/* FC_OP */
/* 712 */	NdrFcShort( 0xfd4e ),	/* Offset= -690 (22) */
/* 714 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 716 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 718 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 720 */	NdrFcShort( 0x8 ),	/* 8 */
/* 722 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 724 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 726 */	NdrFcShort( 0x4 ),	/* 4 */
/* 728 */	NdrFcShort( 0x4 ),	/* 4 */
/* 730 */	0x11, 0x0,	/* FC_RP */
/* 732 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (686) */
/* 734 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 736 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 738 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 742 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 746 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 748 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 752 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 754 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 756 */	NdrFcShort( 0xfd3e ),	/* Offset= -706 (50) */
/* 758 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 760 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 766 */	NdrFcShort( 0x6 ),	/* Offset= 6 (772) */
/* 768 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 770 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 772 */	
			0x11, 0x0,	/* FC_RP */
/* 774 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (738) */
/* 776 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 780 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 784 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 786 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 790 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 792 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 794 */	NdrFcShort( 0xff36 ),	/* Offset= -202 (592) */
/* 796 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 798 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 800 */	NdrFcShort( 0x8 ),	/* 8 */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 804 */	NdrFcShort( 0x6 ),	/* Offset= 6 (810) */
/* 806 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 808 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 810 */	
			0x11, 0x0,	/* FC_RP */
/* 812 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (776) */
/* 814 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 816 */	NdrFcShort( 0x4 ),	/* 4 */
/* 818 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 822 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 824 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 826 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 828 */	NdrFcShort( 0x4 ),	/* 4 */
/* 830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 832 */	NdrFcShort( 0x1 ),	/* 1 */
/* 834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 838 */	0x13, 0x0,	/* FC_OP */
/* 840 */	NdrFcShort( 0x192 ),	/* Offset= 402 (1242) */
/* 842 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 844 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 846 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 848 */	NdrFcShort( 0x8 ),	/* 8 */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x6 ),	/* Offset= 6 (858) */
/* 854 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 856 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 858 */	
			0x11, 0x0,	/* FC_RP */
/* 860 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (814) */
/* 862 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 864 */	NdrFcLong( 0x2f ),	/* 47 */
/* 868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 872 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 874 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 876 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 878 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 880 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 882 */	NdrFcShort( 0x1 ),	/* 1 */
/* 884 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 886 */	NdrFcShort( 0x4 ),	/* 4 */
/* 888 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 890 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 892 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 894 */	NdrFcShort( 0x10 ),	/* 16 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 898 */	NdrFcShort( 0xa ),	/* Offset= 10 (908) */
/* 900 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 902 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 904 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (862) */
/* 906 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 908 */	
			0x13, 0x0,	/* FC_OP */
/* 910 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (880) */
/* 912 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 914 */	NdrFcShort( 0x4 ),	/* 4 */
/* 916 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 920 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 922 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 924 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 926 */	NdrFcShort( 0x4 ),	/* 4 */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0x1 ),	/* 1 */
/* 932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 936 */	0x13, 0x0,	/* FC_OP */
/* 938 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (892) */
/* 940 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 942 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 944 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 946 */	NdrFcShort( 0x8 ),	/* 8 */
/* 948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 950 */	NdrFcShort( 0x6 ),	/* Offset= 6 (956) */
/* 952 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 954 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 956 */	
			0x11, 0x0,	/* FC_RP */
/* 958 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (912) */
/* 960 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 962 */	NdrFcShort( 0x8 ),	/* 8 */
/* 964 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 966 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 968 */	NdrFcShort( 0x10 ),	/* 16 */
/* 970 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 972 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 974 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (960) */
			0x5b,		/* FC_END */
/* 978 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 980 */	NdrFcShort( 0x18 ),	/* 24 */
/* 982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 984 */	NdrFcShort( 0xa ),	/* Offset= 10 (994) */
/* 986 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 988 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 990 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (966) */
/* 992 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 994 */	
			0x11, 0x0,	/* FC_RP */
/* 996 */	NdrFcShort( 0xfefe ),	/* Offset= -258 (738) */
/* 998 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1000 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1002 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1006 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1008 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1010 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1012 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1014 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1016 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1018 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1020 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1022 */	0x13, 0x0,	/* FC_OP */
/* 1024 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (998) */
/* 1026 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1028 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1030 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1032 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1034 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1038 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1040 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1042 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1044 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1046 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1048 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1050 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1052 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1054 */	0x13, 0x0,	/* FC_OP */
/* 1056 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1030) */
/* 1058 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1060 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1062 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1064 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1066 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1070 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1072 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1074 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1076 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1078 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1080 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1082 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1084 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1086 */	0x13, 0x0,	/* FC_OP */
/* 1088 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1062) */
/* 1090 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1092 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1094 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1096 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1098 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1102 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1104 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1106 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1108 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1110 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1112 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1114 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1116 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1118 */	0x13, 0x0,	/* FC_OP */
/* 1120 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1094) */
/* 1122 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1124 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1126 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1128 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1130 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1132 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1134 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1136 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1138 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1140 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 1142 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1144 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1146 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1126) */
/* 1148 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1150 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1152 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1154 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1134) */
/* 1156 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1156) */
/* 1158 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1160 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1162 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1164 */	NdrFcShort( 0xfdde ),	/* Offset= -546 (618) */
/* 1166 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1168 */	
			0x13, 0x0,	/* FC_OP */
/* 1170 */	NdrFcShort( 0xfeea ),	/* Offset= -278 (892) */
/* 1172 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1174 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1176 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1178 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1180 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1182 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1184 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1186 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1188 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1190 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1192 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1194 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1196 */	
			0x13, 0x0,	/* FC_OP */
/* 1198 */	NdrFcShort( 0xfd9c ),	/* Offset= -612 (586) */
/* 1200 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1202 */	NdrFcShort( 0xfb54 ),	/* Offset= -1196 (6) */
/* 1204 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1206 */	NdrFcShort( 0xfb7c ),	/* Offset= -1156 (50) */
/* 1208 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1210 */	NdrFcShort( 0xfd96 ),	/* Offset= -618 (592) */
/* 1212 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1214 */	NdrFcShort( 0xfda4 ),	/* Offset= -604 (610) */
/* 1216 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1218 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1220) */
/* 1220 */	
			0x13, 0x0,	/* FC_OP */
/* 1222 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1242) */
/* 1224 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1226 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1228 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1230 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1232 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1234 */	
			0x13, 0x0,	/* FC_OP */
/* 1236 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1224) */
/* 1238 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1240 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1242 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1244 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1248 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1248) */
/* 1250 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1252 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1254 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1256 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1258 */	NdrFcShort( 0xfc36 ),	/* Offset= -970 (288) */
/* 1260 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1262 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1264 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1266 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1270 */	NdrFcShort( 0xfc26 ),	/* Offset= -986 (284) */
/* 1272 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1274 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1276) */
/* 1276 */	
			0x13, 0x0,	/* FC_OP */
/* 1278 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1280) */
/* 1280 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1284 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 1286 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1288 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1290 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1294 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1296 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1298 */	NdrFcShort( 0xfb20 ),	/* Offset= -1248 (50) */
/* 1300 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1302 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1304 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1306) */
/* 1306 */	
			0x13, 0x0,	/* FC_OP */
/* 1308 */	NdrFcShort( 0x16 ),	/* Offset= 22 (1330) */
/* 1310 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1312 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1316 */	NdrFcShort( 0xe ),	/* Offset= 14 (1330) */
/* 1318 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1320 */	NdrFcShort( 0xfb0a ),	/* Offset= -1270 (50) */
/* 1322 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1324 */	0x0,		/* 0 */
			NdrFcShort( 0xfb05 ),	/* Offset= -1275 (50) */
			0x8,		/* FC_LONG */
/* 1328 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1330 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1334 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 1336 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1338 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1340 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1344 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1346 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1348 */	NdrFcShort( 0xffda ),	/* Offset= -38 (1310) */
/* 1350 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1352 */	
			0x11, 0x0,	/* FC_RP */
/* 1354 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1356) */
/* 1356 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1360 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 1362 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1364 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1366 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1370 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1372 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1374 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (1310) */
/* 1376 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1378 */	
			0x12, 0x0,	/* FC_UP */
/* 1380 */	NdrFcShort( 0xff76 ),	/* Offset= -138 (1242) */
/* 1382 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1384 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1386 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1390 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1378) */
/* 1392 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1394 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1396) */
/* 1396 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1398 */	NdrFcShort( 0xc ),	/* 12 */
/* 1400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1402 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1402) */
/* 1404 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1406 */	NdrFcShort( 0xfaa2 ),	/* Offset= -1374 (32) */
/* 1408 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1410 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1412 */	
			0x11, 0x0,	/* FC_RP */
/* 1414 */	NdrFcShort( 0xfb88 ),	/* Offset= -1144 (270) */
/* 1416 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1418 */	0x3,		/* FC_SMALL */
			0x5c,		/* FC_PAD */
/* 1420 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1422 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1424) */
/* 1424 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1426 */	NdrFcLong( 0x1c20f2b ),	/* 29495083 */
/* 1430 */	NdrFcShort( 0x3dd2 ),	/* 15826 */
/* 1432 */	NdrFcShort( 0x400f ),	/* 16399 */
/* 1434 */	0x94,		/* 148 */
			0x9f,		/* 159 */
/* 1436 */	0xad,		/* 173 */
			0x0,		/* 0 */
/* 1438 */	0xbd,		/* 189 */
			0xab,		/* 171 */
/* 1440 */	0x1d,		/* 29 */
			0x41,		/* 65 */
/* 1442 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1444 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1446) */
/* 1446 */	
			0x13, 0x0,	/* FC_OP */
/* 1448 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1450) */
/* 1450 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1454 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 1456 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1458 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1460 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1464 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1466 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1468 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (1424) */
/* 1470 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1472 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1474 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1476) */
/* 1476 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1478 */	NdrFcLong( 0x35ad8070 ),	/* 900563056 */
/* 1482 */	NdrFcShort( 0xc20c ),	/* -15860 */
/* 1484 */	NdrFcShort( 0x4fb4 ),	/* 20404 */
/* 1486 */	0xb0,		/* 176 */
			0x94,		/* 148 */
/* 1488 */	0xf4,		/* 244 */
			0xf7,		/* 247 */
/* 1490 */	0x27,		/* 39 */
			0x5d,		/* 93 */
/* 1492 */	0xd4,		/* 212 */
			0x69,		/* 105 */
/* 1494 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1496 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1498) */
/* 1498 */	
			0x13, 0x0,	/* FC_OP */
/* 1500 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1502) */
/* 1502 */	
			0x1c,		/* FC_CVARRAY */
			0x3,		/* 3 */
/* 1504 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1506 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 1508 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1510 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1512 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 1514 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1516 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1518 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1520 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1522 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1524) */
/* 1524 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1526 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1530 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1530) */
/* 1532 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 1534 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1536 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1538 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1540 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1542) */
/* 1542 */	
			0x13, 0x0,	/* FC_OP */
/* 1544 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1546) */
/* 1546 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1550 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 1552 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1554 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1556 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1560 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1562 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1564 */	NdrFcShort( 0xfa16 ),	/* Offset= -1514 (50) */
/* 1566 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1568 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1570 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1572) */
/* 1572 */	
			0x13, 0x0,	/* FC_OP */
/* 1574 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1576) */
/* 1576 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1578 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1580 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 1582 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1584 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1586 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            HWND_UserSize
            ,HWND_UserMarshal
            ,HWND_UserUnmarshal
            ,HWND_UserFree
            },
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };



/* Standard interface: __MIDL_itf_ia2_api_all_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IAccessibleRelation, ver. 0.0,
   GUID={0x7CDF86EE,0xC3DA,0x496a,{0xBD,0xA4,0x28,0x1B,0x33,0x6E,0x1F,0xDC}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleRelation_FormatStringOffsetTable[] =
    {
    0,
    36,
    72,
    108,
    150
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleRelation_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleRelation_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleRelation_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleRelation_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IAccessibleRelationProxyVtbl = 
{
    &IAccessibleRelation_ProxyInfo,
    &IID_IAccessibleRelation,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleRelation::get_relationType */ ,
    (void *) (INT_PTR) -1 /* IAccessibleRelation::get_localizedRelationType */ ,
    (void *) (INT_PTR) -1 /* IAccessibleRelation::get_nTargets */ ,
    (void *) (INT_PTR) -1 /* IAccessibleRelation::get_target */ ,
    (void *) (INT_PTR) -1 /* IAccessibleRelation::get_targets */
};

const CInterfaceStubVtbl _IAccessibleRelationStubVtbl =
{
    &IID_IAccessibleRelation,
    &IAccessibleRelation_ServerInfo,
    8,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IAccessibleAction, ver. 0.0,
   GUID={0xB70D9F59,0x3B5A,0x4dba,{0xAB,0x9E,0x22,0x01,0x2F,0x60,0x7D,0xF5}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleAction_FormatStringOffsetTable[] =
    {
    198,
    234,
    270,
    312,
    366,
    408
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleAction_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleAction_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleAction_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleAction_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IAccessibleActionProxyVtbl = 
{
    &IAccessibleAction_ProxyInfo,
    &IID_IAccessibleAction,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::nActions */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::doAction */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_description */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_keyBinding */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_name */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_localizedName */
};

const CInterfaceStubVtbl _IAccessibleActionStubVtbl =
{
    &IID_IAccessibleAction,
    &IAccessibleAction_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0002, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IAccessible, ver. 0.0,
   GUID={0x618736e0,0x3c3d,0x11cf,{0x81,0x0c,0x00,0xaa,0x00,0x38,0x9b,0x71}} */


/* Object interface: IAccessible2, ver. 0.0,
   GUID={0xE89F726E,0xC4F4,0x4c19,{0xBB,0x19,0xB6,0x47,0xD7,0xFA,0x84,0x78}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessible2_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    450,
    486,
    528,
    576,
    612,
    648,
    696,
    744,
    780,
    816,
    852,
    888,
    936,
    984,
    1020,
    1056,
    1092,
    1128
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessible2_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessible2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessible2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessible2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(46) _IAccessible2ProxyVtbl = 
{
    &IAccessible2_ProxyInfo,
    &IID_IAccessible2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* IAccessible::get_accParent */ ,
    0 /* IAccessible::get_accChildCount */ ,
    0 /* IAccessible::get_accChild */ ,
    0 /* IAccessible::get_accName */ ,
    0 /* IAccessible::get_accValue */ ,
    0 /* IAccessible::get_accDescription */ ,
    0 /* IAccessible::get_accRole */ ,
    0 /* IAccessible::get_accState */ ,
    0 /* IAccessible::get_accHelp */ ,
    0 /* IAccessible::get_accHelpTopic */ ,
    0 /* IAccessible::get_accKeyboardShortcut */ ,
    0 /* IAccessible::get_accFocus */ ,
    0 /* IAccessible::get_accSelection */ ,
    0 /* IAccessible::get_accDefaultAction */ ,
    0 /* IAccessible::accSelect */ ,
    0 /* IAccessible::accLocation */ ,
    0 /* IAccessible::accNavigate */ ,
    0 /* IAccessible::accHitTest */ ,
    0 /* IAccessible::accDoDefaultAction */ ,
    0 /* IAccessible::put_accName */ ,
    0 /* IAccessible::put_accValue */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_nRelations */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_relation */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_relations */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::role */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::scrollTo */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::scrollToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_groupPosition */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_states */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_extendedRole */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_localizedExtendedRole */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_nExtendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_extendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_localizedExtendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_uniqueID */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_windowHandle */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_indexInParent */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_locale */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_attributes */
};


static const PRPC_STUB_FUNCTION IAccessible2_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IAccessible2StubVtbl =
{
    &IID_IAccessible2,
    &IAccessible2_ServerInfo,
    46,
    &IAccessible2_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IAccessible2_2, ver. 0.0,
   GUID={0x6C9430E9,0x299D,0x4E6F,{0xBD,0x01,0xA8,0x2A,0x1E,0x88,0xD3,0xFF}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessible2_2_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    450,
    486,
    528,
    576,
    612,
    648,
    696,
    744,
    780,
    816,
    852,
    888,
    936,
    984,
    1020,
    1056,
    1092,
    1128,
    1164,
    1206,
    1248
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessible2_2_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessible2_2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessible2_2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessible2_2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(49) _IAccessible2_2ProxyVtbl = 
{
    &IAccessible2_2_ProxyInfo,
    &IID_IAccessible2_2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* IAccessible::get_accParent */ ,
    0 /* IAccessible::get_accChildCount */ ,
    0 /* IAccessible::get_accChild */ ,
    0 /* IAccessible::get_accName */ ,
    0 /* IAccessible::get_accValue */ ,
    0 /* IAccessible::get_accDescription */ ,
    0 /* IAccessible::get_accRole */ ,
    0 /* IAccessible::get_accState */ ,
    0 /* IAccessible::get_accHelp */ ,
    0 /* IAccessible::get_accHelpTopic */ ,
    0 /* IAccessible::get_accKeyboardShortcut */ ,
    0 /* IAccessible::get_accFocus */ ,
    0 /* IAccessible::get_accSelection */ ,
    0 /* IAccessible::get_accDefaultAction */ ,
    0 /* IAccessible::accSelect */ ,
    0 /* IAccessible::accLocation */ ,
    0 /* IAccessible::accNavigate */ ,
    0 /* IAccessible::accHitTest */ ,
    0 /* IAccessible::accDoDefaultAction */ ,
    0 /* IAccessible::put_accName */ ,
    0 /* IAccessible::put_accValue */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_nRelations */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_relation */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_relations */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::role */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::scrollTo */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::scrollToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_groupPosition */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_states */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_extendedRole */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_localizedExtendedRole */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_nExtendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_extendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_localizedExtendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_uniqueID */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_windowHandle */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_indexInParent */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_locale */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_attributes */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_2::get_attribute */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_2::get_accessibleWithCaret */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_2::get_relationTargetsOfType */
};


static const PRPC_STUB_FUNCTION IAccessible2_2_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IAccessible2_2StubVtbl =
{
    &IID_IAccessible2_2,
    &IAccessible2_2_ServerInfo,
    49,
    &IAccessible2_2_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0004, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IAccessible2_3, ver. 0.0,
   GUID={0x5BE18059,0x762E,0x4E73,{0x94,0x76,0xAB,0xA2,0x94,0xFE,0xD4,0x11}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessible2_3_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    450,
    486,
    528,
    576,
    612,
    648,
    696,
    744,
    780,
    816,
    852,
    888,
    936,
    984,
    1020,
    1056,
    1092,
    1128,
    1164,
    1206,
    1248,
    1302
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessible2_3_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessible2_3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessible2_3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessible2_3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(50) _IAccessible2_3ProxyVtbl = 
{
    &IAccessible2_3_ProxyInfo,
    &IID_IAccessible2_3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* IAccessible::get_accParent */ ,
    0 /* IAccessible::get_accChildCount */ ,
    0 /* IAccessible::get_accChild */ ,
    0 /* IAccessible::get_accName */ ,
    0 /* IAccessible::get_accValue */ ,
    0 /* IAccessible::get_accDescription */ ,
    0 /* IAccessible::get_accRole */ ,
    0 /* IAccessible::get_accState */ ,
    0 /* IAccessible::get_accHelp */ ,
    0 /* IAccessible::get_accHelpTopic */ ,
    0 /* IAccessible::get_accKeyboardShortcut */ ,
    0 /* IAccessible::get_accFocus */ ,
    0 /* IAccessible::get_accSelection */ ,
    0 /* IAccessible::get_accDefaultAction */ ,
    0 /* IAccessible::accSelect */ ,
    0 /* IAccessible::accLocation */ ,
    0 /* IAccessible::accNavigate */ ,
    0 /* IAccessible::accHitTest */ ,
    0 /* IAccessible::accDoDefaultAction */ ,
    0 /* IAccessible::put_accName */ ,
    0 /* IAccessible::put_accValue */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_nRelations */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_relation */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_relations */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::role */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::scrollTo */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::scrollToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_groupPosition */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_states */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_extendedRole */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_localizedExtendedRole */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_nExtendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_extendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_localizedExtendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_uniqueID */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_windowHandle */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_indexInParent */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_locale */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_attributes */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_2::get_attribute */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_2::get_accessibleWithCaret */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_2::get_relationTargetsOfType */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_3::get_selectionRanges */
};


static const PRPC_STUB_FUNCTION IAccessible2_3_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IAccessible2_3StubVtbl =
{
    &IID_IAccessible2_3,
    &IAccessible2_3_ServerInfo,
    50,
    &IAccessible2_3_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IAccessible2_4, ver. 0.0,
   GUID={0x610a7bec,0x91bb,0x444d,{0xa3,0x36,0xa0,0xda,0xf1,0x3c,0x4c,0x29}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessible2_4_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    450,
    486,
    528,
    576,
    612,
    648,
    696,
    744,
    780,
    816,
    852,
    888,
    936,
    984,
    1020,
    1056,
    1092,
    1128,
    1164,
    1206,
    1248,
    1302,
    1344
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessible2_4_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessible2_4_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessible2_4_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessible2_4_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(51) _IAccessible2_4ProxyVtbl = 
{
    &IAccessible2_4_ProxyInfo,
    &IID_IAccessible2_4,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* IAccessible::get_accParent */ ,
    0 /* IAccessible::get_accChildCount */ ,
    0 /* IAccessible::get_accChild */ ,
    0 /* IAccessible::get_accName */ ,
    0 /* IAccessible::get_accValue */ ,
    0 /* IAccessible::get_accDescription */ ,
    0 /* IAccessible::get_accRole */ ,
    0 /* IAccessible::get_accState */ ,
    0 /* IAccessible::get_accHelp */ ,
    0 /* IAccessible::get_accHelpTopic */ ,
    0 /* IAccessible::get_accKeyboardShortcut */ ,
    0 /* IAccessible::get_accFocus */ ,
    0 /* IAccessible::get_accSelection */ ,
    0 /* IAccessible::get_accDefaultAction */ ,
    0 /* IAccessible::accSelect */ ,
    0 /* IAccessible::accLocation */ ,
    0 /* IAccessible::accNavigate */ ,
    0 /* IAccessible::accHitTest */ ,
    0 /* IAccessible::accDoDefaultAction */ ,
    0 /* IAccessible::put_accName */ ,
    0 /* IAccessible::put_accValue */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_nRelations */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_relation */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_relations */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::role */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::scrollTo */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::scrollToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_groupPosition */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_states */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_extendedRole */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_localizedExtendedRole */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_nExtendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_extendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_localizedExtendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_uniqueID */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_windowHandle */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_indexInParent */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_locale */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_attributes */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_2::get_attribute */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_2::get_accessibleWithCaret */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_2::get_relationTargetsOfType */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_3::get_selectionRanges */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_4::setSelectionRanges */
};


static const PRPC_STUB_FUNCTION IAccessible2_4_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IAccessible2_4StubVtbl =
{
    &IID_IAccessible2_4,
    &IAccessible2_4_ServerInfo,
    51,
    &IAccessible2_4_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0006, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IAccessibleComponent, ver. 0.0,
   GUID={0x1546D4B0,0x4C98,0x4bda,{0x89,0xAE,0x9A,0x64,0x74,0x8B,0xDD,0xE4}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleComponent_FormatStringOffsetTable[] =
    {
    1386,
    1428,
    72
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleComponent_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleComponent_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleComponent_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleComponent_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IAccessibleComponentProxyVtbl = 
{
    &IAccessibleComponent_ProxyInfo,
    &IID_IAccessibleComponent,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleComponent::get_locationInParent */ ,
    (void *) (INT_PTR) -1 /* IAccessibleComponent::get_foreground */ ,
    (void *) (INT_PTR) -1 /* IAccessibleComponent::get_background */
};

const CInterfaceStubVtbl _IAccessibleComponentStubVtbl =
{
    &IID_IAccessibleComponent,
    &IAccessibleComponent_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleValue, ver. 0.0,
   GUID={0x35855B5B,0xC566,0x4fd0,{0xA7,0xB1,0xE6,0x54,0x65,0x60,0x03,0x94}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleValue_FormatStringOffsetTable[] =
    {
    1464,
    1500,
    1536,
    1572
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleValue_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleValue_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleValue_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleValue_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IAccessibleValueProxyVtbl = 
{
    &IAccessibleValue_ProxyInfo,
    &IID_IAccessibleValue,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleValue::get_currentValue */ ,
    (void *) (INT_PTR) -1 /* IAccessibleValue::setCurrentValue */ ,
    (void *) (INT_PTR) -1 /* IAccessibleValue::get_maximumValue */ ,
    (void *) (INT_PTR) -1 /* IAccessibleValue::get_minimumValue */
};

const CInterfaceStubVtbl _IAccessibleValueStubVtbl =
{
    &IID_IAccessibleValue,
    &IAccessibleValue_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0008, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IAccessibleText, ver. 0.0,
   GUID={0x24FD2FFB,0x3AAD,0x4a08,{0x83,0x35,0xA3,0xAD,0x89,0xC0,0xFB,0x4B}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleText_FormatStringOffsetTable[] =
    {
    1608,
    1650,
    72,
    1704,
    1770,
    1806,
    1860,
    1908,
    1956,
    2016,
    2076,
    2136,
    2172,
    2208,
    2256,
    2292,
    2340,
    2400,
    2436
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleText_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleText_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleText_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleText_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(22) _IAccessibleTextProxyVtbl = 
{
    &IAccessibleText_ProxyInfo,
    &IID_IAccessibleText,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleText::addSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_attributes */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_caretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_characterExtents */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nSelections */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_offsetAtPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_selection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_text */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textBeforeOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAfterOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAtOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::removeSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setCaretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nCharacters */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringTo */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_newText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_oldText */
};

const CInterfaceStubVtbl _IAccessibleTextStubVtbl =
{
    &IID_IAccessibleText,
    &IAccessibleText_ServerInfo,
    22,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleText2, ver. 0.0,
   GUID={0x9690A9CC,0x5C80,0x4DF5,{0x85,0x2E,0x2D,0x5A,0xE4,0x18,0x9A,0x54}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleText2_FormatStringOffsetTable[] =
    {
    1608,
    1650,
    72,
    1704,
    1770,
    1806,
    1860,
    1908,
    1956,
    2016,
    2076,
    2136,
    2172,
    2208,
    2256,
    2292,
    2340,
    2400,
    2436,
    2472
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleText2_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleText2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleText2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleText2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(23) _IAccessibleText2ProxyVtbl = 
{
    &IAccessibleText2_ProxyInfo,
    &IID_IAccessibleText2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleText::addSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_attributes */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_caretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_characterExtents */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nSelections */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_offsetAtPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_selection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_text */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textBeforeOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAfterOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAtOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::removeSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setCaretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nCharacters */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringTo */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_newText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_oldText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText2::get_attributeRange */
};

const CInterfaceStubVtbl _IAccessibleText2StubVtbl =
{
    &IID_IAccessibleText2,
    &IAccessibleText2_ServerInfo,
    23,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleEditableText, ver. 0.0,
   GUID={0xA59AA09A,0x7011,0x4b65,{0x93,0x9D,0x32,0xB1,0xFB,0x55,0x47,0xE3}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleEditableText_FormatStringOffsetTable[] =
    {
    1608,
    2532,
    2574,
    2616,
    2658,
    2694,
    2742
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleEditableText_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleEditableText_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleEditableText_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleEditableText_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IAccessibleEditableTextProxyVtbl = 
{
    &IAccessibleEditableText_ProxyInfo,
    &IID_IAccessibleEditableText,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::copyText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::deleteText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::insertText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::cutText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::pasteText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::replaceText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::setAttributes */
};

const CInterfaceStubVtbl _IAccessibleEditableTextStubVtbl =
{
    &IID_IAccessibleEditableText,
    &IAccessibleEditableText_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleHyperlink, ver. 0.0,
   GUID={0x01C20F2B,0x3DD2,0x400f,{0x94,0x9F,0xAD,0x00,0xBD,0xAB,0x1D,0x41}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleHyperlink_FormatStringOffsetTable[] =
    {
    198,
    234,
    270,
    312,
    366,
    408,
    2790,
    2832,
    2874,
    2910,
    2946
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleHyperlink_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleHyperlink_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleHyperlink_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleHyperlink_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IAccessibleHyperlinkProxyVtbl = 
{
    &IAccessibleHyperlink_ProxyInfo,
    &IID_IAccessibleHyperlink,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::nActions */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::doAction */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_description */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_keyBinding */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_name */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_localizedName */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHyperlink::get_anchor */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHyperlink::get_anchorTarget */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHyperlink::get_startIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHyperlink::get_endIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHyperlink::get_valid */
};

const CInterfaceStubVtbl _IAccessibleHyperlinkStubVtbl =
{
    &IID_IAccessibleHyperlink,
    &IAccessibleHyperlink_ServerInfo,
    14,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleHypertext, ver. 0.0,
   GUID={0x6B4F8BBF,0xF1F2,0x418a,{0xB3,0x5E,0xA1,0x95,0xBC,0x41,0x03,0xB9}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleHypertext_FormatStringOffsetTable[] =
    {
    1608,
    1650,
    72,
    1704,
    1770,
    1806,
    1860,
    1908,
    1956,
    2016,
    2076,
    2136,
    2172,
    2208,
    2256,
    2292,
    2340,
    2400,
    2436,
    2982,
    3018,
    3060
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleHypertext_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleHypertext_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleHypertext_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleHypertext_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(25) _IAccessibleHypertextProxyVtbl = 
{
    &IAccessibleHypertext_ProxyInfo,
    &IID_IAccessibleHypertext,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleText::addSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_attributes */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_caretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_characterExtents */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nSelections */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_offsetAtPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_selection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_text */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textBeforeOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAfterOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAtOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::removeSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setCaretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nCharacters */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringTo */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_newText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_oldText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext::get_nHyperlinks */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext::get_hyperlink */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext::get_hyperlinkIndex */
};

const CInterfaceStubVtbl _IAccessibleHypertextStubVtbl =
{
    &IID_IAccessibleHypertext,
    &IAccessibleHypertext_ServerInfo,
    25,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleHypertext2, ver. 0.0,
   GUID={0xCF64D89F,0x8287,0x4B44,{0x85,0x01,0xA8,0x27,0x45,0x3A,0x60,0x77}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleHypertext2_FormatStringOffsetTable[] =
    {
    1608,
    1650,
    72,
    1704,
    1770,
    1806,
    1860,
    1908,
    1956,
    2016,
    2076,
    2136,
    2172,
    2208,
    2256,
    2292,
    2340,
    2400,
    2436,
    2982,
    3018,
    3060,
    3102
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleHypertext2_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleHypertext2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleHypertext2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleHypertext2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(26) _IAccessibleHypertext2ProxyVtbl = 
{
    &IAccessibleHypertext2_ProxyInfo,
    &IID_IAccessibleHypertext2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleText::addSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_attributes */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_caretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_characterExtents */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nSelections */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_offsetAtPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_selection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_text */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textBeforeOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAfterOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAtOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::removeSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setCaretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nCharacters */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringTo */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_newText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_oldText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext::get_nHyperlinks */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext::get_hyperlink */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext::get_hyperlinkIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext2::get_hyperlinks */
};

const CInterfaceStubVtbl _IAccessibleHypertext2StubVtbl =
{
    &IID_IAccessibleHypertext2,
    &IAccessibleHypertext2_ServerInfo,
    26,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleTable, ver. 0.0,
   GUID={0x35AD8070,0xC20C,0x4fb4,{0xB0,0x94,0xF4,0xF7,0x27,0x5D,0xD4,0x69}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleTable_FormatStringOffsetTable[] =
    {
    3144,
    3192,
    3228,
    3276,
    3318,
    3366,
    3408,
    3450,
    2874,
    2910,
    3486,
    3522,
    3558,
    3600,
    3648,
    3690,
    3732,
    3780,
    3828,
    3876,
    3912,
    3954,
    3996,
    4044,
    4080,
    4116,
    4152,
    4188,
    4254
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleTable_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleTable_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleTable_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleTable_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(32) _IAccessibleTableProxyVtbl = 
{
    &IAccessibleTable_ProxyInfo,
    &IID_IAccessibleTable,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_accessibleAt */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_caption */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_childIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_columnDescription */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_columnExtentAt */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_columnHeader */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_columnIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_nColumns */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_nRows */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_nSelectedChildren */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_nSelectedColumns */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_nSelectedRows */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_rowDescription */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_rowExtentAt */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_rowHeader */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_rowIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_selectedChildren */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_selectedColumns */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_selectedRows */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_summary */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_isColumnSelected */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_isRowSelected */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_isSelected */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::selectRow */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::selectColumn */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::unselectRow */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::unselectColumn */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_rowColumnExtentsAtIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_modelChange */
};

const CInterfaceStubVtbl _IAccessibleTableStubVtbl =
{
    &IID_IAccessibleTable,
    &IAccessibleTable_ServerInfo,
    32,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleTable2, ver. 0.0,
   GUID={0x6167f295,0x06f0,0x4cdd,{0xa1,0xfa,0x02,0xe2,0x51,0x53,0xd8,0x69}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleTable2_FormatStringOffsetTable[] =
    {
    3144,
    3192,
    270,
    4290,
    1770,
    4326,
    4362,
    3450,
    4398,
    4440,
    4482,
    4524,
    4566,
    4602,
    4644,
    4686,
    4722,
    4758,
    4794,
    4830
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleTable2_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleTable2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleTable2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleTable2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(23) _IAccessibleTable2ProxyVtbl = 
{
    &IAccessibleTable2_ProxyInfo,
    &IID_IAccessibleTable2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_cellAt */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_caption */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_columnDescription */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_nColumns */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_nRows */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_nSelectedCells */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_nSelectedColumns */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_nSelectedRows */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_rowDescription */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_selectedCells */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_selectedColumns */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_selectedRows */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_summary */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_isColumnSelected */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_isRowSelected */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::selectRow */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::selectColumn */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::unselectRow */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::unselectColumn */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_modelChange */
};

const CInterfaceStubVtbl _IAccessibleTable2StubVtbl =
{
    &IID_IAccessibleTable2,
    &IAccessibleTable2_ServerInfo,
    23,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleTableCell, ver. 0.0,
   GUID={0x594116B1,0xC99F,0x4847,{0xAD,0x06,0x0A,0x7A,0x86,0xEC,0xE6,0x45}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleTableCell_FormatStringOffsetTable[] =
    {
    198,
    4866,
    72,
    4290,
    4908,
    4326,
    4950,
    4986,
    5046
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleTableCell_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleTableCell_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleTableCell_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleTableCell_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IAccessibleTableCellProxyVtbl = 
{
    &IAccessibleTableCell_ProxyInfo,
    &IID_IAccessibleTableCell,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_columnExtent */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_columnHeaderCells */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_columnIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_rowExtent */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_rowHeaderCells */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_rowIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_isSelected */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_rowColumnExtents */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_table */
};

const CInterfaceStubVtbl _IAccessibleTableCellStubVtbl =
{
    &IID_IAccessibleTableCell,
    &IAccessibleTableCell_ServerInfo,
    12,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleImage, ver. 0.0,
   GUID={0xFE5ABB3D,0x615E,0x4f7b,{0x90,0x9F,0x5F,0x0E,0xDA,0x9E,0x8D,0xDE}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleImage_FormatStringOffsetTable[] =
    {
    0,
    5082,
    5130
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleImage_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleImage_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleImage_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleImage_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IAccessibleImageProxyVtbl = 
{
    &IAccessibleImage_ProxyInfo,
    &IID_IAccessibleImage,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleImage::get_description */ ,
    (void *) (INT_PTR) -1 /* IAccessibleImage::get_imagePosition */ ,
    (void *) (INT_PTR) -1 /* IAccessibleImage::get_imageSize */
};

const CInterfaceStubVtbl _IAccessibleImageStubVtbl =
{
    &IID_IAccessibleImage,
    &IAccessibleImage_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0018, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IAccessibleApplication, ver. 0.0,
   GUID={0xD49DED83,0x5B25,0x43F4,{0x9B,0x95,0x93,0xB4,0x45,0x95,0x97,0x9E}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleApplication_FormatStringOffsetTable[] =
    {
    0,
    36,
    5172,
    5208
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleApplication_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleApplication_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleApplication_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleApplication_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IAccessibleApplicationProxyVtbl = 
{
    &IAccessibleApplication_ProxyInfo,
    &IID_IAccessibleApplication,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleApplication::get_appName */ ,
    (void *) (INT_PTR) -1 /* IAccessibleApplication::get_appVersion */ ,
    (void *) (INT_PTR) -1 /* IAccessibleApplication::get_toolkitName */ ,
    (void *) (INT_PTR) -1 /* IAccessibleApplication::get_toolkitVersion */
};

const CInterfaceStubVtbl _IAccessibleApplicationStubVtbl =
{
    &IID_IAccessibleApplication,
    &IAccessibleApplication_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleDocument, ver. 0.0,
   GUID={0xC48C7FCF,0x4AB5,0x4056,{0xAF,0xA6,0x90,0x2D,0x6E,0x1D,0x11,0x49}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleDocument_FormatStringOffsetTable[] =
    {
    5244
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleDocument_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleDocument_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleDocument_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleDocument_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IAccessibleDocumentProxyVtbl = 
{
    &IAccessibleDocument_ProxyInfo,
    &IID_IAccessibleDocument,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleDocument::get_anchorTarget */
};

const CInterfaceStubVtbl _IAccessibleDocumentStubVtbl =
{
    &IID_IAccessibleDocument,
    &IAccessibleDocument_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0020, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    ia2_api_all__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _ia2_api_all_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IAccessibleHyperlinkProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleImageProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessible2_3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleActionProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleValueProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessible2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleTableProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleApplicationProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleTable2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleEditableTextProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleHypertext2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleComponentProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleTableCellProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleHypertextProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleText2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleDocumentProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessible2_2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessible2_4ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleRelationProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleTextProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _ia2_api_all_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IAccessibleHyperlinkStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleImageStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessible2_3StubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleActionStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleValueStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessible2StubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleTableStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleApplicationStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleTable2StubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleEditableTextStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleHypertext2StubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleComponentStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleTableCellStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleHypertextStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleText2StubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleDocumentStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessible2_2StubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessible2_4StubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleRelationStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleTextStubVtbl,
    0
};

PCInterfaceName const _ia2_api_all_InterfaceNamesList[] = 
{
    "IAccessibleHyperlink",
    "IAccessibleImage",
    "IAccessible2_3",
    "IAccessibleAction",
    "IAccessibleValue",
    "IAccessible2",
    "IAccessibleTable",
    "IAccessibleApplication",
    "IAccessibleTable2",
    "IAccessibleEditableText",
    "IAccessibleHypertext2",
    "IAccessibleComponent",
    "IAccessibleTableCell",
    "IAccessibleHypertext",
    "IAccessibleText2",
    "IAccessibleDocument",
    "IAccessible2_2",
    "IAccessible2_4",
    "IAccessibleRelation",
    "IAccessibleText",
    0
};

const IID *  const _ia2_api_all_BaseIIDList[] = 
{
    0,
    0,
    &IID_IAccessible,
    0,
    0,
    &IID_IAccessible,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    &IID_IAccessible,
    &IID_IAccessible,
    0,
    0,
    0
};


#define _ia2_api_all_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _ia2_api_all, pIID, n)

int __stdcall _ia2_api_all_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _ia2_api_all, 20, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _ia2_api_all, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _ia2_api_all, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _ia2_api_all, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _ia2_api_all, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _ia2_api_all, 20, *pIndex )
    
}

const ExtendedProxyFileInfo ia2_api_all_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _ia2_api_all_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _ia2_api_all_StubVtblList,
    (const PCInterfaceName * ) & _ia2_api_all_InterfaceNamesList,
    (const IID ** ) & _ia2_api_all_BaseIIDList,
    & _ia2_api_all_IID_Lookup, 
    20,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

