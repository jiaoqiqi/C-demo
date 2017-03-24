#include <stdio.h>
#include <stdlib.h>

typedef  int Type;

void Merge(Type *R,int l,int m , int r){
	int i=1 , j=m+1 , p=0 ,q;

	Type *R1;
	R1 = (Type *)malloc ((r-l+1)*sizeof(Type));
	if(!R1)
		return;
	while (i<=m && j<=r){
		if(R[i] < R[j]){
			R1[p++] = R[i++];
		}
		else{
			R1[p++] = R[j++];
		}
	}
	if(i>m){
		for(q=j ; q<=r ; q++){
			R1[p++] = R[p];
		}
	}
	else{
		for(q=i ; q<=m ; q++){
			R1[p++] = R[q];
		}
	}
	
	for(p=0,i=1; i<=r ; p++,i++){
		R[i] = R1[p];
	}
}


void NatureMergeSort(Type R[],int n){
	int i,sum,low,mid,high;
	while(1){
		i=0;
		sum=1;
		while(i < n-1){
			low = i ;
			while(i < n-1 && R[i]<R[i+1]){
				i++;
			}
			mid = i++;
			while(i<n-1 && R[i]<R[i+1]){
				i++;
			}
			high = i++;
			if(i<=n){
				Merge(R,low,mid,high);
				sum++;
			}
		}
		if(sum==1)
			break;
	}
}

void main(){
	int num[] = {2,5,9,3,6,1,0,7,4,8};

    NatureMergeSort(num,10);
    
    for(int i = 0;i < 10;i++)
    {
        printf("%d ",num[i]);
    }
}