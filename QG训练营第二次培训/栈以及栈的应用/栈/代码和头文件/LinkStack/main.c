#include <stdio.h>
#include <stdlib.h>
#include "../head/LinkStack.h"


int main()
{	
	int a; int num,destroyStatus =1;                                       //ѡ���ܡ��ݻٱ�־
    ElemType *e =(ElemType*)malloc(sizeof(ElemType));   //�洢�ڵ�ֵ
    LinkStack *test;
    printf("ѡ�������ջ����\n");
    printf("1����ʼ��\n");
    printf("2������\n");
    printf("3��ѹ��\n");
    printf("4������\n");
    printf("5�����\n");
    printf("6���ж�ջ�Ƿ�Ϊ��\n");
    printf("7���õ�ջ��Ԫ��\n");
    printf("8�����ջ����\n");
    printf("0:�˳�\n");
    printf("***********\n");
	scanf("%d",&a); 
	switch(a)
        {
            case 1:{
                    test = (LinkStack*)malloc(sizeof(LinkStack));            //�����ڴ�
                    if(initLStack(test))
                    {
                        printf("��ʼ���ɹ�\n");
                        destroyStatus =0;
                    }
                break;
            }
            case 2:
                    if(destroyLStack(test)){
                        printf("���ٳɹ�\n");
                        destroyStatus =1; 
                    } 
                    else
						printf("����ʧ��\n");
                break;

            case 3:
               	{ 
                    int sizes=0;
                    printf("����һ��������ջ��ֵ\n");
                    scanf("%d",*e) ;
                    if(pushLStack(test,*e))
						printf("ѹ��ɹ�\n");
                    else{printf("ѹ��ʧ��\n");}
                } 
                break;
            case 4:
                    if(popLStack(test,e))
						printf("����%d\n",*e);
                    else{printf("����ʧ��\n");}
                break;
            case 5:
                    if(clearLStack(test))
						printf("��ճɹ�\n");
                    else{printf("���ʧ��\n");}     
                break;

            case 6:    
                    if(isEmptyLStack(test))
						printf("ջΪ��\n");
                    else{printf("ջ��Ϊ��\n");}
                break;
            case 7:
                    if(getTopLStack(test,e)){
                        printf("��Ԫ����%d\n",*e);
                    }
                    else{printf("�õ�ʧ��\n");}
                break;
            case 8:
                { 
                    int *length =(int*)malloc(sizeof(int));
                    if(LStackLength(test,length))printf("��ջ����%d\n",*length);
                    else{printf("����ʧ��\n");}
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

