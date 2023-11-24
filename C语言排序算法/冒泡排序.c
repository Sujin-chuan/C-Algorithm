#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int* Bubble_sort(int* p,int n);
int main(){
//冒泡排序算法，给定整数数组
	
	int n,i;
	scanf("%d",&n);
	int* a =(int*)malloc(n*sizeof(int));
	for(i =0; i<n; i++){
		scanf("%d",a+i);
	}
	int *p = Bubble_sort(a,n);
	for(i=0;i<n;i++){
		printf("%d ",*(p+i));
	} 
	free(a);
	return 0;
}
int* Bubble_sort(int* a,int n){
	bool flag = false;//标记变量，如果数组本身有序，则flag始终为负
	int tmp;
	int i,j;
	int * p=a;
	for( i=0;i<n-1;i++){
		for(j=1;j<n-i;j++){  //对某一趟i，进行n-i-1次比较
			if(a[j-1]>a[j]){
				tmp = a[j];
				a[j]= a[j-1];
				a[j-1]=tmp;
				flag = true;
			}
		}
		while(flag ==false ){
			return a ;
		}
	} 
	return p;
}
