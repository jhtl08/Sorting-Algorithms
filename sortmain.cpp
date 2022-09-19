//bubblemain.cpp
//Kyle Coloma, Jason Lorenzo, Paolo Ong
//ENGG 24-J
//September 19, 2022

#include <iostream>
#include "algosource.h"

using namespace std;

int main()
{
  //calls the function to generate unsorted array not to be modified
  int* unsortedOriginal= generateArray();

cout<<"For Bubble Sort: ";
//output of sorted array from bubble sort entered to verify result
  if (verifySort(bubblesort(unsortedOriginal)))
  {
    cout<<"The array has been verified as sorted."<<endl;
  }
  else
  {
    cout<<"The array has been verified as not sorted."<<endl;
  }

  return 0;
}