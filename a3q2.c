#include<stdio.h>
int main()
{int a,b,c,d;
	printf("enter four number=");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>=b && a>=c && a>=d)
		printf("\nhighest no. is %d",a);
	else if(b>=a && b>=c && b>=d)
		printf("\nhighest no. is %d",b);
	else if(c>=a && c>=b && c>=d)
                printf("\nhighest no. is %d",c);
        else if(d>=a && d>=c && d>=b)
                printf("\nhighest no. is %d",d);
}


