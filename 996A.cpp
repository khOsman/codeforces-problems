#include<bits/stdc++.h>
using namespace std;
int main(){
//100,20,10,5,1
int n,min_num=0;
int demo[5]={100,20,10,5,1};
cin>>n;
 for(int i=0;i<5;i++){
    min_num=min_num + (n/demo[i]);
    cout<<"min_num = "<<min_num<<"\n";
    n=n%demo[i];
    cout<<"n = "<<n<<"\n";
 }
 cout<<min_num<<"\n";
return 0;
}
