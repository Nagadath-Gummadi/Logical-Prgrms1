#include<stdio.h>>
int main()
{
    int *a;
    int b[2];
    a=&b[0];
    scanf("%d",&(*a));
    printf("%d",*a);
    printf("%d",b[0]);
    scanf("%d",&(*a)+1);
    printf("%d",*(a+1));
    printf("%d",b[1]);
    return 0;
}
