#include <stdio.h>
#include <stdlib.h>

//判断CPU 大小端
int checkCPU()
{
    union w
    { 
    int a;
    char b;
    } c;
    c.a = 1;
    return (c.b == 1);
}

int main()
{
    printf("*** cpu_endian test ***\n");

    int ret = checkCPU();
    if(ret == 0)
        printf("current cpu: big_endian\n");
    else
        printf("current cpu: litter_endian\n");

    printf("\r\n");
    system("pause");
    return 0;
}