/*clude<stdio.h>

void main()
{
	printf("请输入四则运算中缀表达式:\n");
	float x,y,z;
	char c;
	scanf("%f%c%f",&x,&c,%y);
	switch(c){
	case'+':z=x+y;
		break;
	case'-':z=x-y;
		break;
	case'*':z=x*y;
		break;
	case'/':z=x/y;
		break;
	default:z=0;
		break;
	}
	printf("%f%c%f=%f",x,c,y,z);
}*/
#include <stdio.h>
#include <math.h>

void SubMain_f();  /*下级菜单，四则运算功能*/
void  SolveForX_f();  /* 求一元一次方程解*/
void  MmToM_f();   /* 单位转换：毫米转米*/
void InchesToFeet_f();  /* 单位转换： 英尺转尺 */
void CelsiusToFahrenheit_f();  /* 单位转换：摄氏转绝对温度*/
void Quadformula_f();  /* 求一元二次方程解*/
void SqRoot_f();   /* 平方根运算*/
void CalcAdd_f();  /* 加法运算*/
void CalcSub_f();  /* 减法运算*/
void CalcDiv_f();  /* 除法运算*/
void CalcMult_f();  /* 乘法运算*/
void Menu_f();  /* 主菜单 */

int nNumber1, nNumber2, nResult;

int main(void)
{
     int nMenuChoice;
     Menu_f();
     scanf("%d", &nMenuChoice); /*now you input the number you want */
     switch(nMenuChoice) /* this is the long if statment used for the menu effect */
     {
         case 1:
             SolveForX_f(); /* Solve for x section*/
             break;
         case 2:
             SubMain_f(); /*solve for diamond problems */
             break;
         case 3:
             MmToM_f(); /* convert mm to m */
             break;
         case 4:
             InchesToFeet_f(); /* convert inches to feet */
             break;
         case 5:
             CelsiusToFahrenheit_f(); /* code from C++ book that converts cel to farh */
             break;
         case 6:
             SqRoot_f();
             break;
         case 7:
             Quadformula_f();
             break;
         case 8:
             return 0;
         default:
             printf("Please choose from one of the choices above\n");
             break;
       }
       return 0;
}

void Menu_f()
{
     printf("\n\t\t Math Homework Helper Version 1.0 ");
     printf("\n 1. Solve For The X Value ");
     printf("\n 2. Simple Calculation ");
     printf("\n 3. Covert Millimeter To Meter");
     printf("\n 4. Covert Feet To Inches ");
     printf("\n 5. Covert Celsius To fahrenhiet ");
     printf("\n 6. Find the square root of a number");
     printf("\n 7. QUADRATIC FORMULA");
     printf("\n 8. Exit");
     printf("\n Choice:" );
}
void SubMain_f()
{
     char chChoice;
     system("cls"); /* 执行系统命令：cls-清屏 */
     printf( "==================MENU===============\n");
     printf( "1: Add two numbers\n");
     printf( "2: Subtract two numbers\n");
     printf( "3: Divide two numbers\n");
     printf("4: Multiply two numbers\n");
     printf("5: Back MainMenu\n");
     printf( "Choice: ");
     scanf(" %c", &chChoice);
     printf("=====================================\n");
     switch (chChoice)
    {
        case  '1':
            CalcAdd_f();
            break;
       case   '2':
            CalcSub_f();
            break;
       case  '3':
            CalcDiv_f();
            break;
       case  '4':
            CalcMult_f();
            break;
       case '5':
            return;
       default:
            printf("Please choose from one of the choices above\n");
     break;
    }
}
void CalcAdd_f()
{
    printf("The Add Function\n");
    printf( "First number: ");
    scanf("%d", &nNumber1);
    printf("Second number: ");
    scanf("%d", &nNumber2);
    nResult=nNumber1+nNumber2;
    printf("%d +%d=%d\n", nNumber1,  nNumber2, nResult);
    printf( "Press any key to continue\n");
    getchar();
    getchar();
    SubMain_f();
}
void CalcSub_f()
{
    printf( "The Subtract Function\n");
    printf( "First number: ");
    scanf("%d", &nNumber1);
    printf( "Second number: ");
    scanf("%d", &nNumber2);
    nResult=nNumber1-nNumber2;
    printf("%d + %d = %d\n", nNumber1,nNumber2 , nResult);
    printf("Press any key to continue\n");
    getchar();
    getchar();
    SubMain_f();
}
void CalcDiv_f()
{
     printf( "The Divide Function\n");
     printf( "First number: ");
     scanf("%d", &nNumber1);
     printf("Second number: ");
     scanf("%d", &nNumber2);
     nResult= nNumber1/nNumber2;
     printf("%d / %d = %d\n ", nNumber1,   nNumber2 , nResult);
     printf( "Press any key to continue\n");
     getchar();
     getchar();
     SubMain_f();
}
void CalcMult_f()
{
    printf("The Multiply Function\n");
    printf( "First number: ");
    scanf("%d", &nNumber1);
    printf( "Second number: ");
    scanf("%d", &nNumber2);
    nResult=nNumber1*nNumber2;
    printf("%d * %d= %d\n", nNumber1, nNumber2 , nResult);
    printf( "Press any key to continue\n");
    getchar();
    getchar();
    SubMain_f();
}

void SqRoot_f()
{
    printf("The Square Root Function\n");
    printf( "First number: ");
    scanf("%d",  &nNumber1);
    nResult=sqrt(nNumber1);
    printf( "The square root of %d is %d\n", nNumber1, nResult);
    printf( "Press any key to continue\n");
    getchar ();
    Menu_f();
}

void SolveForX_f()
{
    int  nCoef, nWholeNumber, nEqual, nX;
    printf("\nThis will run you through solving for x in the since that the");
    printf("\nProgram reads like y = 2x + 3");
    printf("\nOnly put in one number at a time then push enter");
    printf("\nMore instructions will come after you put that number in and push enter\n\n");
    printf("y = ");
    scanf("%d", &nCoef);
    printf("%dx + ", nCoef);
    scanf("%d", &nWholeNumber);
    printf("%dx + %d=", nCoef,nWholeNumber);
    scanf("%d", &nEqual);
    for(;;)
    {
         nX = rand()%100;
  if(((nCoef * nX) + nWholeNumber) == nEqual)
        {
             printf("\nWe found out that x is equal to %d\n\n", nX);
             system("PAUSE");
             return ;
         }
    }
}

void MmToM_f()
{
      double  dlMeter;
      double dlMilimeter;
      printf("Enter the value in 'Millimeters': ");
      scanf("%lf", &dlMilimeter);
      if(dlMilimeter < 1000)
     {
        printf("Way to low buddy. Number MUST be over 1000!!!\n");
        MmToM_f();
      }
      dlMeter = (dlMilimeter / 1000);
      printf("\nThe answer to your question is: %lf  meters\n\n", dlMeter);
     return ;
}

void InchesToFeet_f()
{
    float flFeet;
    float flInch;
    printf("Enter the number of feet to get the length in inches: ");
    scanf("%f", &flInch);
    flFeet = 12 * flInch;
    printf("\n\nOh that is %f  feet\n\n", flFeet);
    system("PAUSE");
    return ;
}

void CelsiusToFahrenheit_f()
{
    int nFahrenheit;
    int nFactor;
    int nCelsius;
    printf( "Enter the temperature in Celsius:");
    scanf("%d", &nCelsius);
    nFactor = 212 - 32;

    nFahrenheit = nFactor * nCelsius/100 + 32;
    printf( "Fahrenheit value is:%d\n", nFahrenheit);
}

void  Quadformula_f()
{
    int nCoefa, nCoefb, nCoefc;
    float flHalfDone;
    float flTopA;
    float flTopB;
    float flWholeA;
    float flWholeB;
    printf("\nWhat is the value of a: ");
    scanf("%d", &nCoefa);
    printf("\nWhat is the value of b: ");
    scanf("%d",  &nCoefb);
    printf("\nWhat is the value of c: ");
    scanf("%d", &nCoefc);
    if (nCoefb < 0)
    {
        nCoefb +=(nCoefb * nCoefb);
    }
    else
    {
        nCoefb -=(nCoefb*nCoefb);
    }
    flHalfDone = sqrt( ( (nCoefb * nCoefb) - (4 * nCoefa * nCoefc ) ) );
    flTopA = nCoefb + flHalfDone;
    flTopB = nCoefb - flHalfDone;
    flWholeA = flTopA / (2 * nCoefa);
    flWholeB = flTopB / (2 * nCoefa);
    printf("X's Are %f , %f\n", flWholeA , flWholeB);
    return ;
}
