/**
 *   @file: main.cc
 * @author: Brayden Birt
 *   @date: April 26, 2023
 *  @brief: main file for my_int
 */
#include <iostream>
#include <cstdlib>
#include <cmath>
#include "my_int.h"
using namespace std;


int main()
{ 
  my_int value1;
     
  value1.input(cin);  
 
  value1.output(cout);

  if (is_prime(value1))
    cout<<"  is a prime number  \n";
  else
   cout<<" is not a prime number \n";
 
  my_int value2;
     
  value2.input(cin);  
 
  value2.output(cout);

  if (is_prime(value2))
    cout<<"  is a prime number  \n";
  else
   cout<<" is not a prime number \n";
 
  if(value1 > value2){
    cout << "Value 1 is greater." << endl;
  }else{
    cout << "Value 2 is greater or equal." << endl;
  }

  return 0;
}
