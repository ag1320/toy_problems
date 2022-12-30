#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main () {
  long num;
  string result = "The number is prime.\n";

  cout << "Type a number to check if it is prime:\n";
  cin >> num;

  for (long i = 2; i <= sqrt(num); i++){
    if ((num % i) ==0){
      result = "The number is not prime.\n";
    }
  }

  cout << result;
}