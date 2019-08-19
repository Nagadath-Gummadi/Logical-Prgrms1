#include<stdio.h>
void call (int,int,int,int);
int main ()
{
    int n, max=1;
    printf("Enter the Sequence: ");
    scanf ("%d", &n);
    call (n,n,0,max);
    printf ("\nMax. Length:%d", max);
    return 0;
}
void call (int n,int no,int count,int max)
{
    if (n==-1)
    {
        if(count>max)
        {
            printf("->%d\n",count);
            max=count;
            return;
        }
        else
       {
            printf("->%d\n",count);
            return;
       }
    }
    else if (n>=no)
    {
        printf ("%d ", n);
        count++;
        no = n;
        scanf ("%d", &n);
        call (n,no,count,max);
    }
    else
    {
        printf("->%d\n",count);
        if (count > max)
        	max = count;
        count = 1;
        printf ("%d ", n);
        no = n;
        scanf ("%d", &n);
        call (n,no,count,max);
    }
}
