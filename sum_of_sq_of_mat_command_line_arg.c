#include<stdio.h>

int main(int argc,char* argv[])

{

    int r,c,i,j,rsum=0,cpro=0,n;

    int co;
	printf("Program Name Is: %s",argv[0]);
	if(argc==1)
		printf("\nNo Extra Command Line Argument Passed Other Than Program Name");
	if(argc==3)
	{
		printf("\n----Following Are The Command Line Arguments Passed----");
		for(co=0;co<argc;co++)
			printf("\n argv[%d]: %s",co,argv[co]);
	}
	else
    {
        printf("Given Command Line Arguments are not suitable for this program/nPlease enter arguments as rows and cols");
    }

    r=argv[1][0];
    r=r-'0';
    c=argv[2][0];
    c=c-'0';
    printf("\nRows:%d\nCols:%d\n",r,c);
    printf("Enter the elements:");
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
