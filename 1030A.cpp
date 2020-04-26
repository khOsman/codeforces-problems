#include<bits/stdc++.h>

using namespace std;

int main(){

int n,input;
cin>>n;
for(int i=0;i<n;i++){
    cin>>input;
    if(input){
        cout<<"HARD\n";
        return 0;
    }
}

cout<<"EASY\n";


return 0;
}
