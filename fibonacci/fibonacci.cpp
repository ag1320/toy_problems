#include <iostream>
#include <vector>

using namespace std;

int main (){

  int number_elements;
  vector<int> fib = {0, 1};

  cout << "Enter the desired number of fibonacci elements:\n";
  cin >> number_elements;
  if (number_elements < 0)
    cout << "Invalid\n";

  else if (number_elements == 0)
    cout << "No Elements\n";

  else if (number_elements == 1){
    cout << "The one number is:\n";
    cout << fib[0] << "\n";
  }

  else if (number_elements == 2){
    cout << "The numbers are:\n";
    for (int el:fib){
      cout << el << "\n";
    }
  }

  else {
    cout << "The numbers are:\n";
    for (int el:fib)
      cout << el << "\n";
    int i = 0;
    while (i < (number_elements - 2)){
      // el3 = el2 + el1
      // i = 0
      int next_number = fib[i] + fib[i+1];
      fib.push_back(next_number);
      cout << fib.back() << "\n";
      i++;
    }
  }

}