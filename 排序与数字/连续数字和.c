#include <stdio.h>
#define false 0
#define true 1
 
int main()
{
	unsigned int numberNum = 0;
	unsigned int numberHalf = 0; 
	unsigned int numberStep = 1;
	unsigned int i, j;
	unsigned int numberTotal = 0;
	int b = false;
 
	scanf("%u", &numberNum);
	numberHalf = numberNum / 2;
	if (numberNum % 2 != 0)  
		++numberHalf;
 
	while (numberStep <= numberHalf) 
	{
		numberTotal = 0;
		for (i = numberStep; i <= numberHalf; i++) 
		{
			numberTotal += i;
			if (numberTotal == numberNum) 
			{
				b = true;
				printf("%d=%d", numberNum ,numberStep);
				for (j = numberStep + 1; j <= i; ++j)
					printf("+%d", j);
				printf("\n");
				break;
			}
		}
		++numberStep;
	}
	if (b == false)
		printf("NONE");
	return 0;
}
