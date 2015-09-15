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
int array[10005];
int main()
{
    int n,k,f,t,i,max=0;
    freopen("in.txt","r",stdin);


    while(scanf("%d %d",&n,&k)==2)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&f,&t);
            if(t>k)
            {
                array[i]=f-(t-k);
            }
            else
            {
                array[i]=f;
            }
        }
        max=array[0];
        for(i=1;i<n;i++)
        {
            if(max<array[i])
            {
                max=array[i];
            }
        }
        printf("%d\n",max);
    }
    return 0;
}
