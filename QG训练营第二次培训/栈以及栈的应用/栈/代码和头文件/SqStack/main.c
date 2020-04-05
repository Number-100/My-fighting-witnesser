#include <stdio.h>
#include <stdlib.h>
#include "..\head\SqStack.h"



int main()
{	int sizes=0; 
	int a=0;
	printf("以下选项可供选择:\n");
	printf("1,初始化栈\n");
	printf("2,判断栈是否为空\n");
	printf("3,得到栈顶元素\n");
	printf("4,清空栈\n");
	printf("5,销毁栈\n");
	printf("6,检测栈长度\n");
	printf("7,入栈\n");
	printf("8,出栈\n");
	printf("你的选择是:\n");
	scanf("%d",&a);
	switch(a){
		case'1':
			printf("请输入一个数字确定栈的最大空间:");
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
			printf("请输入你要入栈的数字:");
			scanf("%d",&data);
			popStack(SqStack *s,ElemType *data);
			break; 
	}
	printf("操作结束");
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

