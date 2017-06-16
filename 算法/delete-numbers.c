#include <stdio.h>  
#include <string.h>  
  
int main()  
{  
    char a[20];  
    int k;  
    printf("输入正整数:\n");  
    scanf("%s",a);  
    printf("输入k值:\n");  
    scanf("%d",&k);  
    int len = strlen(a);  
    while(k--)  
    {  
        int i=0,j;  
        while(i<len-1 && a[i]<=a[i+1])  
        {  
            i++;  
        }  
        if(i==len-1)  
        {  
            len--;  
            while(k--)  
                len--;  
            break;  
        }  
        else  
        {  
            for(j=i;j<len-1;j++)  
                a[j]=a[j+1];  
            len--;  
        }  
    }  
    printf("最小值为:\n");  
    int l;  
    for(l=0;l<len;l++)  
        printf("%c",a[l]);  
    printf("\n");  
    return 0;  
}  
