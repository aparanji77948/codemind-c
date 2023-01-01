#include<stdio.h>
int main()
{
    int n,m,I;
    scanf("%d %d",&n,&m);
    I=(n>m)?m:n;
    while(1)
    {
        if(I%n==0 && I%m==0)
        {
            printf("%d",I);
            break;
        }
        I++;
    }
}