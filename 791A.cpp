#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,year=0;
cin>>a>>b;
if((a*3)>(b*2)){cout<<1<<"\n"; return 0;}
while(a<=b){

    a = a * 3;
    b = 2 * b;
    year++;
}
cout<<year;
return 0;
}
