//algosource.cpp
//Kyle Coloma, Jason Lorenzo, Paolo Ong
//ENGG 24-J
//September 19, 2022

#include "algosource.h"
#include <stdlib.h>
#include <ctime>

//set number of elements
int nItems=10;

//random generator for the array
int* generateArray()
{
  //creates an empty array of 1,000 elements
  //makes sure that the unsorted array remains to return
  static int* unsortedNums = new int[nItems];

  //fills the array with random numbers (up to 1,000)
  srand(time(0));
  for (int i=0; i<nItems; i++)
  {
    *(unsortedNums+i)=rand()%nItems;
  }

  return unsortedNums;
}

//function to verify if an array is sorted in ascending order
bool verifySort(int * arraySorted)
{
  for (int i=0; i<nItems; i++)
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
  int* bubblesorted=new int(nItems);
  for (int i=0; i<nItems; i++)
  {
    bubblesorted[i]=unsortedOriginal[i];
  }
  int placeholder;
  for (int i=0; i<nItems; i++)
  {
    for (int j=0; j<nItems-i; j++)
    {
      //tests if previous is greater than next element
      if (bubblesorted[j]>bubblesorted[j+1])
      {
        //swaps the elements
        placeholder=bubblesorted[j];
        bubblesorted[j]=bubblesorted[j+1];
        bubblesorted[j+1]=placeholder;
      }
    }
  }
  return bubblesorted;
}

int* insertionsort(int* unsortedOriginal)
{
  int* insertionsorted=new int(nItems);
  for (int i=0; i<nItems; i++)
  {
    insertionsorted[i]=unsortedOriginal[i];
  }
  int temp;
  while (verifySort(insertionsorted) == false)
  {
    for (int i = 0; i < nItems; i++)
    {
      if (insertionsorted[i] > insertionsorted[i+1])
      {
        temp = insertionsorted[i];
        insertionsorted[i] = insertionsorted[i+1];
        insertionsorted[i+1] = temp;
      }
    }
  }
  return insertionsorted;
}

int* selectionsort(int* unsortedOriginal)
{
  int* selectionsorted=new int(nItems);
  for (int i=0; i<nItems; i++)
  {
    selectionsorted[i]=unsortedOriginal[i];
  }
  for (int a = 0; a < nItems; a++)
  {
    int min = a;
    for (int b = a + 1; b < nItems; b++)
    {
      if(selectionsorted[min] > selectionsorted[b])
      {
        min = b;
      }
    }

    int temp = selectionsorted[a];
    selectionsorted[a] = selectionsorted[min];
    selectionsorted[min] = temp;
  }
  return selectionsorted;
}