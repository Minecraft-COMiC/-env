#include <COMiC/types.h>
#include <COMiC/os.h>

#ifndef COMiC_ENV_H
#define COMiC_ENV_H

typedef struct COMiC_Instance
{
    _COMiC_OS_Instance os_storage;
} COMiC_Instance;

int COMiC_Init(void);

COMiC_bool COMiC_IsInited(void);

void COMiC_Finalize(void);

int COMiC_Instance_Init(COMiC_Instance *storage, COMiC_size max_heap_size);

COMiC_Instance *COMiC_Instance_GetCurrent(void);

void COMiC_Instance_Finalize(COMiC_Instance *storage);

#endif /* COMiC_ENV_H */
