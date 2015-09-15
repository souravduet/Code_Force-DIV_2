#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int array[4002][4002];
    unsigned long long m;
    char *str=new char[4005];
    int a,i,c=2,len,j;
    //freopen("in.txt","r",stdin);
    scanf("%d",&a);
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            array[i][j]=(int)(str[i]-48)*(str[j]-48);
        }

    }

    printf("%d\n",m);
    return 0;
}
