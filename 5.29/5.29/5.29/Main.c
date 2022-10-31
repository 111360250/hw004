#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, max;
	printf("Enter two integers:");
	scanf("%d %d", &a, &b);
	if (a > b)
		max = a;
	else
		max = b;
	while (1)
	{
		if (max%a == 0 && max%b == 0)
		{
			printf("lcm=%d", max);
			system("pause");
			return 0;
		}
		else
		{
			++max;
		}
	}
}