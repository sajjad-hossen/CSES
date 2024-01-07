#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define must ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
signed main()
{
    must;
    int t=1;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        multiset<int>vt;
        for(int i=0; i<n; i++)
        {
            int y;
            cin>>y;
            vt.insert(y);
        }
        for(int i=0; i<k; i++)
        {
            int y;
            cin>>y;
            auto it=vt.upper_bound(y);
            if(it==vt.begin())cout<<"-1"<<endl;
            else
            {
                it--;
                cout<<*it<<endl;
                vt.erase(it);
            }
        }
    }
}
