#include<stdio.h>
#include<math.h>
int main()
{float p,q,r,a,b,c,i,A,l,d;
 printf("enter six number ""p,q,r,a,b,c"" in respective order where p,q are centre of circle and r is radius and a,b,c are values of ax+by+c=\n");
        scanf("%f%f%f%f%f%f",&p,&q,&r,&a,&b,&c);
        d=sqrt(a*a+b*b);
	i=(a*p+b*q+c)/d;
        if(i>r)
        printf("\nline does not intersect the circle\n");
        else if(i==r)
                printf("\nline is tangent to circle");
        else if(i<r)
	{l=2*sqrt((r*r-i*i));
	A=0.5*l*i;
	printf("\n area of triangle=%f",A);
	}
               
                         return 0;
}

