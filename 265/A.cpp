#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main()
{
    int n,i,c;
    char str[200];
    //freopen("in.txt","r",stdin);
    while(scanf("%d\n",&n)==1)
       {
          gets(str);
          c=1;
          if(str[0]=='1')
            {
              for(i=1;i<n;i++)
              {
                  if(str[i]=='1')
                  {
                      c++;
                  }
                  else
                  {
                      c++;
                       break;
                  }

              }
            }
            printf("%d\n",c);
       }
    return 0;
}
