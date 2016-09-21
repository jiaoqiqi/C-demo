#include<stdio.h>
void quick_sort(int a[] , int low , int high)
{
	int i=low ;
	int j=high;
	int temp =a[i];
	if(low<high)
	{
		while(i<j)
		{
			while((i<j) && (a[j]>=temp))
			{
				j--;
			}
			a[i]=a[j];
			while((i<j) && (a[i]<=temp))
			{
				i++;
			}
			a[j]=a[i];
		}
		a[i]=temp;
		quick_sort(a,low,i-1);
		quick_sort(a,j+1,high);
	}
	else
	{
		return;
	}
}
int main()
{
	int i, array[5]={26,68,28,496,27};
	quick_sort(array, 0, 4);
	for(i=0 ; i<5 ; i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");
	return 0;
}
