#include<iostream>
using namespace std;
int main(){
  int a;
  cout<<"Input Number: ";
  cin>>a;
  int *p=&a;
  cout<<"Address of pointer of value a: "<<&p;
  return 0;
}