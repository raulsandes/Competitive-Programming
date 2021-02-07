#include <bits/stdc++.h>

using namespace std;
int v[112];
void solve(string c){
        if(c.size() % 2 == 1 || c[c.size()-1] == '(' || c[0] == ')') cout << "NO" << endl;
        else cout << "YES" << endl;
}

int main()
{
    int t; cin >> t;
    while(t--){
        string str;
        cin >> str;
        solve(str);
    }

    return 0;
}
