#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a, b,c;
	printf("Enter the integer and power:");
	scanf("%d %d", &a, &b);
	if (b != 1)
	{
		c = 1;
		for (int i = 1; i <= b; i++)
		{
			c = c * a;
		}
	}
	else
		c = a;
	printf("%d", c);
}