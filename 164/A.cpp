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
    int n,i;
    int *arr= new int[2002];
    //freopen("in.txt","r",stdin);
    arr[1]=1;
    for(i=2;i<2002;i++)
    {
        arr[i]=arr[i-1]+i+i-2;
    }
    while(scanf("%d",&n)==1)
    {
        printf("%d\n",arr[n]);
    }

    return 0;
}
