/*
 * COPYRIGHT:       See COPYING in the top level directory
 * PROJECT:         NetAPI DLL
 * FILE:            dll/win32/netapi32/obsolete.c
 * PURPOSE:         Obsolete functions
 * PROGRAMMERS:     Eric Kohl <eric.kohl@reactos.org>
 */

/* INCLUDES ******************************************************************/

#include "netapi32.h"

WINE_DEFAULT_DEBUG_CHANNEL(netapi32);

/* FUNCTIONS *****************************************************************/

NET_API_STATUS
WINAPI
NetAlertRaise(
    _In_ LPCWSTR AlertEventName,
    _In_ LPVOID Buffer,
    _In_ DWORD BufferSize)
{
    return ERROR_NOT_SUPPORTED;
}


NET_API_STATUS
WINAPI
NetAlertRaiseEx(
    _In_ LPCWSTR AlertEventName,
    _In_ LPVOID VariableInfo,
    _In_ DWORD VariableInfoSize,
    _In_ LPCWSTR ServiceName)
{
    return ERROR_NOT_SUPPORTED;
}


NET_API_STATUS
WINAPI
NetMessageBufferSend(
    _In_ LPCWSTR servername,
    _In_ LPCWSTR msgname,
    _In_ LPCWSTR fromname,
    _In_ LPBYTE buf,
    _In_ DWORD buflen)
{
    return ERROR_NOT_SUPPORTED;
}


NET_API_STATUS
WINAPI
NetMessageNameAdd(
    _In_ LPCWSTR servername,
    _In_ LPCWSTR msgname)
{
    return ERROR_NOT_SUPPORTED;
}


NET_API_STATUS
WINAPI
NetMessageNameDel(
    _In_ LPCWSTR servername,
    _In_ LPCWSTR msgname)
{
    return ERROR_NOT_SUPPORTED;
}


NET_API_STATUS
WINAPI
NetMessageNameEnum(
    _In_ LPCWSTR servername,
    _In_ DWORD level,
    _Out_ LPBYTE *bufptr,
    _In_ DWORD prefmaxlen,
    _Out_ LPDWORD entriesread,
    _Out_ LPDWORD totalentries,
    _Inout_ LPDWORD resume_handle)
{
    return ERROR_NOT_SUPPORTED;
}


NET_API_STATUS
WINAPI
NetMessageNameGetInfo(
    _In_ LPCWSTR servername,
    _In_ LPCWSTR msgname,
    _In_ DWORD level,
    _Out_ LPBYTE *bufptr)
{
    return ERROR_NOT_SUPPORTED;
}

/* EOF */
