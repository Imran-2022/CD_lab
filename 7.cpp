/*  
    7. Write a C/C++ program that reads text from a file and prints on the terminal each input line, preceded by the line number. The output will look like - 
        - 1  This is the first trial line in the file, 
        - 2  and this is the second line. 
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
    ifstream inputFile("input.txt");
    if(!inputFile){
        cout<<"file not found"<<endl;
        return;
    }
    string s;
    int lineTrack=1;
    while(getline(inputFile,s))cout<<lineTrack++<<" "<<s<<endl;
    inputFile.close();
}

int main()
{
    imr_an
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}