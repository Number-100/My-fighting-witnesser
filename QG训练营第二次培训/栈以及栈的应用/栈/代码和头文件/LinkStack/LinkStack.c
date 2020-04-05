#include "..\head\LinkStack.h"
#include <stdlib.h>
#include <stdio.h>

//链栈(基于链表的)
Status initLStack(LinkStack *s)   //初始化
{
    if(NULL ==s)
		return ERROR;
    s->top =NULL;
    s->count =0;
    return SUCCESS;
}

Status isEmptyLStack(LinkStack *s)  //判断链栈是否为空
{
    if(NULL ==s || s->count !=0 )
		return ERROR;
    return SUCCESS;
}

Status getTopLStack(LinkStack *s,ElemType *e)  //得到栈顶元素
{
    if(NULL ==s || isEmptyLStack(s))
		return ERROR;
    *e =s->top->data;
    return SUCCESS;
}

Status clearLStack(LinkStack *s)   //清空栈
{
    if(NULL ==s || isEmptyLStack(s))
		return ERROR;
    LinkStackPtr nextNode;      //保存节点
    while(s->top != NULL)
    {
        nextNode =s->top->next;  //循环到最顶的节点
        free(s->top);
        s->count--;
        s->top = nextNode;
    }
    return SUCCESS;
}

Status destroyLStack(LinkStack *s)   //销毁栈
{
    if(NULL ==s)
		return ERROR;
    LinkStackPtr nextNode;      //保存节点
    while(s->top != NULL)
    {
        nextNode =s->top->next;  //循环到最顶的节点
        free(s->top);
        s->count--;
        s->top = nextNode;
    }
    free(s);        //释放头节点 
    return SUCCESS;
}

//检测栈长度
Status LStackLength(LinkStack *s,int *length)    
{
    *length =s->count;
}

//入栈 
Status pushLStack(LinkStack *s,ElemType data)   
{
    if(NULL ==s)
		return ERROR;
    LinkStackPtr newNodeHead;
    newNodeHead =(LinkStackPtr)malloc(sizeof(StackNode));   //给新节点分配内存
    if(NULL ==newNodeHead)
		return ERROR;
    newNodeHead->data = data;
    newNodeHead->next = s->top;  //新节点next头
    s->top = newNodeHead;        //头next新节点
    s->count++;
    return SUCCESS;
}

//出栈
Status popLStack(LinkStack *s,ElemType *data)   
{
    if(NULL ==s || isEmptyLStack(s))
		return ERROR;
    LinkStackPtr curNodeHead;   	//待销毁的节点
    curNodeHead =s->top;
    s->top = curNodeHead->next; 	//头指向下一位
    *data = curNodeHead->data;
    s->count--;
    free(curNodeHead);
    return SUCCESS;
}
