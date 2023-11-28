#include<iostream>
using namespace std;
int main(){
  int a;
  int* p=&a;
  cout<<"Input Value: ";
  cin>>a;
  cout<<"Address of pointer p is: "<<p;
  return 0;
}