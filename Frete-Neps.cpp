#include <bits/stdc++.h>
using namespace std;
int nv, na;
#define INF 0x3f3f3f3f;
const int maxn = 1123;
int dist[maxn];
vector<pair<int,int>> adj[maxn];
bool vis[maxn];

void dijkstra(int s){
    for(int i=0; i<maxn; i++) dist[i] = INF;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    dist[s] = 0;
    pq.push({dist[s], s});
    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();
        if(vis[u]) continue;
        vis[u] = 1;
        for(auto v : adj[u]){
            int vdavez = v.first, pdavez = v.second;
            if(dist[vdavez] > dist[u] + pdavez){
                dist[vdavez] = dist[u] + pdavez;
                pq.push({dist[vdavez], vdavez});
            }
        }
    }
}

int main() {
    cin >> nv >> na;
    for(int i=0; i<na; i++){
        int a, b, w;
        cin >> a >> b >> w;
        adj[a].push_back({b,w});
        adj[b].push_back({a,w});
    }
    dijkstra(1);
    cout << dist[nv];
    return 0;
}