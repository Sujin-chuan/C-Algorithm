#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int* Bubble_sort(int* p,int n);
int main(){
//ð�������㷨��������������
	
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
	bool flag = false;//��Ǳ�����������鱾��������flagʼ��Ϊ��
	int tmp;
	int i,j;
	int * p=a;
	for( i=0;i<n-1;i++){
		for(j=1;j<n-i;j++){  //��ĳһ��i������n-i-1�αȽ�
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
