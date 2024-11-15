#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void bubbleSort(int * const array, const int size);

int main(void)
{
	//氣泡排序 (bubble sort)使用call by address
	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	int i;

	printf("Data items in original order\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]); //從a[0]到a[9]列印出來
	}

	bubbleSort(a, SIZE);

	printf("\nData items in ascending order\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}

	printf("\n");
	system("pause");
	return 0;
}

void bubbleSort(int * const array, const int size)
{
	void swap(int *element1Ptr, int *element2Ptr);
	int pass;
	int j;

	for (pass = 0; pass < size - 1; pass++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				//a[0]>a[1]則互換
				swap(&array[j], &array[j + 1]); // 函數呼叫
			}
		}
	}
}

//函數定義
//整個陣列會自動以傳位址呼叫(call by address)來傳遞
void swap(int *element1Ptr, int *element2Ptr)
{
	int hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
}