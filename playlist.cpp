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
        int n;
        cin>>n;
        int arr[n+2];
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        int i=1;
        int j=1;
        int ans=0;
        set<int>st;
        while(i<=n && j<=n)
        {
          while(j<=n && !st.count(arr[j]))
          {
            ans=max(ans,j-i+1);
            st.insert(arr[j]);
            j++;
          }
          while(i<=n && st.count(arr[j]))
          {
            st.erase(arr[i]);
            i++;
          }
        }
        cout<<ans<<endl;
    }
}
