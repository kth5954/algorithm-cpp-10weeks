#include<bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->ios::sync_with_stdio(0); cout.tie(0); setvbuf(stdout, nullptr, _IOFBF, BUFSIZ) 
#define BIGPRIME 48112959837082048697LL 
#define INF 1000000000 
#define MOD 1000000000 
#define MAX 202 #define COUNT 13 #define LOG 17


string dopa = "amumu is best";
int main(){
    cout << dopa << "\n";
    if (dopa.find("amumu") != string::npos){
        cout << "dopa 속에 아무무 있다!" << "\n";
        cout << dopa.substr(0,3) << "\n";
        reverse(dopa.begin(), dopa.end());
        cout << dopa << "\n";
        return 0;
    }
}

