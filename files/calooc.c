#include<stdio.h>
#include<stdio.h>
#define LEN  sizeof(char[26])
void main()
{
	int i;
	char *ch1=(char*)calloc(26,sizeof(char));
	char *ch2=(char*)malloc(LEN);

	for(i=0 ; i<26 ; i++)
	{
		ch1[i]=65+i;
		ch2[i]=97+i;
	}
	printf("26 daxie alphebet:\n");
	for (int i = 0; i < 26; i++)
	{
		printf("%c",ch1[i]);
		if(i==12 || i==25)
			printf("\n");
	}
	printf("26 xiaoxie:\n");
	for (int i = 0; i < 26; ++i)
	{
		printf("%c",ch2[i]);
		if(i==12 || i==25)
			printf("\n");
	}
}

