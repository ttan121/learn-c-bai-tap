#include <stdio.h>

int main()
{
	int n;
	printf("Enter size array: \n");
	scanf("%i", n);
	int a[n];
	for(int i=0; i<n; i++)
	{
		printf("Enter element %i : ");
		scanf("%i", a[i]);
	}
	for(int i=0; i<n; i++)
	{
		printf("%i ",a[i]);
	}
}
