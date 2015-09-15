#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;
 string str;
 string str2;
bool chack_All_palindrom(string s)
{
   if( equal(s.begin(), s.begin() + s.size()/2, s.rbegin()) )
        cout << "is a palindrome.\n";
    else
        cout << "is NOT a palindrome.\n";
}
int main()
{
    int j,i,k,n,p;
    freopen("C.txt","r",stdin);

    while(scanf("%d%d",&n,&p)==2)
    {
        cin >> str;
        for(i=0;i<n;i++)
        {
            for(j=str[i]-96;j<=p;j++)
            {

            }
        }
    }

    string str2 = str.substr (12,12);
    //s[3]='v';
    cout<<s;
    return 0;
}
