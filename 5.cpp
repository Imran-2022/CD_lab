/*  
    5. Write a C/C++ program that reads text from a file, then delete the existing tabs (spaces) and new line and save the output text file. Also count and print the number of deletion. 
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
    string input="input.txt";
    string output="abc.txt";
    ifstream inputFile(input);
    ofstream outputFile(output);
    if(!inputFile || !outputFile){
        cout<<"file missing"<<endl;
        return;
    }

    char ch;
    int deletionCount=0;

    while(inputFile.get(ch)){
        if (ch == '\t' || ch == '\n' || ch == ' ')deletionCount++;
        else outputFile << ch; 
    }
   
    inputFile.close();
    outputFile.close();

    cout << "Tabs, newlines, and spaces removed successfully." << endl;
    cout << "Number of deletions: " << deletionCount << endl;

}

int main()
{
    imr_an
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}