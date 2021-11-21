#include <COMiC/types.h>
#include <COMiC/os.h>
#include <COMiC/env.h>

static COMiC_bool is_inited = COMiC_FALSE;

int COMiC_Init(void)
{
    if (_COMiC_OS_Init())
    {
        return -1;
    }

    is_inited = COMiC_TRUE;
    return 0;
}

COMiC_bool COMiC_IsInited(void)
{
    return is_inited;
}

void COMiC_Finalize(void)
{
    _COMiC_OS_Finalize();
    is_inited = COMiC_FALSE;
}
