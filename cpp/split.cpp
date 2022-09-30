#include<bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->ios::sync_with_stdio(0); cout.tie(0); setvbuf(stdout, nullptr, _IOFBF, BUFSIZ) 
#define BIGPRIME 48112959837082048697LL 
#define INF 1000000000 
#define MOD 1000000000 
#define MAX 202 #define COUNT 13 #define LOG 17
typedef long long ll;

vector<string> split(string input, string delimeter){
    vector<string> ret;
    ll pos = 0;
    string token = "";
    while ((pos = input.find(delimeter)) != string::npos){
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimeter.length());
    }
    ret.push_back(input);
    return ret;
}

vector<string> split_debug(string input, string delimeter){
    vector<string> ret;
    ll pos = 0;
    string token = "";
    while((pos = input.find(delimeter)) != string::npos){
        ll pos = input.find(delimeter);
        cout << "POS: " << pos << '\n';
        if(pos == string::npos) break;
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimeter.length());
    }
    ret.push_back(input);
    return ret;

}

int main(){
    string s = "안녕하세요 큰돌이는 킹갓제네럴 천재입니다 진짜에요!";
    string d = " ";
    vector<string> s_array = split(s, d);
    string s2 = "aaaa bbbb cccc dd eeeee ";
    vector<string> s2_array = split_debug(s2, d);

    for (string &i : s_array){
        cout << i << "\n";
    }

    for (string &i : s2_array){
        cout << i << "\n";
    }
}

