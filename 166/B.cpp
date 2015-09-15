#include <stack>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include<cstring>
#define s 10000
using namespace std;
int mat[s][s];
int main()
{
    int n,m,i,j,k,rmin,cmin,sum1,sum2,x,cmax,rmax;
    bool prime[s];
    memset(prime,true,s);
    freopen("in.txt","r",stdin);
    prime[1]=0;
    for(i=2;i<=sqrt(s);i++)
    {
          if(prime[i]==true)
            for(j=i*2;j<s;j+=i)
                prime[j]=0;
    }

    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&x);
            if(prime[x]==0)
            {
                for(k=x+1;k<s;k++)
                {
                    if(prime[k]==1)
                    {
                        mat[i][j]=k-x;
                        break;
                    }
                }
            }

        }

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        cout<<mat[i][j]<<" ";
        cout<<"\n";
    }


    rmin=32000;cmin=32000;
    rmax=0;cmax=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(rmax<mat[i][j])
                rmax=mat[i][j];

            if(cmax>mat[j][i])
                cmax=mat[j][i];
        }
        if(rmin>rmax)
            rmin=rmax;
        if(cmin>cmax)
            cmin=cmax;

    }
    if(cmin<rmin)
        rmin=cmin;
    printf("%d\n",rmin);

    return 0;
}
