#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define must ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll M = 1e9 + 7;
const int mxx = 2e5 + 5;
const ll INF = 1e18 + 7;
int main()
{
    must;
    int t=1;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n+2];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int l=0;
        int r=n-1;
        int sum=0;
        int ans=0;
        while(l<=r)
        {

            sum=(arr[l]+arr[r]);
            if(l==r)
            {
              sum-=arr[l];
            }
            if(sum>x)
            {
              sum=0;
                r--;
            }
            else
            {
              sum=0;
                l++;
                r--;
            }
            ans++;
        }
        cout<<ans<<endl;
    }
}
