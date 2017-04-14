#include <stdio.h>
void main()
{

    int n;
    int s[101][101] = { 0 };
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            scanf("%d",&s[i][j]);
        }
    }

    int max[101][101] = { 0 };
    for (int i = 1; i <= n; i++)
    {
        
        max[n][i] = s[n][i];
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            int one = max[i + 1][j];
            int two = max[i + 1][j + 1];
            max[i][j]=s[i][j]+((one>two)?one:two);
            
        }
    }
    printf("%d\n",max[1][1] );
    
}
