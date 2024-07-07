/*  
    8. Write a C/C++ program that reads text from a file, then count and prints the number of character exist in the inputted text file. 
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

void solve(){
    ifstream file("input.txt");
    if (!file) {
        cout << "Unable to open file"<< endl;
        return;
    }
    string s;
    char ch;
    int charCount = 0;
    while(getline(file,s))fl(i,0,s.size())if(s[i]!=' ')charCount++;
    file.close();
    cout<<charCount<<endl;
}

int main()
{
    imr_an
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}