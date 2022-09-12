//bubblemain.cpp
//Kyle Coloma, Jason Lorenzo, Paolo Ong
//ENGG 24-J
//September 13, 2022

#include <iostream>
#include "algosource.h"

using namespace std;

int main()
{
  //calls the function to generate the unsorted array
  int* unsortedArray= generateArray();

  //prints the elements of the unsorted array for now
  for (int i=0; i<100000; i++)
  {
    cout<<*(unsortedArray+i)<<" ";
  }
}