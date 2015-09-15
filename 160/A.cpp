#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include<cstring>

using namespace std;

int main()
{
    int n,k,c,s,i,m,d;
    freopen("in.txt","r",stdin);
    while(scanf("%d %d",&n,&k)==2)
    {
        s=0;
        for(i=0;i<n;i++)
        {
            scanf("%d ",&m);
            c=0;
            while(m!=0)
            {
                d=m%10;
                m/=10;
                if(d==7||d==4)
                {
                    c++;
                }
            }
            if(c<=k)s++;
        }
        printf("%d\n",s);
    }
    return 0;
}
