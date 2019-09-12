#include<stdio.h>
int main()
{int a,b,c,d,x,n=0,i=0;
 printf("enter five number  ""a,b,c,d,x""=");
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&x);
              
      	if(x==a)
        n=n+1;
        if(x==b)
                n=n+1;
        if(x==c)
                n=n+1;
        if(x==d)
                n=n+1;
     
       printf("\n%d\n",n);               
       return 0;
}
