#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int stringreverse(char str[],int a)
{
	if (a != -1)
	{
		char temp;
		double x = a / 2;
		for (int i = 0; i < x; i++)
		{
			temp = str[i];
			str[i] = str[a - 1 - i];
			str[a - 1 - i] = temp;
		}
		printf("Backward: %s", str);
		return 0;
	}
	return -1;
}
int main(void)
{
	int s,len,index;
	char str1[50];
	char str2[50];
	printf("Enter a string: ");
	scanf_s("%s", str1,50);
	strcpy_s(str2,50, str1,50);
	len = strlen(str2);
	index = stringreverse(str2, len);
	system("pause");
	return 0;
}