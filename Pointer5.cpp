#include<iostream>
using namespace std;

void ptr(int *p){
    cout << "The number in a pointer is: " << *p;    
}

int main(){
  int a;
  cout << "Input Number: ";
  cin >> a ; 
  ptr(&a);
  return 0;
}