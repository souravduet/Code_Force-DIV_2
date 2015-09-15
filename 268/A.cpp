#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;
bool arr[101];
int main()
{
    int n,p,a,i,j,f=1;

    //freopen("A.txt","r",stdin);
    scanf("%d",&n);
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        scanf("%d",&a);
        arr[a]=1;
    }
    for(i=0;i<p;i++)
    {
        scanf("%d",&a);
        arr[a]=1;
    }
    for(i=1;i<=n;i++)
    {
        if(arr[i]==0){
            f=0;break;
        }
    }
    if(f==0)
        printf("Oh, my keyboard!\n");
    else
         printf("I become the guy.\n");


    return 0;
}
