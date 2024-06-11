#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int>arr(n+1);
    vector<int>indx(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        indx[arr[i]]=i;
    }
    int cnt=1;
    for(int i=2; i<=n; i++)
    {
        if(indx[i]<indx[i-1])cnt++;
    }
    set<pair<int,int>>pt;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        if((arr[a]-1)>=1)
            pt.insert({arr[a]-1,arr[a]});
        if((arr[a]+1)<=n)
            pt.insert({arr[a],arr[a]+1});
        //
        if((arr[b]-1)>=1)
            pt.insert({arr[b]-1,arr[b]});
        if((arr[b]+1)<=n)
            pt.insert({arr[b],arr[b]+1});
        for(auto it:pt)
        {
            int l=indx[it.first];
            int r=indx[it.second];
            if(l>r)cnt--;
        }
        cout<<cnt<<endl;
        //second part
        swap(arr[a],arr[b]);
        indx[arr[a]]=a;
        indx[arr[b]]=b;
        for(auto it:pt)
        {
            int l=indx[it.first];
            int r=indx[it.second];
            if(l>r)cnt++;
        }
        cout<<cnt<<endl;
        pt.clear();

    }
}
