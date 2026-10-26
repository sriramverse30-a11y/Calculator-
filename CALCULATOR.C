#include<stdio.h>
int main()
{
     int a,b;
     char op;
     printf("Enter a:");
     scanf("%d",&a);
     printf("Enter operator:");
     scanf("%c",&op);
     printf("Enter b:");
     scanf("%d",&b);
     switch(op)
     {
	 case'+':
	    printf("%d",a+b);
	    break;
	 case'-':
	    printf("%d",a-b);
	    break;
	 case'*':
	    printf("%d",a*b);
	    break;
	 case'/':
	    printf("%d",a/b);
	    break;
	default:
	    printf("invalid operation");
     }
return 0;
}