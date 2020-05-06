

/* this ALWAYS GENERATED file contains the RPC server stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for spoolss.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#include <string.h>
#include "spoolss_h.h"

#define TYPE_FORMAT_STRING_SIZE   4631                              
#define PROC_FORMAT_STRING_SIZE   6859                              
#define EXPR_FORMAT_STRING_SIZE   33                                
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _spoolss_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } spoolss_MIDL_TYPE_FORMAT_STRING;

typedef struct _spoolss_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } spoolss_MIDL_PROC_FORMAT_STRING;

typedef struct _spoolss_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } spoolss_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

extern const spoolss_MIDL_TYPE_FORMAT_STRING spoolss__MIDL_TypeFormatString;
extern const spoolss_MIDL_PROC_FORMAT_STRING spoolss__MIDL_ProcFormatString;
extern const spoolss_MIDL_EXPR_FORMAT_STRING spoolss__MIDL_ExprFormatString;

/* Standard interface: DefaultIfName, ver. 1.0,
   GUID={0x12345678,0x1234,0xabcd,{0xef,0x00,0x01,0x23,0x45,0x67,0x89,0xab}} */


extern const MIDL_SERVER_INFO DefaultIfName_ServerInfo;

extern const RPC_DISPATCH_TABLE DefaultIfName_v1_0_DispatchTable;

static const RPC_SERVER_INTERFACE DefaultIfName___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x12345678,0x1234,0xabcd,{0xef,0x00,0x01,0x23,0x45,0x67,0x89,0xab}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&DefaultIfName_v1_0_DispatchTable,
    0,
    0,
    0,
    &DefaultIfName_ServerInfo,
    0x04000000
    };
RPC_IF_HANDLE DefaultIfName_v1_0_s_ifspec = (RPC_IF_HANDLE)& DefaultIfName___RpcServerInterface;

extern const MIDL_STUB_DESC DefaultIfName_StubDesc;

extern const NDR_RUNDOWN RundownRoutines[];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, new range semantics, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const spoolss_MIDL_PROC_FORMAT_STRING spoolss__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Proc0_RpcEnumPrinters */

			0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 10 */	NdrFcShort( 0x18 ),	/* 24 */
/* 12 */	NdrFcShort( 0x40 ),	/* 64 */
/* 14 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 16 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 18 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 24 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 26 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 30 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 32 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 34 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_3 */

/* 36 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 38 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 42 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 44 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 46 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_5 */

/* 48 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 50 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 52 */	NdrFcShort( 0x20 ),	/* 32 */

	/* Parameter arg_6 */

/* 54 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 56 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 58 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_7 */

/* 60 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 62 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 64 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 66 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 68 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc1_RpcOpenPrinter */

/* 72 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 74 */	NdrFcLong( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x1 ),	/* 1 */
/* 80 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 82 */	NdrFcShort( 0x8 ),	/* 8 */
/* 84 */	NdrFcShort( 0x40 ),	/* 64 */
/* 86 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 88 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 90 */	NdrFcShort( 0x0 ),	/* 0 */
/* 92 */	NdrFcShort( 0x1 ),	/* 1 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 96 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 98 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 100 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_2 */

/* 102 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 104 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 106 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Parameter arg_3 */

/* 108 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 110 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 112 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_4 */

/* 114 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 116 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 118 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter arg_5 */

/* 120 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 122 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 128 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc2_RpcSetJob */

/* 132 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x2 ),	/* 2 */
/* 140 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 142 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 144 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 146 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 148 */	NdrFcShort( 0x34 ),	/* 52 */
/* 150 */	NdrFcShort( 0x8 ),	/* 8 */
/* 152 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 154 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x1 ),	/* 1 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 162 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 164 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 166 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 168 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 174 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 176 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 178 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter arg_3 */

/* 180 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 182 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 188 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc3_RpcGetJob */

/* 192 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x3 ),	/* 3 */
/* 200 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 202 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 204 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 206 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 208 */	NdrFcShort( 0x3c ),	/* 60 */
/* 210 */	NdrFcShort( 0x24 ),	/* 36 */
/* 212 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 214 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 216 */	NdrFcShort( 0x1 ),	/* 1 */
/* 218 */	NdrFcShort( 0x1 ),	/* 1 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 222 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 224 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 226 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 228 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 230 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 234 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 236 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 240 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 242 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 244 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_4 */

/* 246 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 248 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 250 */	NdrFcShort( 0x234 ),	/* 564 */

	/* Parameter arg_5 */

/* 252 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 254 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 258 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 260 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc4_RpcEnumJobs */

/* 264 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x4 ),	/* 4 */
/* 272 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 274 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 276 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 278 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 280 */	NdrFcShort( 0x44 ),	/* 68 */
/* 282 */	NdrFcShort( 0x40 ),	/* 64 */
/* 284 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 286 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 288 */	NdrFcShort( 0x1 ),	/* 1 */
/* 290 */	NdrFcShort( 0x1 ),	/* 1 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 294 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 296 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 298 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 300 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 302 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 306 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 308 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 312 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 314 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 318 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 320 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 322 */	NdrFcShort( 0x23e ),	/* Type Offset=574 */

	/* Parameter arg_5 */

/* 324 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 326 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 328 */	NdrFcShort( 0x258 ),	/* 600 */

	/* Parameter arg_6 */

/* 330 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 332 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_7 */

/* 336 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 338 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 344 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc5_RpcAddPrinter */

/* 348 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0x5 ),	/* 5 */
/* 356 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x40 ),	/* 64 */
/* 362 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 364 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 368 */	NdrFcShort( 0x1 ),	/* 1 */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 372 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 374 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 376 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 378 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 380 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 382 */	NdrFcShort( 0x426 ),	/* Type Offset=1062 */

	/* Parameter arg_2 */

/* 384 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 386 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 388 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter arg_3 */

/* 390 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 392 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 394 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter arg_4 */

/* 396 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 398 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 400 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Return value */

/* 402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 404 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc6_RpcDeletePrinter */

/* 408 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0x6 ),	/* 6 */
/* 416 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 418 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 420 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 422 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 424 */	NdrFcShort( 0x24 ),	/* 36 */
/* 426 */	NdrFcShort( 0x8 ),	/* 8 */
/* 428 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 430 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 436 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 438 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 440 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 442 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 446 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc7_RpcSetPrinter */

/* 450 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 456 */	NdrFcShort( 0x7 ),	/* 7 */
/* 458 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 460 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 462 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 464 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 466 */	NdrFcShort( 0x2c ),	/* 44 */
/* 468 */	NdrFcShort( 0x8 ),	/* 8 */
/* 470 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 472 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 476 */	NdrFcShort( 0x1 ),	/* 1 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 480 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 482 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 484 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 486 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 488 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 490 */	NdrFcShort( 0x426 ),	/* Type Offset=1062 */

	/* Parameter arg_2 */

/* 492 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 494 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 496 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter arg_3 */

/* 498 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 500 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 502 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter arg_4 */

/* 504 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 506 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 512 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc8_RpcGetPrinter */

/* 516 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0x8 ),	/* 8 */
/* 524 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 526 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 528 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 530 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 532 */	NdrFcShort( 0x34 ),	/* 52 */
/* 534 */	NdrFcShort( 0x24 ),	/* 36 */
/* 536 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 538 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 540 */	NdrFcShort( 0x1 ),	/* 1 */
/* 542 */	NdrFcShort( 0x1 ),	/* 1 */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 546 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 548 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 550 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_2 */

/* 552 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 554 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 558 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 560 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 562 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter arg_4 */

/* 564 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 566 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 568 */	NdrFcShort( 0x44e ),	/* 1102 */

	/* Parameter arg_5 */

/* 570 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 572 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 576 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 578 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc9_RpcAddPrinterDriver */

/* 582 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 584 */	NdrFcLong( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0x9 ),	/* 9 */
/* 590 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 594 */	NdrFcShort( 0x8 ),	/* 8 */
/* 596 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 598 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 602 */	NdrFcShort( 0x1 ),	/* 1 */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 606 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 608 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 610 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 612 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 614 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 616 */	NdrFcShort( 0x720 ),	/* Type Offset=1824 */

	/* Return value */

/* 618 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 620 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc10_RpcEnumPrinterDrivers */

/* 624 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 630 */	NdrFcShort( 0xa ),	/* 10 */
/* 632 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 634 */	NdrFcShort( 0x10 ),	/* 16 */
/* 636 */	NdrFcShort( 0x40 ),	/* 64 */
/* 638 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 640 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 642 */	NdrFcShort( 0x1 ),	/* 1 */
/* 644 */	NdrFcShort( 0x1 ),	/* 1 */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 648 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 650 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 652 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 654 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 656 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 658 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_2 */

/* 660 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 662 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 666 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 668 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 670 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_4 */

/* 672 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 674 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 676 */	NdrFcShort( 0x72e ),	/* 1838 */

	/* Parameter arg_5 */

/* 678 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 680 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_6 */

/* 684 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 686 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 692 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc11_RpcGetPrinterDriver */

/* 696 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0xb ),	/* 11 */
/* 704 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 706 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 708 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 710 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 712 */	NdrFcShort( 0x34 ),	/* 52 */
/* 714 */	NdrFcShort( 0x24 ),	/* 36 */
/* 716 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 718 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 720 */	NdrFcShort( 0x1 ),	/* 1 */
/* 722 */	NdrFcShort( 0x1 ),	/* 1 */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 726 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 728 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 730 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 732 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 734 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 736 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_2 */

/* 738 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 740 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 744 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 746 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 748 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_4 */

/* 750 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 752 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 754 */	NdrFcShort( 0x738 ),	/* 1848 */

	/* Parameter arg_5 */

/* 756 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 758 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 762 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 764 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc12_RpcGetPrinterDriverDirectory */

/* 768 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 770 */	NdrFcLong( 0x0 ),	/* 0 */
/* 774 */	NdrFcShort( 0xc ),	/* 12 */
/* 776 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 778 */	NdrFcShort( 0x10 ),	/* 16 */
/* 780 */	NdrFcShort( 0x24 ),	/* 36 */
/* 782 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 784 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 786 */	NdrFcShort( 0x1 ),	/* 1 */
/* 788 */	NdrFcShort( 0x1 ),	/* 1 */
/* 790 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 792 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 794 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 796 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 798 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 800 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 802 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_2 */

/* 804 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 806 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 810 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 812 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 814 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_4 */

/* 816 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 818 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 820 */	NdrFcShort( 0x742 ),	/* 1858 */

	/* Parameter arg_5 */

/* 822 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 824 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 830 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc13_RpcDeletePrinterDriver */

/* 834 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0xd ),	/* 13 */
/* 842 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 846 */	NdrFcShort( 0x8 ),	/* 8 */
/* 848 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 850 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 858 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 860 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 862 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 864 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 866 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 868 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_2 */

/* 870 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 872 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 874 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Return value */

/* 876 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 878 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc14_RpcAddPrintProcessor */

/* 882 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 884 */	NdrFcLong( 0x0 ),	/* 0 */
/* 888 */	NdrFcShort( 0xe ),	/* 14 */
/* 890 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 894 */	NdrFcShort( 0x8 ),	/* 8 */
/* 896 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 898 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 904 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 906 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 908 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 910 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 912 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 914 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 916 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_2 */

/* 918 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 920 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 922 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_3 */

/* 924 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 926 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 928 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Return value */

/* 930 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 932 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc15_RpcEnumPrintProcessors */

/* 936 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 938 */	NdrFcLong( 0x0 ),	/* 0 */
/* 942 */	NdrFcShort( 0xf ),	/* 15 */
/* 944 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 946 */	NdrFcShort( 0x10 ),	/* 16 */
/* 948 */	NdrFcShort( 0x40 ),	/* 64 */
/* 950 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 952 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 954 */	NdrFcShort( 0x1 ),	/* 1 */
/* 956 */	NdrFcShort( 0x1 ),	/* 1 */
/* 958 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 960 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 962 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 964 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 966 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 968 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 970 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_2 */

/* 972 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 974 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 978 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 980 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 982 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_4 */

/* 984 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 986 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 988 */	NdrFcShort( 0x750 ),	/* 1872 */

	/* Parameter arg_5 */

/* 990 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 992 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_6 */

/* 996 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 998 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1002 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1004 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc16_RpcGetPrintProcessorDirectory */

/* 1008 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 1010 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1014 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1016 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1018 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1020 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1022 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1024 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1026 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1028 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1030 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 1032 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1034 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1036 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 1038 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1040 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1042 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_2 */

/* 1044 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1046 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 1050 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1052 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1054 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_4 */

/* 1056 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1058 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1060 */	NdrFcShort( 0x75a ),	/* 1882 */

	/* Parameter arg_5 */

/* 1062 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1064 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1070 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc17_RpcStartDocPrinter */

/* 1074 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1080 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1082 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1084 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1086 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1088 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1090 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1092 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1094 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1096 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1100 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1102 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 1104 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1106 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1108 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 1110 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1112 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1114 */	NdrFcShort( 0x7b6 ),	/* Type Offset=1974 */

	/* Parameter arg_2 */

/* 1116 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1118 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1124 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc18_RpcStartPagePrinter */

/* 1128 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1134 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1136 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1138 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1140 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1142 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1144 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1146 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1148 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1150 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1156 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 1158 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1160 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1162 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 1164 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1166 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc19_RpcWritePrinter */

/* 1170 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1176 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1178 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1180 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1182 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1184 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1186 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1188 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1190 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1192 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1196 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 1200 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1202 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1204 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 1206 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1208 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1210 */	NdrFcShort( 0x7c8 ),	/* Type Offset=1992 */

	/* Parameter arg_2 */

/* 1212 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1214 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 1218 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1220 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1224 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1226 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc20_RpcEndPagePrinter */

/* 1230 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1232 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1236 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1238 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1240 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1242 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1244 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1246 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1248 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1250 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1252 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 1260 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1262 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1264 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 1266 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1268 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc21_RpcAbortPrinter */

/* 1272 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1274 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1278 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1280 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1282 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1284 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1286 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1288 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1290 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1292 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1294 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1300 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 1302 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1304 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1306 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 1308 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1310 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc22_RpcReadPrinter */

/* 1314 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1316 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1320 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1322 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1324 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1326 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1328 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1330 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1332 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1334 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1336 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1338 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 1344 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1346 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1348 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 1350 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1352 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1354 */	NdrFcShort( 0x7c8 ),	/* Type Offset=1992 */

	/* Parameter arg_2 */

/* 1356 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1358 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 1362 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1364 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1368 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1370 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc23_RpcEndDocPrinter */

/* 1374 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1376 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1380 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1382 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1384 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1386 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1388 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1390 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1394 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1396 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 1404 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1406 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1408 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 1410 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1412 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc24_RpcAddJob */

/* 1416 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1418 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1422 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1424 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1426 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1428 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1430 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1432 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1434 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1436 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1438 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1440 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1442 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1444 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 1446 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1448 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1450 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 1452 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1454 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 1458 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1460 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1462 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter arg_3 */

/* 1464 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1466 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1468 */	NdrFcShort( 0x7de ),	/* 2014 */

	/* Parameter arg_4 */

/* 1470 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1472 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1476 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1478 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc25_RpcScheduleJob */

/* 1482 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1488 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1490 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1492 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1494 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1496 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1498 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1500 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1502 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1504 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1510 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 1512 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1514 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1516 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 1518 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1520 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1524 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1526 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc26_RpcGetPrinterData */

/* 1530 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1536 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1538 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1540 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1542 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1544 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1546 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1548 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1550 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1552 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1554 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1558 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 1560 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1562 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1564 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 1566 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1568 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1570 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_2 */

/* 1572 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1574 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1576 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 1578 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1580 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1582 */	NdrFcShort( 0x7ec ),	/* Type Offset=2028 */

	/* Parameter arg_4 */

/* 1584 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1586 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 1590 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1592 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1596 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1598 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc27_RpcSetPrinterData */

/* 1602 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1608 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1610 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1612 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1614 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1616 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1618 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1620 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1622 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1624 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1628 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1630 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 1632 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1634 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1636 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 1638 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1640 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1642 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_2 */

/* 1644 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1646 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 1650 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1652 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1654 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter arg_4 */

/* 1656 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1658 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1660 */	NdrFcShort( 0x806 ),	/* 2054 */

	/* Return value */

/* 1662 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1664 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc28_RpcWaitForPrinterChange */

/* 1668 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1674 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1676 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1678 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1680 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1682 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1684 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1686 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1688 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1690 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1696 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 1698 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1700 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1702 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 1704 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1706 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 1710 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1712 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1716 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1718 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc29_RpcClosePrinter */

/* 1722 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1724 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1728 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1730 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1732 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 1734 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1736 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1738 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1740 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1742 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1744 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1750 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1752 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 1754 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1756 */	NdrFcShort( 0x814 ),	/* Type Offset=2068 */

	/* Return value */

/* 1758 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1760 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc30_RpcAddForm */

/* 1764 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1766 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1770 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1772 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1774 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1776 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1778 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1780 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1782 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1784 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1786 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1790 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1792 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 1794 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1796 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1798 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 1800 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1802 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1804 */	NdrFcShort( 0x89a ),	/* Type Offset=2202 */

	/* Return value */

/* 1806 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1808 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc31_RpcDeleteForm */

/* 1812 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1818 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1820 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1822 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1824 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1826 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1828 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1832 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1834 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1840 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 1842 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1844 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1846 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 1848 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1850 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1852 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Return value */

/* 1854 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1856 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc32_RpcGetForm */

/* 1860 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1866 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1868 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1870 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1872 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1874 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1876 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1878 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1880 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1882 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1884 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1886 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1888 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 1890 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1892 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1894 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 1896 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1898 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1900 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_2 */

/* 1902 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1904 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 1908 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1910 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1912 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_4 */

/* 1914 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1916 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1918 */	NdrFcShort( 0x8a8 ),	/* 2216 */

	/* Parameter arg_5 */

/* 1920 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1922 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1926 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1928 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc33_RpcSetForm */

/* 1932 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1934 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1938 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1940 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1942 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1944 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1946 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1948 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1950 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1952 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1954 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1958 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1960 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 1962 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1964 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1966 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 1968 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1970 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1972 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_2 */

/* 1974 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1976 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1978 */	NdrFcShort( 0x89a ),	/* Type Offset=2202 */

	/* Return value */

/* 1980 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1982 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc34_RpcEnumForms */

/* 1986 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1992 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1994 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1996 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1998 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2000 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2002 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2004 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2006 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 2008 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2010 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2012 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2014 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 2016 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2018 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2020 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 2022 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2024 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 2028 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2030 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2032 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter arg_3 */

/* 2034 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2036 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2038 */	NdrFcShort( 0x8b2 ),	/* 2226 */

	/* Parameter arg_4 */

/* 2040 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2042 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 2046 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2048 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2052 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2054 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc35_RpcEnumPorts */

/* 2058 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 2060 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2064 */	NdrFcShort( 0x23 ),	/* 35 */
/* 2066 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2068 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2070 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2072 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 2074 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2076 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2078 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2080 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 2082 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2084 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2086 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 2088 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2090 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 2094 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2096 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2098 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter arg_3 */

/* 2100 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2102 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2104 */	NdrFcShort( 0x8bc ),	/* 2236 */

	/* Parameter arg_4 */

/* 2106 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2108 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 2112 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2114 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2118 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2120 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc36_RpcEnumMonitors */

/* 2124 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 2126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2130 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2132 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2134 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2136 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2138 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 2140 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2142 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2144 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2146 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 2148 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2150 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2152 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 2154 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2156 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 2160 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2162 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2164 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter arg_3 */

/* 2166 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2168 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2170 */	NdrFcShort( 0x8c6 ),	/* 2246 */

	/* Parameter arg_4 */

/* 2172 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2174 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 2178 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2180 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2184 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2186 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc37_RpcAddPort */

/* 2190 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 2192 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2196 */	NdrFcShort( 0x25 ),	/* 37 */
/* 2198 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2200 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2204 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2206 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2212 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 2214 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2216 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2218 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 2220 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2222 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 2226 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2228 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2230 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Return value */

/* 2232 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2234 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc38_RpcConfigurePort */

/* 2238 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 2240 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2244 */	NdrFcShort( 0x26 ),	/* 38 */
/* 2246 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2248 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2250 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2252 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2254 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2260 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 2262 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2264 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2266 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 2268 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2270 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 2274 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2276 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2278 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Return value */

/* 2280 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2282 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2284 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc39_RpcDeletePort */

/* 2286 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 2288 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2292 */	NdrFcShort( 0x27 ),	/* 39 */
/* 2294 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2296 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2298 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2300 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2302 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2308 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 2310 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2312 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2314 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 2316 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2318 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 2322 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2324 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2326 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Return value */

/* 2328 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2330 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc40_RpcCreatePrinterIC */

/* 2334 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2336 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2340 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2342 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2344 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2346 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2348 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2350 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2352 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2354 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2356 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2360 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2362 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 2364 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2366 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2368 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 2370 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 2372 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2374 */	NdrFcShort( 0x8d4 ),	/* Type Offset=2260 */

	/* Parameter arg_2 */

/* 2376 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2378 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2380 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Return value */

/* 2382 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2384 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc41_RpcPlayGdiScriptOnPrinterIC */

/* 2388 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2390 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2394 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2396 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2398 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2400 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2402 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2404 */	NdrFcShort( 0x3c ),	/* 60 */
/* 2406 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2408 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 2410 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2412 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2414 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2416 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 2418 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2420 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2422 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 2424 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2426 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2428 */	NdrFcShort( 0x8dc ),	/* Type Offset=2268 */

	/* Parameter arg_2 */

/* 2430 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2432 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2434 */	NdrFcShort( 0x8f2 ),	/* 2290 */

	/* Parameter arg_3 */

/* 2436 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2438 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2440 */	NdrFcShort( 0x7ec ),	/* Type Offset=2028 */

	/* Parameter arg_4 */

/* 2442 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2444 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 2448 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2450 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2454 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2456 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc42_RpcDeletePrinterIC */

/* 2460 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2462 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2466 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2468 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2470 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 2472 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2474 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2476 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2478 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2480 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2482 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2488 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 2490 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 2492 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2494 */	NdrFcShort( 0x814 ),	/* Type Offset=2068 */

	/* Return value */

/* 2496 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2498 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc43_RpcAddPrinterConnection */

/* 2502 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 2504 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2508 */	NdrFcShort( 0x2b ),	/* 43 */
/* 2510 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2514 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2516 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2518 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2524 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 2526 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2528 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2530 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Return value */

/* 2532 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2534 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc44_RpcDeletePrinterConnection */

/* 2538 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 2540 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2544 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2546 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2550 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2552 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2554 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2560 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 2562 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2564 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2566 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Return value */

/* 2568 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2570 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc45_RpcPrinterMessageBox */

/* 2574 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2580 */	NdrFcShort( 0x2d ),	/* 45 */
/* 2582 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2584 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2586 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2588 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2590 */	NdrFcShort( 0x3c ),	/* 60 */
/* 2592 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2594 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 2596 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2602 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 2604 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2606 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2608 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 2610 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2612 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 2616 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2618 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 2622 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2624 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2626 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_4 */

/* 2628 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2630 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2632 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_5 */

/* 2634 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2636 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2640 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2642 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2644 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc46_RpcAddMonitor */

/* 2646 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 2648 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2652 */	NdrFcShort( 0x2e ),	/* 46 */
/* 2654 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2658 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2660 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2662 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2666 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2668 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 2670 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2672 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2674 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 2676 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2678 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2680 */	NdrFcShort( 0x926 ),	/* Type Offset=2342 */

	/* Return value */

/* 2682 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2684 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc47_RpcDeleteMonitor */

/* 2688 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 2690 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2694 */	NdrFcShort( 0x2f ),	/* 47 */
/* 2696 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2700 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2702 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2704 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2710 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 2712 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2714 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2716 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 2718 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2720 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2722 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_2 */

/* 2724 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2726 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2728 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Return value */

/* 2730 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2732 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc48_RpcDeletePrintProcessor */

/* 2736 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 2738 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2742 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2744 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2748 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2750 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2752 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2758 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 2760 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2762 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2764 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 2766 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2768 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2770 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_2 */

/* 2772 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2774 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2776 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Return value */

/* 2778 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2780 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc49_RpcAddPrintProvidor */

/* 2784 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 2786 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2790 */	NdrFcShort( 0x31 ),	/* 49 */
/* 2792 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2796 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2798 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2800 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2804 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2806 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 2808 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2810 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2812 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 2814 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2816 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2818 */	NdrFcShort( 0x98c ),	/* Type Offset=2444 */

	/* Return value */

/* 2820 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2822 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc50_RpcDeletePrintProvidor */

/* 2826 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 2828 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2832 */	NdrFcShort( 0x32 ),	/* 50 */
/* 2834 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2838 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2840 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2842 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2848 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 2850 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2852 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2854 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 2856 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2858 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2860 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_2 */

/* 2862 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2864 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2866 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Return value */

/* 2868 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2870 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc51_RpcEnumPrintProcessorDatatypes */

/* 2874 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 2876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2880 */	NdrFcShort( 0x33 ),	/* 51 */
/* 2882 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2884 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2886 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2888 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 2890 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2892 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2894 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2896 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 2898 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2900 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2902 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 2904 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2906 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2908 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_2 */

/* 2910 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2912 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 2916 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2918 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2920 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_4 */

/* 2922 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2924 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2926 */	NdrFcShort( 0x99a ),	/* 2458 */

	/* Parameter arg_5 */

/* 2928 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2930 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_6 */

/* 2934 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2936 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2940 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2942 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc52_RpcResetPrinter */

/* 2946 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2948 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2952 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2954 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2956 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2958 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2960 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2962 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2964 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2966 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2968 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2972 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2974 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 2976 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2978 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2980 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 2982 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2984 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2986 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_2 */

/* 2988 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2990 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2992 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Return value */

/* 2994 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2996 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2998 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc53_RpcGetPrinterDriver2 */

/* 3000 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3002 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3006 */	NdrFcShort( 0x35 ),	/* 53 */
/* 3008 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 3010 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3012 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3014 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3016 */	NdrFcShort( 0x44 ),	/* 68 */
/* 3018 */	NdrFcShort( 0x5c ),	/* 92 */
/* 3020 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xb,		/* 11 */
/* 3022 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 3024 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3026 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3028 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 3030 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3032 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3034 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 3036 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3038 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3040 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_2 */

/* 3042 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3044 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 3048 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 3050 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3052 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_4 */

/* 3054 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 3056 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3058 */	NdrFcShort( 0x9a4 ),	/* 2468 */

	/* Parameter arg_5 */

/* 3060 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3062 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_6 */

/* 3066 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3068 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_7 */

/* 3072 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3074 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3076 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_8 */

/* 3078 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3080 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_9 */

/* 3084 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3086 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3090 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3092 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc54_RpcClientFindFirstPrinterChangeNotification */

/* 3096 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3098 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3102 */	NdrFcShort( 0x36 ),	/* 54 */
/* 3104 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3106 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3108 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3110 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3112 */	NdrFcShort( 0x3c ),	/* 60 */
/* 3114 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3116 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3118 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3122 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 3126 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3128 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3130 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 3132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 3138 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3140 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 3144 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3146 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 3150 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3152 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3154 */	NdrFcShort( 0x9ae ),	/* Type Offset=2478 */

	/* Parameter arg_5 */

/* 3156 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3158 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3164 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc55_RpcFindNextPrinterChangeNotification */

/* 3168 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3174 */	NdrFcShort( 0x37 ),	/* 55 */
/* 3176 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3178 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3180 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3182 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3184 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3186 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3188 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3190 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 3192 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3194 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3196 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 3198 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3200 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3202 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 3204 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3206 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 3210 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3212 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 3216 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3218 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3220 */	NdrFcShort( 0x9ae ),	/* Type Offset=2478 */

	/* Parameter arg_4 */

/* 3222 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3224 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3226 */	NdrFcShort( 0xa22 ),	/* Type Offset=2594 */

	/* Return value */

/* 3228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3230 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc56_RpcFindClosePrinterChangeNotification */

/* 3234 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3240 */	NdrFcShort( 0x38 ),	/* 56 */
/* 3242 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3244 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3246 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3248 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3250 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3254 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3256 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 3264 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3266 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3268 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 3270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3272 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc57_NThreadingLibrary__TWorkItem__NotifyCancel */

/* 3276 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3282 */	NdrFcShort( 0x39 ),	/* 57 */
/* 3284 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3286 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3288 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3290 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3292 */	NdrFcShort( 0x3c ),	/* 60 */
/* 3294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3296 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3298 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3304 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 3306 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3308 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3310 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 3312 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3314 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 3318 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3320 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 3324 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3326 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3328 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_4 */

/* 3330 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3332 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3338 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc58_RpcReplyOpenPrinter */

/* 3342 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 3344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3348 */	NdrFcShort( 0x3a ),	/* 58 */
/* 3350 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3352 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3354 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3356 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3358 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3362 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3364 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 3366 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3368 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3370 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_1 */

/* 3372 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 3374 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3376 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Parameter arg_2 */

/* 3378 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3380 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 3384 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3386 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 3390 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 3392 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3394 */	NdrFcShort( 0xaee ),	/* 2798 */

	/* Parameter arg_5 */

/* 3396 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3398 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3400 */	NdrFcShort( 0xaf8 ),	/* Type Offset=2808 */

	/* Return value */

/* 3402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3404 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc59_RpcRouterReplyPrinter */

/* 3408 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3414 */	NdrFcShort( 0x3b ),	/* 59 */
/* 3416 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3418 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3420 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3422 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3424 */	NdrFcShort( 0x34 ),	/* 52 */
/* 3426 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3428 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3430 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3434 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3436 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 3438 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3440 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3442 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 3444 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3446 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 3450 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 3452 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3454 */	NdrFcShort( 0xb12 ),	/* 2834 */

	/* Parameter arg_3 */

/* 3456 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3458 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3460 */	NdrFcShort( 0xb1c ),	/* Type Offset=2844 */

	/* Return value */

/* 3462 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3464 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc60_RpcReplyClosePrinter */

/* 3468 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3474 */	NdrFcShort( 0x3c ),	/* 60 */
/* 3476 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3478 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 3480 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3482 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3484 */	NdrFcShort( 0x38 ),	/* 56 */
/* 3486 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3488 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3490 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3496 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 3498 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 3500 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3502 */	NdrFcShort( 0x814 ),	/* Type Offset=2068 */

	/* Return value */

/* 3504 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3506 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc61_RpcAddPortEx */

/* 3510 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 3512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3516 */	NdrFcShort( 0x3d ),	/* 61 */
/* 3518 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3522 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3524 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3526 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3530 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3532 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 3534 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3536 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3538 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 3540 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3542 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3544 */	NdrFcShort( 0xbda ),	/* Type Offset=3034 */

	/* Parameter arg_2 */

/* 3546 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3548 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3550 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter arg_3 */

/* 3552 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3554 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3556 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Return value */

/* 3558 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3560 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc62_RpcRemoteFindFirstPrinterChangeNotification */

/* 3564 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3570 */	NdrFcShort( 0x3e ),	/* 62 */
/* 3572 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3574 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3576 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3578 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3580 */	NdrFcShort( 0x44 ),	/* 68 */
/* 3582 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3584 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 3586 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 3588 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3590 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 3594 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3596 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3598 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 3600 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3602 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 3606 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3608 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 3612 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3614 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3616 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_4 */

/* 3618 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3620 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 3624 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 3626 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3628 */	NdrFcShort( 0xbe8 ),	/* 3048 */

	/* Parameter arg_6 */

/* 3630 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 3632 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3634 */	NdrFcShort( 0xbf2 ),	/* Type Offset=3058 */

	/* Return value */

/* 3636 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3638 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc63_RpcSetAllocFailCount */

/* 3642 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 3644 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3648 */	NdrFcShort( 0x3f ),	/* 63 */
/* 3650 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3652 */	NdrFcShort( 0x1a ),	/* 26 */
/* 3654 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3656 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3658 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3664 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 3666 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 3668 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3670 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Return value */

/* 3672 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc64_RpcResetPrinterEx */

/* 3678 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3684 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3686 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3688 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3690 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3692 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3694 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3696 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3698 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3700 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3704 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3706 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 3708 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3710 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3712 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 3714 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3716 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3718 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_2 */

/* 3720 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3722 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3724 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter arg_3 */

/* 3726 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3728 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3732 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3734 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc65_RpcRemoteFindFirstPrinterChangeNotificationEx */

/* 3738 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3740 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3744 */	NdrFcShort( 0x41 ),	/* 65 */
/* 3746 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3748 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3750 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3752 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3754 */	NdrFcShort( 0x3c ),	/* 60 */
/* 3756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3758 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3760 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3764 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 3768 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3770 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3772 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 3774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3776 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 3780 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3782 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 3786 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3788 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3790 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_4 */

/* 3792 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3794 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 3798 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3800 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3802 */	NdrFcShort( 0x9ae ),	/* Type Offset=2478 */

	/* Return value */

/* 3804 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3806 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc66_RpcRouterReplyPrinterEx */

/* 3810 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3816 */	NdrFcShort( 0x42 ),	/* 66 */
/* 3818 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3820 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3822 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3824 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3826 */	NdrFcShort( 0x3c ),	/* 60 */
/* 3828 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3830 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3832 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3836 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3838 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 3840 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3842 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3844 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 3846 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3848 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 3852 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3854 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 3858 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3860 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 3864 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3866 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 3870 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3872 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3874 */	NdrFcShort( 0xc10 ),	/* Type Offset=3088 */

	/* Return value */

/* 3876 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3878 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc67_RpcRouterRefreshPrinterChangeNotification */

/* 3882 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3884 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3888 */	NdrFcShort( 0x43 ),	/* 67 */
/* 3890 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3892 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3894 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3896 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3898 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3900 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3902 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3904 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 3906 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3908 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3910 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 3912 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3914 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3916 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 3918 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3920 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 3924 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3926 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3928 */	NdrFcShort( 0x9ae ),	/* Type Offset=2478 */

	/* Parameter arg_3 */

/* 3930 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3932 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3934 */	NdrFcShort( 0xa22 ),	/* Type Offset=2594 */

	/* Return value */

/* 3936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3938 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc68_RpcSetAllocFailCount */

/* 3942 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3948 */	NdrFcShort( 0x44 ),	/* 68 */
/* 3950 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3952 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3954 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3956 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3958 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3960 */	NdrFcShort( 0x5c ),	/* 92 */
/* 3962 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 3964 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3970 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 3972 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3974 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3976 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 3978 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3980 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 3984 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3986 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 3990 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3992 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 3996 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3998 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4002 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4004 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc69_RpcOpenPrinterEx */

/* 4008 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 4010 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4014 */	NdrFcShort( 0x45 ),	/* 69 */
/* 4016 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4018 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4020 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4022 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 4024 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4028 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4030 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 4032 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4034 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4036 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_2 */

/* 4038 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 4040 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4042 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Parameter arg_3 */

/* 4044 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4046 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4048 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_4 */

/* 4050 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4052 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4054 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter arg_5 */

/* 4056 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4058 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_6 */

/* 4062 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4064 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4066 */	NdrFcShort( 0xcce ),	/* Type Offset=3278 */

	/* Return value */

/* 4068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4070 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc70_RpcAddPrinterEx */

/* 4074 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 4076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4080 */	NdrFcShort( 0x46 ),	/* 70 */
/* 4082 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4086 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4088 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 4090 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4094 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4096 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 4098 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4100 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4102 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 4104 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4106 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4108 */	NdrFcShort( 0x426 ),	/* Type Offset=1062 */

	/* Parameter arg_2 */

/* 4110 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4112 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4114 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter arg_3 */

/* 4116 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4118 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4120 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter arg_4 */

/* 4122 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4124 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4126 */	NdrFcShort( 0xcce ),	/* Type Offset=3278 */

	/* Parameter arg_5 */

/* 4128 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 4130 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4132 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Return value */

/* 4134 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4136 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc71_RpcSetPort */

/* 4140 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 4142 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4146 */	NdrFcShort( 0x47 ),	/* 71 */
/* 4148 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4152 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4154 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4156 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4160 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4162 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 4164 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4166 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4168 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 4170 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4172 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4174 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_2 */

/* 4176 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4178 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4180 */	NdrFcShort( 0xbda ),	/* Type Offset=3034 */

	/* Return value */

/* 4182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4184 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc72_RpcEnumPrinterData */

/* 4188 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4194 */	NdrFcShort( 0x48 ),	/* 72 */
/* 4196 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 4198 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4200 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4202 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4204 */	NdrFcShort( 0x3c ),	/* 60 */
/* 4206 */	NdrFcShort( 0x5c ),	/* 92 */
/* 4208 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0xa,		/* 10 */
/* 4210 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 4212 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4216 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 4218 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4220 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4222 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 4224 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4226 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 4230 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4232 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4234 */	NdrFcShort( 0xce0 ),	/* Type Offset=3296 */

	/* Parameter arg_3 */

/* 4236 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4238 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 4242 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4244 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 4248 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4250 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_6 */

/* 4254 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4256 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4258 */	NdrFcShort( 0xcfa ),	/* Type Offset=3322 */

	/* Parameter arg_7 */

/* 4260 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4262 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_8 */

/* 4266 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4268 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4272 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4274 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 4276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc73_RpcDeletePrinterData */

/* 4278 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4284 */	NdrFcShort( 0x49 ),	/* 73 */
/* 4286 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4288 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4290 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4292 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4294 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4296 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4298 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4300 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4306 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 4308 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4310 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4312 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 4314 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4316 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4318 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Return value */

/* 4320 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4322 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc74_NThreadingLibrary__TWorkItem__NotifyCancel */

/* 4326 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 4328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4332 */	NdrFcShort( 0x4a ),	/* 74 */
/* 4334 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4338 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4340 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4342 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4348 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 4350 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4352 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4354 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 4356 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4358 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4360 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_2 */

/* 4362 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 4364 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4366 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Parameter arg_3 */

/* 4368 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4370 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4372 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_4 */

/* 4374 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4376 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4378 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 4380 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4382 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc75_NThreadingLibrary__TWorkItem__NotifyCancel */

/* 4386 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4392 */	NdrFcShort( 0x4b ),	/* 75 */
/* 4394 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4396 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 4398 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4400 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4402 */	NdrFcShort( 0x38 ),	/* 56 */
/* 4404 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4406 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4408 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 4416 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 4418 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4420 */	NdrFcShort( 0x814 ),	/* Type Offset=2068 */

	/* Return value */

/* 4422 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4424 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc76_NThreadingLibrary__TWorkItem__NotifyCancel */

/* 4428 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4430 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4434 */	NdrFcShort( 0x4c ),	/* 76 */
/* 4436 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4438 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4440 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4442 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4444 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4446 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4448 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4450 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4456 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 4458 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4460 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4462 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 4464 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4466 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc77_RpcSetPrinterDataEx */

/* 4470 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4472 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4476 */	NdrFcShort( 0x4d ),	/* 77 */
/* 4478 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4480 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4482 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4484 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4486 */	NdrFcShort( 0x34 ),	/* 52 */
/* 4488 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4490 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 4492 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4496 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 4500 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4502 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4504 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 4506 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4508 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4510 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_2 */

/* 4512 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4514 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4516 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_3 */

/* 4518 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4520 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 4524 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4526 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4528 */	NdrFcShort( 0x242 ),	/* Type Offset=578 */

	/* Parameter arg_5 */

/* 4530 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 4532 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4534 */	NdrFcShort( 0xd14 ),	/* 3348 */

	/* Return value */

/* 4536 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4538 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc78_RpcGetPrinterDataEx */

/* 4542 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4544 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4548 */	NdrFcShort( 0x4e ),	/* 78 */
/* 4550 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4552 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4554 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4556 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4558 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4560 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4562 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 4564 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 4566 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4570 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 4572 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4574 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4576 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 4578 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4580 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4582 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_2 */

/* 4584 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4586 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4588 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_3 */

/* 4590 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4592 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 4596 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4598 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4600 */	NdrFcShort( 0xd22 ),	/* Type Offset=3362 */

	/* Parameter arg_5 */

/* 4602 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4604 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_6 */

/* 4608 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4610 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4614 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4616 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc79_RpcEnumPrinterDataEx */

/* 4620 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4626 */	NdrFcShort( 0x4f ),	/* 79 */
/* 4628 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4630 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4632 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4634 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4636 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4638 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4640 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 4642 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 4644 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4648 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 4650 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4652 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4654 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 4656 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4658 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4660 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_2 */

/* 4662 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4664 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4666 */	NdrFcShort( 0xd3c ),	/* Type Offset=3388 */

	/* Parameter arg_3 */

/* 4668 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4670 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 4674 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4676 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 4680 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4682 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4684 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4686 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4688 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc80_RpcEnumPrinterKey */

/* 4692 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4694 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4698 */	NdrFcShort( 0x50 ),	/* 80 */
/* 4700 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4702 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4704 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4706 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4708 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4710 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4712 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4714 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 4716 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4720 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 4722 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4724 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4726 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 4728 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4730 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4732 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_2 */

/* 4734 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4736 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4738 */	NdrFcShort( 0xce0 ),	/* Type Offset=3296 */

	/* Parameter arg_3 */

/* 4740 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4742 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 4746 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4748 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4752 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4754 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc81_RpcDeletePrinterDataEx */

/* 4758 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4760 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4764 */	NdrFcShort( 0x51 ),	/* 81 */
/* 4766 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4768 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4770 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4772 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4774 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4776 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4778 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4780 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4786 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 4788 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4790 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4792 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 4794 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4796 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4798 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_2 */

/* 4800 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4802 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4804 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Return value */

/* 4806 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4808 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc82_RpcDeletePrinterKey */

/* 4812 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4818 */	NdrFcShort( 0x52 ),	/* 82 */
/* 4820 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4822 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4824 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4826 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4828 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4832 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4834 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4840 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 4842 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4844 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4846 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 4848 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4850 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4852 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Return value */

/* 4854 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4856 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc83_RpcSeekPrinter */

/* 4860 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4866 */	NdrFcShort( 0x53 ),	/* 83 */
/* 4868 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4870 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4872 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4874 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4876 */	NdrFcShort( 0x4c ),	/* 76 */
/* 4878 */	NdrFcShort( 0x34 ),	/* 52 */
/* 4880 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 4882 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4888 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 4890 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4892 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4894 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 4896 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 4898 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4900 */	NdrFcShort( 0xc88 ),	/* Type Offset=3208 */

	/* Parameter arg_2 */

/* 4902 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 4904 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4906 */	NdrFcShort( 0xc88 ),	/* Type Offset=3208 */

	/* Parameter arg_3 */

/* 4908 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4910 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 4914 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4916 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4920 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4922 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc84_RpcDeletePrinterDriverEx */

/* 4926 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 4928 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4932 */	NdrFcShort( 0x54 ),	/* 84 */
/* 4934 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4936 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4938 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4940 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4942 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4948 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 4950 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4952 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4954 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 4956 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4958 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4960 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_2 */

/* 4962 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4964 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4966 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_3 */

/* 4968 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4970 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 4974 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4976 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4980 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4982 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc85_RpcAddPerMachineConnection */

/* 4986 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 4988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4992 */	NdrFcShort( 0x55 ),	/* 85 */
/* 4994 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4998 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5000 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5002 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5008 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 5010 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5012 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5014 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 5016 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5018 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5020 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_2 */

/* 5022 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5024 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5026 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_3 */

/* 5028 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5030 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5032 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Return value */

/* 5034 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5036 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc86_RpcDeletePerMachineConnection */

/* 5040 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 5042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5046 */	NdrFcShort( 0x56 ),	/* 86 */
/* 5048 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5052 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5054 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5056 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5062 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 5064 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5066 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5068 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 5070 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5072 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5074 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Return value */

/* 5076 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5078 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc87_RpcEnumPerMachineConnections */

/* 5082 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 5084 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5088 */	NdrFcShort( 0x57 ),	/* 87 */
/* 5090 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5092 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5094 */	NdrFcShort( 0x40 ),	/* 64 */
/* 5096 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5098 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 5100 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5102 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5104 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 5106 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5108 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5110 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 5112 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 5114 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5116 */	NdrFcShort( 0xd56 ),	/* Type Offset=3414 */

	/* Parameter arg_2 */

/* 5118 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 5120 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5122 */	NdrFcShort( 0xd5a ),	/* 3418 */

	/* Parameter arg_3 */

/* 5124 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5126 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 5130 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5132 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5136 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5138 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc88_RpcXcvData */

/* 5142 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5148 */	NdrFcShort( 0x58 ),	/* 88 */
/* 5150 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 5152 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 5154 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5156 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 5158 */	NdrFcShort( 0x50 ),	/* 80 */
/* 5160 */	NdrFcShort( 0x40 ),	/* 64 */
/* 5162 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 5164 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 5166 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5168 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5170 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 5172 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 5174 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5176 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 5178 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5180 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5182 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_2 */

/* 5184 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5186 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5188 */	NdrFcShort( 0x438 ),	/* Type Offset=1080 */

	/* Parameter arg_3 */

/* 5190 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 5192 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5194 */	NdrFcShort( 0xd68 ),	/* 3432 */

	/* Parameter arg_4 */

/* 5196 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 5198 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5200 */	NdrFcShort( 0xd22 ),	/* Type Offset=3362 */

	/* Parameter arg_5 */

/* 5202 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5204 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_6 */

/* 5208 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5210 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_7 */

/* 5214 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 5216 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5222 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc89_RpcAddPrinterDriverEx */

/* 5226 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 5228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5232 */	NdrFcShort( 0x59 ),	/* 89 */
/* 5234 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5240 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5242 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5246 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5248 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 5250 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5252 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5254 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 5256 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5258 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5260 */	NdrFcShort( 0x720 ),	/* Type Offset=1824 */

	/* Parameter arg_2 */

/* 5262 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5264 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5268 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5270 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc90_RpcSplOpenPrinter */

/* 5274 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 5276 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5280 */	NdrFcShort( 0x5a ),	/* 90 */
/* 5282 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5284 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5286 */	NdrFcShort( 0x40 ),	/* 64 */
/* 5288 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 5290 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 5292 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5294 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5296 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 5298 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5300 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5302 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 5304 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 5306 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5308 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Parameter arg_2 */

/* 5310 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5312 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5314 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_3 */

/* 5316 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5318 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5320 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter arg_4 */

/* 5322 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5324 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 5328 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 5330 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5332 */	NdrFcShort( 0xcce ),	/* Type Offset=3278 */

	/* Return value */

/* 5334 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5336 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc91_RpcGetSpoolFileInfo */

/* 5340 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5346 */	NdrFcShort( 0x5b ),	/* 91 */
/* 5348 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5350 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 5352 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5354 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 5356 */	NdrFcShort( 0x3c ),	/* 60 */
/* 5358 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5360 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x7,		/* 7 */
/* 5362 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 5364 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5368 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 5370 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 5372 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5374 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 5376 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5378 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 5382 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5384 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 5388 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 5390 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5392 */	NdrFcShort( 0xd7a ),	/* Type Offset=3450 */

	/* Parameter arg_4 */

/* 5394 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 5396 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5398 */	NdrFcShort( 0xd90 ),	/* 3472 */

	/* Parameter arg_5 */

/* 5400 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5402 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5406 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5408 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc92_RpcCommitSpoolData */

/* 5412 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5418 */	NdrFcShort( 0x5c ),	/* 92 */
/* 5420 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5422 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 5424 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5426 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 5428 */	NdrFcShort( 0x44 ),	/* 68 */
/* 5430 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5432 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x8,		/* 8 */
/* 5434 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 5436 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5440 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 5442 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 5444 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5446 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 5448 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5450 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 5454 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5456 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 5460 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5462 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 5466 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 5468 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5470 */	NdrFcShort( 0xd9e ),	/* Type Offset=3486 */

	/* Parameter arg_5 */

/* 5472 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 5474 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5476 */	NdrFcShort( 0xdb4 ),	/* 3508 */

	/* Parameter arg_6 */

/* 5478 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5480 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5484 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5486 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc93_RpcGetSpoolFileInfo2 */

/* 5490 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5496 */	NdrFcShort( 0x5d ),	/* 93 */
/* 5498 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5500 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 5502 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5504 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 5506 */	NdrFcShort( 0x34 ),	/* 52 */
/* 5508 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5510 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5512 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 5514 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5516 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5518 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 5520 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 5522 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5524 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 5526 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5528 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 5532 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5534 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 5538 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 5540 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5542 */	NdrFcShort( 0xde2 ),	/* Type Offset=3554 */

	/* Return value */

/* 5544 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5546 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc94_RpcCommitSpoolData2 */

/* 5550 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5556 */	NdrFcShort( 0x5e ),	/* 94 */
/* 5558 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5560 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 5562 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5564 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 5566 */	NdrFcShort( 0x3c ),	/* 60 */
/* 5568 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5570 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5572 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 5574 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5576 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5578 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 5580 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 5582 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5584 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 5586 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5588 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 5592 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5594 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 5598 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5600 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 5604 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 5606 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5608 */	NdrFcShort( 0xde2 ),	/* Type Offset=3554 */

	/* Return value */

/* 5610 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5612 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc95_RpcCloseSpoolFileHandle */

/* 5616 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5622 */	NdrFcShort( 0x5f ),	/* 95 */
/* 5624 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5626 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 5628 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5630 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 5632 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5634 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5636 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5638 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5644 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 5646 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 5648 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5650 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 5652 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5654 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc96_RpcFlushPrinter */

/* 5658 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5660 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5664 */	NdrFcShort( 0x60 ),	/* 96 */
/* 5666 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5668 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 5670 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5672 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 5674 */	NdrFcShort( 0x34 ),	/* 52 */
/* 5676 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5678 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5680 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5684 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5686 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 5688 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 5690 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5692 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 5694 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5696 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5698 */	NdrFcShort( 0x8dc ),	/* Type Offset=2268 */

	/* Parameter arg_2 */

/* 5700 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 5702 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5704 */	NdrFcShort( 0xdf0 ),	/* 3568 */

	/* Parameter arg_3 */

/* 5706 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5708 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 5712 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5714 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5718 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5720 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc97_RpcSendRecvBidiData */

/* 5724 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5726 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5730 */	NdrFcShort( 0x61 ),	/* 97 */
/* 5732 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5734 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 5736 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5738 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 5740 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5742 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5744 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5746 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 5748 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5750 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5752 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 5754 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 5756 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5758 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 5760 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5762 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5764 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_2 */

/* 5766 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5768 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5770 */	NdrFcShort( 0xe94 ),	/* Type Offset=3732 */

	/* Parameter arg_3 */

/* 5772 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 5774 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5776 */	NdrFcShort( 0xea0 ),	/* Type Offset=3744 */

	/* Return value */

/* 5778 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5780 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc98_RpcAddDriverCatalog */

/* 5784 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 5786 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5790 */	NdrFcShort( 0x62 ),	/* 98 */
/* 5792 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5796 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5798 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 5800 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5806 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 5808 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5810 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc99_RpcAddPrinterConnection2 */

/* 5814 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 5816 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5820 */	NdrFcShort( 0x63 ),	/* 99 */
/* 5822 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5826 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5828 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5830 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5834 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5836 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 5838 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5840 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5842 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_1 */

/* 5844 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5846 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5848 */	NdrFcShort( 0xf2e ),	/* Type Offset=3886 */

	/* Return value */

/* 5850 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5852 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5854 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc100_RpcInstallPrinterDriverFromPackage */

/* 5856 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 5858 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5862 */	NdrFcShort( 0x64 ),	/* 100 */
/* 5864 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5866 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5868 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5870 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5872 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5878 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 5880 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5882 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5884 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 5886 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5888 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5890 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_2 */

/* 5892 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5894 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5896 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_3 */

/* 5898 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5900 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5902 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_4 */

/* 5904 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5906 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5910 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5912 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc102_RpcGetCorePrinterDrivers */

/* 5916 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 5918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5922 */	NdrFcShort( 0x65 ),	/* 101 */
/* 5924 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5926 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5928 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5930 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 5932 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 5934 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5936 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5938 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 5940 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5942 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5944 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 5946 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5948 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5950 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_2 */

/* 5952 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5954 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 5958 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5960 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5962 */	NdrFcShort( 0xf40 ),	/* Type Offset=3904 */

	/* Parameter arg_4 */

/* 5964 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5966 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5968 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 5970 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 5972 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5974 */	NdrFcShort( 0xf84 ),	/* Type Offset=3972 */

	/* Return value */

/* 5976 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5978 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc103_RpcCorePrinterDriverInstalled */

/* 5982 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 5984 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5988 */	NdrFcShort( 0x66 ),	/* 102 */
/* 5990 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 5992 */	NdrFcShort( 0x6c ),	/* 108 */
/* 5994 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5996 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 5998 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6004 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 6006 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6008 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6010 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 6012 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6014 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6016 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_2 */

/* 6018 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 6020 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6022 */	NdrFcShort( 0xf60 ),	/* Type Offset=3936 */

	/* Parameter arg_3 */

/* 6024 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 6026 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6028 */	NdrFcShort( 0x616 ),	/* Type Offset=1558 */

	/* Parameter arg_4 */

/* 6030 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6032 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6034 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 6036 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6038 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 6040 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6042 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6044 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 6046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc104_RpcGetPrinterDriverPackagePath */

/* 6048 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 6050 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6054 */	NdrFcShort( 0x67 ),	/* 103 */
/* 6056 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 6058 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6060 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6062 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 6064 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 6066 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6068 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6070 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 6072 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6074 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6076 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 6078 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6080 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6082 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_2 */

/* 6084 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6086 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6088 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_3 */

/* 6090 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6092 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6094 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_4 */

/* 6096 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 6098 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6100 */	NdrFcShort( 0xfa2 ),	/* Type Offset=4002 */

	/* Parameter arg_5 */

/* 6102 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6104 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_6 */

/* 6108 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6110 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6116 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 6118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc105_RpcDeletePrinterDriverPackage */

/* 6120 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 6122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6126 */	NdrFcShort( 0x68 ),	/* 104 */
/* 6128 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6132 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6134 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6136 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 6144 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6146 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6148 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 6150 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6152 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6154 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_2 */

/* 6156 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6158 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6160 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Return value */

/* 6162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6164 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc106_RpcFindCompatibleDriver */

/* 6168 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 6170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6174 */	NdrFcShort( 0x69 ),	/* 105 */
/* 6176 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 6178 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6180 */	NdrFcShort( 0x5c ),	/* 92 */
/* 6182 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 6184 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 6186 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6188 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 6192 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6194 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6196 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 6198 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6200 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6202 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_2 */

/* 6204 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 6206 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6208 */	NdrFcShort( 0xfbc ),	/* Type Offset=4028 */

	/* Parameter arg_3 */

/* 6210 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6212 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 6216 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6218 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 6222 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 6224 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6226 */	NdrFcShort( 0xfd6 ),	/* Type Offset=4054 */

	/* Parameter arg_6 */

/* 6228 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6230 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_7 */

/* 6234 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6236 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 6238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_8 */

/* 6240 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6242 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 6244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6246 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6248 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 6250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc107_RpcReportJobProcessingProgress */

/* 6252 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 6254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6258 */	NdrFcShort( 0x6a ),	/* 106 */
/* 6260 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6262 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 6264 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6266 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 6268 */	NdrFcShort( 0x38 ),	/* 56 */
/* 6270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6272 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 6274 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 6282 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 6284 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6286 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 6288 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6290 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 6294 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6296 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6298 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 6300 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6302 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6304 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 6306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6308 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc108_RpcSetSpoolerPolicy */

/* 6312 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 6314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6318 */	NdrFcShort( 0x6b ),	/* 107 */
/* 6320 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6322 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6324 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6326 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6328 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 6330 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6332 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 6336 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6338 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6340 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_1 */

/* 6342 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6344 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 6348 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 6350 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6352 */	NdrFcShort( 0x107a ),	/* Type Offset=4218 */

	/* Return value */

/* 6354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6356 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc109_RpcInternalGetPrinterDriver */

/* 6360 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 6362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6366 */	NdrFcShort( 0x6c ),	/* 108 */
/* 6368 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 6370 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 6372 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6374 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 6376 */	NdrFcShort( 0x44 ),	/* 68 */
/* 6378 */	NdrFcShort( 0x5c ),	/* 92 */
/* 6380 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xb,		/* 11 */
/* 6382 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 6384 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6386 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 6390 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 6392 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6394 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 6396 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6398 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6400 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_2 */

/* 6402 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6404 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 6408 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 6410 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6412 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_4 */

/* 6414 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 6416 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6418 */	NdrFcShort( 0x1088 ),	/* 4232 */

	/* Parameter arg_5 */

/* 6420 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6422 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_6 */

/* 6426 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6428 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_7 */

/* 6432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6434 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 6436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_8 */

/* 6438 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6440 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 6442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_9 */

/* 6444 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6446 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 6448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6452 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 6454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc110_RpcGetJobNamedPropertyValue */

/* 6456 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 6458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6462 */	NdrFcShort( 0x6d ),	/* 109 */
/* 6464 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6466 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 6468 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6470 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 6472 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6476 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 6478 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 6480 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6484 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 6486 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 6488 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6490 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 6492 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6494 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 6498 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6500 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6502 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Parameter arg_3 */

/* 6504 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 6506 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6508 */	NdrFcShort( 0x10ce ),	/* Type Offset=4302 */

	/* Return value */

/* 6510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6512 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc111_RpcSetJobNamedProperty */

/* 6516 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 6518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6522 */	NdrFcShort( 0x6e ),	/* 110 */
/* 6524 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6526 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 6528 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6530 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 6532 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6536 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6538 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 6540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6542 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6544 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 6546 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 6548 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6550 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 6552 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6554 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 6558 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6560 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6562 */	NdrFcShort( 0x10e2 ),	/* Type Offset=4322 */

	/* Return value */

/* 6564 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6566 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc112_RpcDeleteJobNamedProperty */

/* 6570 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 6572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6576 */	NdrFcShort( 0x6f ),	/* 111 */
/* 6578 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6580 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 6582 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6584 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 6586 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6590 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6592 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6598 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 6600 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 6602 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6604 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 6606 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6608 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 6612 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6614 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6616 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Return value */

/* 6618 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6620 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc113_RpcEnumJobNamedProperties */

/* 6624 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 6626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6630 */	NdrFcShort( 0x70 ),	/* 112 */
/* 6632 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6634 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 6636 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6638 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 6640 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6642 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6644 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 6646 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 6648 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6652 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 6654 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 6656 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6658 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 6660 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6662 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 6666 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6668 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 6672 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 6674 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6676 */	NdrFcShort( 0x10f6 ),	/* Type Offset=4342 */

	/* Return value */

/* 6678 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6680 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc114_RpcCreateAppSandbox */

/* 6684 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 6686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6690 */	NdrFcShort( 0x71 ),	/* 113 */
/* 6692 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6696 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6698 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6700 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6706 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 6708 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6710 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6712 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 6714 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6716 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc115_RpcGetUserPropertyBag */

/* 6720 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 6722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6726 */	NdrFcShort( 0x72 ),	/* 114 */
/* 6728 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6730 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 6732 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6734 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 6736 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6738 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6740 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6742 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6748 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 6750 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 6752 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6754 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 6756 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6758 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6762 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6764 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc116_RpcLogJobInfoForBranchOffice */

/* 6768 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 6770 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6774 */	NdrFcShort( 0x73 ),	/* 115 */
/* 6776 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6778 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 6780 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6782 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 6784 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6786 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6788 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6790 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 6792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6794 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6796 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 6798 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 6800 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6802 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter arg_1 */

/* 6804 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6806 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6808 */	NdrFcShort( 0x120a ),	/* Type Offset=4618 */

	/* Return value */

/* 6810 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6812 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc117_RpcRegeneratePrintDeviceCapabilities */

/* 6816 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 6818 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6822 */	NdrFcShort( 0x74 ),	/* 116 */
/* 6824 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6826 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 6828 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6830 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 6832 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6834 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6836 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6838 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6844 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 6846 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 6848 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6850 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 6852 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6854 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const spoolss_MIDL_TYPE_FORMAT_STRING spoolss__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  4 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/*  8 */	NdrFcShort( 0x2 ),	/* Offset= 2 (10) */
/* 10 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 16 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 18 */	NdrFcShort( 0x10 ),	/* Corr flags:  */
/* 20 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 22 */	NdrFcLong( 0x0 ),	/* 0 */
/* 26 */	NdrFcLong( 0x3fffffff ),	/* 1073741823 */
/* 30 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 32 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 34 */	NdrFcLong( 0x0 ),	/* 0 */
/* 38 */	NdrFcLong( 0x3fffffff ),	/* 1073741823 */
/* 42 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 44 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 46 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 48 */	NdrFcShort( 0x2 ),	/* Offset= 2 (50) */
/* 50 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 52 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 54 */	
			0x11, 0x0,	/* FC_RP */
/* 56 */	NdrFcShort( 0x18 ),	/* Offset= 24 (80) */
/* 58 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 60 */	NdrFcShort( 0x1 ),	/* 1 */
/* 62 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 68 */	0x0 , 
			0x0,		/* 0 */
/* 70 */	NdrFcLong( 0x0 ),	/* 0 */
/* 74 */	NdrFcLong( 0x0 ),	/* 0 */
/* 78 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 80 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 82 */	NdrFcShort( 0x8 ),	/* 8 */
/* 84 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 86 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 88 */	NdrFcShort( 0x4 ),	/* 4 */
/* 90 */	NdrFcShort( 0x4 ),	/* 4 */
/* 92 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 94 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (58) */
/* 96 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 98 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 100 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 102 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 104 */	
			0x12, 0x0,	/* FC_UP */
/* 106 */	NdrFcShort( 0x1bc ),	/* Offset= 444 (550) */
/* 108 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 110 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 112 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 114 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 116 */	0x0 , 
			0x0,		/* 0 */
/* 118 */	NdrFcLong( 0x0 ),	/* 0 */
/* 122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x2 ),	/* Offset= 2 (128) */
/* 128 */	NdrFcShort( 0x4 ),	/* 4 */
/* 130 */	NdrFcShort( 0x4 ),	/* 4 */
/* 132 */	NdrFcLong( 0x1 ),	/* 1 */
/* 136 */	NdrFcShort( 0x16 ),	/* Offset= 22 (158) */
/* 138 */	NdrFcLong( 0x2 ),	/* 2 */
/* 142 */	NdrFcShort( 0x76 ),	/* Offset= 118 (260) */
/* 144 */	NdrFcLong( 0x3 ),	/* 3 */
/* 148 */	NdrFcShort( 0xfa ),	/* Offset= 250 (398) */
/* 150 */	NdrFcLong( 0x4 ),	/* 4 */
/* 154 */	NdrFcShort( 0x100 ),	/* Offset= 256 (410) */
/* 156 */	NdrFcShort( 0xffff ),	/* Offset= -1 (155) */
/* 158 */	
			0x12, 0x0,	/* FC_UP */
/* 160 */	NdrFcShort( 0x10 ),	/* Offset= 16 (176) */
/* 162 */	
			0x15,		/* FC_STRUCT */
			0x1,		/* 1 */
/* 164 */	NdrFcShort( 0x10 ),	/* 16 */
/* 166 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 168 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 170 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 172 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 174 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 176 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 178 */	NdrFcShort( 0x40 ),	/* 64 */
/* 180 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 182 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 184 */	NdrFcShort( 0x4 ),	/* 4 */
/* 186 */	NdrFcShort( 0x4 ),	/* 4 */
/* 188 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 190 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 192 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 198 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 200 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 202 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 204 */	NdrFcShort( 0xc ),	/* 12 */
/* 206 */	NdrFcShort( 0xc ),	/* 12 */
/* 208 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 210 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 212 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 214 */	NdrFcShort( 0x10 ),	/* 16 */
/* 216 */	NdrFcShort( 0x10 ),	/* 16 */
/* 218 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 220 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 222 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 224 */	NdrFcShort( 0x14 ),	/* 20 */
/* 226 */	NdrFcShort( 0x14 ),	/* 20 */
/* 228 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 230 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 232 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 234 */	NdrFcShort( 0x18 ),	/* 24 */
/* 236 */	NdrFcShort( 0x18 ),	/* 24 */
/* 238 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 240 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 242 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 244 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 246 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 248 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 250 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 252 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 254 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 256 */	0x0,		/* 0 */
			NdrFcShort( 0xffa1 ),	/* Offset= -95 (162) */
			0x5b,		/* FC_END */
/* 260 */	
			0x12, 0x0,	/* FC_UP */
/* 262 */	NdrFcShort( 0x2 ),	/* Offset= 2 (264) */
/* 264 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 266 */	NdrFcShort( 0x68 ),	/* 104 */
/* 268 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 270 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 272 */	NdrFcShort( 0x4 ),	/* 4 */
/* 274 */	NdrFcShort( 0x4 ),	/* 4 */
/* 276 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 278 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 280 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 284 */	NdrFcShort( 0x8 ),	/* 8 */
/* 286 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 288 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 290 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 292 */	NdrFcShort( 0xc ),	/* 12 */
/* 294 */	NdrFcShort( 0xc ),	/* 12 */
/* 296 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 298 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 300 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 302 */	NdrFcShort( 0x10 ),	/* 16 */
/* 304 */	NdrFcShort( 0x10 ),	/* 16 */
/* 306 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 308 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 310 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 312 */	NdrFcShort( 0x14 ),	/* 20 */
/* 314 */	NdrFcShort( 0x14 ),	/* 20 */
/* 316 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 318 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 320 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 322 */	NdrFcShort( 0x18 ),	/* 24 */
/* 324 */	NdrFcShort( 0x18 ),	/* 24 */
/* 326 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 328 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 330 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 332 */	NdrFcShort( 0x1c ),	/* 28 */
/* 334 */	NdrFcShort( 0x1c ),	/* 28 */
/* 336 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 338 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 340 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 342 */	NdrFcShort( 0x20 ),	/* 32 */
/* 344 */	NdrFcShort( 0x20 ),	/* 32 */
/* 346 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 348 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 350 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 352 */	NdrFcShort( 0x24 ),	/* 36 */
/* 354 */	NdrFcShort( 0x24 ),	/* 36 */
/* 356 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 358 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 360 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 362 */	NdrFcShort( 0x2c ),	/* 44 */
/* 364 */	NdrFcShort( 0x2c ),	/* 44 */
/* 366 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 368 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 370 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 372 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 374 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 376 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 378 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 380 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 382 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 384 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 386 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 388 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 390 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 392 */	0x0,		/* 0 */
			NdrFcShort( 0xff19 ),	/* Offset= -231 (162) */
			0x8,		/* FC_LONG */
/* 396 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 398 */	
			0x12, 0x0,	/* FC_UP */
/* 400 */	NdrFcShort( 0x2 ),	/* Offset= 2 (402) */
/* 402 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 404 */	NdrFcShort( 0xc ),	/* 12 */
/* 406 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 408 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 410 */	
			0x12, 0x0,	/* FC_UP */
/* 412 */	NdrFcShort( 0x2 ),	/* Offset= 2 (414) */
/* 414 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 416 */	NdrFcShort( 0x6c ),	/* 108 */
/* 418 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 420 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 422 */	NdrFcShort( 0x4 ),	/* 4 */
/* 424 */	NdrFcShort( 0x4 ),	/* 4 */
/* 426 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 428 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 430 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 432 */	NdrFcShort( 0x8 ),	/* 8 */
/* 434 */	NdrFcShort( 0x8 ),	/* 8 */
/* 436 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 438 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 440 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 442 */	NdrFcShort( 0xc ),	/* 12 */
/* 444 */	NdrFcShort( 0xc ),	/* 12 */
/* 446 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 448 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 450 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 452 */	NdrFcShort( 0x10 ),	/* 16 */
/* 454 */	NdrFcShort( 0x10 ),	/* 16 */
/* 456 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 458 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 460 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 462 */	NdrFcShort( 0x14 ),	/* 20 */
/* 464 */	NdrFcShort( 0x14 ),	/* 20 */
/* 466 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 468 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 470 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 472 */	NdrFcShort( 0x18 ),	/* 24 */
/* 474 */	NdrFcShort( 0x18 ),	/* 24 */
/* 476 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 478 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 480 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 482 */	NdrFcShort( 0x1c ),	/* 28 */
/* 484 */	NdrFcShort( 0x1c ),	/* 28 */
/* 486 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 488 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 490 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 492 */	NdrFcShort( 0x20 ),	/* 32 */
/* 494 */	NdrFcShort( 0x20 ),	/* 32 */
/* 496 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 498 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 500 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 502 */	NdrFcShort( 0x24 ),	/* 36 */
/* 504 */	NdrFcShort( 0x24 ),	/* 36 */
/* 506 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 508 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 510 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 512 */	NdrFcShort( 0x2c ),	/* 44 */
/* 514 */	NdrFcShort( 0x2c ),	/* 44 */
/* 516 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 518 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 520 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 522 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 524 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 526 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 528 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 530 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 532 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 534 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 536 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 538 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 540 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 542 */	0x0,		/* 0 */
			NdrFcShort( 0xfe83 ),	/* Offset= -381 (162) */
			0x8,		/* FC_LONG */
/* 546 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 548 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 550 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 552 */	NdrFcShort( 0x8 ),	/* 8 */
/* 554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 556 */	NdrFcShort( 0x0 ),	/* Offset= 0 (556) */
/* 558 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 560 */	0x0,		/* 0 */
			NdrFcShort( 0xfe3b ),	/* Offset= -453 (108) */
			0x5b,		/* FC_END */
/* 564 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 570 */	NdrFcLong( 0x3fffffff ),	/* 1073741823 */
/* 574 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 576 */	NdrFcShort( 0x2 ),	/* Offset= 2 (578) */
/* 578 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 580 */	NdrFcShort( 0x1 ),	/* 1 */
/* 582 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 584 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 586 */	NdrFcShort( 0x10 ),	/* Corr flags:  */
/* 588 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 590 */	NdrFcLong( 0x0 ),	/* 0 */
/* 594 */	NdrFcLong( 0x3fffffff ),	/* 1073741823 */
/* 598 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 600 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 606 */	NdrFcLong( 0x3fffffff ),	/* 1073741823 */
/* 610 */	
			0x11, 0x0,	/* FC_RP */
/* 612 */	NdrFcShort( 0x1c2 ),	/* Offset= 450 (1062) */
/* 614 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 616 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 618 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 620 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 622 */	0x0 , 
			0x0,		/* 0 */
/* 624 */	NdrFcLong( 0x0 ),	/* 0 */
/* 628 */	NdrFcLong( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0x2 ),	/* Offset= 2 (634) */
/* 634 */	NdrFcShort( 0x4 ),	/* 4 */
/* 636 */	NdrFcShort( 0xa ),	/* 10 */
/* 638 */	NdrFcLong( 0x0 ),	/* 0 */
/* 642 */	NdrFcShort( 0x3a ),	/* Offset= 58 (700) */
/* 644 */	NdrFcLong( 0x1 ),	/* 1 */
/* 648 */	NdrFcShort( 0x74 ),	/* Offset= 116 (764) */
/* 650 */	NdrFcLong( 0x2 ),	/* 2 */
/* 654 */	NdrFcShort( 0x9c ),	/* Offset= 156 (810) */
/* 656 */	NdrFcLong( 0x3 ),	/* 3 */
/* 660 */	NdrFcShort( 0x126 ),	/* Offset= 294 (954) */
/* 662 */	NdrFcLong( 0x4 ),	/* 4 */
/* 666 */	NdrFcShort( 0x12a ),	/* Offset= 298 (964) */
/* 668 */	NdrFcLong( 0x5 ),	/* 5 */
/* 672 */	NdrFcShort( 0x148 ),	/* Offset= 328 (1000) */
/* 674 */	NdrFcLong( 0x6 ),	/* 6 */
/* 678 */	NdrFcShort( 0x114 ),	/* Offset= 276 (954) */
/* 680 */	NdrFcLong( 0x7 ),	/* 7 */
/* 684 */	NdrFcShort( 0x162 ),	/* Offset= 354 (1038) */
/* 686 */	NdrFcLong( 0x8 ),	/* 8 */
/* 690 */	NdrFcShort( 0x108 ),	/* Offset= 264 (954) */
/* 692 */	NdrFcLong( 0x9 ),	/* 9 */
/* 696 */	NdrFcShort( 0x102 ),	/* Offset= 258 (954) */
/* 698 */	NdrFcShort( 0xffff ),	/* Offset= -1 (697) */
/* 700 */	
			0x12, 0x0,	/* FC_UP */
/* 702 */	NdrFcShort( 0x2 ),	/* Offset= 2 (704) */
/* 704 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 706 */	NdrFcShort( 0x7c ),	/* 124 */
/* 708 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 710 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 716 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 718 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 720 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 722 */	NdrFcShort( 0x4 ),	/* 4 */
/* 724 */	NdrFcShort( 0x4 ),	/* 4 */
/* 726 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 728 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 730 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 732 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 734 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 736 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 738 */	NdrFcShort( 0xfdc0 ),	/* Offset= -576 (162) */
/* 740 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 742 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 744 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 746 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 748 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 750 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 752 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 754 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 756 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 758 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 760 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 762 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 764 */	
			0x12, 0x0,	/* FC_UP */
/* 766 */	NdrFcShort( 0x2 ),	/* Offset= 2 (768) */
/* 768 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 770 */	NdrFcShort( 0x10 ),	/* 16 */
/* 772 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 774 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 776 */	NdrFcShort( 0x4 ),	/* 4 */
/* 778 */	NdrFcShort( 0x4 ),	/* 4 */
/* 780 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 782 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 784 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 786 */	NdrFcShort( 0x8 ),	/* 8 */
/* 788 */	NdrFcShort( 0x8 ),	/* 8 */
/* 790 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 792 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 794 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 796 */	NdrFcShort( 0xc ),	/* 12 */
/* 798 */	NdrFcShort( 0xc ),	/* 12 */
/* 800 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 802 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 804 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 806 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 808 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 810 */	
			0x12, 0x0,	/* FC_UP */
/* 812 */	NdrFcShort( 0x2 ),	/* Offset= 2 (814) */
/* 814 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 816 */	NdrFcShort( 0x54 ),	/* 84 */
/* 818 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 820 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 826 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 828 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 830 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 832 */	NdrFcShort( 0x4 ),	/* 4 */
/* 834 */	NdrFcShort( 0x4 ),	/* 4 */
/* 836 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 838 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 840 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 842 */	NdrFcShort( 0x8 ),	/* 8 */
/* 844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 846 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 848 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 850 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 852 */	NdrFcShort( 0xc ),	/* 12 */
/* 854 */	NdrFcShort( 0xc ),	/* 12 */
/* 856 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 858 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 860 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 862 */	NdrFcShort( 0x10 ),	/* 16 */
/* 864 */	NdrFcShort( 0x10 ),	/* 16 */
/* 866 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 868 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 870 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 872 */	NdrFcShort( 0x14 ),	/* 20 */
/* 874 */	NdrFcShort( 0x14 ),	/* 20 */
/* 876 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 878 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 880 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 882 */	NdrFcShort( 0x18 ),	/* 24 */
/* 884 */	NdrFcShort( 0x18 ),	/* 24 */
/* 886 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 888 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 890 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 892 */	NdrFcShort( 0x20 ),	/* 32 */
/* 894 */	NdrFcShort( 0x20 ),	/* 32 */
/* 896 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 898 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 900 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 902 */	NdrFcShort( 0x24 ),	/* 36 */
/* 904 */	NdrFcShort( 0x24 ),	/* 36 */
/* 906 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 908 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 910 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 912 */	NdrFcShort( 0x28 ),	/* 40 */
/* 914 */	NdrFcShort( 0x28 ),	/* 40 */
/* 916 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 918 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 920 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 922 */	NdrFcShort( 0x2c ),	/* 44 */
/* 924 */	NdrFcShort( 0x2c ),	/* 44 */
/* 926 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 928 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 930 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 932 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 934 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 936 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 938 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 940 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 942 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 944 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 946 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 948 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 950 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 952 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 954 */	
			0x12, 0x0,	/* FC_UP */
/* 956 */	NdrFcShort( 0x2 ),	/* Offset= 2 (958) */
/* 958 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 960 */	NdrFcShort( 0x4 ),	/* 4 */
/* 962 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 964 */	
			0x12, 0x0,	/* FC_UP */
/* 966 */	NdrFcShort( 0x2 ),	/* Offset= 2 (968) */
/* 968 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 970 */	NdrFcShort( 0xc ),	/* 12 */
/* 972 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 974 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 980 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 982 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 984 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 986 */	NdrFcShort( 0x4 ),	/* 4 */
/* 988 */	NdrFcShort( 0x4 ),	/* 4 */
/* 990 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 992 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 994 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 996 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 998 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1000 */	
			0x12, 0x0,	/* FC_UP */
/* 1002 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1004) */
/* 1004 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1006 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1008 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1010 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1016 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1018 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1020 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1022 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1024 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1026 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1028 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1030 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1032 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1034 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1036 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1038 */	
			0x12, 0x0,	/* FC_UP */
/* 1040 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1042) */
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
/* 1050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1054 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1056 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1058 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1060 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1062 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1064 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1068 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1068) */
/* 1070 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1072 */	0x0,		/* 0 */
			NdrFcShort( 0xfe35 ),	/* Offset= -459 (614) */
			0x5b,		/* FC_END */
/* 1076 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1078 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1080) */
/* 1080 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1082 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1084 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 1086 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1088 */	NdrFcShort( 0x10 ),	/* Corr flags:  */
/* 1090 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 1092 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1096 */	NdrFcLong( 0x3fffffff ),	/* 1073741823 */
/* 1100 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1102 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1108 */	NdrFcLong( 0x3fffffff ),	/* 1073741823 */
/* 1112 */	
			0x11, 0x0,	/* FC_RP */
/* 1114 */	NdrFcShort( 0x2c6 ),	/* Offset= 710 (1824) */
/* 1116 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 1118 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 1120 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 1122 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1124 */	0x0 , 
			0x0,		/* 0 */
/* 1126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1134 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1136) */
/* 1136 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1138 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1140 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1144 */	NdrFcShort( 0x22 ),	/* Offset= 34 (1178) */
/* 1146 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1150 */	NdrFcShort( 0x34 ),	/* Offset= 52 (1202) */
/* 1152 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1156 */	NdrFcShort( 0x72 ),	/* Offset= 114 (1270) */
/* 1158 */	NdrFcLong( 0x4 ),	/* 4 */
/* 1162 */	NdrFcShort( 0xf4 ),	/* Offset= 244 (1406) */
/* 1164 */	NdrFcLong( 0x6 ),	/* 6 */
/* 1168 */	NdrFcShort( 0x182 ),	/* Offset= 386 (1554) */
/* 1170 */	NdrFcLong( 0x8 ),	/* 8 */
/* 1174 */	NdrFcShort( 0x1e0 ),	/* Offset= 480 (1654) */
/* 1176 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1175) */
/* 1178 */	
			0x12, 0x0,	/* FC_UP */
/* 1180 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1182) */
/* 1182 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1184 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1186 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1188 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1194 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1196 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1198 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1200 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1202 */	
			0x12, 0x0,	/* FC_UP */
/* 1204 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1206) */
/* 1206 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1208 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1210 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1212 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1214 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1216 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1218 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1220 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1222 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1224 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1226 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1228 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1230 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1232 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1234 */	NdrFcShort( 0xc ),	/* 12 */
/* 1236 */	NdrFcShort( 0xc ),	/* 12 */
/* 1238 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1240 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1242 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1244 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1246 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1248 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1250 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1252 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1254 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1256 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1258 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1260 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1262 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1264 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1266 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1268 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1270 */	
			0x12, 0x0,	/* FC_UP */
/* 1272 */	NdrFcShort( 0x18 ),	/* Offset= 24 (1296) */
/* 1274 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1276 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1278 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 1280 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1282 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1284 */	0x0 , 
			0x0,		/* 0 */
/* 1286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1294 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1296 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1298 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1300 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1302 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1304 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1306 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1308 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1310 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1312 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1314 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1316 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1318 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1320 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1322 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1324 */	NdrFcShort( 0xc ),	/* 12 */
/* 1326 */	NdrFcShort( 0xc ),	/* 12 */
/* 1328 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1330 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1332 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1334 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1336 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1338 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1340 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1342 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1344 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1346 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1348 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1350 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1352 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1354 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1356 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1358 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1360 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1362 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1364 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1366 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1368 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1370 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1372 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1374 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1376 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1378 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1380 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1382 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1384 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1386 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1388 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1390 */	NdrFcShort( 0xff8c ),	/* Offset= -116 (1274) */
/* 1392 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1394 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1396 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1398 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1400 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1402 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1404 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1406 */	
			0x12, 0x0,	/* FC_UP */
/* 1408 */	NdrFcShort( 0x18 ),	/* Offset= 24 (1432) */
/* 1410 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1412 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1414 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 1416 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1418 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1420 */	0x0 , 
			0x0,		/* 0 */
/* 1422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1430 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1432 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1434 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1436 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1438 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1440 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1442 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1444 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1446 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1448 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1450 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1452 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1454 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1456 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1458 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1460 */	NdrFcShort( 0xc ),	/* 12 */
/* 1462 */	NdrFcShort( 0xc ),	/* 12 */
/* 1464 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1466 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1468 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1470 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1472 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1474 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1476 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1478 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1480 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1482 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1484 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1486 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1488 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1490 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1492 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1494 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1496 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1498 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1500 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1502 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1504 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1506 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1508 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1510 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1512 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1514 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1516 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1518 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1520 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1522 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1524 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1526 */	NdrFcShort( 0xff04 ),	/* Offset= -252 (1274) */
/* 1528 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1530 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1532 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1534 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1536 */	NdrFcShort( 0xff82 ),	/* Offset= -126 (1410) */
/* 1538 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1540 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1542 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1544 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1546 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1548 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1550 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1552 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1554 */	
			0x12, 0x0,	/* FC_UP */
/* 1556 */	NdrFcShort( 0xa ),	/* Offset= 10 (1566) */
/* 1558 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1560 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1562 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1564 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1566 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1568 */	NdrFcShort( 0x58 ),	/* 88 */
/* 1570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1572 */	NdrFcShort( 0x1a ),	/* Offset= 26 (1598) */
/* 1574 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1576 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1578 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1580 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1582 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1584 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1586 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1588 */	0x0,		/* 0 */
			NdrFcShort( 0xffe1 ),	/* Offset= -31 (1558) */
			0x40,		/* FC_STRUCTPAD4 */
/* 1592 */	0xb,		/* FC_HYPER */
			0x36,		/* FC_POINTER */
/* 1594 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1596 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1598 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1600 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1602 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1604 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1606 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1608 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1610 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1612 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1614 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1616 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1618 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1620 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1622 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1624 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1626 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1628 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1630 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1632 */	NdrFcShort( 0xfe9a ),	/* Offset= -358 (1274) */
/* 1634 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1636 */	NdrFcShort( 0xff1e ),	/* Offset= -226 (1410) */
/* 1638 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1640 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1642 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1644 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1646 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1648 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1650 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1652 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1654 */	
			0x12, 0x0,	/* FC_UP */
/* 1656 */	NdrFcShort( 0x2e ),	/* Offset= 46 (1702) */
/* 1658 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1660 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1662 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 1664 */	NdrFcShort( 0x60 ),	/* 96 */
/* 1666 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1668 */	0x0 , 
			0x0,		/* 0 */
/* 1670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1674 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1678 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1680 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1682 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1684 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 1686 */	NdrFcShort( 0x70 ),	/* 112 */
/* 1688 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1690 */	0x0 , 
			0x0,		/* 0 */
/* 1692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1696 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1700 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1702 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1704 */	NdrFcShort( 0x88 ),	/* 136 */
/* 1706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1708 */	NdrFcShort( 0x28 ),	/* Offset= 40 (1748) */
/* 1710 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1712 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1714 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1716 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1718 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1720 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1722 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1724 */	0x0,		/* 0 */
			NdrFcShort( 0xff59 ),	/* Offset= -167 (1558) */
			0x40,		/* FC_STRUCTPAD4 */
/* 1728 */	0xb,		/* FC_HYPER */
			0x36,		/* FC_POINTER */
/* 1730 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1732 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1734 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1736 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1738 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1740 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1742 */	0x0,		/* 0 */
			NdrFcShort( 0xff47 ),	/* Offset= -185 (1558) */
			0xb,		/* FC_HYPER */
/* 1746 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1748 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1750 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1752 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1754 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1756 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1758 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1760 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1762 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1764 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1766 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1768 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1770 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1772 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1774 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1776 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1778 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1780 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1782 */	NdrFcShort( 0xfe04 ),	/* Offset= -508 (1274) */
/* 1784 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1786 */	NdrFcShort( 0xfe88 ),	/* Offset= -376 (1410) */
/* 1788 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1790 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1792 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1794 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1796 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1798 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1800 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1802 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1804 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1806 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1808 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1810 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1812 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1814 */	NdrFcShort( 0xff64 ),	/* Offset= -156 (1658) */
/* 1816 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1818 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1820 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1822 */	NdrFcShort( 0xff72 ),	/* Offset= -142 (1680) */
/* 1824 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1826 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1830 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1830) */
/* 1832 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1834 */	0x0,		/* 0 */
			NdrFcShort( 0xfd31 ),	/* Offset= -719 (1116) */
			0x5b,		/* FC_END */
/* 1838 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1840 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1844 */	NdrFcLong( 0x3fffffff ),	/* 1073741823 */
/* 1848 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1850 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1854 */	NdrFcLong( 0x3fffffff ),	/* 1073741823 */
/* 1858 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1864 */	NdrFcLong( 0x3fffffff ),	/* 1073741823 */
/* 1868 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1870 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1872 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1878 */	NdrFcLong( 0x3fffffff ),	/* 1073741823 */
/* 1882 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1884 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1888 */	NdrFcLong( 0x3fffffff ),	/* 1073741823 */
/* 1892 */	
			0x11, 0x0,	/* FC_RP */
/* 1894 */	NdrFcShort( 0x50 ),	/* Offset= 80 (1974) */
/* 1896 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 1898 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 1900 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 1902 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1904 */	0x0 , 
			0x0,		/* 0 */
/* 1906 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1914 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1916) */
/* 1916 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1918 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1920 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1924 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1928) */
/* 1926 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1925) */
/* 1928 */	
			0x12, 0x0,	/* FC_UP */
/* 1930 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1932) */
/* 1932 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1934 */	NdrFcShort( 0xc ),	/* 12 */
/* 1936 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1938 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1944 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1946 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1948 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1950 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1952 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1954 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1956 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1958 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1960 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1962 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1964 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1966 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1968 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1970 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1972 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1974 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1976 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1980 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1980) */
/* 1982 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1984 */	0x0,		/* 0 */
			NdrFcShort( 0xffa7 ),	/* Offset= -89 (1896) */
			0x5b,		/* FC_END */
/* 1988 */	
			0x11, 0x0,	/* FC_RP */
/* 1990 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1992) */
/* 1992 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1994 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1996 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 1998 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2000 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2002 */	0x0 , 
			0x0,		/* 0 */
/* 2004 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2008 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2012 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2014 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2016 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2020 */	NdrFcLong( 0x3fffffff ),	/* 1073741823 */
/* 2024 */	
			0x11, 0x0,	/* FC_RP */
/* 2026 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2028) */
/* 2028 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2030 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2032 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 2034 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2036 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2038 */	0x0 , 
			0x0,		/* 0 */
/* 2040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2044 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2048 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2050 */	
			0x11, 0x0,	/* FC_RP */
/* 2052 */	NdrFcShort( 0xf806 ),	/* Offset= -2042 (10) */
/* 2054 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2060 */	NdrFcLong( 0x3fffffff ),	/* 1073741823 */
/* 2064 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2066 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2068) */
/* 2068 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 2070 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2072 */	
			0x11, 0x0,	/* FC_RP */
/* 2074 */	NdrFcShort( 0x80 ),	/* Offset= 128 (2202) */
/* 2076 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 2078 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 2080 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 2082 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2084 */	0x0 , 
			0x0,		/* 0 */
/* 2086 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2090 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2094 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2096) */
/* 2096 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2098 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2100 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2104 */	NdrFcShort( 0xa ),	/* Offset= 10 (2114) */
/* 2106 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2110 */	NdrFcShort( 0x2e ),	/* Offset= 46 (2156) */
/* 2112 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2111) */
/* 2114 */	
			0x12, 0x0,	/* FC_UP */
/* 2116 */	NdrFcShort( 0xc ),	/* Offset= 12 (2128) */
/* 2118 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 2120 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2122 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2124 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2126 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2128 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2130 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2132 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2134 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2136 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2138 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2140 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2142 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2144 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2146 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2148 */	0x0,		/* 0 */
			NdrFcShort( 0xfdb1 ),	/* Offset= -591 (1558) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2152 */	0x0,		/* 0 */
			NdrFcShort( 0xffdd ),	/* Offset= -35 (2118) */
			0x5b,		/* FC_END */
/* 2156 */	
			0x12, 0x0,	/* FC_UP */
/* 2158 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2160) */
/* 2160 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2162 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2166 */	NdrFcShort( 0x14 ),	/* Offset= 20 (2186) */
/* 2168 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 2170 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2172 */	NdrFcShort( 0xfd9a ),	/* Offset= -614 (1558) */
/* 2174 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2176 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (2118) */
/* 2178 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2180 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2182 */	0x36,		/* FC_POINTER */
			0x6,		/* FC_SHORT */
/* 2184 */	0x3e,		/* FC_STRUCTPAD2 */
			0x5b,		/* FC_END */
/* 2186 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2188 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2190 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2192 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 2194 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2196 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2198 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2200 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2202 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2208 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2208) */
/* 2210 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2212 */	0x0,		/* 0 */
			NdrFcShort( 0xff77 ),	/* Offset= -137 (2076) */
			0x5b,		/* FC_END */
/* 2216 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2222 */	NdrFcLong( 0x3fffffff ),	/* 1073741823 */
/* 2226 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2232 */	NdrFcLong( 0x3fffffff ),	/* 1073741823 */
/* 2236 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2242 */	NdrFcLong( 0x3fffffff ),	/* 1073741823 */
/* 2246 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2252 */	NdrFcLong( 0x3fffffff ),	/* 1073741823 */
/* 2256 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2258 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2260) */
/* 2260 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 2262 */	0x0,		/* 0 */
			0x1,		/* 1 */
/* 2264 */	
			0x11, 0x0,	/* FC_RP */
/* 2266 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2268) */
/* 2268 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2270 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2272 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 2274 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2276 */	NdrFcShort( 0x10 ),	/* Corr flags:  */
/* 2278 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2284 */	NdrFcLong( 0x3fffffff ),	/* 1073741823 */
/* 2288 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2290 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2296 */	NdrFcLong( 0x3fffffff ),	/* 1073741823 */
/* 2300 */	
			0x11, 0x0,	/* FC_RP */
/* 2302 */	NdrFcShort( 0x28 ),	/* Offset= 40 (2342) */
/* 2304 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 2306 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 2308 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 2310 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2312 */	0x0 , 
			0x0,		/* 0 */
/* 2314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2322 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2324) */
/* 2324 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2326 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2328 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2332 */	NdrFcShort( 0xfb7e ),	/* Offset= -1154 (1178) */
/* 2334 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2338 */	NdrFcShort( 0xfe66 ),	/* Offset= -410 (1928) */
/* 2340 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2339) */
/* 2342 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2344 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2348 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2348) */
/* 2350 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2352 */	0x0,		/* 0 */
			NdrFcShort( 0xffcf ),	/* Offset= -49 (2304) */
			0x5b,		/* FC_END */
/* 2356 */	
			0x11, 0x0,	/* FC_RP */
/* 2358 */	NdrFcShort( 0x56 ),	/* Offset= 86 (2444) */
/* 2360 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 2362 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 2364 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 2366 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2368 */	0x0 , 
			0x0,		/* 0 */
/* 2370 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2378 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2380) */
/* 2380 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2382 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2384 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2388 */	NdrFcShort( 0xfe34 ),	/* Offset= -460 (1928) */
/* 2390 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2394 */	NdrFcShort( 0x4 ),	/* Offset= 4 (2398) */
/* 2396 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2395) */
/* 2398 */	
			0x12, 0x0,	/* FC_UP */
/* 2400 */	NdrFcShort( 0x18 ),	/* Offset= 24 (2424) */
/* 2402 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2404 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2406 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 2408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2410 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2412 */	0x0 , 
			0x0,		/* 0 */
/* 2414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2418 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2422 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2424 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2426 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2428 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2430 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2432 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2434 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2436 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2438 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2402) */
/* 2440 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2442 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2444 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2446 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2450 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2450) */
/* 2452 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2454 */	0x0,		/* 0 */
			NdrFcShort( 0xffa1 ),	/* Offset= -95 (2360) */
			0x5b,		/* FC_END */
/* 2458 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2460 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2464 */	NdrFcLong( 0x3fffffff ),	/* 1073741823 */
/* 2468 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2474 */	NdrFcLong( 0x3fffffff ),	/* 1073741823 */
/* 2478 */	
			0x12, 0x0,	/* FC_UP */
/* 2480 */	NdrFcShort( 0x5c ),	/* Offset= 92 (2572) */
/* 2482 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2484 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2486 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 2488 */	NdrFcShort( 0xc ),	/* 12 */
/* 2490 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2492 */	0x0 , 
			0x0,		/* 0 */
/* 2494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2502 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 2504 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2506 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2508 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2510 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2512 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2514 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2516 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2518 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2482) */
/* 2520 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 2522 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 2524 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2526 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2528 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2530 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2532 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 2534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2536 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2538 */	0x0 , 
			0x0,		/* 0 */
/* 2540 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2544 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2548 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2550 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2552 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2556 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2558 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2560 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2562 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2564 */	NdrFcShort( 0xffae ),	/* Offset= -82 (2482) */
/* 2566 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2568 */	0x0,		/* 0 */
			NdrFcShort( 0xffbf ),	/* Offset= -65 (2504) */
			0x5b,		/* FC_END */
/* 2572 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2574 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2576 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2578 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2580 */	NdrFcShort( 0xc ),	/* 12 */
/* 2582 */	NdrFcShort( 0xc ),	/* 12 */
/* 2584 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2586 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (2528) */
/* 2588 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2590 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2592 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2594 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 2596 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2598) */
/* 2598 */	
			0x12, 0x0,	/* FC_UP */
/* 2600 */	NdrFcShort( 0xba ),	/* Offset= 186 (2786) */
/* 2602 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 2604 */	0x0,		/* Corr desc:  field,  */
			0x5d,		/* FC_EXPR */
/* 2606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2608 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2610 */	0x0 , 
			0x0,		/* 0 */
/* 2612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2616 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2620 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2622) */
/* 2622 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2624 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2626 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2630 */	NdrFcShort( 0x32 ),	/* Offset= 50 (2680) */
/* 2632 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2636 */	NdrFcShort( 0x40 ),	/* Offset= 64 (2700) */
/* 2638 */	NdrFcLong( 0x4 ),	/* 4 */
/* 2642 */	NdrFcShort( 0x40 ),	/* Offset= 64 (2706) */
/* 2644 */	NdrFcLong( 0x3 ),	/* 3 */
/* 2648 */	NdrFcShort( 0xf5f8 ),	/* Offset= -2568 (80) */
/* 2650 */	NdrFcLong( 0x5 ),	/* 5 */
/* 2654 */	NdrFcShort( 0xf5f2 ),	/* Offset= -2574 (80) */
/* 2656 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2655) */
/* 2658 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2660 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2662 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x55,		/* FC_DIV_2 */
/* 2664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2666 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2668 */	0x0 , 
			0x0,		/* 0 */
/* 2670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2674 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2678 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2680 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2682 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2684 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2686 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2688 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2690 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2692 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2694 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2658) */
/* 2696 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2698 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2700 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 2702 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2704 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2706 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2708 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2710 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2712 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2714 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2716 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2718 */	0x12, 0x0,	/* FC_UP */
/* 2720 */	NdrFcShort( 0xf602 ),	/* Offset= -2558 (162) */
/* 2722 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2724 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2726 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2728 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2732 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2732) */
/* 2734 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2736 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2738 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2740 */	NdrFcShort( 0xff76 ),	/* Offset= -138 (2602) */
/* 2742 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2744 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2748 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 2750 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 2752 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2754 */	0x0 , 
			0x0,		/* 0 */
/* 2756 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2760 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2764 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2768 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2770 */	0x0 , 
			0x0,		/* 0 */
/* 2772 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2776 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2780 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2782 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (2726) */
/* 2784 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2786 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2788 */	NdrFcShort( 0xc ),	/* 12 */
/* 2790 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (2744) */
/* 2792 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2792) */
/* 2794 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2796 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2798 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2800 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2804 */	NdrFcLong( 0x200 ),	/* 512 */
/* 2808 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2810 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2812) */
/* 2812 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2814 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2816 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 2818 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2820 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2822 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2824 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2828 */	NdrFcLong( 0x200 ),	/* 512 */
/* 2832 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2834 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2840 */	NdrFcLong( 0x200 ),	/* 512 */
/* 2844 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2846 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2848) */
/* 2848 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2850 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2852 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 2854 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2856 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2858 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2864 */	NdrFcLong( 0x200 ),	/* 512 */
/* 2868 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2870 */	
			0x11, 0x0,	/* FC_RP */
/* 2872 */	NdrFcShort( 0xa2 ),	/* Offset= 162 (3034) */
/* 2874 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 2876 */	0x0,		/* Corr desc:  field,  */
			0x5d,		/* FC_EXPR */
/* 2878 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2880 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2882 */	0x0 , 
			0x0,		/* 0 */
/* 2884 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2888 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2892 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2894) */
/* 2894 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2896 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2898 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2902 */	NdrFcShort( 0xf944 ),	/* Offset= -1724 (1178) */
/* 2904 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2908 */	NdrFcShort( 0x10 ),	/* Offset= 16 (2924) */
/* 2910 */	NdrFcLong( 0x3 ),	/* 3 */
/* 2914 */	NdrFcShort( 0x3a ),	/* Offset= 58 (2972) */
/* 2916 */	NdrFcLong( 0xffffff ),	/* 16777215 */
/* 2920 */	NdrFcShort( 0x4e ),	/* Offset= 78 (2998) */
/* 2922 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2921) */
/* 2924 */	
			0x12, 0x0,	/* FC_UP */
/* 2926 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2928) */
/* 2928 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2930 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2932 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2934 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2940 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2942 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2944 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2946 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2948 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2950 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2952 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2954 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2956 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2958 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2960 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2962 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2964 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2966 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2968 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2970 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2972 */	
			0x12, 0x0,	/* FC_UP */
/* 2974 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2976) */
/* 2976 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2978 */	NdrFcShort( 0xc ),	/* 12 */
/* 2980 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2982 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2984 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2986 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2988 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2990 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2992 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2994 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2996 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2998 */	
			0x12, 0x0,	/* FC_UP */
/* 3000 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3002) */
/* 3002 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 3004 */	NdrFcShort( 0xc ),	/* 12 */
/* 3006 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3008 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3014 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3016 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3018 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3020 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3022 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3024 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3026 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 3028 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3030 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3032 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3034 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3036 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3040 */	NdrFcShort( 0x0 ),	/* Offset= 0 (3040) */
/* 3042 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3044 */	0x0,		/* 0 */
			NdrFcShort( 0xff55 ),	/* Offset= -171 (2874) */
			0x5b,		/* FC_END */
/* 3048 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 3050 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3054 */	NdrFcLong( 0x200 ),	/* 512 */
/* 3058 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3060 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3062) */
/* 3062 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 3064 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3066 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 3068 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3070 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 3072 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 3074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3078 */	NdrFcLong( 0x200 ),	/* 512 */
/* 3082 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 3084 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 3086 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 3088 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 3090 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 3092 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3094 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3096 */	0x0 , 
			0x0,		/* 0 */
/* 3098 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3106 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3108) */
/* 3108 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3110 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3112 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3116 */	NdrFcShort( 0xfdfa ),	/* Offset= -518 (2598) */
/* 3118 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3117) */
/* 3120 */	
			0x11, 0x0,	/* FC_RP */
/* 3122 */	NdrFcShort( 0x9c ),	/* Offset= 156 (3278) */
/* 3124 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 3126 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 3128 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 3130 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3132 */	0x0 , 
			0x0,		/* 0 */
/* 3134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3138 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3142 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3144) */
/* 3144 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3146 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3148 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3152 */	NdrFcShort( 0x16 ),	/* Offset= 22 (3174) */
/* 3154 */	NdrFcLong( 0x2 ),	/* 2 */
/* 3158 */	NdrFcShort( 0x2e ),	/* Offset= 46 (3204) */
/* 3160 */	NdrFcLong( 0x3 ),	/* 3 */
/* 3164 */	NdrFcShort( 0x32 ),	/* Offset= 50 (3214) */
/* 3166 */	NdrFcLong( 0x4 ),	/* 4 */
/* 3170 */	NdrFcShort( 0x4c ),	/* Offset= 76 (3246) */
/* 3172 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3171) */
/* 3174 */	
			0x12, 0x0,	/* FC_UP */
/* 3176 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3178) */
/* 3178 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3180 */	NdrFcShort( 0x1c ),	/* 28 */
/* 3182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3184 */	NdrFcShort( 0xc ),	/* Offset= 12 (3196) */
/* 3186 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 3188 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 3190 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3192 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 3194 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3196 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3198 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3200 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3202 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3204 */	
			0x12, 0x0,	/* FC_UP */
/* 3206 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3208) */
/* 3208 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 3210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3212 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 3214 */	
			0x12, 0x0,	/* FC_UP */
/* 3216 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3218) */
/* 3218 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 3220 */	NdrFcShort( 0x30 ),	/* 48 */
/* 3222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3224 */	NdrFcShort( 0xe ),	/* Offset= 14 (3238) */
/* 3226 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3228 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 3230 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 3232 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3234 */	0x6,		/* FC_SHORT */
			0x42,		/* FC_STRUCTPAD6 */
/* 3236 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 3238 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3240 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 3242 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3244 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 3246 */	
			0x12, 0x0,	/* FC_UP */
/* 3248 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3250) */
/* 3250 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 3252 */	NdrFcShort( 0x30 ),	/* 48 */
/* 3254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3256 */	NdrFcShort( 0xe ),	/* Offset= 14 (3270) */
/* 3258 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 3260 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 3262 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3264 */	0x6,		/* FC_SHORT */
			0x42,		/* FC_STRUCTPAD6 */
/* 3266 */	0xb,		/* FC_HYPER */
			0x8,		/* FC_LONG */
/* 3268 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3270 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3272 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 3274 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3276 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 3278 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3280 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3284 */	NdrFcShort( 0x0 ),	/* Offset= 0 (3284) */
/* 3286 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3288 */	0x0,		/* 0 */
			NdrFcShort( 0xff5b ),	/* Offset= -165 (3124) */
			0x5b,		/* FC_END */
/* 3292 */	
			0x11, 0x0,	/* FC_RP */
/* 3294 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3296) */
/* 3296 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 3298 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3300 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x55,		/* FC_DIV_2 */
/* 3302 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3304 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3306 */	0x0 , 
			0x0,		/* 0 */
/* 3308 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3316 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 3318 */	
			0x11, 0x0,	/* FC_RP */
/* 3320 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3322) */
/* 3322 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 3324 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3326 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 3328 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3330 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3332 */	0x0 , 
			0x0,		/* 0 */
/* 3334 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3342 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 3344 */	
			0x11, 0x0,	/* FC_RP */
/* 3346 */	NdrFcShort( 0xf530 ),	/* Offset= -2768 (578) */
/* 3348 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 3350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3354 */	NdrFcLong( 0x3fffffff ),	/* 1073741823 */
/* 3358 */	
			0x11, 0x0,	/* FC_RP */
/* 3360 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3362) */
/* 3362 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 3364 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3366 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 3368 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3370 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3372 */	0x0 , 
			0x0,		/* 0 */
/* 3374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3382 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 3384 */	
			0x11, 0x0,	/* FC_RP */
/* 3386 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3388) */
/* 3388 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 3390 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3392 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 3394 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3396 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3398 */	0x0 , 
			0x0,		/* 0 */
/* 3400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3408 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 3410 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 3412 */	NdrFcShort( 0xff34 ),	/* Offset= -204 (3208) */
/* 3414 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3416 */	NdrFcShort( 0xfb84 ),	/* Offset= -1148 (2268) */
/* 3418 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 3420 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3424 */	NdrFcLong( 0x3fffffff ),	/* 1073741823 */
/* 3428 */	
			0x11, 0x0,	/* FC_RP */
/* 3430 */	NdrFcShort( 0xf6d2 ),	/* Offset= -2350 (1080) */
/* 3432 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 3434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3438 */	NdrFcLong( 0x3fffffff ),	/* 1073741823 */
/* 3442 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 3444 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 3446 */	
			0x11, 0x0,	/* FC_RP */
/* 3448 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3450) */
/* 3450 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 3452 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3454 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 3456 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3458 */	NdrFcShort( 0x10 ),	/* Corr flags:  */
/* 3460 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 3462 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3466 */	NdrFcLong( 0x18 ),	/* 24 */
/* 3470 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 3472 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 3474 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3478 */	NdrFcLong( 0x18 ),	/* 24 */
/* 3482 */	
			0x11, 0x0,	/* FC_RP */
/* 3484 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3486) */
/* 3486 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 3488 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3490 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 3492 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3494 */	NdrFcShort( 0x10 ),	/* Corr flags:  */
/* 3496 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 3498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3502 */	NdrFcLong( 0x18 ),	/* 24 */
/* 3506 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 3508 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 3510 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3514 */	NdrFcLong( 0x18 ),	/* 24 */
/* 3518 */	
			0x11, 0x0,	/* FC_RP */
/* 3520 */	NdrFcShort( 0x22 ),	/* Offset= 34 (3554) */
/* 3522 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 3524 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 3526 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 3528 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3530 */	0x0 , 
			0x0,		/* 0 */
/* 3532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3540 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3542) */
/* 3542 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3544 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3546 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3550 */	NdrFcShort( 0xf3b0 ),	/* Offset= -3152 (398) */
/* 3552 */	NdrFcShort( 0x0 ),	/* Offset= 0 (3552) */
/* 3554 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3556 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3560 */	NdrFcShort( 0x0 ),	/* Offset= 0 (3560) */
/* 3562 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3564 */	0x0,		/* 0 */
			NdrFcShort( 0xffd5 ),	/* Offset= -43 (3522) */
			0x5b,		/* FC_END */
/* 3568 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 3570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3574 */	NdrFcLong( 0x3fffffff ),	/* 1073741823 */
/* 3578 */	
			0x11, 0x0,	/* FC_RP */
/* 3580 */	NdrFcShort( 0x98 ),	/* Offset= 152 (3732) */
/* 3582 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 3584 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 3586 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 3588 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3590 */	0x0 , 
			0x0,		/* 0 */
/* 3592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3600 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3602) */
/* 3602 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3604 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3606 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3610 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 3612 */	NdrFcLong( 0x3 ),	/* 3 */
/* 3616 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 3618 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3622 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 3624 */	NdrFcLong( 0x4 ),	/* 4 */
/* 3628 */	NdrFcShort( 0xf1d6 ),	/* Offset= -3626 (2) */
/* 3630 */	NdrFcLong( 0x5 ),	/* 5 */
/* 3634 */	NdrFcShort( 0xf1d0 ),	/* Offset= -3632 (2) */
/* 3636 */	NdrFcLong( 0x6 ),	/* 6 */
/* 3640 */	NdrFcShort( 0xf1ca ),	/* Offset= -3638 (2) */
/* 3642 */	NdrFcLong( 0x2 ),	/* 2 */
/* 3646 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 3648 */	NdrFcLong( 0x7 ),	/* 7 */
/* 3652 */	NdrFcShort( 0xf20c ),	/* Offset= -3572 (80) */
/* 3654 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3653) */
/* 3656 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3658 */	NdrFcShort( 0xc ),	/* 12 */
/* 3660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3662 */	NdrFcShort( 0x0 ),	/* Offset= 0 (3662) */
/* 3664 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3666 */	0x0,		/* 0 */
			NdrFcShort( 0xffab ),	/* Offset= -85 (3582) */
			0x5b,		/* FC_END */
/* 3670 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3672 */	NdrFcShort( 0x14 ),	/* 20 */
/* 3674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3676 */	NdrFcShort( 0xa ),	/* Offset= 10 (3686) */
/* 3678 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 3680 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3682 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (3656) */
/* 3684 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3686 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3688 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3690 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 3692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3694 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 3696 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 3698 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3700 */	0x0 , 
			0x0,		/* 0 */
/* 3702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3710 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3714 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3716 */	0x0 , 
			0x0,		/* 0 */
/* 3718 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3726 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3728 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (3670) */
/* 3730 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3732 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3734 */	NdrFcShort( 0xc ),	/* 12 */
/* 3736 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (3690) */
/* 3738 */	NdrFcShort( 0x0 ),	/* Offset= 0 (3738) */
/* 3740 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3742 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3744 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 3746 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3748) */
/* 3748 */	
			0x12, 0x0,	/* FC_UP */
/* 3750 */	NdrFcShort( 0x40 ),	/* Offset= 64 (3814) */
/* 3752 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3754 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3758 */	NdrFcShort( 0xa ),	/* Offset= 10 (3768) */
/* 3760 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3762 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3764 */	0x0,		/* 0 */
			NdrFcShort( 0xff93 ),	/* Offset= -109 (3656) */
			0x5b,		/* FC_END */
/* 3768 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3770 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3772 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 3774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3776 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 3778 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 3780 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3782 */	0x0 , 
			0x0,		/* 0 */
/* 3784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3788 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3792 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3796 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3798 */	0x0 , 
			0x0,		/* 0 */
/* 3800 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3804 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3808 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3810 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (3752) */
/* 3812 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3814 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3816 */	NdrFcShort( 0xc ),	/* 12 */
/* 3818 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (3772) */
/* 3820 */	NdrFcShort( 0x0 ),	/* Offset= 0 (3820) */
/* 3822 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3824 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3826 */	
			0x11, 0x0,	/* FC_RP */
/* 3828 */	NdrFcShort( 0x3a ),	/* Offset= 58 (3886) */
/* 3830 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 3832 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 3834 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 3836 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3838 */	0x0 , 
			0x0,		/* 0 */
/* 3840 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3844 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3848 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3850) */
/* 3850 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3852 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3854 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3858 */	NdrFcShort( 0x4 ),	/* Offset= 4 (3862) */
/* 3860 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3859) */
/* 3862 */	
			0x12, 0x0,	/* FC_UP */
/* 3864 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3866) */
/* 3866 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 3868 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3870 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 3872 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 3874 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3876 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3878 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3880 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3882 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 3884 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3886 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3888 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3892 */	NdrFcShort( 0x0 ),	/* Offset= 0 (3892) */
/* 3894 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3896 */	0x0,		/* 0 */
			NdrFcShort( 0xffbd ),	/* Offset= -67 (3830) */
			0x5b,		/* FC_END */
/* 3900 */	
			0x11, 0x0,	/* FC_RP */
/* 3902 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3904) */
/* 3904 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 3906 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3908 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 3910 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3912 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3914 */	0x0 , 
			0x0,		/* 0 */
/* 3916 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3920 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3924 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 3926 */	
			0x11, 0x0,	/* FC_RP */
/* 3928 */	NdrFcShort( 0x2c ),	/* Offset= 44 (3972) */
/* 3930 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 3932 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3934 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 3936 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 3938 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3940 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 3942 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3944 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (3930) */
			0x5b,		/* FC_END */
/* 3948 */	
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 3950 */	NdrFcShort( 0x208 ),	/* 520 */
/* 3952 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 3954 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 3956 */	NdrFcShort( 0x228 ),	/* 552 */
/* 3958 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3960 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (3936) */
/* 3962 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3964 */	NdrFcShort( 0xf69a ),	/* Offset= -2406 (1558) */
/* 3966 */	0xb,		/* FC_HYPER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3968 */	0x0,		/* 0 */
			NdrFcShort( 0xffeb ),	/* Offset= -21 (3948) */
			0x5b,		/* FC_END */
/* 3972 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 3974 */	NdrFcShort( 0x228 ),	/* 552 */
/* 3976 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 3978 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3980 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3982 */	0x0 , 
			0x0,		/* 0 */
/* 3984 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3992 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3994 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (3954) */
/* 3996 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3998 */	
			0x11, 0x0,	/* FC_RP */
/* 4000 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (3936) */
/* 4002 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 4004 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4006) */
/* 4006 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 4008 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4010 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 4012 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4014 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 4016 */	0x0 , 
			0x0,		/* 0 */
/* 4018 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4026 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 4028 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 4030 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4032) */
/* 4032 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 4034 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4036 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 4038 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4040 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 4042 */	0x0 , 
			0x0,		/* 0 */
/* 4044 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4048 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4052 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 4054 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 4056 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4058) */
/* 4058 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 4060 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4062 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 4064 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4066 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 4068 */	0x0 , 
			0x0,		/* 0 */
/* 4070 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4078 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 4080 */	
			0x11, 0x0,	/* FC_RP */
/* 4082 */	NdrFcShort( 0x88 ),	/* Offset= 136 (4218) */
/* 4084 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 4086 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 4088 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 4090 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 4092 */	0x0 , 
			0x0,		/* 0 */
/* 4094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4098 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4102 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4104) */
/* 4104 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4106 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4108 */	NdrFcLong( 0x1 ),	/* 1 */
/* 4112 */	NdrFcShort( 0x4 ),	/* Offset= 4 (4116) */
/* 4114 */	NdrFcShort( 0xffff ),	/* Offset= -1 (4113) */
/* 4116 */	
			0x12, 0x0,	/* FC_UP */
/* 4118 */	NdrFcShort( 0x44 ),	/* Offset= 68 (4186) */
/* 4120 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 4122 */	NdrFcShort( 0xc ),	/* 12 */
/* 4124 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 4126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4128 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 4130 */	0x0 , 
			0x0,		/* 0 */
/* 4132 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4140 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 4142 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 4144 */	NdrFcShort( 0xc ),	/* 12 */
/* 4146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4148 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4150 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4152 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4154 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4156 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4158 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 4160 */	0x0,		/* 0 */
			NdrFcShort( 0xfb5f ),	/* Offset= -1185 (2976) */
			0x5b,		/* FC_END */
/* 4164 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 4166 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4168 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 4170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4172 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 4174 */	0x0 , 
			0x0,		/* 0 */
/* 4176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4180 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4184 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 4186 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 4188 */	NdrFcShort( 0xc ),	/* 12 */
/* 4190 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 4192 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4194 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4196 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4198 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 4200 */	NdrFcShort( 0xffb0 ),	/* Offset= -80 (4120) */
/* 4202 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 4204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4208 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 4210 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (4164) */
/* 4212 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 4214 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4216 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 4218 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 4220 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4224 */	NdrFcShort( 0x0 ),	/* Offset= 0 (4224) */
/* 4226 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 4228 */	0x0,		/* 0 */
			NdrFcShort( 0xff6f ),	/* Offset= -145 (4084) */
			0x5b,		/* FC_END */
/* 4232 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 4234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4238 */	NdrFcLong( 0x3fffffff ),	/* 1073741823 */
/* 4242 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 4244 */	NdrFcShort( 0x3a ),	/* Offset= 58 (4302) */
/* 4246 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x6,		/* FC_SHORT */
/* 4248 */	0x6,		/* Corr desc: FC_SHORT */
			0x0,		/*  */
/* 4250 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 4252 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 4254 */	0x0 , 
			0x0,		/* 0 */
/* 4256 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4264 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4266) */
/* 4266 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4268 */	NdrFcShort( 0x5 ),	/* 5 */
/* 4270 */	NdrFcLong( 0x1 ),	/* 1 */
/* 4274 */	NdrFcShort( 0xef50 ),	/* Offset= -4272 (2) */
/* 4276 */	NdrFcLong( 0x2 ),	/* 2 */
/* 4280 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 4282 */	NdrFcLong( 0x3 ),	/* 3 */
/* 4286 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 4288 */	NdrFcLong( 0x4 ),	/* 4 */
/* 4292 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 4294 */	NdrFcLong( 0x5 ),	/* 5 */
/* 4298 */	NdrFcShort( 0xef86 ),	/* Offset= -4218 (80) */
/* 4300 */	NdrFcShort( 0xffff ),	/* Offset= -1 (4299) */
/* 4302 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 4304 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4308 */	NdrFcShort( 0x0 ),	/* Offset= 0 (4308) */
/* 4310 */	0x6,		/* FC_SHORT */
			0x42,		/* FC_STRUCTPAD6 */
/* 4312 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 4314 */	NdrFcShort( 0xffbc ),	/* Offset= -68 (4246) */
/* 4316 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 4318 */	
			0x11, 0x0,	/* FC_RP */
/* 4320 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4322) */
/* 4322 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 4324 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4328 */	NdrFcShort( 0xa ),	/* Offset= 10 (4338) */
/* 4330 */	0x36,		/* FC_POINTER */
			0x40,		/* FC_STRUCTPAD4 */
/* 4332 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 4334 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (4302) */
/* 4336 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 4338 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4340 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4342 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 4344 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4346) */
/* 4346 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 4348 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4350) */
/* 4350 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 4352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4354 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 4356 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4358 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 4360 */	0x0 , 
			0x0,		/* 0 */
/* 4362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4366 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4370 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 4374 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 4376 */	0x0 , 
			0x0,		/* 0 */
/* 4378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4386 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 4388 */	NdrFcShort( 0xffbe ),	/* Offset= -66 (4322) */
/* 4390 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 4392 */	
			0x11, 0x0,	/* FC_RP */
/* 4394 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (4618) */
/* 4396 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x6,		/* FC_SHORT */
/* 4398 */	0x6,		/* Corr desc: FC_SHORT */
			0x0,		/*  */
/* 4400 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 4402 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 4404 */	0x0 , 
			0x0,		/* 0 */
/* 4406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4414 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4416) */
/* 4416 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4418 */	NdrFcShort( 0x5 ),	/* 5 */
/* 4420 */	NdrFcLong( 0x1 ),	/* 1 */
/* 4424 */	NdrFcShort( 0x1c ),	/* Offset= 28 (4452) */
/* 4426 */	NdrFcLong( 0x2 ),	/* 2 */
/* 4430 */	NdrFcShort( 0x3c ),	/* Offset= 60 (4490) */
/* 4432 */	NdrFcLong( 0x3 ),	/* 3 */
/* 4436 */	NdrFcShort( 0x48 ),	/* Offset= 72 (4508) */
/* 4438 */	NdrFcLong( 0x4 ),	/* 4 */
/* 4442 */	NdrFcShort( 0xf632 ),	/* Offset= -2510 (1932) */
/* 4444 */	NdrFcLong( 0x5 ),	/* 5 */
/* 4448 */	NdrFcShort( 0xf33e ),	/* Offset= -3266 (1182) */
/* 4450 */	NdrFcShort( 0xffff ),	/* Offset= -1 (4449) */
/* 4452 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 4454 */	NdrFcShort( 0x28 ),	/* 40 */
/* 4456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4458 */	NdrFcShort( 0xc ),	/* Offset= 12 (4470) */
/* 4460 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 4462 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 4464 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 4466 */	0xb,		/* FC_HYPER */
			0x8,		/* FC_LONG */
/* 4468 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 4470 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4472 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4474 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4476 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4478 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4480 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4482 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4484 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4486 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4488 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4490 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 4492 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4496 */	NdrFcShort( 0x0 ),	/* Offset= 0 (4496) */
/* 4498 */	0xb,		/* FC_HYPER */
			0x8,		/* FC_LONG */
/* 4500 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 4502 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 4504 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 4506 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 4508 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 4510 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4514 */	NdrFcShort( 0x12 ),	/* Offset= 18 (4532) */
/* 4516 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 4518 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 4520 */	0x36,		/* FC_POINTER */
			0x40,		/* FC_STRUCTPAD4 */
/* 4522 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 4524 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 4526 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 4528 */	0x36,		/* FC_POINTER */
			0x40,		/* FC_STRUCTPAD4 */
/* 4530 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 4532 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4534 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4536 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4538 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4540 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4542 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4544 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4546 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4548 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4550 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4552 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4554 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4556 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 4558 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 4560 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 4562 */	NdrFcShort( 0x48 ),	/* 72 */
/* 4564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4566 */	NdrFcShort( 0x0 ),	/* Offset= 0 (4566) */
/* 4568 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 4570 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 4572 */	0x0,		/* 0 */
			NdrFcShort( 0xff4f ),	/* Offset= -177 (4396) */
			0x5b,		/* FC_END */
/* 4576 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 4578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4580 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 4582 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 4584 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 4586 */	0x0 , 
			0x0,		/* 0 */
/* 4588 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4596 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 4600 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 4602 */	0x0 , 
			0x0,		/* 0 */
/* 4604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4612 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 4614 */	NdrFcShort( 0xffca ),	/* Offset= -54 (4560) */
/* 4616 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 4618 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 4620 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4622 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (4576) */
/* 4624 */	NdrFcShort( 0x0 ),	/* Offset= 0 (4624) */
/* 4626 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 4628 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const spoolss_MIDL_EXPR_FORMAT_STRING spoolss__MIDL_ExprFormatString =
    {
        0,
        {
			0x4,		/* FC_EXPR_OPER */
			0x1b,		/* OP_AND */
/*  2 */	0x0,		/*  */
			0x0,		/* 0 */
/*  4 */	0x3,		/* FC_EXPR_VAR */
			0x8,		/* FC_LONG */
/*  6 */	NdrFcShort( 0xfff8 ),	/* -8 */
/*  8 */	0x1,		/* FC_EXPR_CONST32 */
			0x8,		/* FC_LONG */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcLong( 0xffff ),	/* 65535 */
/* 16 */	0x4,		/* FC_EXPR_OPER */
			0x1b,		/* OP_AND */
/* 18 */	0x0,		/*  */
			0x0,		/* 0 */
/* 20 */	0x1,		/* FC_EXPR_CONST32 */
			0x8,		/* FC_LONG */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcLong( 0xffffff ),	/* 16777215 */
/* 28 */	0x3,		/* FC_EXPR_VAR */
			0x8,		/* FC_LONG */
/* 30 */	NdrFcShort( 0xfffc ),	/* -4 */

			0x0
        }
    };

static const NDR_RUNDOWN RundownRoutines[] = 
    {
    0
    };


static const unsigned short spoolss__MIDL_ExprFormatStringOffsetTable[] =
{
0,
16,
};

static const NDR_EXPR_DESC  spoolss_ExprDesc = 
 {
spoolss__MIDL_ExprFormatStringOffsetTable,
spoolss__MIDL_ExprFormatString.Format
};

static const unsigned short DefaultIfName_FormatStringOffsetTable[] =
    {
    0,
    72,
    132,
    192,
    264,
    348,
    408,
    450,
    516,
    582,
    624,
    696,
    768,
    834,
    882,
    936,
    1008,
    1074,
    1128,
    1170,
    1230,
    1272,
    1314,
    1374,
    1416,
    1482,
    1530,
    1602,
    1668,
    1722,
    1764,
    1812,
    1860,
    1932,
    1986,
    2058,
    2124,
    2190,
    2238,
    2286,
    2334,
    2388,
    2460,
    2502,
    2538,
    2574,
    2646,
    2688,
    2736,
    2784,
    2826,
    2874,
    2946,
    3000,
    3096,
    3168,
    3234,
    3276,
    3342,
    3408,
    3468,
    3510,
    3564,
    3642,
    3678,
    3738,
    3810,
    3882,
    3942,
    4008,
    4074,
    4140,
    4188,
    4278,
    4326,
    4386,
    4428,
    4470,
    4542,
    4620,
    4692,
    4758,
    4812,
    4860,
    4926,
    4986,
    5040,
    5082,
    5142,
    5226,
    5274,
    5340,
    5412,
    5490,
    5550,
    5616,
    5658,
    5724,
    5784,
    5814,
    5856,
    5916,
    5982,
    6048,
    6120,
    6168,
    6252,
    6312,
    6360,
    6456,
    6516,
    6570,
    6624,
    6684,
    6720,
    6768,
    6816
    };


static const MIDL_STUB_DESC DefaultIfName_StubDesc = 
    {
    (void *)& DefaultIfName___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    RundownRoutines,
    0,
    0,
    0,
    spoolss__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    &spoolss_ExprDesc
    };

static const RPC_DISPATCH_FUNCTION DefaultIfName_table[] =
    {
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    0
    };
static const RPC_DISPATCH_TABLE DefaultIfName_v1_0_DispatchTable = 
    {
    117,
    (RPC_DISPATCH_FUNCTION*)DefaultIfName_table
    };

static const SERVER_ROUTINE DefaultIfName_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)Proc0_RpcEnumPrinters,
    (SERVER_ROUTINE)Proc1_RpcOpenPrinter,
    (SERVER_ROUTINE)Proc2_RpcSetJob,
    (SERVER_ROUTINE)Proc3_RpcGetJob,
    (SERVER_ROUTINE)Proc4_RpcEnumJobs,
    (SERVER_ROUTINE)Proc5_RpcAddPrinter,
    (SERVER_ROUTINE)Proc6_RpcDeletePrinter,
    (SERVER_ROUTINE)Proc7_RpcSetPrinter,
    (SERVER_ROUTINE)Proc8_RpcGetPrinter,
    (SERVER_ROUTINE)Proc9_RpcAddPrinterDriver,
    (SERVER_ROUTINE)Proc10_RpcEnumPrinterDrivers,
    (SERVER_ROUTINE)Proc11_RpcGetPrinterDriver,
    (SERVER_ROUTINE)Proc12_RpcGetPrinterDriverDirectory,
    (SERVER_ROUTINE)Proc13_RpcDeletePrinterDriver,
    (SERVER_ROUTINE)Proc14_RpcAddPrintProcessor,
    (SERVER_ROUTINE)Proc15_RpcEnumPrintProcessors,
    (SERVER_ROUTINE)Proc16_RpcGetPrintProcessorDirectory,
    (SERVER_ROUTINE)Proc17_RpcStartDocPrinter,
    (SERVER_ROUTINE)Proc18_RpcStartPagePrinter,
    (SERVER_ROUTINE)Proc19_RpcWritePrinter,
    (SERVER_ROUTINE)Proc20_RpcEndPagePrinter,
    (SERVER_ROUTINE)Proc21_RpcAbortPrinter,
    (SERVER_ROUTINE)Proc22_RpcReadPrinter,
    (SERVER_ROUTINE)Proc23_RpcEndDocPrinter,
    (SERVER_ROUTINE)Proc24_RpcAddJob,
    (SERVER_ROUTINE)Proc25_RpcScheduleJob,
    (SERVER_ROUTINE)Proc26_RpcGetPrinterData,
    (SERVER_ROUTINE)Proc27_RpcSetPrinterData,
    (SERVER_ROUTINE)Proc28_RpcWaitForPrinterChange,
    (SERVER_ROUTINE)Proc29_RpcClosePrinter,
    (SERVER_ROUTINE)Proc30_RpcAddForm,
    (SERVER_ROUTINE)Proc31_RpcDeleteForm,
    (SERVER_ROUTINE)Proc32_RpcGetForm,
    (SERVER_ROUTINE)Proc33_RpcSetForm,
    (SERVER_ROUTINE)Proc34_RpcEnumForms,
    (SERVER_ROUTINE)Proc35_RpcEnumPorts,
    (SERVER_ROUTINE)Proc36_RpcEnumMonitors,
    (SERVER_ROUTINE)Proc37_RpcAddPort,
    (SERVER_ROUTINE)Proc38_RpcConfigurePort,
    (SERVER_ROUTINE)Proc39_RpcDeletePort,
    (SERVER_ROUTINE)Proc40_RpcCreatePrinterIC,
    (SERVER_ROUTINE)Proc41_RpcPlayGdiScriptOnPrinterIC,
    (SERVER_ROUTINE)Proc42_RpcDeletePrinterIC,
    (SERVER_ROUTINE)Proc43_RpcAddPrinterConnection,
    (SERVER_ROUTINE)Proc44_RpcDeletePrinterConnection,
    (SERVER_ROUTINE)Proc45_RpcPrinterMessageBox,
    (SERVER_ROUTINE)Proc46_RpcAddMonitor,
    (SERVER_ROUTINE)Proc47_RpcDeleteMonitor,
    (SERVER_ROUTINE)Proc48_RpcDeletePrintProcessor,
    (SERVER_ROUTINE)Proc49_RpcAddPrintProvidor,
    (SERVER_ROUTINE)Proc50_RpcDeletePrintProvidor,
    (SERVER_ROUTINE)Proc51_RpcEnumPrintProcessorDatatypes,
    (SERVER_ROUTINE)Proc52_RpcResetPrinter,
    (SERVER_ROUTINE)Proc53_RpcGetPrinterDriver2,
    (SERVER_ROUTINE)Proc54_RpcClientFindFirstPrinterChangeNotification,
    (SERVER_ROUTINE)Proc55_RpcFindNextPrinterChangeNotification,
    (SERVER_ROUTINE)Proc56_RpcFindClosePrinterChangeNotification,
    (SERVER_ROUTINE)Proc57_NThreadingLibrary__TWorkItem__NotifyCancel,
    (SERVER_ROUTINE)Proc58_RpcReplyOpenPrinter,
    (SERVER_ROUTINE)Proc59_RpcRouterReplyPrinter,
    (SERVER_ROUTINE)Proc60_RpcReplyClosePrinter,
    (SERVER_ROUTINE)Proc61_RpcAddPortEx,
    (SERVER_ROUTINE)Proc62_RpcRemoteFindFirstPrinterChangeNotification,
    (SERVER_ROUTINE)Proc63_RpcSetAllocFailCount,
    (SERVER_ROUTINE)Proc64_RpcResetPrinterEx,
    (SERVER_ROUTINE)Proc65_RpcRemoteFindFirstPrinterChangeNotificationEx,
    (SERVER_ROUTINE)Proc66_RpcRouterReplyPrinterEx,
    (SERVER_ROUTINE)Proc67_RpcRouterRefreshPrinterChangeNotification,
    (SERVER_ROUTINE)Proc68_RpcSetAllocFailCount,
    (SERVER_ROUTINE)Proc69_RpcOpenPrinterEx,
    (SERVER_ROUTINE)Proc70_RpcAddPrinterEx,
    (SERVER_ROUTINE)Proc71_RpcSetPort,
    (SERVER_ROUTINE)Proc72_RpcEnumPrinterData,
    (SERVER_ROUTINE)Proc73_RpcDeletePrinterData,
    (SERVER_ROUTINE)Proc74_NThreadingLibrary__TWorkItem__NotifyCancel,
    (SERVER_ROUTINE)Proc75_NThreadingLibrary__TWorkItem__NotifyCancel,
    (SERVER_ROUTINE)Proc76_NThreadingLibrary__TWorkItem__NotifyCancel,
    (SERVER_ROUTINE)Proc77_RpcSetPrinterDataEx,
    (SERVER_ROUTINE)Proc78_RpcGetPrinterDataEx,
    (SERVER_ROUTINE)Proc79_RpcEnumPrinterDataEx,
    (SERVER_ROUTINE)Proc80_RpcEnumPrinterKey,
    (SERVER_ROUTINE)Proc81_RpcDeletePrinterDataEx,
    (SERVER_ROUTINE)Proc82_RpcDeletePrinterKey,
    (SERVER_ROUTINE)Proc83_RpcSeekPrinter,
    (SERVER_ROUTINE)Proc84_RpcDeletePrinterDriverEx,
    (SERVER_ROUTINE)Proc85_RpcAddPerMachineConnection,
    (SERVER_ROUTINE)Proc86_RpcDeletePerMachineConnection,
    (SERVER_ROUTINE)Proc87_RpcEnumPerMachineConnections,
    (SERVER_ROUTINE)Proc88_RpcXcvData,
    (SERVER_ROUTINE)Proc89_RpcAddPrinterDriverEx,
    (SERVER_ROUTINE)Proc90_RpcSplOpenPrinter,
    (SERVER_ROUTINE)Proc91_RpcGetSpoolFileInfo,
    (SERVER_ROUTINE)Proc92_RpcCommitSpoolData,
    (SERVER_ROUTINE)Proc93_RpcGetSpoolFileInfo2,
    (SERVER_ROUTINE)Proc94_RpcCommitSpoolData2,
    (SERVER_ROUTINE)Proc95_RpcCloseSpoolFileHandle,
    (SERVER_ROUTINE)Proc96_RpcFlushPrinter,
    (SERVER_ROUTINE)Proc97_RpcSendRecvBidiData,
    (SERVER_ROUTINE)Proc98_RpcAddDriverCatalog,
    (SERVER_ROUTINE)Proc99_RpcAddPrinterConnection2,
    (SERVER_ROUTINE)Proc100_RpcInstallPrinterDriverFromPackage,
    (SERVER_ROUTINE)Proc102_RpcGetCorePrinterDrivers,
    (SERVER_ROUTINE)Proc103_RpcCorePrinterDriverInstalled,
    (SERVER_ROUTINE)Proc104_RpcGetPrinterDriverPackagePath,
    (SERVER_ROUTINE)Proc105_RpcDeletePrinterDriverPackage,
    (SERVER_ROUTINE)Proc106_RpcFindCompatibleDriver,
    (SERVER_ROUTINE)Proc107_RpcReportJobProcessingProgress,
    (SERVER_ROUTINE)Proc108_RpcSetSpoolerPolicy,
    (SERVER_ROUTINE)Proc109_RpcInternalGetPrinterDriver,
    (SERVER_ROUTINE)Proc110_RpcGetJobNamedPropertyValue,
    (SERVER_ROUTINE)Proc111_RpcSetJobNamedProperty,
    (SERVER_ROUTINE)Proc112_RpcDeleteJobNamedProperty,
    (SERVER_ROUTINE)Proc113_RpcEnumJobNamedProperties,
    (SERVER_ROUTINE)Proc114_RpcCreateAppSandbox,
    (SERVER_ROUTINE)Proc115_RpcGetUserPropertyBag,
    (SERVER_ROUTINE)Proc116_RpcLogJobInfoForBranchOffice,
    (SERVER_ROUTINE)Proc117_RpcRegeneratePrintDeviceCapabilities
    };

static const MIDL_SERVER_INFO DefaultIfName_ServerInfo = 
    {
    &DefaultIfName_StubDesc,
    DefaultIfName_ServerRoutineTable,
    spoolss__MIDL_ProcFormatString.Format,
    DefaultIfName_FormatStringOffsetTable,
    0,
    0,
    0,
    0};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

