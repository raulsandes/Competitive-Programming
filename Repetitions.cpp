#include <bits/stdc++.h>
 
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int cont=1, contmax=1;
    for(int i=0; i<s.length(); i++){
        if(s[i] == s[i+1]){
        cont++;
        contmax=max(cont, contmax);
        }
        else{
            cont = 1;
        }
    }
    cout << contmax;
    return 0;
}