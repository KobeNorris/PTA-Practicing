#include<stdio.h>
#define N 100
int main()
{
    int a[N];
    int i, j, k, n, m, temp = 0;
    
    scanf("%d %d", &n, &m);
    i = 0;    
    while(i<n)
    {
        scanf("%d",&a[i]);
        i++;
    }
    for(j=0;j<m;j++)
    {
        temp=a[n-1];
        for(k=n-1;k>=0;k--)     
        {       
            a[k]=a[k-1];
            if(k==0)
            {
                a[k]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {

        if(i==n-1)
            printf("%d",a[i]);
        else
            printf("%d ",a[i]);
    }
    return 0;
}
