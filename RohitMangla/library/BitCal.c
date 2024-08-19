#include<stdio.h>
#include"BitwiseCalculator.h"

int main()
{	int number1 = 5;
	int number2 = 10;
	printf("%d\n" , add(number1,number2) );
	printf("%d\n" , sub(number2,number1) );
	printf("%d\n" , mul(number1,number2) );
	printf("%f\n" , divide(number1,number2) );
	return 0;
}
