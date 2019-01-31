#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int N;
  long long int F;

  //ask the user for a number
  cout << "Enter a number to use to compute a factorial... or enter a negative number to quit: " << endl;
  cin >> N;
  
  //will continue asking until a negative number of given
  while(N >= 0){
    //zero is an exception so it'll print out one
    if(N == 0){
      cout << N << "!" << " = " << 1;
    } else{ //if it's not zero AND it's positive then it will do the factorial
      //reinitializes F to 1.0
      F = 1.0;
      //starting from the given number it will decrease by 1 and multiply itself into F 
      for(int i = N; i > 0; i-=1){
        F *= i;
      }
      //after the total number for the factorial is found you print it out  
      cout << N << "!" << " = " << F << endl << endl;
      //reasks the user for a number
      cout << "Enter a number to use to compute a factorial... or enter a negative number to quit: " << endl;
      cin >> N;
    }
  }
  
  cout << endl;
  //if the number input is negative it will print this out
  cout << "Quitting!" << endl;
  
  return 0;
}
