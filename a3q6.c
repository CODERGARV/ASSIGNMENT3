#include<stdio.h>
#include<math.h>
int main()
{int a,b,c,r1,r2,r,realpart,imagpart1,imagpart2;
	double d;
     printf("enter value of a,b,c in equation ax^2+bx+c=0 in respective order=");
        scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;

                 if(d>0)
		 { r1=(-b+sqrt(d))/(2*a);
			 r2=(-b-sqrt(d))/(2*a);
			 printf("\nroots are real and r1=%d , r2=%d\n",r1,r2);
		 }
		 else if(d==0)
		 { r=-b/(2*a);
			 printf("\n roots are equal and value is=%d\n",r);
		 }
		 else
		 { realpart=-b/(2*a);
			 imagpart1=sqrt(-d)/(2*a);
			 imagpart2=-sqrt(-d)/(2*a);
			 printf("roots are imaginary \nand real part of both of them is same and is equal to= %d\nand imaginary part 1=%di\nimaginary part 2=%di\n",realpart,imagpart1,imagpart2); 
			 return 0;
}
}
