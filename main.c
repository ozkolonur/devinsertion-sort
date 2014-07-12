#include <stdio.h>

void insertionSort(char numbers[], int array_size);

int main(int argc, char *argv[])
{
	int i;
	char numbers[] = {0x01, 0x05, 0x02, 0x03, 0x09, 0x07};
	for(i=0; i<sizeof(numbers); i++)
		printf("%d ", numbers[i]);
	printf("\n");
	insertionSort((char *)&numbers, sizeof(numbers));

	for(i=0; i<sizeof(numbers); i++)
		printf("%d ", numbers[i]);
	printf("\n");

	return 0;		
}

void insertionSort(char numbers[], int array_size)
{
	int i, j, index;
	for (i=1; i < array_size; i++)
	{
		index = numbers[i];
		j = i;
		while ((j > 0) && (numbers[j-1] > index))
		{
			numbers[j] = numbers[j-1];
			j = j - 1;
		}	
		numbers[j] = index;
	}
}


 