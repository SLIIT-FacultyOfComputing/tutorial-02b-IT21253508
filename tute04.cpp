/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>
using namespace std;

//Declare Function
long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r,no;
  int nCr1(n,r);
  long fac;
  
  cout << "Enter a value for n ";
  cin >> n;
  
  cout << "Enter a value for r ";
  cin >> r;

  fac = Factorial(no);

  nCr1(n,i) = nCr(n,r);
  
  
  cout << "nCr = ";
  
  cout << nCr(n,r);
  cout << endl;
  
  return 0;
}

long Factorial(int no);
{
  int no,i;
  long fact;

  fact = 1;

  //iterations
  for (int i=no; i >= 1; i--)
  {
    fact = fact * i;
  }

  return fact;

}

long nCr(int n, int r);
{
  int j,n1;
  long nCr2,long factr;
  factr = 1;
  factnr = 1;

  for (int j=n1; j >= 1; j--)
  {
    factr = factr * j;
  }
  return factr;

  for (int j=n1; j >= 1; j--)
  {
    factnr = factnr * (j - n1);
  }
  return factnr
  
  
  nCr2 =  long Factorial(no) / factr * (n1 - j) * factnr;
  return nCr2;
}