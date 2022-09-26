//algosource.cpp
//Kyle Coloma, Jason Lorenzo, Paolo Ong
//ENGG 24-J
//September 26, 2022

#include "algosource.h"
#include <stdlib.h>
#include <ctime>

//set number of elements
int nItems=1000;

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
  int temp;
  for (int i=0; i<nItems; i++)
  {
    for (int j=0; j<nItems-i; j++)
    {
      //tests if previous is greater than next element
      if (bubblesorted[j]>bubblesorted[j+1])
      {
        //swaps the elements
        temp=bubblesorted[j];
        bubblesorted[j]=bubblesorted[j+1];
        bubblesorted[j+1]=temp;
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

  int i, temp;
  for (int j = 1; j <= nItems; j++)
  {
    i = 0;

    while (insertionsorted[j]>insertionsorted[i])
    {
      i=i+1;
    }
    temp=insertionsorted[j];

    for (int k = 0; k < j-i-1; k++)
    {
      insertionsorted[j-k]=insertionsorted[j-k-1];
    }
    insertionsorted[i]=temp;
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

  int min, temp;
  for (int i = 0; i < nItems; i++)
  {
    min = i;
    for (int j = i + 1; j <= nItems; j++)
    {
      if(selectionsorted[j] < selectionsorted[min])
      {
        min = j;
      }
    }
    if (i!= min)
    {
      temp=selectionsorted[i];
      selectionsorted[i]=selectionsorted[min];
      selectionsorted[min]=temp;
    }
  }
  return selectionsorted;
}