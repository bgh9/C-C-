// 功能：快速排序算法
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//数据交换
void swap(int* a, int* b);
//快速排序
// void quick_sort(int data[], int n);
void quick_sort(int *arr, int left, int right);

//主函数
int main()
{
    printf("*** quick_sort test ***\n");

    int t_data[] = {3,2,1,4,5,7,6,8}; 
    //int t_data[] = {3,7,6,4,5,2,1,8}; 

    quick_sort(t_data, 0, sizeof(t_data)/sizeof(int)-1);
    printf("quick sort result:\r\n");
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

//快速排序
void quick_sort(int *arr, int left, int right)
{
	if (left >= right) {
		return;
	}
	int i = left;
	int j = right;
	int key = arr[left];
	while (i < j)
	{
		while (i < j && key <= arr[j])
		{
			j--;
		}
		arr[i] = arr[j];
		while (i < j && arr[i] <= key)
		{
			i++;
		}
		arr[j] = arr[i];
	}
	arr[i] = key;
	quick_sort(arr, left, i - 1); 
	quick_sort(arr, i + 1, right);
}

