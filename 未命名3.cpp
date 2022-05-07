#include<stdio.h>
#include<stdbool.h>
#define MaxSize 15

typedef struct{
	int data[MaxSize];
	int length;
}SeqList;

void InitList(SeqList * L){
	for(int i =0;i<MaxSize;i++){
		L->data[i]=0;
	}
	L->length=10;
	
}

bool ListInsert(SeqList * L,int i, int e){
	if(i<1||i>L->length){
		return false;
	}
	if(L->length>MaxSize){
		return false;
	}
	for(int j=L->length;j>=i;j--){
		L->data[j]=L->data[j-1];
	}
	L->data[i-1]=e;
	L->length++;
	return true;
}

int main(){
	SeqList L;
	InitList(&L);
	
//	for(int i=0;i<L.length;i++){
//		scanf("%d",&L.data[i]);
//	}
	ListInsert(&L,3,1);
	for(int i=0;i<L.length;i++){
		printf("%d ",L.data[i]);
	}
	
	printf("\n");
	printf("finish");
	return 0;
} 

/*
#include<stdlib.h>

#define InitSize 10
typedef struct{
	int *data;
	int MaxSize;
	int length;
}SeqList;

void InitList(SeqList * L){
	L->data=(int *)malloc(sizeof(int)*InitSize);
	L->length=0;
	L->MaxSize=InitSize;
}

void IncreaseList(SeqList * L,int len){
	int *p=L->data;
	L->data=(int *)malloc(sizeof(int)*(L->MaxSize+len));
	for(int i=0;i<L->length;i++){
		L->data[i]=p[i];
	}
	L->MaxSize=L->MaxSize+len;
	free(p);
}

int main(){
	SeqList L;
	InitList(&L);
	IncreaseList(&L,5);
	return 0;
}
*/
