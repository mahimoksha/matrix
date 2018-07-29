#include<stdio.h>
int main()
{
    int a[30][30],i,j,key,m,n,c=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&key);
    for(i=n-1,j=0;i>=0&&j<n;)
    {
        if(a[i][j]==key)
        {
            printf("The given key %d is found",key);
            c++;
            break;
        }
        else if(a[i][j]>key)
        {
            i--;
        }
        else if(a[i][j]<key)
        {
            j++;
        } 
    }
        if(c==0)
        printf("The given key %d is not found",key);
}