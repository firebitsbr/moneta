#pragma once

#include <Windows.h>
#include <stdio.h>
#include <stdint.h>
#ifdef _WIN64
#pragma pack(push, 8) // Bug fix for strange x64 bug, sizeof PROCESSENTRY struct in 64-bit is unaligned and will break Process32First, with error code ERROR_BAD_LENGTH
#include <Tlhelp32.h>
#pragma pack(pop)
#else
#include <Tlhelp32.h>
#endif
#include <Psapi.h>
#include <winternl.h>
//#include <ntdef.h>
#include <list>
#include <map>
#include "NtMem.h"