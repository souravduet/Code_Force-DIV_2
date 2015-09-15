#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int n,a[25],i,c,b,back;
    //freopen("in.txt","r",stdin);
    while(scanf("%d",&n)==1)
    {
        c=0;b=0;back=0;
       for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(i%3==0) c+=a[i];
            else if(i%3==1) b+=a[i];
            else back+=a[i];
        }
        (c>b)?((c>back)?cout<<"chest"<<endl:cout<<"back"<<endl):((b>back)?cout<<"biceps"<<endl:cout<<"back"<<endl);
    }
    return 0;
}
