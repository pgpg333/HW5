#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void bubbleSort(int * const array, const int size);

int main(void)
{
	int a[SIZE] = { 2,6,4,8,10,12,89,68,45,37 };
	int i;

	printf("Data items in original order\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}

	bubbleSort(a, SIZE);

	printf("\nData items in aseconding order\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}

	system("pause");
	return 0;
}

void bubbleSort(int* const array, const int size)
{
	void swap(int* e1Ptr, int* e2Ptr);
	int pass;
	int j;
	printf("\n");
	for (pass = 0; pass < size - 1; pass++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
			}
		}
	}
}

void swap(int* e1Ptr, int* e2Ptr)
{
	int hold = *e1Ptr;
	*e1Ptr = *e2Ptr;
	*e2Ptr = hold;
}



