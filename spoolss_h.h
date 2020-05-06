

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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

 

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __spoolss_h_h__
#define __spoolss_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __DefaultIfName_INTERFACE_DEFINED__
#define __DefaultIfName_INTERFACE_DEFINED__

/* interface DefaultIfName */
/* [implicit_handle][version][uuid] */ 

typedef  wchar_t* STRING_HANDLE;
typedef void* PRINTER_HANDLE;


typedef struct DEVMODE_CONTAINER
    {
    long StructMember0;
    /* [size_is][unique] */ unsigned char *StructMember1;
    } 	Struct_80_t;

typedef /* [switch_type] */ /* [switch_type] */ union union_124
    {
    /* [case()][unique] */ struct Struct_172_t *unionMember_1;
    /* [case()][unique] */ struct Struct_228_t *unionMember_2;
    /* [case()][unique] */ struct Struct_310_t *unionMember_3;
    /* [case()][unique] */ struct Struct_322_t *unionMember_4;
    } 	union_124;

typedef struct Struct_158_t
    {
    short StructMember0;
    short StructMember1;
    short StructMember2;
    short StructMember3;
    short StructMember4;
    short StructMember5;
    short StructMember6;
    short StructMember7;
    } 	Struct_158_t;

typedef struct Struct_172_t
    {
    long StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    /* [string][unique] */ wchar_t *StructMember2;
    /* [string][unique] */ wchar_t *StructMember3;
    /* [string][unique] */ wchar_t *StructMember4;
    /* [string][unique] */ wchar_t *StructMember5;
    /* [string][unique] */ wchar_t *StructMember6;
    long StructMember7;
    long StructMember8;
    long StructMember9;
    long StructMember10;
    long StructMember11;
    struct Struct_158_t StructMember12;
    } 	Struct_172_t;

typedef struct Struct_228_t
    {
    long StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    /* [string][unique] */ wchar_t *StructMember2;
    /* [string][unique] */ wchar_t *StructMember3;
    /* [string][unique] */ wchar_t *StructMember4;
    /* [string][unique] */ wchar_t *StructMember5;
    /* [string][unique] */ wchar_t *StructMember6;
    /* [string][unique] */ wchar_t *StructMember7;
    /* [string][unique] */ wchar_t *StructMember8;
    /* [string][unique] */ wchar_t *StructMember9;
    unsigned __int3264 StructMember10;
    /* [string][unique] */ wchar_t *StructMember11;
    unsigned __int3264 StructMember12;
    long StructMember13;
    long StructMember14;
    long StructMember15;
    long StructMember16;
    long StructMember17;
    long StructMember18;
    long StructMember19;
    struct Struct_158_t StructMember20;
    long StructMember21;
    long StructMember22;
    } 	Struct_228_t;

typedef struct Struct_310_t
    {
    long StructMember0;
    long StructMember1;
    long StructMember2;
    } 	Struct_310_t;

typedef struct Struct_322_t
    {
    long StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    /* [string][unique] */ wchar_t *StructMember2;
    /* [string][unique] */ wchar_t *StructMember3;
    /* [string][unique] */ wchar_t *StructMember4;
    /* [string][unique] */ wchar_t *StructMember5;
    /* [string][unique] */ wchar_t *StructMember6;
    /* [string][unique] */ wchar_t *StructMember7;
    /* [string][unique] */ wchar_t *StructMember8;
    /* [string][unique] */ wchar_t *StructMember9;
    unsigned __int3264 StructMember10;
    /* [string][unique] */ wchar_t *StructMember11;
    unsigned __int3264 StructMember12;
    long StructMember13;
    long StructMember14;
    long StructMember15;
    long StructMember16;
    long StructMember17;
    long StructMember18;
    long StructMember19;
    struct Struct_158_t StructMember20;
    long StructMember21;
    long StructMember22;
    long StructMember23;
    } 	Struct_322_t;

typedef struct Struct_400_t
    {
    long StructMember0;
    /* [switch_is] */ union union_124 StructMember1;
    } 	Struct_400_t;

typedef /* [switch_type] */ /* [switch_type] */ union union_486
    {
    /* [case()][unique] */ struct Struct_556_t *unionMember_0;
    /* [case()][unique] */ struct Struct_610_t *unionMember_1;
    /* [case()][unique] */ struct Struct_640_t *unionMember_2;
    /* [case()][unique] */ struct Struct_718_t *unionMember_3;
    /* [case()][unique] */ struct Struct_732_t *unionMember_4;
    /* [case()][unique] */ struct Struct_758_t *unionMember_5;
    /* [case()][unique] */ struct Struct_786_t *unionMember_6;
    /* [case()][unique] */ struct Struct_796_t *unionMember_7;
    /* [case()][unique] */ struct Struct_718_t *unionMember_8;
    /* [case()][unique] */ struct Struct_718_t *unionMember_9;
    } 	union_486;

typedef struct Struct_556_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    long StructMember2;
    long StructMember3;
    long StructMember4;
    struct Struct_158_t StructMember5;
    long StructMember6;
    long StructMember7;
    long StructMember8;
    long StructMember9;
    long StructMember10;
    long StructMember11;
    long StructMember12;
    long StructMember13;
    long StructMember14;
    long StructMember15;
    long StructMember16;
    long StructMember17;
    long StructMember18;
    long StructMember19;
    long StructMember20;
    long StructMember21;
    long StructMember22;
    long StructMember23;
    short StructMember24;
    short StructMember25;
    long StructMember26;
    long StructMember27;
    long StructMember28;
    } 	Struct_556_t;

typedef struct Struct_610_t
    {
    long StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    /* [string][unique] */ wchar_t *StructMember2;
    /* [string][unique] */ wchar_t *StructMember3;
    } 	Struct_610_t;

typedef struct Struct_640_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    /* [string][unique] */ wchar_t *StructMember2;
    /* [string][unique] */ wchar_t *StructMember3;
    /* [string][unique] */ wchar_t *StructMember4;
    /* [string][unique] */ wchar_t *StructMember5;
    /* [string][unique] */ wchar_t *StructMember6;
    unsigned __int3264 StructMember7;
    /* [string][unique] */ wchar_t *StructMember8;
    /* [string][unique] */ wchar_t *StructMember9;
    /* [string][unique] */ wchar_t *StructMember10;
    /* [string][unique] */ wchar_t *StructMember11;
    unsigned __int3264 StructMember12;
    long StructMember13;
    long StructMember14;
    long StructMember15;
    long StructMember16;
    long StructMember17;
    long StructMember18;
    long StructMember19;
    long StructMember20;
    } 	Struct_640_t;

typedef struct Struct_718_t
    {
    unsigned __int3264 StructMember0;
    } 	Struct_718_t;

typedef struct Struct_732_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    long StructMember2;
    } 	Struct_732_t;

typedef struct Struct_758_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    long StructMember2;
    long StructMember3;
    long StructMember4;
    } 	Struct_758_t;

typedef struct Struct_786_t
    {
    long StructMember0;
    } 	Struct_786_t;

typedef struct Struct_796_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    long StructMember1;
    } 	Struct_796_t;

typedef struct Struct_812_t
    {
    long StructMember0;
    /* [switch_is] */ union union_486 StructMember1;
    } 	Struct_812_t;

typedef struct Struct_832_t
    {
    long StructMember0;
    /* [size_is][unique] */ unsigned char *StructMember1;
    } 	Struct_832_t;

typedef /* [switch_type] */ /* [switch_type] */ union union_882
    {
    /* [case()][unique] */ struct Struct_928_t *unionMember_1;
    /* [case()][unique] */ struct Struct_946_t *unionMember_2;
    /* [case()][unique] */ struct Struct_1008_t *unionMember_3;
    /* [case()][unique] */ struct Struct_1092_t *unionMember_4;
    /* [case()][unique] */ struct Struct_1170_t *unionMember_6;
    /* [case()][unique] */ struct Struct_1308_t *unionMember_8;
    } 	union_882;

typedef struct Struct_928_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    } 	Struct_928_t;

typedef struct Struct_946_t
    {
    long StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    /* [string][unique] */ wchar_t *StructMember2;
    /* [string][unique] */ wchar_t *StructMember3;
    /* [string][unique] */ wchar_t *StructMember4;
    /* [string][unique] */ wchar_t *StructMember5;
    } 	Struct_946_t;

typedef struct Struct_1008_t
    {
    long StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    /* [string][unique] */ wchar_t *StructMember2;
    /* [string][unique] */ wchar_t *StructMember3;
    /* [string][unique] */ wchar_t *StructMember4;
    /* [string][unique] */ wchar_t *StructMember5;
    /* [string][unique] */ wchar_t *StructMember6;
    /* [string][unique] */ wchar_t *StructMember7;
    /* [string][unique] */ wchar_t *StructMember8;
    long StructMember9;
    /* [size_is][unique] */ wchar_t *StructMember10;
    } 	Struct_1008_t;

typedef struct Struct_1092_t
    {
    long StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    /* [string][unique] */ wchar_t *StructMember2;
    /* [string][unique] */ wchar_t *StructMember3;
    /* [string][unique] */ wchar_t *StructMember4;
    /* [string][unique] */ wchar_t *StructMember5;
    /* [string][unique] */ wchar_t *StructMember6;
    /* [string][unique] */ wchar_t *StructMember7;
    /* [string][unique] */ wchar_t *StructMember8;
    long StructMember9;
    /* [size_is][unique] */ wchar_t *StructMember10;
    long StructMember11;
    /* [size_is][unique] */ wchar_t *StructMember12;
    } 	Struct_1092_t;

typedef struct Struct_1162_t
    {
    long StructMember0;
    long StructMember1;
    } 	Struct_1162_t;

typedef struct Struct_1170_t
    {
    long StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    /* [string][unique] */ wchar_t *StructMember2;
    /* [string][unique] */ wchar_t *StructMember3;
    /* [string][unique] */ wchar_t *StructMember4;
    /* [string][unique] */ wchar_t *StructMember5;
    /* [string][unique] */ wchar_t *StructMember6;
    /* [string][unique] */ wchar_t *StructMember7;
    /* [string][unique] */ wchar_t *StructMember8;
    long StructMember9;
    /* [size_is][unique] */ wchar_t *StructMember10;
    long StructMember11;
    /* [size_is][unique] */ wchar_t *StructMember12;
    struct Struct_1162_t StructMember13;
    hyper StructMember14;
    /* [string][unique] */ wchar_t *StructMember15;
    /* [string][unique] */ wchar_t *StructMember16;
    /* [string][unique] */ wchar_t *StructMember17;
    /* [string][unique] */ wchar_t *StructMember18;
    } 	Struct_1170_t;

typedef struct Struct_1308_t
    {
    long StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    /* [string][unique] */ wchar_t *StructMember2;
    /* [string][unique] */ wchar_t *StructMember3;
    /* [string][unique] */ wchar_t *StructMember4;
    /* [string][unique] */ wchar_t *StructMember5;
    /* [string][unique] */ wchar_t *StructMember6;
    /* [string][unique] */ wchar_t *StructMember7;
    /* [string][unique] */ wchar_t *StructMember8;
    long StructMember9;
    /* [size_is][unique] */ wchar_t *StructMember10;
    long StructMember11;
    /* [size_is][unique] */ wchar_t *StructMember12;
    struct Struct_1162_t StructMember13;
    hyper StructMember14;
    /* [string][unique] */ wchar_t *StructMember15;
    /* [string][unique] */ wchar_t *StructMember16;
    /* [string][unique] */ wchar_t *StructMember17;
    /* [string][unique] */ wchar_t *StructMember18;
    /* [string][unique] */ wchar_t *StructMember19;
    /* [string][unique] */ wchar_t *StructMember20;
    long StructMember21;
    /* [size_is][unique] */ wchar_t *StructMember22;
    /* [string][unique] */ wchar_t *StructMember23;
    long StructMember24;
    long StructMember25;
    /* [size_is][unique] */ wchar_t *StructMember26;
    struct Struct_1162_t StructMember27;
    hyper StructMember28;
    } 	Struct_1308_t;

typedef struct Struct_1432_t
    {
    long StructMember0;
    /* [switch_is] */ union union_882 StructMember1;
    } 	Struct_1432_t;

typedef /* [switch_type] */ /* [switch_type] */ union union_1526
    {
    /* [case()][unique] */ struct Struct_1542_t *unionMember_1;
    } 	union_1526;

typedef struct Struct_1542_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    /* [string][unique] */ wchar_t *StructMember2;
    } 	Struct_1542_t;

typedef struct Struct_1566_t
    {
    long StructMember0;
    /* [switch_is] */ union union_1526 StructMember1;
    } 	Struct_1566_t;

typedef /* [switch_type] */ /* [switch_type] */ union union_1716
    {
    /* [case()][unique] */ struct Struct_1748_t *unionMember_1;
    /* [case()][unique] */ struct Struct_1776_t *unionMember_2;
    } 	union_1716;

typedef struct Struct_1738_t
    {
    long StructMember0;
    long StructMember1;
    long StructMember2;
    long StructMember3;
    } 	Struct_1738_t;

typedef struct Struct_1748_t
    {
    long StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    struct Struct_1162_t StructMember2;
    struct Struct_1738_t StructMember3;
    } 	Struct_1748_t;

typedef struct Struct_1776_t
    {
    long StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    struct Struct_1162_t StructMember2;
    struct Struct_1738_t StructMember3;
    /* [string][unique] */ unsigned char *StructMember4;
    long StructMember5;
    /* [string][unique] */ wchar_t *StructMember6;
    long StructMember7;
    /* [string][unique] */ wchar_t *StructMember8;
    short StructMember9;
    } 	Struct_1776_t;

typedef struct Struct_1822_t
    {
    long StructMember0;
    /* [switch_is] */ union union_1716 StructMember1;
    } 	Struct_1822_t;

typedef /* [switch_type] */ /* [switch_type] */ union union_1958
    {
    /* [case()][unique] */ struct Struct_1980_t *unionMember_1;
    /* [case()][unique] */ struct Struct_1998_t *unionMember_2;
    } 	union_1958;

typedef struct Struct_1980_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    } 	Struct_1980_t;

typedef struct Struct_1998_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    /* [string][unique] */ wchar_t *StructMember2;
    } 	Struct_1998_t;

typedef struct Struct_2022_t
    {
    long StructMember0;
    /* [switch_is] */ union union_1958 StructMember1;
    } 	Struct_2022_t;

typedef /* [switch_type] */ /* [switch_type] */ union union_2062
    {
    /* [case()][unique] */ struct Struct_2084_t *unionMember_1;
    /* [case()][unique] */ struct Struct_2134_t *unionMember_2;
    } 	union_2062;

typedef struct Struct_2084_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    /* [string][unique] */ wchar_t *StructMember2;
    } 	Struct_2084_t;

typedef struct Struct_2134_t
    {
    long StructMember0;
    /* [size_is][unique] */ wchar_t *StructMember1;
    } 	Struct_2134_t;

typedef struct Struct_2150_t
    {
    long StructMember0;
    /* [switch_is] */ union union_2062 StructMember1;
    } 	Struct_2150_t;

typedef struct Struct_2212_t
    {
    short StructMember0;
    short StructMember1;
    long StructMember2;
    long StructMember3;
    long StructMember4;
    /* [size_is][unique] */ short *StructMember5;
    } 	Struct_2212_t;

typedef struct Struct_2274_t
    {
    long StructMember0;
    long StructMember1;
    long StructMember2;
    /* [size_is][unique] */ struct Struct_2212_t *StructMember3;
    } 	Struct_2274_t;

typedef struct Struct_2378_t
{
    long StructMember0;
    /* [size_is][unique] */ wchar_t* StructMember1;
} 	Struct_2378_t;

typedef struct Struct_2400_t
{
    long StructMember0;
    /* [unique] */ struct Struct_158_t* StructMember1;
} 	Struct_2400_t;
typedef /* [switch_type] */ /* [switch_type] */ union union_2320
    {
    /* [case()] */ struct Struct_2378_t unionMember_2;
    /* [case()] */ long unionMember_1[ 2 ];
    /* [case()] */ struct Struct_2400_t unionMember_4;
    /* [case()] */ struct DEVMODE_CONTAINER unionMember_3;
    /* [case()] */ struct Struct_832_t unionMember_5;
    } 	union_2320;





typedef struct Struct_2416_t
    {
    short StructMember0;
    short StructMember1;
    long StructMember2;
    long StructMember3;
    /* [switch_is] */ union union_2320 StructMember4;
    } 	Struct_2416_t;

typedef struct Struct_2476_t
    {
    long StructMember0;
    long StructMember1;
    long StructMember2;
    /* [size_is] */ struct Struct_2416_t StructMember3[ 1 ];
    } 	Struct_2476_t;

typedef /* [switch_type] */ /* [switch_type] */ union union_2586
    {
    /* [case()][unique] */ struct Struct_2620_t *unionMember_1;
    /* [case()][unique] */ struct Struct_2638_t *unionMember_2;
    /* [case()][unique] */ struct Struct_2668_t *unionMember_3;
    /* [case()][unique] */ struct Struct_2690_t *unionMember_16777215;
    } 	union_2586;

typedef struct Struct_2620_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    } 	Struct_2620_t;

typedef struct Struct_2638_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    /* [string][unique] */ wchar_t *StructMember2;
    long StructMember3;
    long StructMember4;
    } 	Struct_2638_t;

typedef struct Struct_2668_t
    {
    long StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    long StructMember2;
    } 	Struct_2668_t;

typedef struct Struct_2690_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    long StructMember1;
    /* [unique] */ unsigned char *StructMember2;
    } 	Struct_2690_t;

typedef struct Struct_2712_t
    {
    long StructMember0;
    /* [switch_is] */ union union_2586 StructMember1;
    } 	Struct_2712_t;

typedef struct Struct_2732_t
    {
    long StructMember0;
    /* [size_is][unique] */ unsigned char *StructMember1;
    } 	Struct_2732_t;

typedef /* [switch_type] */ /* [switch_type] */ union union_2808
    {
    /* [case()][unique] */ struct Struct_2476_t *unionMember_0;
    } 	union_2808;

typedef /* [switch_type] */ /* [switch_type] */ union union_2844
    {
    /* [case()][unique] */ struct Struct_2878_t *unionMember_1;
    /* [case()][unique] */ struct Struct_2908_t *unionMember_2;
    /* [case()][unique] */ struct Struct_2918_t *unionMember_3;
    /* [case()][unique] */ struct Struct_2952_t *unionMember_4;
    } 	union_2844;

typedef struct Struct_2878_t
    {
    long StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    /* [string][unique] */ wchar_t *StructMember2;
    long StructMember3;
    long StructMember4;
    long StructMember5;
    short StructMember6;
    } 	Struct_2878_t;

typedef struct Struct_2908_t
    {
    hyper StructMember0;
    } 	Struct_2908_t;

typedef struct Struct_2918_t
    {
    long StructMember0;
    long StructMember1;
    long StructMember2;
    /* [unique] */ wchar_t *StructMember3;
    /* [unique] */ wchar_t *StructMember4;
    long StructMember5;
    long StructMember6;
    long StructMember7;
    short StructMember8;
    hyper StructMember9;
    } 	Struct_2918_t;

typedef struct Struct_2952_t
    {
    long StructMember0;
    /* [unique] */ wchar_t *StructMember1;
    /* [unique] */ wchar_t *StructMember2;
    long StructMember3;
    long StructMember4;
    long StructMember5;
    short StructMember6;
    hyper StructMember7;
    long StructMember8;
    long StructMember9;
    } 	Struct_2952_t;

typedef struct Struct_2982_t
    {
    long StructMember0;
    /* [switch_is] */ union union_2844 StructMember1;
    } 	Struct_2982_t;

typedef /* [switch_type] */ /* [switch_type] */ union union_3248
    {
    /* [case()][unique] */ struct Struct_3264_t *unionMember_1;
    /* [default] */  /* Empty union arm */ 
    } 	union_3248;

typedef struct Struct_3264_t
    {
    long StructMember0;
    unsigned __int3264 StructMember1;
    long StructMember2;
    } 	Struct_3264_t;

typedef struct Struct_3278_t
    {
    long StructMember0;
    /* [switch_is] */ union union_3248 StructMember1;
    } 	Struct_3278_t;

typedef struct Struct_3382_t
{
    long StructMember0;
    /* [size_is][unique] */ unsigned char* StructMember1;
} 	Struct_3382_t;

typedef /* [switch_type] */ /* [switch_type] */ union union_3328
    {
    /* [case()] */ long unionMember_0;
    /* [case()] */ long unionMember_3;
    /* [case()] */ long unionMember_1;
    /* [case()][string][unique] */ wchar_t *unionMember_4;
    /* [case()][string][unique] */ wchar_t *unionMember_5;
    /* [case()][string][unique] */ wchar_t *unionMember_6;
    /* [case()] */ float unionMember_2;
    /* [case()] */ struct Struct_3382_t unionMember_7;
    } 	union_3328;


typedef struct Struct_3398_t
    {
    long StructMember0;
    /* [switch_is] */ union union_3328 StructMember1;
    } 	Struct_3398_t;

typedef struct Struct_3414_t
    {
    long StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    struct Struct_3398_t StructMember2;
    } 	Struct_3414_t;

typedef struct Struct_3476_t
    {
    long StructMember0;
    long StructMember1;
    long StructMember2;
    /* [size_is] */ struct Struct_3414_t StructMember3[ 1 ];
    } 	Struct_3476_t;

typedef struct Struct_3498_t
    {
    long StructMember0;
    long StructMember1;
    /* [string][unique] */ wchar_t *StructMember2;
    struct Struct_3398_t StructMember3;
    } 	Struct_3498_t;

typedef struct Struct_3560_t
    {
    long StructMember0;
    long StructMember1;
    long StructMember2;
    /* [size_is] */ struct Struct_3498_t StructMember3[ 1 ];
    } 	Struct_3560_t;

typedef /* [switch_type] */ /* [switch_type] */ union union_3598
    {
    /* [case()][unique] */ struct Struct_3614_t *unionMember_1;
    } 	union_3598;

typedef struct Struct_3614_t
    {
    long StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    } 	Struct_3614_t;

typedef struct Struct_3630_t
    {
    long StructMember0;
    /* [switch_is] */ union union_3598 StructMember1;
    } 	Struct_3630_t;

typedef struct Struct_3708_t
    {
    long StructMember0;
    short StructMember1;
    short StructMember2;
    byte StructMember3[ 8 ];
    } 	Struct_3708_t;

typedef struct Struct_3726_t
    {
    struct Struct_3708_t StructMember0;
    struct Struct_1162_t StructMember1;
    hyper StructMember2;
    wchar_t StructMember3[ 260 ];
    } 	Struct_3726_t;

typedef /* [switch_type] */ /* [switch_type] */ union union_3892
    {
    /* [case()][unique] */ struct Struct_3990_t *unionMember_1;
    } 	union_3892;

typedef struct Struct_3908_t
    {
    long StructMember0;
    /* [string][unique] */ wchar_t *StructMember1;
    long StructMember2;
    } 	Struct_3908_t;

typedef struct Struct_3990_t
    {
    long StructMember0;
    /* [size_is][unique] */ struct Struct_3908_t *StructMember1;
    /* [size_is][unique] */ long *StructMember2;
    } 	Struct_3990_t;

typedef struct Struct_4012_t
    {
    long StructMember0;
    /* [switch_is] */ union union_3892 StructMember1;
    } 	Struct_4012_t;

typedef struct Struct_4098_t
{
    long StructMember0;
    /* [size_is][unique] */ unsigned char* StructMember1;
} 	Struct_4098_t;
typedef /* [switch_type] */ /* [switch_type] */ union union_4062
    {
    /* [case()][string][unique] */ wchar_t *unionMember_1;
    /* [case()] */ long unionMember_2;
    /* [case()] */ hyper unionMember_3;
    /* [case()] */ unsigned char unionMember_4;
    /* [case()] */ struct Struct_4098_t unionMember_5;
    } 	union_4062;



typedef struct Struct_4114_t
    {
    short StructMember0;
    /* [switch_is] */ union union_4062 StructMember1;
    } 	Struct_4114_t;

typedef struct Struct_4134_t
    {
    /* [string][unique] */ wchar_t *StructMember0;
    struct Struct_4114_t StructMember1;
    } 	Struct_4134_t;

typedef struct Struct_4266_t
{
    long StructMember0;
    /* [string][unique] */ wchar_t* StructMember1;
    /* [string][unique] */ wchar_t* StructMember2;
    /* [string][unique] */ wchar_t* StructMember3;
    /* [string][unique] */ wchar_t* StructMember4;
    /* [string][unique] */ wchar_t* StructMember5;
    hyper StructMember6;
    long StructMember7;
} 	Struct_4266_t;



typedef struct Struct_4306_t
{
    hyper StructMember0;
    long StructMember1;
    short StructMember2;
    short StructMember3;
    short StructMember4;
    short StructMember5;
    short StructMember6;
} 	Struct_4306_t;

typedef struct Struct_4324_t
{
    long StructMember0;
    /* [string][unique] */ wchar_t* StructMember1;
    /* [string][unique] */ wchar_t* StructMember2;
    /* [string][unique] */ wchar_t* StructMember3;
    /* [string][unique] */ wchar_t* StructMember4;
    hyper StructMember5;
    hyper StructMember6;
    long StructMember7;
    long StructMember8;
    /* [string][unique] */ wchar_t* StructMember9;
    /* [string][unique] */ wchar_t* StructMember10;
    /* [string][unique] */ wchar_t* StructMember11;
} 	Struct_4324_t;

typedef struct Struct_4374_t
{
    /* [string][unique] */ wchar_t* StructMember0;
    /* [string][unique] */ wchar_t* StructMember1;
    /* [string][unique] */ wchar_t* StructMember2;
} 	Struct_4374_t;

typedef struct Struct_4398_t
{
    /* [string][unique] */ wchar_t* StructMember0;
} 	Struct_4398_t;





typedef /* [switch_type] */ /* [switch_type] */ union union_4230
    {
    /* [case()] */ struct Struct_4266_t unionMember_1;
    /* [case()] */ struct Struct_4306_t unionMember_2;
    /* [case()] */ struct Struct_4324_t unionMember_3;
    /* [case()] */ struct Struct_4374_t unionMember_4;
    /* [case()] */ struct Struct_4398_t unionMember_5;
    } 	union_4230;



typedef struct Struct_4412_t
    {
    short StructMember0;
    long StructMember1;
    /* [switch_is] */ union union_4230 StructMember2;
    } 	Struct_4412_t;

typedef struct Struct_4470_t
    {
    long StructMember0;
    /* [size_is] */ struct Struct_4412_t StructMember1[ 1 ];
    } 	Struct_4470_t;

long Proc0_RpcEnumPrinters( 
    /* [in] */ long arg_1,
    /* [string][unique][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3,
    /* [size_is][unique][out][in] */ unsigned char *arg_4,
    /* [range][in] */ long arg_5,
    /* [out] */ long *arg_6,
    /* [out] */ long *arg_7);

long Proc1_RpcOpenPrinter( 
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [context_handle][out] */ void **arg_2,
    /* [string][unique][in] */ wchar_t *arg_3,
    /* [in] */ struct DEVMODE_CONTAINER *arg_4,
    /* [in] */ long arg_5);

long Proc2_RpcSetJob( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1,
    /* [unique][in] */ struct Struct_400_t *arg_2,
    /* [in] */ long arg_3);

long Proc3_RpcGetJob( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [size_is][unique][out][in] */ unsigned char *arg_3,
    /* [range][in] */ long arg_4,
    /* [out] */ long *arg_5);

long Proc4_RpcEnumJobs( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [in] */ long arg_3,
    /* [size_is][unique][out][in] */ unsigned char *arg_4,
    /* [range][in] */ long arg_5,
    /* [out] */ long *arg_6,
    /* [out] */ long *arg_7);

long Proc5_RpcAddPrinter( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [in] */ struct Struct_812_t *arg_1,
    /* [in] */ struct Struct_80_t *arg_2,
    /* [in] */ struct Struct_832_t *arg_3,
    /* [context_handle][out] */ void **arg_4);

long Proc6_RpcDeletePrinter( 
    /* [context_handle][in] */ void *arg_0);

long Proc7_RpcSetPrinter( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ struct Struct_812_t *arg_1,
    /* [in] */ struct Struct_80_t *arg_2,
    /* [in] */ struct Struct_832_t *arg_3,
    /* [in] */ long arg_4);

long Proc8_RpcGetPrinter( 
    /* [context_handle][in] */ void *arg_1,
    /* [in] */ long arg_2,
    /* [size_is][unique][out][in] */ unsigned char *arg_3,
    /* [range][in] */ long arg_4,
    /* [out] */ long *arg_5);

long Proc9_RpcAddPrinterDriver( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [in] */ struct Struct_1432_t *arg_1);

long Proc10_RpcEnumPrinterDrivers( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [size_is][unique][out][in] */ unsigned char *arg_3,
    /* [range][in] */ long arg_4,
    /* [out] */ long *arg_5,
    /* [out] */ long *arg_6);

long Proc11_RpcGetPrinterDriver( 
    /* [context_handle][in] */ void *arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [size_is][unique][out][in] */ unsigned char *arg_3,
    /* [range][in] */ long arg_4,
    /* [out] */ long *arg_5);

long Proc12_RpcGetPrinterDriverDirectory( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [size_is][unique][out][in] */ unsigned char *arg_3,
    /* [range][in] */ long arg_4,
    /* [out] */ long *arg_5);

long Proc13_RpcDeletePrinterDriver( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2);

long Proc14_RpcAddPrintProcessor( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [string][in] */ wchar_t *arg_3);

long Proc15_RpcEnumPrintProcessors( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [size_is][unique][out][in] */ unsigned char *arg_3,
    /* [range][in] */ long arg_4,
    /* [out] */ long *arg_5,
    /* [out] */ long *arg_6);

long Proc16_RpcGetPrintProcessorDirectory( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [size_is][unique][out][in] */ unsigned char *arg_3,
    /* [range][in] */ long arg_4,
    /* [out] */ long *arg_5);

long Proc17_RpcStartDocPrinter( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ struct Struct_1566_t *arg_1,
    /* [out] */ long *arg_2);

long Proc18_RpcStartPagePrinter( 
    /* [context_handle][in] */ void *arg_0);

long Proc19_RpcWritePrinter( 
    /* [context_handle][in] */ void *arg_0,
    /* [size_is][in] */ unsigned char *arg_1,
    /* [in] */ long arg_2,
    /* [out] */ long *arg_3);

long Proc20_RpcEndPagePrinter( 
    /* [context_handle][in] */ void *arg_0);

long Proc21_RpcAbortPrinter( 
    /* [context_handle][in] */ void *arg_0);

long Proc22_RpcReadPrinter( 
    /* [context_handle][in] */ void *arg_0,
    /* [size_is][out] */ unsigned char *arg_1,
    /* [in] */ long arg_2,
    /* [out] */ long *arg_3);

long Proc23_RpcEndDocPrinter( 
    /* [context_handle][in] */ void *arg_0);

long Proc24_RpcAddJob( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1,
    /* [size_is][unique][out][in] */ unsigned char *arg_2,
    /* [range][in] */ long arg_3,
    /* [out] */ long *arg_4);

long Proc25_RpcScheduleJob( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1);

long Proc26_RpcGetPrinterData( 
    /* [context_handle][in] */ void *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [out] */ long *arg_2,
    /* [size_is][out] */ unsigned char *arg_3,
    /* [in] */ long arg_4,
    /* [out] */ long *arg_5);

long Proc27_RpcSetPrinterData( 
    /* [context_handle][in] */ void *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [size_is][in] */ unsigned char *arg_3,
    /* [range][in] */ long arg_4);

long Proc28_RpcWaitForPrinterChange( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1,
    /* [out] */ long *arg_2);

long Proc29_RpcClosePrinter( 
    /* [context_handle][out][in] */ void **arg_1);

long Proc30_RpcAddForm( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ struct Struct_1822_t *arg_1);

long Proc31_RpcDeleteForm( 
    /* [context_handle][in] */ void *arg_0,
    /* [string][in] */ wchar_t *arg_1);

long Proc32_RpcGetForm( 
    /* [context_handle][in] */ void *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [size_is][unique][out][in] */ unsigned char *arg_3,
    /* [range][in] */ long arg_4,
    /* [out] */ long *arg_5);

long Proc33_RpcSetForm( 
    /* [context_handle][in] */ void *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ struct Struct_1822_t *arg_2);

long Proc34_RpcEnumForms( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1,
    /* [size_is][unique][out][in] */ unsigned char *arg_2,
    /* [range][in] */ long arg_3,
    /* [out] */ long *arg_4,
    /* [out] */ long *arg_5);

long Proc35_RpcEnumPorts( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [in] */ long arg_1,
    /* [size_is][unique][out][in] */ unsigned char *arg_2,
    /* [range][in] */ long arg_3,
    /* [out] */ long *arg_4,
    /* [out] */ long *arg_5);

long Proc36_RpcEnumMonitors( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [in] */ long arg_1,
    /* [size_is][unique][out][in] */ unsigned char *arg_2,
    /* [range][in] */ long arg_3,
    /* [out] */ long *arg_4,
    /* [out] */ long *arg_5);

long Proc37_RpcAddPort( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [in] */ unsigned __int3264 arg_1,
    /* [string][in] */ wchar_t *arg_2);

long Proc38_RpcConfigurePort( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [in] */ unsigned __int3264 arg_1,
    /* [string][in] */ wchar_t *arg_2);

long Proc39_RpcDeletePort( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [in] */ unsigned __int3264 arg_1,
    /* [string][in] */ wchar_t *arg_2);

long Proc40_RpcCreatePrinterIC( 
    /* [context_handle][in] */ void *arg_0,
    /* [context_handle][out] */ void **arg_1,
    /* [in] */ struct Struct_80_t *arg_2);

long Proc41_RpcPlayGdiScriptOnPrinterIC( 
    /* [context_handle][in] */ void *arg_0,
    /* [size_is][in] */ unsigned char *arg_1,
    /* [range][in] */ long arg_2,
    /* [size_is][out] */ unsigned char *arg_3,
    /* [in] */ long arg_4,
    /* [in] */ long arg_5);

long Proc42_RpcDeletePrinterIC( 
    /* [context_handle][out][in] */ void **arg_0);

long Proc43_RpcAddPrinterConnection( 
    /* [string][in] */ wchar_t *arg_0);

long Proc44_RpcDeletePrinterConnection( 
    /* [string][in] */ wchar_t *arg_0);

long Proc45_RpcPrinterMessageBox( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1,
    /* [in] */ unsigned __int3264 arg_2,
    /* [string][unique][in] */ wchar_t *arg_3,
    /* [string][unique][in] */ wchar_t *arg_4,
    /* [in] */ long arg_5);

long Proc46_RpcAddMonitor( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [in] */ struct Struct_2022_t *arg_1);

long Proc47_RpcDeleteMonitor( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2);

long Proc48_RpcDeletePrintProcessor( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2);

long Proc49_RpcAddPrintProvidor( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [in] */ struct Struct_2150_t *arg_1);

long Proc50_RpcDeletePrintProvidor( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2);

long Proc51_RpcEnumPrintProcessorDatatypes( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [size_is][unique][out][in] */ unsigned char *arg_3,
    /* [range][in] */ long arg_4,
    /* [out] */ long *arg_5,
    /* [out] */ long *arg_6);

long Proc52_RpcResetPrinter( 
    /* [context_handle][in] */ void *arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [in] */ struct Struct_80_t *arg_2);

long Proc53_RpcGetPrinterDriver2( 
    /* [context_handle][in] */ void *arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [size_is][unique][out][in] */ unsigned char *arg_3,
    /* [range][in] */ long arg_4,
    /* [out] */ long *arg_5,
    /* [in] */ long arg_6,
    /* [in] */ long arg_7,
    /* [out] */ long *arg_8,
    /* [out] */ long *arg_9);

long Proc54_RpcClientFindFirstPrinterChangeNotification( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [in] */ long arg_3,
    /* [unique][in] */ struct Struct_2274_t *arg_4,
    /* [out] */ long *arg_5);

long Proc55_RpcFindNextPrinterChangeNotification( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1,
    /* [out] */ long *arg_2,
    /* [unique][in] */ struct Struct_2274_t *arg_3,
    /* [ref][out] */ struct Struct_2476_t **arg_4);

long Proc56_RpcFindClosePrinterChangeNotification( 
    /* [context_handle][in] */ void *arg_0);

long Proc57_NThreadingLibrary__TWorkItem__NotifyCancel( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [string][unique][in] */ wchar_t *arg_3,
    /* [in] */ long arg_4);

long Proc58_RpcReplyOpenPrinter( 
    /* [string][in] */ wchar_t *arg_0,
    /* [context_handle][out] */ void **arg_1,
    /* [in] */ long arg_2,
    /* [in] */ long arg_3,
    /* [range][in] */ long arg_4,
    /* [size_is][unique][in] */ unsigned char *arg_5);

long Proc59_RpcRouterReplyPrinter( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1,
    /* [range][in] */ long arg_2,
    /* [size_is][unique][in] */ unsigned char *arg_3);

long Proc60_RpcReplyClosePrinter( 
    /* [context_handle][out][in] */ void **arg_0);

long Proc61_RpcAddPortEx( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [in] */ struct Struct_2712_t *arg_1,
    /* [in] */ struct Struct_2732_t *arg_2,
    /* [string][in] */ wchar_t *arg_3);

long Proc62_RpcRemoteFindFirstPrinterChangeNotification( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [string][unique][in] */ wchar_t *arg_3,
    /* [in] */ long arg_4,
    /* [range][in] */ long arg_5,
    /* [size_is][unique][out][in] */ unsigned char *arg_6);

long Proc63_RpcSetAllocFailCount( 
    /* [in] */ wchar_t *arg_0);

long Proc64_RpcResetPrinterEx( 
    /* [context_handle][in] */ void *arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [in] */ struct Struct_80_t *arg_2,
    /* [in] */ long arg_3);

long Proc65_RpcRemoteFindFirstPrinterChangeNotificationEx( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [string][unique][in] */ wchar_t *arg_3,
    /* [in] */ long arg_4,
    /* [unique][in] */ struct Struct_2274_t *arg_5);

long Proc66_RpcRouterReplyPrinterEx( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [out] */ long *arg_3,
    /* [in] */ long arg_4,
    /* [switch_is][in] */ union union_2808 arg_5);

long Proc67_RpcRouterRefreshPrinterChangeNotification( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1,
    /* [unique][in] */ struct Struct_2274_t *arg_2,
    /* [ref][out] */ struct Struct_2476_t **arg_3);

long Proc68_RpcSetAllocFailCount( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1,
    /* [out] */ long *arg_2,
    /* [out] */ long *arg_3,
    /* [out] */ long *arg_4);

long Proc69_RpcOpenPrinterEx( 
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [context_handle][out] */ void **arg_2,
    /* [string][unique][in] */ wchar_t *arg_3,
    /* [in] */ struct Struct_80_t *arg_4,
    /* [in] */ long arg_5,
    /* [in] */ struct Struct_2982_t *arg_6);

long Proc70_RpcAddPrinterEx( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [in] */ struct Struct_812_t *arg_1,
    /* [in] */ struct Struct_80_t *arg_2,
    /* [in] */ struct Struct_832_t *arg_3,
    /* [in] */ struct Struct_2982_t *arg_4,
    /* [context_handle][out] */ void **arg_5);

long Proc71_RpcSetPort( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [in] */ struct Struct_2712_t *arg_2);

long Proc72_RpcEnumPrinterData( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1,
    /* [size_is][out] */ wchar_t *arg_2,
    /* [in] */ long arg_3,
    /* [out] */ long *arg_4,
    /* [out] */ long *arg_5,
    /* [size_is][out] */ unsigned char *arg_6,
    /* [in] */ long arg_7,
    /* [out] */ long *arg_8);

long Proc73_RpcDeletePrinterData( 
    /* [context_handle][in] */ void *arg_0,
    /* [string][in] */ wchar_t *arg_1);

long Proc74_NThreadingLibrary__TWorkItem__NotifyCancel( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [context_handle][out] */ void **arg_2,
    /* [string][unique][in] */ wchar_t *arg_3,
    /* [string][unique][in] */ wchar_t *arg_4);

long Proc75_NThreadingLibrary__TWorkItem__NotifyCancel( 
    /* [context_handle][out][in] */ void **arg_0);

long Proc76_NThreadingLibrary__TWorkItem__NotifyCancel( 
    /* [context_handle][in] */ void *arg_0);

long Proc77_RpcSetPrinterDataEx( 
    /* [context_handle][in] */ void *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3,
    /* [size_is][in] */ unsigned char *arg_4,
    /* [range][in] */ long arg_5);

long Proc78_RpcGetPrinterDataEx( 
    /* [context_handle][in] */ void *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [out] */ long *arg_3,
    /* [size_is][out] */ unsigned char *arg_4,
    /* [in] */ long arg_5,
    /* [out] */ long *arg_6);

long Proc79_RpcEnumPrinterDataEx( 
    /* [context_handle][in] */ void *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [size_is][out] */ unsigned char *arg_2,
    /* [in] */ long arg_3,
    /* [out] */ long *arg_4,
    /* [out] */ long *arg_5);

long Proc80_RpcEnumPrinterKey( 
    /* [context_handle][in] */ void *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [size_is][out] */ wchar_t *arg_2,
    /* [in] */ long arg_3,
    /* [out] */ long *arg_4);

long Proc81_RpcDeletePrinterDataEx( 
    /* [context_handle][in] */ void *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2);

long Proc82_RpcDeletePrinterKey( 
    /* [context_handle][in] */ void *arg_0,
    /* [string][in] */ wchar_t *arg_1);

long Proc83_RpcSeekPrinter( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ struct Struct_2908_t arg_1,
    /* [out] */ struct Struct_2908_t *arg_2,
    /* [in] */ long arg_3,
    /* [in] */ long arg_4);

long Proc84_RpcDeletePrinterDriverEx( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3,
    /* [in] */ long arg_4);

long Proc85_RpcAddPerMachineConnection( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [string][in] */ wchar_t *arg_3);

long Proc86_RpcDeletePerMachineConnection( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1);

long Proc87_RpcEnumPerMachineConnections( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [size_is][unique][out][in] */ unsigned char *arg_1,
    /* [range][in] */ long arg_2,
    /* [out] */ long *arg_3,
    /* [out] */ long *arg_4);

long Proc88_RpcXcvData( 
    /* [context_handle][in] */ void *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [size_is][in] */ unsigned char *arg_2,
    /* [range][in] */ long arg_3,
    /* [size_is][out] */ unsigned char *arg_4,
    /* [in] */ long arg_5,
    /* [out] */ long *arg_6,
    /* [out][in] */ long *arg_7);

long Proc89_RpcAddPrinterDriverEx( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [in] */ struct Struct_1432_t *arg_1,
    /* [in] */ long arg_2);

long Proc90_RpcSplOpenPrinter( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [context_handle][out] */ void **arg_1,
    /* [string][unique][in] */ wchar_t *arg_2,
    /* [in] */ struct Struct_80_t *arg_3,
    /* [in] */ long arg_4,
    /* [out][in] */ struct Struct_2982_t *arg_5);

long Proc91_RpcGetSpoolFileInfo( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [size_is][out] */ unsigned char *arg_3,
    /* [range][in] */ long arg_4,
    /* [out] */ long *arg_5);

long Proc92_RpcCommitSpoolData( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [in] */ long arg_3,
    /* [size_is][out] */ unsigned char *arg_4,
    /* [range][in] */ long arg_5,
    /* [out] */ long *arg_6);

long Proc93_RpcGetSpoolFileInfo2( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [out][in] */ struct Struct_3278_t *arg_3);

long Proc94_RpcCommitSpoolData2( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [in] */ long arg_3,
    /* [out][in] */ struct Struct_3278_t *arg_4);

long Proc95_RpcCloseSpoolFileHandle( 
    /* [context_handle][in] */ void *arg_0);

long Proc96_RpcFlushPrinter( 
    /* [context_handle][in] */ void *arg_0,
    /* [size_is][in] */ unsigned char *arg_1,
    /* [range][in] */ long arg_2,
    /* [out] */ long *arg_3,
    /* [in] */ long arg_4);

long Proc97_RpcSendRecvBidiData( 
    /* [context_handle][in] */ void *arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [in] */ struct Struct_3476_t *arg_2,
    /* [ref][out] */ struct Struct_3560_t **arg_3);

long Proc98_RpcAddDriverCatalog( void);

long Proc99_RpcAddPrinterConnection2( 
    /* [string][in] */ wchar_t *arg_0,
    /* [in] */ struct Struct_3630_t *arg_1);

long Proc100_RpcInstallPrinterDriverFromPackage( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [string][in] */ wchar_t *arg_3,
    /* [in] */ long arg_4);

long Proc102_RpcGetCorePrinterDrivers( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [size_is][in] */ wchar_t *arg_3,
    /* [in] */ long arg_4,
    /* [size_is][out] */ struct Struct_3726_t *arg_5);

long Proc103_RpcCorePrinterDriverInstalled( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ struct Struct_3708_t *arg_2,
    /* [in] */ struct Struct_1162_t arg_3,
    /* [in] */ hyper arg_4,
    /* [out] */ long *arg_5);

long Proc104_RpcGetPrinterDriverPackagePath( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][unique][in] */ wchar_t *arg_2,
    /* [string][in] */ wchar_t *arg_3,
    /* [size_is][unique][out][in] */ wchar_t *arg_4,
    /* [in] */ long arg_5,
    /* [out] */ long *arg_6);

long Proc105_RpcDeletePrinterDriverPackage( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2);

long Proc106_RpcFindCompatibleDriver( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [size_is][unique][out][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3,
    /* [out] */ long *arg_4,
    /* [size_is][unique][out][in] */ wchar_t *arg_5,
    /* [in] */ long arg_6,
    /* [out] */ long *arg_7,
    /* [out] */ long *arg_8);

long Proc107_RpcReportJobProcessingProgress( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1,
    /* [in] */ short arg_2,
    /* [in] */ short arg_3);

long Proc108_RpcSetSpoolerPolicy( 
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [in] */ long arg_1,
    /* [out][in] */ struct Struct_4012_t *arg_2);

long Proc109_RpcInternalGetPrinterDriver( 
    /* [context_handle][in] */ void *arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [size_is][unique][out][in] */ unsigned char *arg_3,
    /* [range][in] */ long arg_4,
    /* [out] */ long *arg_5,
    /* [in] */ long arg_6,
    /* [in] */ long arg_7,
    /* [out] */ long *arg_8,
    /* [out] */ long *arg_9);

long Proc110_RpcGetJobNamedPropertyValue( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [out] */ struct Struct_4114_t *arg_3);

long Proc111_RpcSetJobNamedProperty( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1,
    /* [in] */ struct Struct_4134_t *arg_2);

long Proc112_RpcDeleteJobNamedProperty( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1,
    /* [string][in] */ wchar_t *arg_2);

long Proc113_RpcEnumJobNamedProperties( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1,
    /* [out] */ long *arg_2,
    /* [size_is][size_is][ref][out] */ struct Struct_4134_t **arg_3);

long Proc114_RpcCreateAppSandbox( 
    /* [string][unique][in] */ wchar_t *arg_0);

long Proc115_RpcGetUserPropertyBag( 
    /* [context_handle][in] */ void *arg_0,
    /* [out] */ unsigned __int3264 *arg_1);

long Proc116_RpcLogJobInfoForBranchOffice( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ struct Struct_4470_t *arg_1);

long Proc117_RpcRegeneratePrintDeviceCapabilities( 
    /* [context_handle][in] */ void *arg_0);


extern handle_t DefaultIfName_IfHandle;


extern RPC_IF_HANDLE DefaultIfName_v1_0_c_ifspec;
extern RPC_IF_HANDLE DefaultIfName_v1_0_s_ifspec;
#endif /* __DefaultIfName_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


