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
    freopen("in.txt","r",stdin);
    char *str=new char[200];
    int i,l,a,c,n;
    while(scanf("%d\n",&n)==1)
    {
        gets(str);
        l=strlen(str);
        c=0;
        for(i=0;i<l-1;i++)
        {
            if(str[i]==str[i+1])
            {
                c++;
            }
        }

        printf("%d\n",c);

    }


    return 0;
}
