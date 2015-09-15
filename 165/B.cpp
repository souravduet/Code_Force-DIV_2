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

    int n,i,c,arr[1000];
    scanf("%d",&n);
   for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    i=0;c=0;
    while(arr[i]!=1)
    {
        i++;
        c++;
    }
    printf("%d\n",c);
    return 0;
}
