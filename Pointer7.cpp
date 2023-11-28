#include<iostream>
using namespace std;

void factorial( int *p ){
    int result = 1;
    for( int i = *p ; i > 0 ; i-- ){
        result = result * i;
    }
    cout<<"Factorial of "<<*p<<" is: "<<result;
}

int main(){
  int a;
  cout << "Input Number: " ;
  cin >> a ;
  factorial(&a);
  return 0;
}