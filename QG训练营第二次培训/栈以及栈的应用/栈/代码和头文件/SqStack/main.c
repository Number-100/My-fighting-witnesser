#include <stdio.h>
#include <stdlib.h>
#include "..\head\SqStack.h"



int main()
{	int sizes=0; 
	int a=0;
	printf("����ѡ��ɹ�ѡ��:\n");
	printf("1,��ʼ��ջ\n");
	printf("2,�ж�ջ�Ƿ�Ϊ��\n");
	printf("3,�õ�ջ��Ԫ��\n");
	printf("4,���ջ\n");
	printf("5,����ջ\n");
	printf("6,���ջ����\n");
	printf("7,��ջ\n");
	printf("8,��ջ\n");
	printf("���ѡ����:\n");
	scanf("%d",&a);
	switch(a){
		case'1':
			printf("������һ������ȷ��ջ�����ռ�:");
			scanf("%d",&sizes);
			initStack(SqStack *s,int sizes);
			break;
		case'2':
			isEmptyStack(SqStack *s);
			break;
		case'3':
			getTopStack(SqStack *s,ElemType *e);
			break;
		case'4':
			clearStack(SqStack *s);
			break;
		case'5':
			destroyStack(SqStack *s);
			break;
		case'6':
			stackLength(SqStack *s,int *length);
			break;
		case'7':
		 	pushStack(SqStack *s,ElemType data);
			break;
		case'8';
			printf("��������Ҫ��ջ������:");
			scanf("%d",&data);
			popStack(SqStack *s,ElemType *data);
			break; 
	}
	printf("��������");
	return 0; 
} 


SqStack *P{
	ElemType *elem=[0,1,2,3,4,5];
	int top=5;
	int size=6; 
}

void print_data(SqStack *s){
	if(s==NULL)
		return ERROR;
	while(s->top!=-1){
		printf(s->elem[s->top]);
		(s-top)--;
		return SUCCESS;
	} 
		 
}

