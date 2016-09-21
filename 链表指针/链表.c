#include<s dio.h>
#include<stdlib.h>

struct Student
{	
	char cName[30];
	int iNumber;
	struct Student *next;
};

int iCount;

struct Student *Create()
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
			pNew->next=NULL;
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

struct Student *Insert(struct Student *pHead)//从头节点插入
{
	struct Student *pNew;
	printf("请输入学生的姓名和学号： \n");
	pNew=(struct Student *)malloc(sizeof(struct Student));
	scanf("%s",pNew->cName);
	scanf("%d",&pNew->iNumber);
	pNew->next=pHead;
	pHead=pNew;
	iCount++;
	return pHead;
}

struct Student *Delete(struct Student *pHead)
{
	int i,iIndex;
	struct Student *pTemp;
	struct Student *pPre;
	pTemp=pHead;
	pPre=pTemp;
	printf("输入要删除第几个学生：");
	scanf("%d",&iIndex);
	for(i=1 ; i<iIndex ; i++)
	{
		pPre=pTemp;
		pTemp=pTemp->next;
	}
	pPre->next=pTemp->next;
	free(pTemp);
	iCount--;
	return pHead;
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
			case 2:	pHead=Insert(pHead);break;
			case 3: Delete(pHead);break;
			case 0:break;
		}
	}while(s!=0);
}
