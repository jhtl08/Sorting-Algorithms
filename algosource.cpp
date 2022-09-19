//algosource.cpp
//Kyle Coloma, Jason Lorenzo, Paolo Ong
//ENGG 24-J
//September 19, 2022

#include "algosource.h"
#include <stdlib.h>
#include <ctime>

//random generator for the array
int* generateArray()
{
  //creates an empty array of 1,000 elements
  //makes sure that the unsorted array remains to return
  static int* unsortedNums = new int[1000];

  //fills the array with random numbers (up to 1,000)
  srand(time(0));
  for (int i=0; i<1000; i++)
  {
    *(unsortedNums+i)=rand()%1000;
  }

  return unsortedNums;
}

//function to verify if an array is sorted in ascending order
bool verifySort(int * arraySorted)
{
  for (int i=0; i<1000; i++)
  {
    //tests every element if greater than next
    if (arraySorted[i]>arraySorted[i+1])
    {
      return false;
    }
  }
  //if for loop runs through all elements, returns true (verified)
  return true;
}

//Bubble Sort Algorithm/Function
int* bubblesort(int * unsortedOriginal)
{
  int* unsortedCopy=unsortedOriginal;
  int placeholder;
  for (int i=0; i<1000; i++)
  {
    for (int j=0; j<1000-i; j++)
    {
      //tests if previous is greater than next element
      if (unsortedCopy[j]>unsortedCopy[j+1])
      {
        //swaps the elements
        placeholder=unsortedCopy[j];
        unsortedCopy[j]=unsortedCopy[j+1];
        unsortedCopy[j+1]=placeholder;
      }
    }
  }
  return unsortedCopy;
}

int* insertionsort(int* unsortedOriginal)
{
  int* toSort = unsortedOriginal;
  int theSwitcheroo;
  while (true)
  {
    for (int i = 0; i < 1000; i++)
    {
      if (toSort[i] > toSort[i+1])
      {
        theSwitcheroo = toSort[i];
        toSort[i] = toSort[i+1];
        toSort[i+1] = theSwitcheroo;
      }
    }

    for (int i = 0; i < 1000; i++)
    {
        if (toSort[i] > toSort[i + 1])
        {
            break;
        }
        else
        {
            continue;
        }
    }
    return toSort;
  }
}