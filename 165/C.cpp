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

using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);

    int n,a,k,i,c=0;
    double ans=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&k,&a);
        sum+=k*log10(2.0)+k*log10(2.0)+log10(a);
    }
    cout<<"sum "<<sum<<endl;
    while(ans<sum)
    {
        ans= c*log10(2.0)+ c*log10(2.0);
        c++;
    }
    cout<<ans<<endl;
    cout<<c-1;
    //printf("%d\n",c);
    return 0;
}
