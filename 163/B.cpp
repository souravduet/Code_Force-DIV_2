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
    char tem;
    int n,t,i,j;
    while(scanf("%d %d\n",&n,&t)==2)
    {
        gets(str);
        for(i=0;i<t;i++)
        {
            for(j=0;j<n;)
            {
                if(str[j]=='B'&&str[j+1]=='G')
                {
                    tem=str[j];
                    str[j]=str[j+1];
                    str[j+1]=tem;
                    j+=2;
                }
                else
                {
                    j++;
                }
            }
        }
        cout<<str<<endl;
    }

    return 0;
}
