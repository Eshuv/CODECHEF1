#pragma once

#include <stdio.h>

int main()
{
	int a;
	int T;
	scanf_s("%d", &T);
	int arr[300];
	
	for (int j = 0; j < T; j++)
	{
		int N;
		int min = 1000000;
		int max = 0;
		int secondmax = 0;
		int count = 0;
		scanf_s("%d", &N);
		for (int i = 0; i < N; i++)
		{
			int getVal;
			scanf_s("%d", &getVal);
			arr[i] = getVal;
		}

		for (int i = 0; i < N; i++)
		{
			if (arr[i] > max)
			{
				max = arr[i];
				a = i;

			}
			if (arr[i] < min)
			{
				min = arr[i];
			}
		}
		arr[a] = 0;
		for (int i = 0; i < N; i++)
		{
			if (arr[i] > secondmax)
			{
				secondmax = arr[i];
			}
		}

		printf("%d %d %d\n", min, secondmax, max);

		count = (max - min) * secondmax;

		printf("%d", count);
	}

}
