#include<stdio.h>
int main()
{
    int a[20][20],i,m,n,j,k,z,c,s,q,p,h;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    p=0;
    s=0;
    q=0;
    c=1;
    for(h=0;h<m+n-1;h++)
    {
   for(i=q;i<m;i++)
    {
        printf("%d ",a[p][i]);    
    }
    p++;
    for(j=c;j<n;j++)
    {
        printf("%d ",a[j][n-1]);
    }
    n--;
    for(k=n;k>q;k--)
    {
        printf("%d ",a[m-1][k-1]);
    }
    m--;
    for(z=m;z>c;z--)
    {
        printf("%d ",a[z-1][s]);
    }
    s++;
    c++;
    q++;
}
}
