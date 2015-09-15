#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
int main()
{
    unsigned long array[100002];
    int n,i,c=2,m=0;
    //freopen("in.txt","r",stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    if(n<3)
        m=n;
    for(i=2;i<n;i++)
    {
        if(array[i-1]+array[i-2]==array[i])
        {
            c++;
        }
        else
        {
            c=2;
        }
        if(m<c)
                m=c;
    }
    printf("%d\n",m);
    return 0;
}
