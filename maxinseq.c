#include<stdio.h>
int main()
{
    int nn=0,no=0,max=0,count=0;
    printf("Enter the Sequence");
    while(nn!=-1)
    {
        scanf("%d",&nn);
        if(nn>no)
        {
            ++count;
            printf("%d  ",nn);
        }
        else
        {
            printf("  ->%d",count);
            if(nn!=-1)
                printf("\n%d  ",nn);
            if(max<count)
                max=count;
            count=1;
        }
        no=nn;
    }
    printf("\nMaximum %d",max);
    return 0;
}
