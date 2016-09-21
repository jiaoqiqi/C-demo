//儿砸 
#include<stdio.h>
#include<stdlib.h>
typedef struct student{
	int num;
	char name[10];
	struct student *next;
}st;
int count;
st *create()
{
	st *head,*p,*q;
	count=0;
	printf("请输入学号、姓名,当输入学号为0时结束创建：\n");
	q=(st *)malloc(sizeof(st));
	scanf("%d",&q->num);
	scanf("%s",q->name);
	while(q->num!=0)
	{
		count++;
		if(count==1){
			q->next=NULL;
			head=q;
			p=q;	
		}
		else{
			q->next=NULL;
			p->next=q;
			p=q;
		}
		q=(st *)malloc(sizeof(st));
		scanf("%d",&q->num);
		if(q->num==0)
		{
			break;
		}
		scanf("%s",q->name);
	}
	free(q);
	return head;
}
st *insert(st *head)
{
	st *pnew,*p;
	p=head;
	int a;
	printf("请输入要插入的位置：");
	scanf("%d",&a);
	printf("请输入插入内容：");
	pnew=(st *)malloc(sizeof(st));
	scanf("%d",&pnew->num);
	scanf("%s",pnew->name);
	if(a==0)//插在头结点前。 
	{
		pnew->next=head;
		head=pnew;
	}
	else if(a==count)//插在尾节点后。 
	{
		while(p&&p->next!=NULL)
		p=p->next;
		p->next=pnew;
		pnew->next=NULL;
	}
	else if(a>count)
		printf("超出范围。");
	else
	{
		while(p&&(p->num!=a)){
			p=p->next;
		}
		pnew->next=p->next;
		p->next=pnew;
	}
	count++;
	return head;
}
st *del(st *head)
{
	st *temp,*pre;
	temp=head;
	pre=temp;
	int a,i;
	printf("请输入需要删除的结点：");
	scanf("%d",&a);
	if(a==1)//删除头结点。 
	{
		temp=temp->next;
		free(head);
		head=temp;
	}
	else if(a==count){
		for(i=1;i<a;i++)
		{
			pre=temp;
			temp=temp->next;
		}
		free(temp);
		pre->next=NULL;
	}
	else{
		for(i=1;i<a;i++){
			pre=temp;
			temp=temp->next;
		}	
		pre->next=temp->next;
		free(temp);
	}
	count--;
	return head;
 } 
output(st *head)
{
	st *p;
	p=head;
	printf("本名单中共%d个学生信息\n",count);
	while(p!=NULL)
	{
		printf("%d  ",p->num);
		printf("%s\n",p->name);
		p=p->next;
	}
}
find(st *head)
{
	int a;
	st *p;
	p=head;
	printf("请输入查找的结点序号：");
	scanf("%d",&a);
	while(p!=NULL)
	{
		if(p->num==a)
		{
			printf("查找结果为：\n");
			printf("%d",p->num);
			printf("%s\n",p->name);
			break;
			
		}
		p=p->next;
	}
}
int main()
{
	st *head;
	int n;
	head=create();
	do
	{
		printf("1：打印\n");
		printf("2：查询\n");
		printf("3：插入\n");
		printf("4：删除\n");
		printf("0：退出\n");
		printf("输入操作数：");
		scanf("%d",&n);
		switch(n){
			case 1:output(head);break;		
			case 2:find(head);break;
			case 3:head=insert(head);break;
			case 4:head=del(head);break;
			case 0:break; 
		}
	}while(n!=0);
	return 0;
} 
