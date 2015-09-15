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
    int i,n,k,a,sum,l,o,j;
    int arr[1000];
    freopen("in.txt","r",stdin);
    while(scanf("%d %d",&n,&k)==2)
    {
        sum=0;l=0;
        for(i=0;i<n;i++)
        {
        scanf("%d",&a);
        if(a<0){
            arr[l++]=a;
            }
            else{
                sum+=a;
            }
        }
        for(j=l-1;k>0;j--)
        {
            sum+=arr[j]*-1;
            k--;
        }

        for(o=0;o<=j;o++){
        sum+=arr[o];
        }

        printf("%d\n",sum);
    }
    return 0;
}
