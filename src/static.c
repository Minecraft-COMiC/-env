#include <COMiC/types.h>
#include <COMiC/os.h>
#include <COMiC/env.h>

static COMiC_bool is_inited = 0;

int COMiC_Init(void)
{
    if (_COMiC_OS_Init())
    {
        return -1;
    }
    return 0;
}

COMiC_bool COMiC_IsInited(void)
{
    return is_inited;
}

void COMiC_Finalize(void)
{
    _COMiC_OS_Finalize();
}
