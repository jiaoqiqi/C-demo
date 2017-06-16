#include <stdio.h>

 int n;
 int m;
 int k;
 int found;
 int result[10];

void compute(){
    k = 1;
    found = 0;
    while ( !backtrack(1, n)){
        k++;
        if (k > 10)
            break;
        if (found)
            break;
    }
}

int fg(int n, int i){
    if (i == 0)
        return n / 2;
    else
        return 3 * n;
}

int backtrack(int dep, int n){

    if (dep>k){
        return 0;
    }

    for (int i = 0; i<2; i++){

        int num = n;
        num = fg(num, i);
        result[dep] = i;

        if (num == m || backtrack(dep + 1, num)){
            found = 1;
            return 1;
        }
    }
    return 0;
}

void main(){
    scanf("%d",&n);
    scanf("%d",&m);

    for (int i = 0; i<9; i++){
        result[i] = 0;
    }

    compute();

    if (found){
        printf("运算次数：%d次\n",k);
        printf("运算过程：" );
        for (int i = k; i >= 1; i--){
            if (result[i] == 0)
                printf("g");
            else if (result[i] == 1)
                printf("f");
        }
    }
    else{
        printf("%d无法变换成%d\n",n,m );
    }
}
