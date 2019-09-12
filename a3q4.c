#include<stdio.h>
int main()
{float a,b,c;
        printf("enter side of triangle ab,bc,ca in respective order=");
        scanf("%f%f%f",&c,&a,&b);

                       if(a*a==b*b+c*c)

                               printf("\nangle A is 90 degree");
                       else
                               printf("\nangle A is not 90 degree");

return 0;
}
