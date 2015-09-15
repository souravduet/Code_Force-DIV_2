#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main()
{
    int n,i,r,d,c,f;
    //freopen("in.txt","r",stdin);
    while(scanf("%d\n",&n)==1)
       {
           r=0;c=0;f=0;
           for(i=0;i<n;i++)
           {
               scanf("%d",&d);
               if(d==1)
               {
                   c++;
                   if(f==1&&r==0)
                   {
                       c++;
                   }
                   f=1;r=1;
               }
               else
               {
                   r=0;
               }
           }
            printf("%d\n",c);
       }
    return 0;
}
