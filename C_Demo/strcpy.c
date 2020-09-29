//功能：字符串拷贝函数的实现
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

//拷贝函数
char *strcpy(char* dest, const char* src) //源字符串使用const表示输入参数
{
    //对目的地址和源地址进行非空断言处理
    assert( (dest != NULL) && (src != NULL) );

    char *temp = dest; 
    while( (*dest++ = *src++) != '\0'); //根据'\0'判断是否拷贝结束
    return temp; //为了实现链式操作，返回地址
}

//主函数 
int main()
{
    printf("*** strcpy test ***\r\n");

    char str[10];
    if( strcpy(str,"1234") != NULL )
    {
        printf("str:%s\r\n",str);
        printf("copy success!\r\n");
    }

    printf("\r\n");
    system("pause");
    return 0;
}
