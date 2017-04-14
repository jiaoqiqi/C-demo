// #include <iostream>  
  
// using namespace std;
#include <stdio.h>  
  
int getMax(int m, int n)  
{  
    return m>n?m:n;  
}  
  
int main()  
{  
    int road[100][100] = {0};  
    int n = 0;  
    // cin >> n; 
    scanf("%d",&n); 
    for(int i=0; i<n; i++) {  
        for (int j=0; j<=i; j++) {  
            // cin >> road[i][j]; 
            scanf("%d",&road[i][j]); 
        }  
    }  
    int dist[100][100] = {0};  
    dist[0][0] = road[0][0];  
    for(int i=1; i<n; i++) {  
        dist[i][0] = dist[i-1][0]+road[i][0];  
    }  
    for(int i=1; i<n; i++) {  
        dist[i][i] = dist[i-1][i-1]+road[i][i];  
    }  
    for(int i=2; i<n; i++) {  
        for(int j=1; j<n-1; j++) {  
            dist[i][j] = getMax(dist[i-1][j-1], dist[i-1][j])+road[i][j];  
        }  
    }  
    int maxSum = 0;  
    for(int i=0; i<n; i++) {  
        if(dist[n-1][i]>maxSum) maxSum = dist[n-1][i];  
    }  
    // cout << maxSum << endl;  
    printf("%d\n",maxSum );
    return 0;  
}  