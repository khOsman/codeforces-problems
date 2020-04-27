#include<bits/stdc++.h>
using namespace std;
int main(){
/*
Tetrahedron- 4 triangular faces.
Cube- 6 square faces.
Octahedron- 8 triangular faces.
Dodecahedron- 12 pentagonal faces.
Icosahedron- 20 triangular faces.
*/
int n,faces=0;
cin>>n;
cin.ignore();
string poly;
for(int i=1;i<=n;i++){
  cin>>poly;
  if(poly == "Tetrahedron"){faces+=4;}
  else if(poly == "Cube"){faces+=6;}
  else if(poly == "Octahedron"){faces+=8;}
  else if(poly == "Dodecahedron"){faces+=12;}
  else if(poly == "Icosahedron"){faces+=20;}
}
cout<<faces<<"\n";



return 0;
}
