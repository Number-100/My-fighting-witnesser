#include <stdio.h>
#include <stdlib.h>
#include "..\head\SqStack.h"



//��ʼ��ջ
Status initStack(SqStack *s,int sizes)
{												
	s->elem=(ElemType *)maloc(size*sizeof(ElemType));
	if (s->elem==NULL){
		printf("�����ڴ�ʧ��");
		return ERROR; 
	}
	s->top=-1;
	s->size=sizes;
 	return SUCCESS;		
} 
//�ж�ջ�Ƿ�Ϊ��
Status isEmptyStack(SqStack *s)
{
	if(s==NULL||s->top!=-1)
		return ERROR;
	return SUCCESS; 
}
//�õ�ջ��Ԫ��
Status getTopStack(SqStack *s,ElemType *e)
{
	if(s==NULL)
		return ERROR;
	*e=s->elem[s->top];
	return SUCCESS;
	
}
//���ջ 
Status clearStack(SqStack *s)
{
	if(s==NULL)
		return ERROR;
	s->top=-1;
	return SUCCESS; 
} 
//����ջ
Status destroyStack(SqStack *s)
{
	if(s==NULL)
		return ERROR; 
		free(s->elem);
		free(s);
		return SUCCESS; 
	
}
//���ջ����
Status stackLength(SqStack *s,int *length)
{
	if(s==NULL)
		return ERROR;
	*length=(s->top)+1;     //top��ʼ��Ϊ-1,���Ҫ��һ
	return SUCCESS; 
} 
//��ջ
Status pushStack(SqStack *s,ElemType data)
{
	if(s==NULL)
		return ERROR;
	s=(s->top)+1; 
	s->elem[s->top]=data;
	return SUCCESS;
} 
//��ջ
Status popStack(SqStack *s,ElemType *data)
{
	if(s==NULL)
		return ERROR;
	*data=s->elem[s->top];
	s->top=(s->top)-1;
	return SUCCESS;
}
//������� 
void print_data(SqStack *s){
	while(s->top!=-1){
		printf(s->elem[s->top]);
		(s-top)--;
	}
		 
}


