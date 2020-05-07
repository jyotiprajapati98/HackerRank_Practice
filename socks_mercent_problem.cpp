#include<iostream>
#include<cstring>

int c[101];
int main()
{
    int n,ans=0;
    std::cin>>n;
    memset(c,0,sizeof(c));
    for(int i=0;i<n;i++)
    {
        int temp;
        std::cin>>temp;
        c[temp]++;
        if(c[temp]==2)
        {
            c[temp]=0;
            ans++;
        }
    }
    std::cout<<ans;
}

