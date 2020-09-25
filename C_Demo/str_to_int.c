// 功能：字符串转整型数
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// 函数声明
int str_to_int(const char* str);

enum value_flag
{   
    VAILD = 0,
    INVAILD
};
int vaild_flag = INVAILD;

// 主函数
int main(void)
{
    printf("*** str_to_int test ***\r\n");

    char input[20];
    while(1)
    {
        printf("please input str:");
        scanf("%s",input);
        int result = str_to_int(input);
        if(vaild_flag == 0)
            printf("result = %d\r\n",result);
        else
            printf("value is invaild!\r\n");
    }

    printf("\r\n");
    system("pause");
    return 0;
}

// 字符串转整型数 接口
int str_to_int(const char* str)
{
    long long num = 0;
    //判断str是否为NULL或者空字符串
    if((str == NULL) && (*str == '\0'))
    {
        vaild_flag = INVAILD;
        return (int)num;
    }

    //正负号标识(默认正号)
    bool sign_flag = false;
    //判断是否首字符是‘+’号或者‘-’号
    if(*str == '+')
    {
        str++;
    }
    else if(*str == '-')
    {
        sign_flag = true;
        str++;
    }
    
    //符号后面的字符进行判断
    if(*str == '\0')
    {
        vaild_flag = INVAILD;
        return (int)num; 
    }

    //字符转整数
    while(*str != '\0')
    {
        if((*str>='0') && (*str<='9'))
        {
            int sign = sign_flag?-1:1;
            num = 10*num + sign*(*str-'0');
            //判断数值是否大于int的最大值和最小值
            if( (!sign_flag && (num>0x7fffffff)) \
                || (sign_flag && ((signed int)num<0x80000000)) )
            {
                num = 0; 
                break;
            }
            str++;
        }
        else
        {
            num = 0;
            break;
        }
    }

    if(*str == '\0')
        vaild_flag = VAILD;

    return (int)num;
}
