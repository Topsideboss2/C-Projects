#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, *A;
	printf("Enter size of your array\n");
	scanf("%d",&n);
	A = (int*)malloc(n*sizeof(int));
	for(int i = 0; i < n; i++)
	{
		A[i] = i + 1;
	}
	for(int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	free(A);
}
