#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main()
{
    int t=1;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        vector<pair<int,int>>arr;
        vector<int>brr;
        for(int i=0; i<n; i++)
        {
            int y;
            cin>>y;
            arr.push_back({y-k,y+k});
        }
        for(int i=0; i<m; i++)
        {
            int y;
            cin>>y;
            brr.push_back(y);
        }
        sort(arr.begin(),arr.end());
        sort(brr.begin(),brr.end());
        int indx=0;
        int cnt=0;
        for(int i=0; i<m;)
        {
            int p=brr[i];
            if(indx<n)
            {
                if(p>=arr[indx].first && p<=arr[indx].second)
                {
                    cnt++;
                    indx++;
                    i++;
                }
                else
                {
                    if(p<arr[indx].first)
                    {
                        i++;;;
                    }
                    else
                    {
                        indx++;
                    }
                }
            }
            else break;
        }
        cout<<cnt<<endl;
    }
}

