#include "bits/stdc++.h"
using namespace std;
int t;
int n , m , s;
int main(){
    cin >> t;
    while(t--){
        cin >> n >> m >> s;
        m--;
        m %= n;
        cout << (((s - 1 + m) % n) + 1) << "\n";
    }
}

