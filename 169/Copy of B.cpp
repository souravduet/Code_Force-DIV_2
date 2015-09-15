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
#define S 200002

long long mat[S],query[S];

using namespace std;
int main()
{
    long long n,q,i,j,l,r,c,max,temp,sum=0;
    freopen("in.txt","r",stdin);
    cin>>n>>q;

        for(i=0;i<n;i++)
        {
            cin>>mat[i];
        }
        for(i=0;i<q;i++)
        {
            cin>>l>>r;
            for(j=l-1;j<r;j++)
            {
                query[j]++;
            }
        }

      sort(query,query+n);
      sort(mat,mat+n);
      for(i=n-1;i>=0;i--)
      sum+=query[i]*mat[i];
    cout<<sum<<endl;
    return 0;
}
