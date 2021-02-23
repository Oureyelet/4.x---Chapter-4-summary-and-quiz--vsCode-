#include <iostream>

using namespace std;

int main()
{
  constexpr int min {16};

  cout << "How old are you?" << '\n';
  int age{};
  cin >> age;
 
  cout << "Allowed to drive a car in Texas ";
 
  if (age >= min)
    cout << '7' << '\n';
  else
    cout << '6' << '\n';
 
  return 0;
}