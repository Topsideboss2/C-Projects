#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 1025;
	int *p;
	p = &a;
	printf("Size of integer is %lu\n",sizeof(int));
	printf("Address = %p, value = %d\n",p,*p);
	char *p0;
	p0 = (char*)p;
	printf("Size of integer is %lu\n",sizeof(char));
	printf("Address = %p0, value = %d\n",p0,*p0);
}
