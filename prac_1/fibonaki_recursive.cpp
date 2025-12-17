#include <iostream>
using namespace std;
int count=0;
int fibonacci(int n) {
    
    count++;
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
        
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    cout << "Input ";
    cin >> n;

    int result = fibonacci(n);

    cout <<"answer : " << result << endl;
    cout<<"counter : "<<count;
    return 0;
}
