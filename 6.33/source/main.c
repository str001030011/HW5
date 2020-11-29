#include<stdio.h>
#include<stdlib.h>


int bisearch(int key, int *list, int right, int left)
{

	int middle = (left + right) / 2;

	if (left < right)
	{
		if (key == list[middle])
		{
			return middle;
		}
		else if (key < list[middle])
		{
			right = middle - 1;
			return bisearch(key, list, right, left);

		}

		else
		{
			left = middle + 1;
			return bisearch(key, list, right, left);
		}

	}

	return -1;
}

int main()
{
	int list[10] = { 5,12,34,56,76,81,99,123,145,168 };
	int right = 9;
	int left = 0;
	int middle;
	int key;
	printf("請輸入要搜尋的key:\n");
	scanf_s("%d", &key);
	printf("key:%d在第%d個位置\n", key, bisearch(key, list, right, left));
}

