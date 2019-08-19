#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   int n, max;
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
   printf("Enter the Sequence:");
   scanf ("%d",&n);
   max=call(n,n,0,1,fptr);
   fprintf(fptr,"\nMax. Length:%d",max);
   return 0;

}
int call (int n,int no,int count,int max,FILE* fptr)
{
    if (n==-1)
    {
        if(count>max)
        {
            fprintf(fptr,"->%d\n",count);
            return count;
        }
        else
       {
            fprintf(fptr,"->%d\n",count);
            return max;
       }
    }
    else if (n>=no)
    {
        fprintf(fptr,"%d ", n);
        count++;
        no = n;
        scanf ("%d", &n);
        call (n,no,count,max,fptr);
    }
    else
    {
        fprintf(fptr,"->%d\n",count);
        if (count > max)
        	max = count;
        count = 1;
        fprintf (fptr,"%d ", n);
        no = n;
        scanf ("%d", &n);
        call (n,no,count,max,fptr);
    }
}

