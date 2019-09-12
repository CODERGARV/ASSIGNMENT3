#include<stdio.h>
int main()
{int a,b,c;
	printf("enter three number");
	scanf("%d%d%d",&a,&b,&c);
a>b?(a>c?printf("\n first number is greater"):printf("\nlast number is greater")):b>c?printf("\nsecond number is greater"):printf("\n last number is greater");
}
