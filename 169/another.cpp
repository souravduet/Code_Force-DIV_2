#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
long long sum=0;
int n,k;
freopen("in.txt","r",stdin);
cin>>n>>k;
 long long a[n+1],b[n+1],c[n+1];
for (int i=0; i<n; i++)
{ cin>>a[i];
b[i]=0; }

sort(a, a+n);

for (int i=0; i<k; i++)
{
int l,r;
cin>>l>>r;
l--; r--;
b[l]++;
if (r+1<n) b[r+1]--;
}

int SumB=0;
for (int i=0; i<n; i++)
{
SumB+=b[i];
c[i]=SumB;
}
sort (c, c+n);

for (int i=0; i<n; i++)
{
//cout << c[i] << endl;
sum+=c[i]*a[i];
}
cout<<sum;
return 0;
}
