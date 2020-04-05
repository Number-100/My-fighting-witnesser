#include <stdio.h>
#include <stdlib.h>
#include "../head/LinkStack.h"


int main()
{	
	int a; int num,destroyStatus =1;                                       //选择功能、摧毁标志
    ElemType *e =(ElemType*)malloc(sizeof(ElemType));   //存储节点值
    LinkStack *test;
    printf("选择测试链栈功能\n");
    printf("1：初始化\n");
    printf("2：销毁\n");
    printf("3：压入\n");
    printf("4：弹出\n");
    printf("5：清空\n");
    printf("6：判断栈是否为空\n");
    printf("7：得到栈顶元素\n");
    printf("8：检测栈长度\n");
    printf("0:退出\n");
    printf("***********\n");
	scanf("%d",&a); 
	switch(a)
        {
            case 1:{
                    test = (LinkStack*)malloc(sizeof(LinkStack));            //分配内存
                    if(initLStack(test))
                    {
                        printf("初始化成功\n");
                        destroyStatus =0;
                    }
                break;
            }
            case 2:
                    if(destroyLStack(test)){
                        printf("销毁成功\n");
                        destroyStatus =1; 
                    } 
                    else
						printf("销毁失败\n");
                break;

            case 3:
               	{ 
                    int sizes=0;
                    printf("输入一个你想入栈的值\n");
                    scanf("%d",*e) ;
                    if(pushLStack(test,*e))
						printf("压入成功\n");
                    else{printf("压入失败\n");}
                } 
                break;
            case 4:
                    if(popLStack(test,e))
						printf("弹出%d\n",*e);
                    else{printf("弹出失败\n");}
                break;
            case 5:
                    if(clearLStack(test))
						printf("清空成功\n");
                    else{printf("清空失败\n");}     
                break;

            case 6:    
                    if(isEmptyLStack(test))
						printf("栈为空\n");
                    else{printf("栈不为空\n");}
                break;
            case 7:
                    if(getTopLStack(test,e)){
                        printf("该元素是%d\n",*e);
                    }
                    else{printf("得到失败\n");}
                break;
            case 8:
                { 
                    int *length =(int*)malloc(sizeof(int));
                    if(LStackLength(test,length))printf("改栈长度%d\n",*length);
                    else{printf("销毁失败\n");}
                }
                break;
        }
    return 0;
}


void showStack(LinkStack *s)
{
    if(NULL != s){
        LinkStackPtr head = s->top;
        while(head != NULL) {
            printf("%d ",head->data);
            head = head->next;
        }
        printf("\n*********************\n");
    }
}

