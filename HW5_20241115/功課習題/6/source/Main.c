#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//指標和陣列
	int b[] = { 10, 20, 30, 40 };
	int *bPtr = b; //指標變數指向陣列的第一個位置b[0]
	int i;
	int offset;

	printf("Array b printed with:\nArray subscript notation\n");
	for (i = 0; i < 4; i++)
	{
		printf("b[%d] = %d\n", i, b[i]); //輸出對應的值ex.b[0]=10
	}
		
	printf("\nPointer/offset notation where\n"
		"the pointer is the array name\n");
	for (offset = 0; offset < 4; offset++)
	{
		printf("*(b + %d) = %d\n", offset, *(b + offset)); //取值可以看成位移幾格*(b+3)=b[3]
	}
		
	printf("\nPointer subscript notation\n");
	for (i = 0; i < 4; i++)
	{
		printf("bPtr[%d] = %d\n", i, bPtr[i]); // bPtr[3]=b[3]都是指同個地方
	}
		
	printf("\nPointer/offset notation\n");
	for (offset = 0; offset < 4; offset++)
	{
		printf("*(bPtr + %d) = %d\n", offset, *(bPtr + offset)); //取值可以看成位移幾格*(bPtr+3)=*(b+3)=b[3]
	}
		
	system("pause");
	return 0;
}