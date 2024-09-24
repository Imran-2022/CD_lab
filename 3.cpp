/*  
    3. Write a C/C++ program that reads text from a file, then delete the existing comment and save the output text file (without comment). Also count and print the number of deletion. 
*/

#include <bits/stdc++.h>
using namespace std;

int del;
bool m_cmt=false;

string rem_cmt(string str){
    int n=str.length();
    string res="";
    bool s_cmt=false;
    for(int i=0;i<n;i++){
        if(str[i]=='/' && str[i+1]=='/'){
            s_cmt=true;
            m_cmt=false;
            del++;
            break;
        }
        else if(str[i]=='/' && str[i+1]=='*'){
            s_cmt=false;
            m_cmt=true;
            i++;
            del++;
        }
        else if(str[i]=='*' && str[i+1]=='/'){
            m_cmt=false;
            s_cmt=false;
            i++;
        }else if(s_cmt==false && m_cmt==false){
            res+=str[i];
        }
    }

    return res;
}

int main()
{
    fstream fin,fout;
    fin.open("input.txt");
    fout.open("output.txt");
    string str;

    while(getline(fin,str)){
        // cout<<str<<endl;
      string ss= rem_cmt(str);
      fout<<ss<<endl;
    }
    cout<<"Number of deletion : "<<del<<endl;


    fin.close();
    fout.close();
    return 0;
}
