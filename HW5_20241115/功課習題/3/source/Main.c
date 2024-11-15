#include <stdio.h>
#include <stdlib.h>

void cubeByReference( int *nPtr );

int main(void)
{
	//函數的傳位址呼叫 (call by address)
	int number = 5;
	printf("The original value of number is %d", number);

	cubeByReference( &number ); //call by address

	printf("\nThe new value of number is %d\n", number);
	system("pause");
	return 0;
}

void cubeByReference(int *nPtr) //指標變數
{
	*nPtr = *nPtr * *nPtr * *nPtr;
	//取值*值*值
}