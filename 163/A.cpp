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

int main()
{
    //freopen("in.txt","r",stdin);
    char *str=new char[200];
    char c;
    int i,l,a[3],sum,n;
    while(scanf("%d\n",&n)==1)
    {
        gets(str);
        l=strlen(str);
        a[0]=0;a[1]=0;a[2]=0;
        sum=0;
        for(i=0;i<l;i++)
        {
            //scanf("%c",&c);
            switch(str[i])
            {
                case 'R':
                    a[0]++;
                    break;
                case 'G':
                    a[1]++;
                    break;
                case 'B':
                    a[2]++;
                    break;

            }
        }
        sort(a,a+3);
        //for(i=0;i<3;i++)
       // printf("%d  ",a[i]);


        if(a[0]==0&&a[1]==0)
        {
            sum=a[2]-1;
        }
        else
        {
             sum=a[2]-(a[1]+a[0]);
        }
        printf("%d\n",sum);

    }


    return 0;
}
