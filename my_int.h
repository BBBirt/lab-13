#ifndef MY_INT_H
#define MY_INT_H
/**
 *   @file: my_int.h
 * @author: Brayden Birt
 *   @date: April 26, 2023
 *  @brief: .h file for my_int, holds prototypes for all functions
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

class my_int
{
public:
  //*********************************************************
  // Function: my_int
  // Purpose:  Constructor initializes the val to x
  // Params:   x - the value for the val
  // Calls:    none
  // Uses:     none
  //*********************************************************
  my_int(int x);   

  //*********************************************************
  // Function: my_int       
  // Purpose:  Constructor initializes the val to 0      
  // Params:   none      
  // Calls:    none                                    
  // Uses:     none           
  //*********************************************************
  my_int();       

  //*********************************************************
  // Function: set
  // Purpose:  Sets the val to x
  // Params:   x - the new value for the val
  // Calls:    none
  // Uses:     none
  //*********************************************************
  void set(int x); 

  //*********************************************************************
  // Function: input
  // Purpose:  reads and stores a value from inp. if inp is a input 
  //           stream, then inp is already connected to a file.User enters 
  //           a value and ask the user to re-enter the data if the
  //           user enters an incorrect value.
  // Params:   inp -- the input stream
  // Calls:    none
  // Uses:     istream
  //*********************************************************************
  void input(istream& inp);  
 
  //*********************************************************************
  // Function: output
  // Purpose:  display the val on fout. if fout is a  output stream
  //           then fout is already  connected to a file
  // Params:   fout -- the output stream
  // Calls:    none
  // Uses:     ostream
  //*********************************************************************
  void output(ostream& fout) const;

  //*********************************************************
  // Function: get_int
  // Purpose:  returns the val
  // Params:   none
  // Calls:    none
  // Uses:     none
  //*********************************************************
  int get_int();


  //overloaded operator
  friend bool operator >(my_int &a, my_int &b);


private:
  int val;  // Variable to hold value for class
};

//*********************************************************
// Function: is_prime
// Purpose:  object num contains a valid positive value
//           returns true if num is prime; otherwise
//           returns false
// Params:   num  - the value to be checked for prime
// Calls:    sqrt
// Uses:     cmath 
//*********************************************************
bool is_prime( my_int& num);

#endif