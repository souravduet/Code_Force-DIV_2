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

    int n,i,c,arr[100005];
    scanf("%d",&n);
   for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    c=0;
    for(i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            c=i+1;
        }
    }

    printf("%d\n",c);
    return 0;
}
