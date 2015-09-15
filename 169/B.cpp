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
#define S 200002
using namespace std;
int mat[S];
int array[S];
int query[S];
int m[S][2];
int sq[S];
unsigned long long sum;
int main()
{
    int n,q,i,j,l,r,c,max,temp;
    freopen("in.txt","r",stdin);
    while(scanf("%d %d",&n,&q)==2)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&mat[i]);
        }

        for(i=0;i<q;i++)
        {
            scanf("%d %d",&l,&r);
            m[i][0]=l;
            m[i][1]=r;
            for(j=l-1;j<r;j++)
            {
                query[j]++;
            }
        }
cout<<"\nquery\n";
for(i=0;i<n;i++)
cout<<query[i]<<" ";



       //sort begin
        c=0;
        while(c<n)
            {
                max=0;
                for(j=1;j<n;j++)
                {
                    if(query[max]<query[j])
                    {
                        max=j;
                    }
                }
                sq[c++]=max;
                query[max]=-1;
            }
        // q sort end

        //arrange order

         for(i=0;i<n-1;i++)
            {
                max=i;
                for(j=i+1;j<n;j++)
                {
                    if(mat[max]<mat[j])
                    {
                        max=j;
                    }
                }
                temp=mat[i];
                mat[i]=mat[max];
                mat[max]=temp;
            }

            c=0;
            for(i=0;i<n;i++)
            {
                array[sq[c++]]=mat[i];

            }
            //oorde cmptl

cout<<"\n\nsorted query\n";
for(i=0;i<n;i++)
cout<<sq[i]<<" ";
cout<<"\n";


cout<<"\nSorted Input array\n";
for(i=0;i<n;i++)
cout<<mat[i]<<" ";
cout<<"\n";

cout<<"\nOrderd array\n";
for(i=0;i<n;i++)
cout<<array[i]<<" ";
cout<<"\n";


        //sum add
        for(i=0;i<q;i++)
        {
            for(j=m[i][0]-1;j<m[i][1];j++)
            {
                sum+=array[j];
            }
        }

        cout<<sum<<endl;

    }
    return 0;
}
