#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
    int n,a,x=1,i;
    vector<int> v;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        a=arr[i];
        while (a>0)
        {
            v.push_back(x);
            --a;
        }
        x+=1;
    }
    cin>>i;
    int ar[i];
    for (int a = 0; a < i; a++)
    {
        cin>>ar[a];
    }
    for (int a = 0; a < i; a++)
    {
        x=ar[a];
        for (int i = x; i <= v.size(); i++)
        {
            cout<<v.at(x-1)<<endl;
            break;
        }
        
    }*/
    int n,x=1;
    cin>>n;
    vector<pair<int,int>> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        v.push_back({x,x+a-1});
        x=x+a;
    }
    int q;
    cin>>q;
    for (int  i = 0; i < q; i++)
    {
        int a;
        cin>>a;
        for (int j = 0; j < v.size(); j++)
        {
            if (a>=v[j].first && a<=v[j].second)
            {
                cout<<j+1<<endl;
                break;
            }
            
        }
        
    }
    
    
    
}