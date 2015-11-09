#include <stdio.h>

int add(int arr1[100][100], int arr2[100][100], int m1, int n1, int m2, int n2)
{
	int i, j, sum;
	sum =0;
	for (i=0; i<m1; i++)
	{
		for (j=0; j<n1; j++)
		{
			sum = sum + arr1[i][j];
		}
	}
	for (i=0; i<m2; i++)
	{
		for (j=0; j<n2; j++)
		{
			sum = sum + arr2[i][j];
		}
	}
	return sum;
}

void main()
{
	int arr1[100][100], arr2[100][100], i, j, m1, m2, n1, n2;
	int sum;
	printf("Enter size of both matrices\n");
	scanf("%d %d %d %d", &m1, &n1, &m2, &n2);
	printf("Enter array 1\n");
	for (i=0; i<m1; i++)
	{
		for (j=0; j<n1; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	printf("Enter array 2\n");
	for (i=0; i<m2; i++)
	{
		for (j=0; j<n2; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}
	sum = add(arr1, arr2, m1, n1, m2, n2);
	printf("Sum is %d \n", sum);
}
