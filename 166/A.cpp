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
    int n,i=3,p,array[4],rem=0,r;
    //freopen("in.txt","r",stdin);
    scanf("%d",&n);
    while(n>0)
    {
        array[i--]=n%10;
        n/=10;
    }
    for(i=0;i<3;i++)
    {
        if(array[i]==array[i+1])
        {
            array[i+1]++;
            rem++;
            r=i+1;
            break;
        }
    }
    if(rem>0&&r==1)
    {
        array[2]=0;
        array[3]=1;
        for(i=0;i<2;i++)
        {
            if(array[i]==array[2])
            {
                array[2]++;
                i=0;
            }
        }
        for(i=0;i<3;i++)
        {
            if(array[i]==array[3])
            {
                array[3]++;
                i=0;
            }
        }
    }
    if(rem>0&&r==2)
    {
        array[3]=1;
        for(i=0;i<3;i++)
        {
            if(array[i]==array[3])
            {
                array[3]++;
                i=0;
            }
        }
    }
    for(i=0;i<4;i++)
    //n+=n*10+array[i];
    cout<<array[i];


    return 0;
}
