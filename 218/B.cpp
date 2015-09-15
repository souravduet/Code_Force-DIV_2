//Bismillahir Rahmanir Rahim
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cctype>
#include <cstdlib>
#include <vector>
#include <string>
#include <cstring>
#include <queue>
#include <set>
#include <stack>
#include <map>
#include <sstream>

using namespace std;

#define mp make_pair
#define rep(i,n) for(int i=0,_n=n;i<_n;i++)
#define reps(i,s,n) for(int i=s,_n=n;i<_n;i++)
#define pi 2.0*acos(0.0)
#define MAX 2147483647
#define MIN -2147483647
#define torad(a) (a*pi)/180.0;
#define eps 0.000000001
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front

typedef long long ll;
typedef vector<int>VI;
typedef map<string,int> MSI;
typedef set<int>SI;
typedef pair<int,int>PAR;
typedef vector<PAR>VP;

int __gcd(int a,int b){
    return !b?a:__gcd(b,a%b);
}

int valid(int x, int y){
    int nums[] = {2,3,5};

    rep(i,3){
        while(x%nums[i] == 0 )x/=nums[i];
    }

    return x;
}

int step(int x){
    int nums[] = {2,3,5};
    int ret = 0;
    rep(i,3){
        while(x%nums[i] == 0 )x/=nums[i], ret++;
    }
    if( x > 1 ) return -1;

    return ret;
}

int main()
{
	//freopen("in.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	int a=0,b=0, ret;
	if( a > b ) swap(a,b);
	while( cin >> a >> b){
        int gcd = __gcd(a,b);
        a /= gcd;
        b /= gcd;
        int x = step(a);
        int y = step(b);
        if( x == -1 || y == -1){
            ret = -1;
        } else {
            ret = x+y;
        }
        cout << ret << endl;
	}

    return 0;
}
