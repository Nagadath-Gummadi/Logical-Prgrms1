#include<stdio.h>
int main()

{

    int r,c,i,j,rsum=0,cpro=0,n;
    int *a,*b;
    printf("Enter size of the matrix\n-m:");
    scanf("%d",&r);
    printf("-n:");
    scanf("%d",&c);
    a=(int*)malloc(r*sizeof(int));
    b=(int*)malloc(c*sizeof(int));
    printf("Enter elements:");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            scanf("%d",&b[j]);
            if(j!=c)
            {
                rsum+=b[j];
                printf("%d+",b[j]);
            }
            else
            {
                printf("%d=",b[j]);
                rsum+=b[j];
                printf("%d\n",rsum);
                printf("%d*%d=",rsum,rsum);
                a[i]=rsum*rsum;
                printf("%d\n",a[i]);
                rsum=0;
            }
        }
    }
    for(i=1;i<=r;i++)
    {
        printf("Row %d sum.of sq -> %d\n",i,a[i]);
        cpro+=a[i];
    }
    printf("\nSum of Squares of matrix:%d",cpro);
    return 0;
}

