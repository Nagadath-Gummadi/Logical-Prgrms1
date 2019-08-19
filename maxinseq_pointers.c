#include <stdio.h>
int main()
{
    printf("Enter the sequence:");
    int *a;
    int m=0,count=0;
    int b[2];
    a=&b[0];
    *(a+1)=0;
    while((*a)!=-1)
    {
        scanf("%d",&(*a));
        if((*a)>=*(a+1))
        {
            ++count;
            printf("%d  ",(*a));
        }
        else
        {
            printf("  ->%d",count);
            if((*a)!=-1)
                printf("\n%d  ",(*a));
            if(m<count)
            {
                m=count;
            }
            count=1;
        }
        *(a+1)=(*a);
    }
    printf("\nMaximum length:%d",m);
}
