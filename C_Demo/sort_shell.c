// 功能：希尔排序算法
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//数据交换
void swap(int* a, int* b);
//希尔排序
void shell_sort(int data[], int n);

//主函数
int main()
{
    printf("*** shell_sort test ***\n");

    // int t_data[] = {3,2,1,4,5,7,6,8}; 
    int t_data[] = {6,2,8,4,5,7,3,1}; 

    shell_sort(t_data,sizeof(t_data)/sizeof(int));
    printf("shell sort result:\r\n");
    for(int i=0; i<sizeof(t_data)/sizeof(int); i++)
        printf("%d ",t_data[i]);
    printf("\r\n");

    printf("\r\n");
    system("pause");
    return 0;
}

//数据交换
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//希尔排序
void shell_sort(int data[], int n)
{
    int temp, gap=n/2;
    while (gap > 0) 
    {
        for (int i=gap; i<n; i++) 
        {
            temp = data[i];
            int preIndex = i - gap;
            while (preIndex>=0 && data[preIndex]>temp) 
            {
                data[preIndex + gap] = data[preIndex];
                preIndex -= gap;
            }
            data[preIndex + gap] = temp;
        }
        for(int k=0; k<n; k++)
            printf(" %d",data[k]);
        printf("\r\n");

        gap /= 2;
    }
}
