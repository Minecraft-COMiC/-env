#include <COMiC/os.h>
#include <COMiC/env.h>


int COMiC_Instance_Init(COMiC_Instance *storage, COMiC_usize max_heap_size)
{
    if (_COMiC_OS_Instance_Init(&(storage->os_storage), max_heap_size))
    {
        return -1;
    }
    return 0;
}

COMiC_Instance *COMiC_Instance_GetCurrent(void)
{
    return NULL;
}

void COMiC_Instance_Finalize(COMiC_Instance *storage)
{
    _COMiC_OS_Instance_Finalize(&(storage->os_storage));
}