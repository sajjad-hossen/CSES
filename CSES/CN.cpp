#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
#define must ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
signed main()
{
    must;
    int t=1;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>>pt;
        for(int i=0;i<n;i++)
        {
          int y;
          cin>>y;
          pt.push_back({y,i});
        }
        sort(pt.begin(),pt.end());
        int ans=1;
        for(int i=1;i<n;i++)
        {
          if(pt[i].second<pt[i-1].second)
          {
            ans++;
          }
        }
        cout<<ans<<endl;

    }
}
