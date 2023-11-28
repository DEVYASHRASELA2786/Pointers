#include<iostream>
using namespace std;
int main(){
  int a , b , c , result2;
  cout << "Input a , b , c: " ;
  cin >> a >> b >> c;
  int *p , *q ,*r ;
  p = &a ;
  q = &b ;
  r = &c ;
  int result = (*p>*q) ? (result2 = (*p>*r) ? *p : *r ) : (result2 = (*q>*r) ? *q : *r );
  cout << "Greatest among three is: " << result ;
  return 0 ;
}