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
        int n;
        cin>>n;
        set<int>st;
        for(int i=0;i<n;i++)
        {
          int y;
          cin>>y;
          st.insert(y);
        }
        cout<<st.size()<<endl;
    }
}
