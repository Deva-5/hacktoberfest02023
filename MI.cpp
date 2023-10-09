#include <bits/stdc++.h>

using namespace std;


vector<vector<int>> merged(vector<vector<int>>&v)
{
    vector<vector<int>>ans;
    sort(v.begin(),v.end());
    vector<vector<int>>tmp;
    for(int i=0;i<v.size();i++)
    {
            if(v[i][0]<=tmp[i][1])
            {
                tmp[i][1]=max(x[i][1],tmp[i][1]);
            }
            else
            {
                ans.push_back(tmp);
                tmp=v[i][1];
            }
    }
    ans.push_back(tmp);
    return ans;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int x,y;
        vector<vector<int>>v(n,vector<int>(2));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>v[i][j];
            }
        }
        vector<vector<int>>ans=merged(v);
        for(int i=0;i<ans.size();i++)
        {
            cout<<"(";
            for(int j=0;j<ans[i].size();j++)
            {
                if(j==0)
                {
                    cout<<ans[i][j]<<", ";
                }
                else
                {
                    cout<<ans[i][j];
                }
            }
            cout<<")";
        }
    }
}
