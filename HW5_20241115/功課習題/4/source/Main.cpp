#include <stdio.h>
#include <stdlib.h>

void cubeByReference( int &Ptr );

int main(void)
{
	//函數的傳參考呼叫 (call by reference)
	int number = 5;
	printf("The original value of number is %d", number);

	cubeByReference( number ); //call by reference

	printf("\nThe new value of number is %d\n", number);
	system("pause");
	return 0;
}

void cubeByReference(int &nPtr)
{
	nPtr = nPtr * nPtr * nPtr;
}