//algosource.cpp
//Kyle Coloma, Jason Lorenzo, Paolo Ong
//ENGG 24-J
//September 26, 2022

#include "algosource.h"
#include <stdlib.h>
#include <ctime>
#include <iostream>

//set number of elements

//random generator for the array
int* generateArray(int nItems)
{
  //creates an empty array of 1,000 elements
  //makes sure that the unsorted array remains to return
  static int* unsortedNums = new int[nItems]();

  //fills the array with random numbers (up to 1,000)
  srand(time(0));
  for (int i=0; i<nItems; i++)
  {
    *(unsortedNums+i)=rand()%nItems;
  }

  return unsortedNums;
}

//function to verify if an array is sorted in ascending order
bool verifySort(int * sorted, int nItems)
{
  for (int i=0; i<nItems; i++)
  {
    //tests every element if greater than next
    if (*(sorted + i)>*(sorted+(i+1)))
    {
      return false;
    }
  }
  //if for loop runs through all elements, returns true (verified)
  return true;
}

void unsortedCopy(int * unsorted, int * sorted, int nItems)
{
  for (int i=0; i<nItems; i++)
  {
    *(sorted+i) = *(unsorted+i);
  }
}

//Bubble Sort Algorithm/Function
void bubblesort(int * unsorted, int * sorted, int nItems)
{
  //copies unsorted to sorted
  unsortedCopy(unsorted, sorted, nItems);

  int temp;
  for (int i=0; i<nItems; i++)
  {
    for (int j=0; j<nItems-i; j++)
    {
      //tests if previous is greater than next element
      if (*(sorted + j) > *(sorted + j + 1))
      {
        //swaps the elements
        temp= *(sorted + j);
        *(sorted + j) = *(sorted + j + 1);
        *(sorted + j + 1) =temp;
      }
    }
  }
}

void insertionsort(int* unsorted, int * sorted, int nItems)
{
  //copies unsorted to sorted
  unsortedCopy(unsorted, sorted, nItems);

  int i, temp;
  for (int j = 1; j < nItems; j++)
  {
    i = 0;

    while (*(sorted+j)>*(sorted+i))
    {
      i=i+1;
    }
    temp= *(sorted + j);

    for (int k = 0; k < j-i-1; k++)
    {
      *(sorted + j-k) = *(sorted + j-k-1);
    }
    *(sorted + i) =temp;
  }
}

void selectionsort(int* unsorted, int * sorted, int nItems)
{
  //copies unsorted to sorted
  unsortedCopy(unsorted, sorted, nItems);

  int min, temp;
  for (int i = 0; i < nItems-1; i++)
  {
    min = i;
    for (int j = i + 1; j < nItems; j++)
    {
      if(*(sorted+j) < *(sorted+min))
      {
        min = j;
      }
    }
    if (i!= min)
    {
      temp=*(sorted+i);
      *(sorted+i) = *(sorted+min);
      *(sorted + min) =temp;
    }
  }
}