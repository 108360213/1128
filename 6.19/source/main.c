#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int sum[11] = { 0 };
	int a, b,roll,face;
	srand(time(NULL));

	for (roll = 1; roll <= 36000; roll++)
	{
		a = 1 + rand() % 6;
		b = 1 + rand() % 6;
		++sum[a + b - 2];
	}
	printf("%s%17s\n", "Sum of Face", "Frequency");
	for (face = 0; face <= 10; face++)
	{
		printf("%5d%19d\n", face + 2, sum[face]);
	}
	system("pause");
	return 0;
}