#include <stdio.h>

int main()
{
	int rows = 6, columns = 20;
    int i, j;
	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= columns; j++)
		{
			if (i==1 || i==rows || j==1 || j==columns)		
				printf("*");		
			else
				printf(" ");		
		}
		printf("\n");
	}

	return 0;
}
