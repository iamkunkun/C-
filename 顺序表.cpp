# include<stdio.h>
#  include<stdlib.h>

#define MaxSize 10
 typedef struct{
 	int data[MaxSize];
 	int length;
 }SqList;
 
 void InitList(SqList &L){
 	for(int i=0;i<MaxSize;i++){
 		L.data[i]=0;
	 }
	 L.length=0;
 }
 
 int main(){
 	SqList L;
 	InitList(L);
 	printf("d");
 	return 0;
 }
 
 /* 
# define InitSize 10
typedef struct{
	int * data;
	int MaxSize;
	int length;
}SeqList;
 
void InitList(SeqList *L){
	L->data=(int *)malloc(sizeof(int)*InitSize);
	for(int i=0;i<L->length;i++){
		L->data[i]=0;
	}
	L->length=10;
	L->MaxSize = InitSize;
}

//L->data = (int *) realloc(L->data, 15); ÈÝÒ×³ö´í 
void IncreaseList(SeqList *L,int len){
	int * p=L->data;
	L->data=(int *)malloc((L->MaxSize+len)*sizeof(int));
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
