#include<stdio.h>

int main()

{

    int r,c,i,j,rsum=0,cpro=0,n;

    printf("Enter size of the matrix\n-m:");

    scanf("%d",&r);

    printf("-n:");

    scanf("%d",&c);

    printf("Enter elements:");

    for(i=1;i<=r;i++)

    {

        for(j=1;j<=c;j++)

        {

            scanf("%d",&n);

            if(j!=c)

            {

                rsum+=n;

                printf("%d+",n);

            }

            else

            {

                printf("%d=",n);

                rsum+=n;

                printf("%d\n",rsum);

                printf("%d*%d+%d=",rsum,rsum,cpro);

                cpro+=rsum*rsum;

                printf("%d\n",cpro);

                rsum=0;

            }

        }

    }

    printf("\nSum of Squares:%d",cpro);

    return 0;

}
