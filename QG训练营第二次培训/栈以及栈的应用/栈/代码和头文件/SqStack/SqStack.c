#include <stdio.h>
#include <stdlib.h>
#include "..\head\SqStack.h"



//初始化栈
Status initStack(SqStack *s,int sizes)
{												
	s->elem=(ElemType *)maloc(size*sizeof(ElemType));
	if (s->elem==NULL){
		printf("分配内存失败");
		return ERROR; 
	}
	s->top=-1;
	s->size=sizes;
 	return SUCCESS;		
} 
//判断栈是否为空
Status isEmptyStack(SqStack *s)
{
	if(s==NULL||s->top!=-1)
		return ERROR;
	return SUCCESS; 
}
//得到栈顶元素
Status getTopStack(SqStack *s,ElemType *e)
{
	if(s==NULL)
		return ERROR;
	*e=s->elem[s->top];
	return SUCCESS;
	
}
//清空栈 
Status clearStack(SqStack *s)
{
	if(s==NULL)
		return ERROR;
	s->top=-1;
	return SUCCESS; 
} 
//销毁栈
Status destroyStack(SqStack *s)
{
	if(s==NULL)
		return ERROR; 
		free(s->elem);
		free(s);
		return SUCCESS; 
	
}
//检测栈长度
Status stackLength(SqStack *s,int *length)
{
	if(s==NULL)
		return ERROR;
	*length=(s->top)+1;     //top初始化为-1,因此要加一
	return SUCCESS; 
} 
//入栈
Status pushStack(SqStack *s,ElemType data)
{
	if(s==NULL)
		return ERROR;
	s=(s->top)+1; 
	s->elem[s->top]=data;
	return SUCCESS;
} 
//出栈
Status popStack(SqStack *s,ElemType *data)
{
	if(s==NULL)
		return ERROR;
	*data=s->elem[s->top];
	s->top=(s->top)-1;
	return SUCCESS;
}
//输出数据 
void print_data(SqStack *s){
	while(s->top!=-1){
		printf(s->elem[s->top]);
		(s-top)--;
	}
		 
}


