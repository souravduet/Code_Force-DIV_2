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

int n,z,a,k;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>k>>a;
		if(a==1)
			k++;
		for(;a>1;k++)
			a=(a+3)/4;
		z=max(z,k);
	}
	printf("%d\n",z);
    return 0;
}
