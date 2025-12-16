#include<iostream>
using namespace std;

int counter=0;

int fact(int n){
    counter++;
    if(n==0 || n==1){
        int f=1;
        return f;
    }
    else{
      int  f=n*fact(n-1);
      return f;
    }
}

int main(){
int n;
cin>>n;
int res=fact(n);
cout<<" answers : "<<res<<endl;
 cout<<"instroction : "<<counter<<endl;
return 0;
}