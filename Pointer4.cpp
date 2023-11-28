#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Input Number: ";
    cin>>a;
    int *p=&a;
    cout<<"Value stored in pointer is: "<<*p;
  return 0;
}