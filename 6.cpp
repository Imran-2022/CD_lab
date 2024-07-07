/*  
    6. Write a C/C++ program to test whether a given identifier is valid or not. 
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

bool ck(string s){
    if (s.empty())return false;
    if (!isalpha(s[0]) && s[0] != '_')return false;
    
    fl(i,0,s.size()){
        // Valid characters are letters, digits, and underscore
        if (!isalnum(s[i]) && s[i] != '_') return false;
    }

    // Identifier is valid
    return true;
}

void solve(){
    string identifier;
    cin>>identifier;
    if(ck(identifier))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    imr_an
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}