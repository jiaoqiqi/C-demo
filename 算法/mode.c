#include <stdio.h>
int main(){

        int a[50];
        int i,j;
        int maxCount=0,index=0,nCount=0;
        int n;

        printf("Please input how many numbers: ");
        scanf("%d",&n);
        for(i=0;i<n;i++){
                scanf("%d",&a[i]);
        }

        for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                        if(a[j]==a[i])
                                nCount++;
        }
                if(nCount>maxCount){
                        maxCount=nCount;
                        index=i;
                }
                nCount=0;
        }
        printf("the mode is : %d\n",a[index] );
        printf("The count of the mode is: %d",maxCount);
}