#include<stdio.h>
int main()
{float a,b,c,m;
     printf("enter value of a,b,c in equation ax+by+c=0 in respective order=");
        scanf("%f%f%f",&a,&b,&c);
	m=-a/b;

                       if(b==0)
                       printf("\nline is vertical and slope is infinite\n");
                       else
                       printf("\nline is not vertical and slope is %f\n",m);

return 0;
}
