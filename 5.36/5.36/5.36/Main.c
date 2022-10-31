#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n,moved;
	printf("Enter the sheet:");
	scanf("%d", &n);
	moved = pow(2, n) - 1;
	printf("\nTotal move step is %d", moved);
}