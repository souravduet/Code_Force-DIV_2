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
int arr[100004],arr2[100002];
int main()
{
    int i,n,k,a,sum,l,o,j,m;
    //freopen("in.txt","r",stdin);
    while(scanf("%d%d",&n,&k)==2)
    {
        sum=0;l=0;m=0;
        for(i=0;i<n;i++)
        {
        scanf("%d",&a);
        if(a<0)
        {
            arr[l++]=a;
        }
        else
            {
                sum=sum+a;
                arr2[m++]=a;
            }
        }
        for(j=0;k>0&&j<l;j++)
        {
            arr[j]*=-1;
            sum+=arr[j];
            k--;
        }
        if(k>0)
        {
            if(k%2!=0)
            {
                if(m>0&&l>0)
                {
                    if(arr[l-1]<arr2[0])
                            sum-=2*arr[l-1];
                    else
                        sum=sum-2*arr2[0];
                }
                else
                    if(l>0)
                        sum-=2*arr[l-1];
                    else
                        sum-=2*arr2[0];
            }
        }
        for(o=j;o<l;o++){
        sum+=arr[o];
        }
        printf("%d\n",sum);
    }
    return 0;
}
