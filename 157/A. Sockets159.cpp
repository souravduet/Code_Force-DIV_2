#include <iostream>
#include <string>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int A[60],n,m,k,s,i,j,c;
    freopen("in.txt","r",stdin);
    while(scanf("%d%d%d",&n,&m,&k)==3)
    {
        for(i=0;i<n;i++)
            scanf("%d",&A[i]);
        sort(A,A+n);
        /*for(i=0;i<n;i++)
            printf("%d ",A[i]);
            printf("\n");*/
        c=n-1;s=k;i=0;
        do
        {
            if(s>=m) break;
            s+=A[c--];
            i++;
            s--;
        }while(A[c]>1&&c>=0);
        if(m>s)
            printf("-1\n");
        else
            printf("%d\n",i);
    }
return 0;
}
