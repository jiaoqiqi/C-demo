#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Merge(int a[],int l,int m,int r){

	int i=l,j=m+1,p=0,q;
	int al[r];

	while(i<=m&&j<=r){
		if(a[i]<=a[j])
			al[p++]=a[i++];
		else
			al[p++]=a[j++];
	}

	if(i>m){
		for(q=j;q<=r;q++){
			al[p++]=a[q];
		}
	}
	else{
		for(q=i;q<=m;q++){
			al[p++]=a[q];
		}
	}

	for(p=0,i=l;i<=r;p++,i++){
		a[i]=al[p];
	}
}


void NatureMergeSort(int a[],int n){
	int i,sum,low,mid,high;

	while(1){
		i=0;
		sum=0;

		while(i<n-1){
			low=i;

			while(i<n-1&&a[i]<a[i+1]){
				i++;
			}
			mid=i++;

			while(i<n-1&&a[i]<a[i+1]){
				i++;
			}
			high=i++;

			if(i<=n){
				Merge(a,low,mid,high);
				sum++;
			}	
	}

		if(sum==1){
			break;
		}
	}
}

void main(){
	int i,n;

	printf("Please input how many numbers: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	NatureMergeSort(a,n);

	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}

}
