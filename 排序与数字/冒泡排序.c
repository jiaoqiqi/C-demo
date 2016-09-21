 #include<stdio.h>
void main()
{
	int i,j;
	float math[10]={34,87,35,97,13,45,76,45,78,5},temp;
	for(i=0 ; i<9 ; i++)
	{
		for(j=0 ; j<9-i ; j++)
		{
			if(math[j]>math[j+1])
			{
				temp=math[j];
				math[j]=math[j+1];
				math[j+1]=temp;
			}	
		}

	}
	for(i=0 ; i<10 ;i++)
		printf("%5.1f",math[i]);
	
}
