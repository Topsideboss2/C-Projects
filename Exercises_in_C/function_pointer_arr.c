#include <stdio.h>
#include <stdlib.h>
void add(int a, int b)
{
	printf("Addition is %d\n", a+b);	
}
void subtract(int a, int b)
{
	printf("Subtraction is %d\n", a-b);
}
void multiply(int a, int b)
{
	printf("Multiplication is %d\n", a*b);
}

int main()
{
	// fun_ptr_arr is an array of function pointers
	void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply};
	unsigned int ch, a, b;

	printf("Kindly input the first digit\n");
	scanf("%d", &a);
	printf("Kindly input the second digit\n");
	scanf("%d", &b);
	printf("Enter choice: 0 for add, 1 for subtract and 2 "
		"for multiply\n");
	scanf("%d", &ch);

	if (ch > 2)
		return (0);

	(*fun_ptr_arr[ch])(a, b);

	return (0);
}
