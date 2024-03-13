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
        for(int i=0;i<n;i++)
        {
          cin>>arr[i];
        }
        sort(arr,arr+n);
        int mid1=arr[n/2];
        int mid2=arr[n/2+1];
        int ans1=0;
        int ans2=0;
        for(int i=0;i<n;i++)
        {
         ans1+=abs(arr[i]-mid1);
         ans2+=abs(arr[i]-mid2);

        }
        cout<<min(ans1,ans2)<<endl;
    }
}
