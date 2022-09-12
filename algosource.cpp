//algosource.cpp
//Kyle Coloma, Jason Lorenzo, Paolo Ong
//ENGG 24-J
//September 13, 2022

#include "algosource.h"
#include <stdlib.h>
#include <ctime>

int* generateArray()
{
  //creates an empty array of 100,000 elements
  //makes sure that the unsorted array remains to return
  static int* unsortedNums = new int[100000];

  //fills the array with random numbers (up to 1,000,000)
  srand(time(0));
  for (int i=0; i<100000; i++)
  {
    *(unsortedNums+i)=rand()%1000000;
  }

  return unsortedNums;
}