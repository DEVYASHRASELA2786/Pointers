#include<iostream>
#include<cmath>
using namespace std;

void reverse( int *p ){
    int length = log10 ( *p ) ;
    int j = 0 , sum = 0 ;
    for( int i = length ; i >= 0 ; i-- ){
        int number = *p/pow ( 10 , i ) ;
        *p = *p - number*( pow( 10 , i ) );
        sum = sum + ( number * pow(10,j) );
        j++;
    }
    cout << "Reversr of  Number is: " << sum ;
}


int main(){
  int num ;
  cout << "Input Number: " ;
  cin >> num ;
  reverse(&num);
  return 0;
}