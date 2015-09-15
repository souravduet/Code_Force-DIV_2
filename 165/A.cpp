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
    int n,i,p;
    double sum;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&i);
        sum=360.0/(180-i);

        p=sum;

        if(p==sum)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
