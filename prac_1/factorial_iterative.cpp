#include<iostream>
using namespace std;

int main(){
int f=1;
int counter=1;
  counter+=2;
  int n;
  cin>>n;
for(int i=1;i<=n;i++){
    f*=i;
    counter+=3;
}
cout<<"itretive : "<<counter<<endl;
cout<<"answer : "<<f;

return 0;
}