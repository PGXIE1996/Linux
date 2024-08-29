#include "process.h"

void ProcessOn()
{
    int cnt = 0;
    char bar[NUM];
    memset(bar, '\0', sizeof(bar));

    const char *label = "|\\-/";

    while (cnt <= 100)
    {
        printf("[%-100s][%%%3d][%c]\r", bar, cnt, label[cnt%4]);
        fflush(stdout);
        bar[cnt++] = STYLE;
        //sleep(100);
        usleep(50000);
    }
    printf("\n");
    
}