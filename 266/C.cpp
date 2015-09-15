#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
    int n,i,j,k,arr[500005],flag=0,a=0,b=0,c=0,x=0,count=0;
    int index[3][300];
    long long sum=0,temp=0;
    freopen("C.txt","r",stdin);
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }

    if(n<3||sum%3!=0) printf("0\n");
    else{
        sum=sum/3;
        for(i=0;i<n-2;i++)
        {
            temp+=arr[i];

            if(temp==sum)
            {
                flag=1;
                //printf("sourav\n");
                index[0][a++]=i;
            }
        }
        temp=0;
        //printf("%d\n",index[0][0]);
        if(flag)
        {
            flag=0;
            for(x=0;x<a;x++)
                for(j=index[0][x]+1;j<n-1;j++)
                {
                    temp+=arr[j];
                    if(temp==sum)
                    {
                        flag=1;
                        index[1][b++]=j;
                    }
                }
        }
        temp=0;
       // printf("%d\n",index[1][1]);

        if(flag)
        {
            flag=0;
            for(x=0;x<b;x++){ temp=0;
                for(j=index[1][x]+1;j<n;j++)
                {
                    temp+=arr[j];
                    if(temp==sum)
                    {
                        count++;
                    }
                }}
        }

        printf("%d\n",count);

    }
    return 0;
}
