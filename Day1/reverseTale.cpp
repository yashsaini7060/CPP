#include <iostream>
using namespace std;

int main(){

  int a, j=10;
  cin>>a;
  cout<<"The reverse of the number is: ";

  while(j>0){
    cout<< j*a<< " ";
    j--;
  }

  return 0;
}