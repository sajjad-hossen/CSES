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
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int sum=1;
        for(int i=0;i<n;i++)
        {
          if(sum>=arr[i])
          {
            sum+=arr[i];
          }
          else break;
        }
        cout<<sum<<endl;
    }
}
