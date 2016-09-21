#include<stdio.h>
#include<math.h>
long int sum =0 ;
long int mici(int x,int n , int i)
{
	if(i>n)
		return sum;
	else
	{
		long int a=pow(x,i);
		if(i%2==0)
		{
			a=-a;
		}
		sum+=a;
	}
	return mici(x,n,i+1)

}
int main()
{
	float x;
	int n;
	scanf("%f%d",&x,&n);
	printf("%ld",mici(x,n,1));
}
