#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    // 1 参数校验
    if(argc != 2)
    {
        printf("Usage: sleep <seconds>\n");
        return 1;
    }

    //3 解析浮点数
    double sec = atof(argv[1]);
    if(sec <= 0)
    {
        printf("Please provide a valid number of seconds.\n");
        return 1;
    }

    //4 Windows休眠，单位毫秒
    DWORD ms = (DWORD)(sec * 1000.0);
    Sleep(ms);

    return 0;
}
