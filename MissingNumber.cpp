#include <bits/stdc++.h>

using namespace std;
int v[212345];
int main()
{
    long long int n;
    cin >> n;
    for(int i=1; i<n; i++){
        int x; cin >> x;
        v[x]++;
    }
    for(int i=1; i<=n; i++){
        if(v[i] == 0) cout << i;
    }
    return 0;
}