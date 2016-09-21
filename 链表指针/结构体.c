#include<stdio.h>
#define N 3
struct student
{
	int id;
	char name[20];
	char sex[6];
	int score[4];
	float aver;
};
void Input(struct student st[] , int n)
{	FILE *fp;
	fp = fopen("open.txt","wt");
	int i,j;
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&st[i].id);
		scanf("%s",st[i].name);
		scanf("%s",st[i].sex);
		for(j=0 ; j<4 ; j++)
		{
			scanf("%d",&st[i].score[j]);
		}
	}
	for(int i = 0;i < N;i++){
		fprintf(fp,"%d ",st[i].id);//st[i].name , st[i].sex , st[i].score[0] ,  st[i].score[1] ,st[i].score[2],st[i].score[3]  );
	}
}
void getAver(struct student st[] , int n)
{
	int i ,j ;
	for(i=0 ; i <n ; i++)
	{
		int s=0 ; 
		for(j=0 ; j<4 ; j++)
		{
			s+=st[i].score[j];
		}
		st[i].aver=s/4.0;
	}
}
void shunxu(struct student st[] , int n)
{
	int i,j,k;
	struct student t;
	for(i=0 ; i<n-1 ; i++)
	{
		k=i;
		for(j=i+1 ; j<n ; j++)
		{
			if(st[k].aver>st[j].aver)
				k=j;
		}
		if(k!=i)
		{
			t=st[k];
			st[k]=st[i];
			st[i]=t;
		}
	}
}

void output()
{	
	struct student st[N];
	
	FILE *fp;
	fp=fopen("open.txt","rt");
	for(int k=0 ; k<N ; k++){
		fscanf(fp,"%d",&st[k].id);//, st[k].name , st[k].sex , &st[k].score[0] ,  &st[k].score[1] ,&st[k].score[2] ,&st[k].score[3]);
	}
        int i,j;
        for(i=0 ; i<N ; i++)
        {
                printf("%d ",st[i].id);
          /*      printf("%s ",st[i].name);
                printf("%s ",st[i].sex);
                for(j=0 ; j<4 ; j++)
                {
                        printf("%d ",st[i].score[j]);
                }
		printf("%f\n",st[i].aver);  */
        }
}

void main()
{
	struct student st[N];
	Input(st,N);
	getAver(st,N);
	shunxu(st,N);
	output();
}

