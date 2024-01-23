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
        map<int,int>mp;
        vector<int>vt;
        for(int i=0; i<n; i++)
        {
            int l,r;
            cin>>l>>r;
            vt.push_back(l);
            vt.push_back(r+1);
            mp[l]++;
            mp[r+1]--;
        }
        sort(vt.begin(),vt.end());
        int sum=0;
        int ans=-1;
        for(int i=0; i<vt.size(); i++)
        {
            sum+=mp[vt[i]];
            ans=max(ans,sum);
        }
        cout<<ans<<endl;

    }
}
