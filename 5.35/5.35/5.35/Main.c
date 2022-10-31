#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, d;
	long long int b = 0;
	int c = 1;
	printf("Enter the largest number:");
	scanf("%d", &a);
	printf("%d %d ", b, c);
	
		for (int i = 0; i < a; i++)
		{
			d = b + c;
			printf("%d ", d);

			b = c;
			c = d;

		}
	
}