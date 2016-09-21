#include<stdio.h>
#include<stdlib.h>

typedef struct Student
{
	char cName[20];
	int iNumber;
	struct Student *next;
}list;

int iCount;

list *Create()
{
	struct Student *pHead=NULL;
	struct Student *pEnd,*pNew;
	iCount=0;
	pEnd=pNew=(struct Student *)malloc(sizeof(struct Student));
	printf("请输入学生学号和姓名：\n");
	scanf("%d",&pNew->iNumber);
	scanf("%s",pNew->cName);
	while(pNew->iNumber != 0)
	{
		iCount++;
		if(iCount == 1)
		{
			pNew->next=pHead;
			pEnd=pNew;
			pHead=pNew;
		}
		else
		{
			pNew->next=NULL;
			pEnd->next=pNew;
			pEnd=pNew;
		}
		pNew=(struct Student *)malloc(sizeof(struct Student));
		scanf("%d",&pNew->iNumber);
		if (pNew->iNumber==0)
		{
			break;
		}
		scanf("%s",pNew->cName);

	}
	free(pNew);
	return pHead;
}

void print(struct Student *pHead)
{
	struct Student *pTemp;
	int iIndex=1;
	printf("本名单中有%d个学生:\n",iCount);
	pTemp = pHead;
	while(pTemp != NULL)
	{
		printf("第%d个学生是：\n",iIndex);
		printf("学号: %d\n",pTemp->iNumber);
		printf("姓名: %s\n",pTemp->cName);
		pTemp=pTemp->next;
		iIndex++;
	}
}

void main()
{
	struct Student *pHead;
	int s;
	pHead=Create();
	do
	{
		printf("1.输出\n");
		printf("2.插入\n");
		printf("3.删除\n");
		printf("0.退出\n");
		printf("请输入操作数:");
		scanf("%d",&s);
		switch(s)
		{
			case 1:	print(pHead); break;
			//case 2:	pHead=Insert(pHead);break;
			//case 3: Delete(pHead);break;
			case 0:break;
		}
	}while(s!=0);
}
