#include <stdio.h>
//交换数组的两段大小相等的范围的对应数据  
//a[low1] <->a[low2]  a[low1+1]<->a[low2+1]  ... a[high1] <-> a[high2]  
void swap(int a[],int low1,int high1,int low2,int high2){  
  
    int temp;  
    while(low1<=high1){  
        temp=a[low1];  
        a[low1]=a[low2];  
        a[low2]=temp;  
        low1++;  
        low2++;  
    }  
}  
  
//利用分治算法， 每次选择最小的数组进行换位  
void patition(int a[], int low, int k, int high){  
  
    if(low<high){  
        if((k-low+1)==(high-k))  
            swap(a,low,k,k+1,high);  
        else if((k-low+1)<(high-k)){  
            swap(a,low,k,low+high-k,high);  
            patition(a,low,k,low+high-k-1);  
        }  
        else{  
            swap(a,low,high+low-k-1,k+1,high);  
            patition(a,high+low-k,k,high);  
        }  
    }  
  
}  
//测试  
int main(){  
    int a[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13};  
    patition(a,0,4,13);  
    for(int i=0;i<14;i++){  
        printf("%d  ",a[i]);  
    }  
    return 0;  
}  
