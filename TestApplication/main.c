#include <stdio.h>
#include <stdlib.h>


int main()
{

	int a = 5;
	char* ch = 0;

	printf("a = %d\n", a);

	ch = (char*)((void*)&a);

	printf("c = %d\t%d\t%d\t%d\n", ch[0], ch[1], ch[2], ch[3]);

	ch[0] = 74;

	printf("a = %d\n", a);


	return 0;
}