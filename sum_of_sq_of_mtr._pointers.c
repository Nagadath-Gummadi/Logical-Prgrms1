#include<stdio.h>
int main()
{
    int *r,*c,*n,*b,*rs,*cp;
    int row,col,num,cpro=0,rsum=0;
    int i,j;
    r=&row;
    c=&col;
    n=&num;
    rs=&rsum;
    cp=&cpro;
    printf("Enter size of the matrix\n-m:");
    scanf("%d",&(*r));
    printf("-n:");
    scanf("%d",&(*c));
    printf("Enter elements:");
    for(i=1;i<=*r;i++)
    {
        for(j=1;j<=*c;j++)
        {
            scanf("%d",&(*n));
            if(j!=*c)
            {
                *rs+=(*n);
                printf("%d+",*n);
            }
            else
            {
                printf("%d=",*n);
                *rs+=*n;
                printf("%d\n",*rs);
                printf("%d*%d+%d=",*rs,*rs,*cp);
                *cp+=(*rs)*(*rs);
                printf("%d\n",cpro);
                *rs=0;
            }
        }
    }
}
