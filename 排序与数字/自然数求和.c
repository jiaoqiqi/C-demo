/* This program is solve using for loop. */

#include <stdio.h>
int main()
{
    int n, count, sum=0;
    printf("Enter an integer: ");
    scanf("%d",&n);
    for(count=1;count<=n;++count)  /* for loop terminates if count>n */
    {
        sum+=count;                /* sum=sum+count */
    }
    printf("Sum = %d",sum);
    return 0;
}

