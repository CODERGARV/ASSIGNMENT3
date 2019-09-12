#include<stdio.h>
int main()
{int a,b,c,d,x;
 printf("enter five" "a,b,c,d,x"" number out of which first four are must be different and last no. is equal to one of first four number=");
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&x);
        if(x==a)
        printf("\nx is equal to a");
        else if(x==b)
                printf("\nx is equal to b");
        else if(x==c)
                printf("\nx is equal to c");
        else if(x==d)
                printf("\nx is equal to d");
	else 
		printf("\nyou have not followed the sequence");
                         return 0;
}

