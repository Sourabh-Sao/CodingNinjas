#include<bits/stdc++.h>
using namespace std;

string convertFirstChar(string s){
    s[0]=toupper(s[0]);

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i]==' ')
        {
            s[i+1]=toupper(s[i+1]);
        }
        
    }
    return s;
    
}

int main(){
    string s="I am a student of the third year";
    cout<<convertFirstChar(s);
    return 0;
}