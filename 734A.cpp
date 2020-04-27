#include<bits/stdc++.h>
using namespace std;
 int main(){
 int n,anton=0,danik=0;
 cin>>n;
 cin.ignore();
 char game[n];
 for(int i=0;i<n;i++){
    cin>>game[i];
    if(game[i]=='A'){
        anton++;
    }else{
        danik++;
    }
 }
 if(anton>danik){cout<<"Anton\n";}
 else if(anton<danik){cout<<"Danik\n";}
 else {cout<<"Friendship\n";}
 return 0;
 }
