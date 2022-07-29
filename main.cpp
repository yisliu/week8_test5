#include <iostream>
#include <string>
using namespace std;

int main() {
  //make variables
  char a;
  int b;
  string c;
  //input
  cin>>a>>b>>c;
  //use loop to output correct numbers
  for(int i = 0; i<c.length(); i++){
    char d = c[i];
    //65-100-65
    //65-65+100
    cout<<d-a+b;
  }
}