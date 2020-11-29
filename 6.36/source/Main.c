#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int stringreverse(char n[60]);
int main(void)
{
	char a[60];
	printf("請輸入一個字串:");
	scanf_s("%s", a, (unsigned)_countof(a));
	
	printf("反轉後字串為:%s", stringreverse(a));
}
int stringreverse(char n[60])
{
	int k;
	k = strlen(n);
	for (int i = 0; i < k / 2; i++)
	{
		char c = n[i];
		n[i] = n[k - 1 - i];
		n[k - 1 - i] = c;
	}
	return n;
}