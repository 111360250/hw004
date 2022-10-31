#include <stdio.h>
#include <stdlib.h>
int main()
{
	char a,b;
	printf("Enter an alphaber:");
	scanf("%c", &a);
	b = a + 32;
	printf("%c", b);
}