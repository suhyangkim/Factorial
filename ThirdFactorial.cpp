#include <iostream>
#include <iomanip>
using namespace std;

//method declarations
long long int factorial(int N);

int main(){
  int numberInput;
  long long int factorialAns;

  //ask the user for a number
  cout << "Enter a number to use to compute a factorial... or enter a negative number to quit: " << endl;
  cin >> numberInput;
  
  //will continue asking until a negative number of given
  while(numberInput >= 0){
    //zero is an exception so it'll print out one
    if(numberInput == 0){
      cout << numberInput << "!" << " = " << 1;
    } else{ //if it's not zero AND it's positive then it will do the factorial
      factorialAns = factorial(numberInput);
      //after the total number for the factorial is found you print it out  
      cout << numberInput << "!" << " = " << factorialAns << endl << endl;
      //reasks the user for a number
      cout << "Enter a number to use to compute a factorial... or enter a negative number to quit: " << endl;
      cin >> numberInput;
    }
  }
  
  cout << endl;
  //if the number input is negative it will print this out
  cout << "Quitting!" << endl;
  
  return 0;
}

int factorial(int N){
  if(N<=1){
    return 1;
  } else{
    return N * factorial(N--);
  }
}
