// 功能：冒泡排序算法
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//数据交换
void swap(int* a, int* b);
//冒泡排序（向下沉）
void sink_bubble_sort(int data[], int n);
//冒泡排序（向上冒）
void up_bubble_sort(int data[], int n);

//主函数
int main()
{
    printf("*** bubble_sort test ***\n");

    int t_data[] = {3,2,1,4,5,7,6,8}; 
    int t_data2[] = {3,2,1,4,5,7,6,8};

    sink_bubble_sort(t_data,sizeof(t_data)/sizeof(int));
    printf("bubble sort (sink) result:\r\n");
    for(int i=0; i<sizeof(t_data)/sizeof(int); i++)
        printf("%d ",t_data[i]);
    printf("\r\n");
 
    up_bubble_sort(t_data2,sizeof(t_data2)/sizeof(int));
    printf("bubble sort (up) result:\r\n");
    for(int i=0; i<sizeof(t_data2)/sizeof(int); i++)
        printf("%d ",t_data2[i]);

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

//冒泡排序（向下沉）
void sink_bubble_sort(int data[], int n)
{
    for (int i=0; i<n-1; i++) //需要冒泡的次数
    {
        for (int j=0; j<n-i-1; j++) //需要比较的次数
        {
            if (data[j] > data[j+1])
            {
                swap(&data[j], &data[j+1]);
            }  
        }
        
    }
    
}

//冒泡排序（向上冒）
void up_bubble_sort(int data[], int n)
{
    for (int i=n-1; i>0; i--) //需要冒泡的次数
    {
        for (int j=n-i-1; j>0; j--) //需要比较的次数
        {
            if (data[j] < data[j-1])
            {
                swap(&data[j], &data[j-1]);
            }  
        }
        
    }
    
}
