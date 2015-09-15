#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;
int i;
int fun(int a,int b)
{
    if(a==b) return 1;
    else if(a==0||b==0) return -1;
    else if(a>b)
    {
        int f=1;
        if(a%2==0)
        {
            a=a/2;
            //if(f) i++;
            f=0;
            fun(a,b);
        }
        else if(a%3==0)
        {
            a=a/3;
            //if(f) i++;
            f=0;
            fun(a,b);
        }
        else if(a%5==0)
        {
            a=a/5;
            //if(f) i++;
            f=0;
            fun(a,b);
        }
        i++;
    }
    else if(a<b)
    {
        int f=1;
        if(b%2==0)
        {
            b=b/2;
            //if(f) i++;
            f=0;
            fun(a,b);
        }
        else if(a%3==0)
        {
            b=b/3;
            //if(f) i++;
            f=0;
            fun(a,b);
        }
        else if(b%5==0)
        {
            b=b/5;
            //if(f) i++;
            f=0;
            fun(a,b);
        }
        i++;
    }
}
int main()
{
    int a,b,m=0;
    freopen("in.txt","r",stdin);
    while(scanf("%d%d",&a,&b)==2)
   {
       i=0;
       m=fun(a,b);
       if(m)
        printf("%d\n",i);
    else
        printf("-1\n");
   }
    return 0;
}
