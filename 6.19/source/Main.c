#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 7

int main(void)
{
	int face1,face2;
	int frequency[11] = { 0 };
	int i;
	srand(time(NULL));

	printf("%s%17s\n", "sum", "frequency");
	for (i = 0; i < 36000; i++)
	{
		face1 = 1 + rand() % 6;
		face2 = 1 + rand() % 6;
		for (int k = 2; k < 13; k++)
		{
			if (face1 + face2 == k)
			{
				++frequency[k - 2];
			}
		}
		
	}
	
	for (int j = 2; j < 13; j++)
	{
		printf("%2d%17d\n", j, frequency[j-2]);
	}
	

	system("pause");
	return 0;
}