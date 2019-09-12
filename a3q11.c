#include<stdio.h>
int main()
{int a,b,c,d;
 printf("enter three number=\n");
        scanf("%d%d%d",&a,&b,&c);
	if(a>=b && a<=c || a>=c && a<=b )
	printf("\nmiddle number=%d",a);
	else if(b>=a && b<=c || b>=c && b<=a)
		printf("\nmiddle number=%d",b);
	else if(c>=b && c<=a || c>=a && c<=b)
		printf("\nmiddle number=%d",c);
			 return 0;
}
