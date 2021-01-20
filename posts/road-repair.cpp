#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
#define mp make_pair
const ll MAXN = 1e5 + 5;
ll par[MAXN],sz[MAXN];
ll n,m;
struct edge{
    ll u,v,w;
    bool operator <(edge const& other){
        return w < other.w;
    }
};
ll find(ll v){
    return par[v] = (par[v]==v) ? v : find(par[v]);
}
ll join(ll u,ll v){
    u = find(u);
    v = find(v);
    if (u!=v){
        if (sz[v]>sz[u]) swap(u,v);
        sz[u] += sz[v];
        par[v] = u;
        return 1;
    }
    else {
        return 0;
    }
}
void reset(){
    for (int i = 1 ; i <= n ; i++){
        par[i] = i;
        sz[i] = 1;
    }
}
vector<edge> g;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n >> m;
    while (m--){
        edge e;
        cin >> e.u >> e.v >> e.w;
        g.pb(e);
    }
    reset();
    ll res = 0;
    sort(g.begin(),g.end());
    for (auto e : g){
        if (join(e.u,e.v)){
            res += e.w;
        }
    }
    if (sz[find(1)]!=n){
        cout << "IMPOSSIBLE" << endl;
    }
    else {
        cout << res;
    }
}