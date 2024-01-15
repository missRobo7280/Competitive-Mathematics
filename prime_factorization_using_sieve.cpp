#include<iostream>
using namespace std;
int N=1000000;
int spf[1000001];
void seive()
{
    for(int i=0;i<N;i++)spf[i]=i;
    for(int i=2;i*i<N;i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i;j<N;j+=i)
            {
                if(spf[j]==j)
                spf[j]=i;
            }
        }
    }
}
int main()
{
    seive();
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        while(n!=1)
        {
            cout<<spf[n]<<" ";
            n/=spf[n];
        }
        cout<<endl;
    }
}