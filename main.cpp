#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    unordered_set<char> nombre;
    for (int i = 0; i < s.size(); i++) {
        nombre.insert(s[i]);
    }

    if( (nombre.size() % 2) == 0){
        cout<<"CHAT WITH HER!\n\r";
    }else{
        cout<<"IGNORE HIM!\n\r";
    }
    return 0;
}
