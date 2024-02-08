#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main()
{
    int t=1;
    while (t--)
    {
      int n;
      cin>>n;
      vector<pair<int,int>>pt;
      for(int i=0;i<n;i++)
      {
        int x,y;
        cin>>x>>y;
        pt.push_back({y,x});
      }
      sort(pt.begin(),pt.end());
      int prev=pt[0].first;
      int ans=1;
      for(int i=1;i<n;i++)
      {
        if(prev<=pt[i].second)
        {
          ans++;
          prev=pt[i].first;
        }
      }
      cout<<ans<<endl;
    }
}
