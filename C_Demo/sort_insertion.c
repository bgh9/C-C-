// 功能：插入排序算法
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//数据交换
void swap(int* a, int* b);
//插入排序
void insertion_sort(int data[], int n);

//主函数
int main()
{
    printf("*** insertion_sort test ***\n");

    int t_data[] = {3,2,1,4,5,7,6,8}; 

    insertion_sort(t_data,sizeof(t_data)/sizeof(int));
    printf("insertion sort result:\r\n");
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

//插入排序
void insertion_sort(int data[], int n)
{
    for (int i=1; i<n; i++) //需要插入的次数
    {
        for (int j=i; j>0; j--) //需要比较的次数
        {
            if (data[j] < data[j-1])
            {
                swap(&data[j], &data[j-1]);
            }  
        }
        
        // for(int k=0; k<n; k++)
        //     printf("%d ",data[k]);
        // printf("\r\n");
    }
    
}

