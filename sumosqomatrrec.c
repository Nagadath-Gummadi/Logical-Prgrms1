#include<stdio.h>
int call(int,int,int,int,int,int,int);
int main()
{
    int r,c;
    printf("Enter size of the matrix\n-m:");
    scanf("%d",&r);
    printf("-n:");
    scanf("%d",&c);
    printf("Enter Elements: ");
    printf("Sum of Squares of Matrix:%d",call(r,c,r,c,0,0,0));
    return 0;
}
int call(int or,int oc,int r,int c,int n,int rsum,int cpro)
{
    if(r==0)
    {
 	return cpro;
    }
    else if(c!=1)
    {
        scanf("%d",&n);
        rsum+=n;
        printf(" %d +",n);
        call(or,oc,r,c-1,n,rsum,cpro);
    }
    else if(c==1)
    {
        scanf("%d",&n);
        rsum+=n;
        printf(" %d ",n);
        printf("\t= rsum:%d\n",rsum);
        printf("cpro:%d+(%d*%d)",cpro,rsum,rsum);
        cpro+=rsum*rsum;
        rsum=0;
        printf("\ncpro:%d\n",cpro);
        call(or,oc,r-1,oc,n,rsum,cpro);
    }
}
