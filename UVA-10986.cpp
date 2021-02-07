#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
long long int N, n, m, s, t, w, a, b;
const int maxn = 21234;
vector<pair<int,int>> adj[maxn];
bool vis[maxn];
int dist[maxn];

int djikstra(int x){
    dist[x] = 0;
    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({dist[x], x});
    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();
        if(vis[u]) continue;
        vis[u] = 1;
        for(auto v:adj[u]){
            int vdavez = v.first, pdavez = v.second;
            if(dist[vdavez] > dist[u] + pdavez){
                dist[vdavez] = dist[u] + pdavez;
                pq.push({dist[vdavez], vdavez});
            }
        }
    }

}

int main() {
    cin >> N;
    int i = 1;
        
    cin >> n >> m >> s >> t;
        for(int i=0; i<m; i++){
            cin >> a >> b >> w;
            adj[a].push_back({b,w});
            adj[b].push_back({a,w});
        }
        
    while(N--){
        for(int i=0; i<maxn; i++){
        dist[i] = INF;
        vis[i] = 0;
        adj[i].clear();
    } 
        
        djikstra(s);
        
        if(dist[t] != INF) cout << "Case #" << i++ << ' ' << dist[t] << endl;
        else cout << "Case #" << i++ << ' ' << "unreachable" << endl;
        
    }
    return 0;
}
