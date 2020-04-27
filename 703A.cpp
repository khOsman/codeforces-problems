#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,c,mwin=0,cwin=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>m>>c;
    if(m>c){
        mwin++;
    }else if(m<c){
        cwin++;
    }
}
if(mwin>cwin){
    cout<<"Mishka\n";
}else if(cwin>mwin){
    cout<<"Chris\n";
}else{
    cout<<"Friendship is magic!^^\n";
}
return 0;
}
