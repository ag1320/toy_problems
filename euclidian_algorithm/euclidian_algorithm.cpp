#include <iostream>

using namespace std;

int recursive_ea (int num1, int num2){
  if (num1 == 0){
    return num2;
  }
  if (num2 == 0){
    return num1;
  }

  int temp = num2; 
  num2 = num1 % num2;
  num1 = temp;
  return recursive_ea(num1, num2);
}

int main (){
  
  int num1;
  int num2;

  cout << "FIND THE GREATEST COMMON DENOMINATOR OF TWO NUMBERS WITH THE EUCLIDIAN ALGORITHM" << "\n";
  cout << "Enter the first number:\n";
  cin >> num1;
  cout << "Enter the second number:\n";
  cin >> num2;

  if (num2 > num1){
    //make num1 the larger by swapping
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
  }

  cout << recursive_ea(num1, num2) << " is the GCD\n";
}