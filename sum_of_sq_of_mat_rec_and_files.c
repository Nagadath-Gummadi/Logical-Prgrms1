#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int call(int,int,int,int,int,int,int,FILE*);
int main()
{
   int num;
   char filename[25];
   FILE *fptr;
   printf("Enter a filename to create one for output \n");
   scanf("%s", filename);
   strcat(filename,".txt");
   fptr = fopen(filename, "w");
   if(fptr == NULL)
   {
      printf("Unable to process!");
      exit(1);
   }
   int r,c;
    printf("Enter size of the matrix\n-m:");
    scanf("%d",&r);
    printf("-n:");
    scanf("%d",&c);
    printf("Enter Elements: ");
    fprintf(fptr,"Sum of Squares of Matrix:%d",call(r,c,r,c,0,0,0,fptr));
    printf("Successfully  created a file for output");
    return 0;
}
int call(int or,int oc,int r,int c,int n,int rsum,int cpro,FILE* fptr)
{
    if(r==0)
    {
 	return cpro;
    }
    else if(c!=1)
    {
        scanf("%d",&n);
        rsum+=n;
        fprintf(fptr,"%d  ",n);
        call(or,oc,r,c-1,n,rsum,cpro,fptr);
    }
    else if(c==1)
    {
        scanf("%d",&n);
        rsum+=n;
        fprintf(fptr,"%d  ",n);
        fprintf(fptr,"   =>rsum:%d\n",rsum);
        fprintf(fptr,"cpro:%d+(%d*%d)",cpro,rsum,rsum);
        cpro+=rsum*rsum;
        rsum=0;
        fprintf(fptr,"\ncpro:%d\n",cpro);
        call(or,oc,r-1,oc,n,rsum,cpro,fptr);
    }
}
