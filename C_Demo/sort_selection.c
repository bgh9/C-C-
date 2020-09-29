// 功能：选择排序算法
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//数据交换
void swap(int* a, int* b);
//选择排序（递增）
void increase_selection_sort(int data[], int n);
//选择排序（递减）
void decrease_selection_sort(int data[], int n);

//主函数
int main()
{
    printf("*** bubble_sort test ***\n");

    int t_data[] = {3,2,1,4,5,7,6,8}; 

    increase_selection_sort(t_data,sizeof(t_data)/sizeof(int));
    printf("selection sort (increase) result:\r\n");
    for(int i=0; i<sizeof(t_data)/sizeof(int); i++)
        printf("%d ",t_data[i]);
    printf("\r\n");

    decrease_selection_sort(t_data,sizeof(t_data)/sizeof(int));
    printf("selection sort (decrease) result:\r\n");
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

//选择排序（递增）
void increase_selection_sort(int data[], int n)
{
    for (int i=0; i<n; i++) //需要选择的次数
    {
        int min_index = i; //最小值索引
        for (int j=i; j<n; j++) //需要比较的次数
        {
            if (data[j] < data[min_index])
            {
                min_index = j;
            }  
        }

        swap(&data[i], &data[min_index]); //交换数据
        
    }
    
}

//选择排序（递减）
void decrease_selection_sort(int data[], int n)
{
    for (int i=0; i<n; i++) //需要选择的次数
    {
        int max_index = i; //最大值索引
        for (int j=i; j<n; j++) //需要比较的次数
        {
            if (data[j] > data[max_index])
            {
                max_index = j;
            }  
        }

        swap(&data[i], &data[max_index]); //交换数据
        
    }
    
}


