#include<bits\stdc++.h>
typedef long long ll;
using namespace std;
void solve(){
    set<int>s;
    vector<int>v;
    for(int i=1;i<=4;i++){
        ll a;
        cin>>a;
        s.emplace(a);
    }
    auto it=s.begin();
    auto t=s.rbegin();
    for(int i=0;i<=2;i++){
        ll a=*t-*it;
        v.push_back(a);
        // cout<<*it<<" ";
        it++;
    }
    // cout<<*it-*(--it);
    // v.push_back(*it-*(--it));
    for(auto it:v)cout<<it<<" ";
    // v.push_back(*it-*(it--))
    // for(auto it:s)cout<<it;
    cout<<endl;
}
int main(){
    #ifndef ap
    freopen("input.txt","r",stdin);
    #endif
    ll t=1;
    // cin>>t;
    // t=2;
    while(t--)solve();
    return 0;
}