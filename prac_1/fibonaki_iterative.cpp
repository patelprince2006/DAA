#include<iostream>
using namespace std;

int main(){
int a=0;
int b=1;
int counter,n;

for(int i=0;i<=n;i++){
  counter=a+b;
  a=b;
  b=counter;
}

cout<<"itretive : "<<counter;
cout<<"answer : "<<counter;
return 0;
}