#include <stdio.h>

void sort(int *numbers, int size)
{
	int temp = 0;
	for (int j = 0; j < size - 1; j++)
	{
		for (int i = 0; i < size - 1 - j; i++)
		{
			if (numbers[i] > numbers[i + 1])
			{
				temp = numbers[i];
				numbers[i] = numbers[i + 1];
				numbers[i + 1] = temp;
			}
		}
	}
}

int main ()
{
	int numbers[7] = {1, 36, 70, 23, 54, 78, 8};

	sort(numbers, 7);
    for (int i = 0; i < 7; i++)
        printf("%d ", numbers[i]);

	return (0);
}
