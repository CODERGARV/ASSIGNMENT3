#include<stdio.h>
int main()
{int a,b,c,d;
 printf("enter three number out of which two are equal are one is different=");
        scanf("%d%d%d",&a,&b,&c);
	if(a==b)
	printf("\n%d",c);
	else if(b==c)
		printf("\n%d",a);
	else if(c==a)
		printf("\n%d",b);
	else 
		printf("\nyou entered three different number");
			 return 0;
}
