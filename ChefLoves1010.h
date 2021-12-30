#pragma once

#include <stdio.h>

int main()
{
	int T;
	int const sz = 101;
	char c[sz];
	scanf_s("%d\n", &T);
	for (int i = 0; i < T; i++)
	{
		int N;
		scanf_s("%d\n", &N);
		scanf_s("%s\n", c);

		int count1 = 0, count2 = 0;

		for (int i = 0; i < N; i++)
		{
			if (c[i] == '1')
			{
				count1++;
			}
			else
			{
				count2++;
			}
		}
		if (N >= 4)
		{
			if (count1 >= 2 && count2 >= 2)
			{
				if (count1 >= count2)
				{
					printf("%d\n", count2 - 1);
				}
				else
				{
					printf("%d\n", count1 - 1);
				}
			}
			else
			{
				printf("0\n");
			}
		}
		else
		{
			printf("0\n");
		}
	}
}