#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>

struct book
{
    int t;
    int w;
}array[101],temp;

using namespace std;

int main()
{
    int n,t,w,i=0,j,tsum=0,wsum,min;

    //freopen("in.txt","r",stdin);
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d %d",&t,&w);
        array[i].t=t;
        array[i++].w=w;
        tsum+=t;
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(array[min].w>array[j].w)
            {
                min=j;
            }
        }
        temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }
  /*  for(i=0;i<n;i++)
    {
        printf("%d ",array[i].w);
    }*/

    i=0;
    wsum=0;
    while((tsum>(wsum+array[i].w))&&i<n)
    {
        wsum+=array[i].w;
        tsum-=array[i++].t;
    }
    min=tsum+array[i-1].t-array[i].t;
    if(min>=(wsum-array[i-1].t+array[i].t))
    {
        tsum=min;
    }
cout<<tsum<<endl;
    return 0;
}
