#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int a, b;
	int i,j;
	int s[36000];
	int t[13] = { 0 };
	srand(time(0));
	printf("a\tb\ta+b\n");
	for (i = 0; i < 36000; i++)
	{
		a = 1 + rand() % 6;
		b = 1 + rand() % 6;
		printf("%d\t%d\t%d\n", a, b, a + b);
		s[i] = a + b;
		for (j = 2; j < 13; j++)
		{
			if (a + b == j) t[j] += 1;
		}
	}
	printf("\n\n\na+b\ttimes\n");
	for (j = 2; j < 13; j++)
	{
		printf("%d\t%d\n", j, t[j]);
	}
	system("pause");
	return 0;
}