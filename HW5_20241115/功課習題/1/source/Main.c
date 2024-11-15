#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//整數指標變數(int *)與整數變數(int)
	int a; //整數變數a
	int *aPtr; //整數指標變數aPtr

	a = 7;
	aPtr = &a; //aPtr指向a的位址

	printf("The address of a is %p"
		"\nThe value of aPtr is %p", &a, aPtr); //回傳地址

	printf("\n\nThe value of a is %d"
		"\nThe value of *aPtr is %d", a, *aPtr); //這裡的*aPtr是取出值

	printf("\n\nShowing that * and & are complements of "
		"each other\n&*aPtr = %p"
		"\n*&aPtr = %p\n",&*aPtr, *&aPtr); //回傳地址
	system("pause");
	return 0;
}