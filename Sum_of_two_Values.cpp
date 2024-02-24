#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n+2];
        map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
          cin>>arr[i];
        }
        int l=-1;
        int r=-1;
        map<int,int>ab;
        for(int i=1;i<=n;i++)
        {
          int p=m-arr[i];
          if(mp[p]>0)
          {
              l=ab[p];
              r=i;
              break;
          }
          mp[arr[i]]++;
          if(mp[arr[i]]>1)
          {
            ;;
          }
          else ab[arr[i]]=i;
        }
        if(l==-1 && r==-1)cout<<"IMPOSSIBLE"<<endl;
        else
        cout<<l<<" "<<r<<endl;
    }
}
