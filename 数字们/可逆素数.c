#include<stdio.h>
#include<string.h>
#include<math.h>

int sushu(int number)
{
        int i;
        for(i=2 ; i<number/2;i++)
        {
                if(number%i==0)
                        return 0;
        }
        return 1;
}

}
int strNumber(char arr[]){
    int number = 0;
    for(int i = 0 ; i < strlen(arr) ; i++)
    {
        int stred = (arr[i] - 48)*pow(10,i+1);
        number = number + stred;
    }
    return number/10;
}

int strNi(char arr[]){
    int number = 0;
    for(int i = 0 ; i < strlen(arr) ; i++){
        int m = (arr[i] - 48)*pow(10,strlen(arr)-i);
        number = number + m;
    }
    return number/10;
}

int main() 
{
    int number;
    scanf("%d",&number);
    char arr[number][100];
    
    for(int i = 0; i < number; i++)
    {
        scanf("%s",arr[i]);
    } 
    for(int i = 0 ; i < number ; i++){
        if(sushu(strNi(arr[i])) == 1)
        {
            if(sushu(strNumber(arr[i])) == 1)
                printf("%ld是可逆素数\n",strNi(arr[i]));
            else
                printf("%ld是素数，但不是可逆素数\n",strNi(arr[i]));
        }
        else
            printf("%ld不是素数\n",strNi(arr[i]));
    }
    return 0; 
}
