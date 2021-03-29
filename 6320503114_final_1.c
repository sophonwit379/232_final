#include<stdio.h>
int main()
{
    int n,k,i,c,tmp;
    scanf("%d %d",&n,&c);
    if(n%10==0 && c!=0)
    {
        k=n+c;
    }
    else if(n%10<c)
    {
        k=n+c-1;
    }
    else if(n%10==c)
    {
        k=n+10;
    }
    else
    {
        tmp=10-(n%10);
        k=n+tmp+c;
    }
    printf("%d",k);
}
