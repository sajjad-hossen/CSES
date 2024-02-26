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
        int arr[n+2];
        int mn=INT_MAX;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            mn=min(mn,arr[i]);
        }
        int sum=0;
        int mx=mn;
        for(int i=0; i<n; i++)
        {
            sum+=arr[i];
            if(sum>=0)
            {
              mx=max(mx,sum);
               continue;
            }
            else
            {
                mx=max(mx,sum);
                sum=0;
            }
        }
        cout<<mx<<endl;
    }
}
