#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;
    string word="I hate it",love="that I love it",hate="that I hate it";
     if(n==1){
            cout<<word<<" ";
            return 0;
    }
    for(int i=1;i<=n;i++){
        if(i==1){
            word="I hate it";
        }
        else if(i%2!=0){
            word.erase((word.length()-2));
            word = word+hate;
        }else{
            word.erase((word.length()-2));
            word = word+love;
        }
    }

    cout<<word;



return 0;
}
