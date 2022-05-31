#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int b=1;
    vector<pair<int,int>> v;
    for (int  i = 0; i < a; i++)
    {
        int x;
        cin>>x;
        v.push_back({b,x});
        b+=1;
    }
    for(int j=0;j<v.size();j++){
        cout<<v[j].first<<" "<<v[j].second<<endl;
    }
    cout<<endl;
}
