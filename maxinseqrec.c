#include<stdio.h>
int call (int,int,int,int);
int main ()
{
    int n, max;
    printf("Enter th Sequence: ");
    scanf ("%d", &n);
    max = call (n,n,0,1);
    printf ("\nMax. Length:%d", max);
    return 0;
}
int call (int n,int no,int count,int max)
{
    if (n==-1)
    {
        if(count>max)
        {
            printf("->%d\n",count);
            return count;
        }
        else
       {
            printf("->%d\n",count);
            return max;
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
