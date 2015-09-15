#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char a[1000001];
int main()
{
    int i,x,y,d;
    //freopen("in.txt","r",stdin);
    while(gets(a))
    {
        x=0;y=0;
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]=='x')x++;
            else y++;
        }
        d=x-y;
        if(d>0)for(i=0;i<d;i++){
                                    printf("x");
                                }
        else if(d<0)
        {
            d=y-x;
            for(i=0;i<d;i++)
            {
                printf("y");
            }
        }
        printf("\n");
    }
    return 0;
}
