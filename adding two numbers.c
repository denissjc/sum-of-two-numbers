#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number1,number2,sum;
	setbuf(stdout,NULL);

	printf("enter two numbers");
	scanf("%d%d",&number1,&number2);
	sum=number1+number2;
	printf("result is:%d",sum);

	return EXIT_SUCCESS;
}
output
enter two numbers 46
67
result is:113
