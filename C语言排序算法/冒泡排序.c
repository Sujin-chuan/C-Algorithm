#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
void Bubble_sort(int a[],int n);
void Bubble_sort(int a[],int n){
	int flag = 0;
	int temp = 0;
	int i,j;
	for(i=1; i<n; i++){
		for(j=n-1; j>i-1;j--){
			if(a[j-1]>a[j]){
				temp = a[j-1];
				a[j-1]=a[j];
				a[j]= temp;
				flag = 1;
			}
		}
		while(flag ==0){
			return;
		}
	}
	return;
}//
int main(){
	int n,i ;
	scanf("%d",&n);
	int* a = (int*)malloc(sizeof(int)*n);//动态分配n*sizeof(int)大小的内存 
	for(i=0; i<n;i++){
		scanf("%d",a+i);
	}
	Bubble_sort(a,n);
	for(i=0; i<n; i++){
		printf("%d ",a[i]);
	} 
	free(a);
	return  0;
}
