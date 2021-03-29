#include<stdio.h>
int main()
{
    int i,n,j,tmp,max;
    scanf("%d",&n);
    int num[n],count[n][2];
    for(i=0;i<n;i++)
    {
        count[i][1]=0;
        count[i][2]=i+1;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        count[num[i]-1][1]++;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(count[j][1]>count[j+1][1])
            {
                tmp=count[j+1][1];
                count[j+1][1]=count[j][1];
                count[j][1]=tmp;
                tmp=count[j+1][2];
                count[j+1][2]=count[j][2];
                count[j][2]=tmp;
            }
        }
    }
    /*for(i=0;i<n;i++)
        printf("%d %d\n",count[i][1],count[i][2]);*/
    max=count[n-1][1];
    for(i=0;i<n;i++)
    {
        if(max==count[i][1])
            printf("%d ",count[i][2]);
    }







}
