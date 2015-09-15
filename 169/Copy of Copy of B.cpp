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
int main()
{
    //int n,q,i,j,l,r,qmax,amax,temp;
    int n,q,i,j,l,r,s;
    unsigned long long sum=0;
    freopen("in.txt","r",stdin);
    cin>>n>>q;

    long long mat[n+1],query[n+1],arr[n+1];

        sum=0;
        for(i=0;i<n;i++)
        {
            //scanf("%ld",&mat[i]);
            cin>>mat[i];
            arr[i]=0;
        }

        for(i=0;i<q;i++)
        {

            cin>>l>>r;
            l--;
            arr[l]++;
            if(r<n)
                arr[r]--;
        }
        s=0;
        for(i=0;i<n;i++)
        {
            s+=arr[i];
            query[i]=s;
        }

            sort(mat,mat+n);
            sort(query,query+n);
            for(i=0;i<n;i++)
            {
                sum+=mat[i]*query[i];
            }

        cout<<sum<<endl;
    return 0;
}
