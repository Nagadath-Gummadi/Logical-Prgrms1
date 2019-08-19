#include<stdio.h>
int main()
{
    int *a,n,i,count=0,max=0,occ=0;
    printf("Enter the size limit for the sequence:");
    scanf("%d",&n);
    printf("Enter the sequence:");
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=a[i+1])
        {
            ++count;
            printf("%d  ",a[i]);
        }
        else
        {

            if(a[i+1]==-1)
            {
                printf("%d  ",a[i]);
                printf("  ->%d\n",++count);
                occ=1;
                 break;
            }
            else
            {
                printf("%d  ",a[i]);
                count++;
            }

                printf("  ->%d\n",count);
            if(max<count)
                max=count;
            count=0;
        }
      }

      if(max<count)
            max=count;
      if(occ==1||a[n]==-1)
            printf("\nMaximum %d",max);
      return 0;


}
