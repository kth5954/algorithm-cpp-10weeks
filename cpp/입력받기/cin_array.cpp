#include<bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->ios::sync_with_stdio(0); cout.tie(0); setvbuf(stdout, nullptr, _IOFBF, BUFSIZ) 
#define BIGPRIME 48112959837082048697LL 
#define INF 1000000000 
#define MOD 1000000000 
#define MAX 202 #define COUNT 13 #define LOG 17

int n, m, a[10][10];
string s;

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> s;
        for (int j = 0; j < m; j++){
            a[i][j] = s[j] - '0';
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j];
        }
        cout << '\n';
    }
    return 0;
}

