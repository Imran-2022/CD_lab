/*  
    4. Write a C/C++ program to identify whether a given input line is a comment or not. 
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(i, a, n) for (int i = a; i < n; i++)
#define pb push_back
#define all(p) p.begin(), p.end()
#define rall(v) v.rbegin(), v.rend()
#define vi vector<int>
#define vvi vector<vi>
#define imr_an ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

bool isComment(const string& line) {
    size_t start = line.find_first_not_of(" \t");
    if (start == string::npos)return false;
    if (line[start] == '/' && line[start + 1] == '/') return true;
    if (line[start] == '/' && line[start + 1] == '*')return true;
    return false;
}

void solve(){
    string line;
    getline(cin, line);
    if (isComment(line))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    imr_an
    int t=1;
    while(t--)solve();
    return 0;
}