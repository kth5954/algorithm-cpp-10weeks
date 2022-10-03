#include<bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->ios::sync_with_stdio(0); cout.tie(0); setvbuf(stdout, nullptr, _IOFBF, BUFSIZ) 
#define BIGPRIME 48112959837082048697LL 
#define INF 1000000000 
#define MOD 1000000000 
#define MAX 202 #define COUNT 13 #define LOG 17

int n, m, a[10][10];
int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%1d", &a[i][j]);
        }
    }
    cout << a << "\n";

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j];
        }
        cout << "\n";
    }

}

