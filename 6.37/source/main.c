#include<stdio.h>
#include<stdlib.h>

int recMaximum(int p[], int d)
{
	int m = p[0];
	for (int i = 1; i < d; i++)
	{
		if (p[i] > m)
			m = p[i];
	}
	return m;
}
int main(void)
{
	int array1[20];
	char e;
	int i=0,s;
	printf("Enter an array: ");
	while (scanf_s("%d%c", &array1[i], &e) != -1&&e!='\n')
	{
		i++;
	}
	s = sizeof(array1) / sizeof(array1[0]);
	printf("The maximum value is %d\n", recMaximum(array1, s));
	system("pause");
	return 0;
}