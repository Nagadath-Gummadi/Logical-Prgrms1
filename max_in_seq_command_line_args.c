# include<stdlib.h>
int main(int argc,char* argv[])
{
    int *a,n,i,count=0,max=0,occ=0,co;
    printf("Program Name Is: %s",argv[0]);
	if(argc==1)
		printf("\nNo Extra Command Line Argument Passed Other Than Program Name");
    a=(int*)malloc(argc*sizeof(int));
	if(argc>=2)
	{
		printf("\n----Following Are The Command Line Arguments Passed----");
		for(co=0;co<argc-1;co++)
		{
		    printf("\n argv[%d]: %s",co+1,argv[co+1]);
		    a[co]=abs(argv[co+1][0])-'0';
		}
	}
	n=argc-1;
	printf("\n");
	for(i=0;i<n;i++)
        printf("  %d  ",a[i]);
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(a[i]<=a[i+1])
        {
            ++count;
            printf("%d  ",a[i]);
        }
        else
        {

            if(a[i+1]<0)
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
        if(occ)
            printf("\nMaximum %d",max);
      return 0;



}
