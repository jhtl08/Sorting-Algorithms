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
  for (int i=0; i<999; i++)
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
  int* bubblesorted=new int(1000);
  for (int i=0; i<1000; i++)
  {
    bubblesorted[i]=unsortedOriginal[i];
  }
  int placeholder;
  for (int i=0; i<1000; i++)
  {
    for (int j=0; j<1000-i; j++)
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
  int* insertionsorted=new int(1000);
  for (int i=0; i<1000; i++)
  {
    insertionsorted[i]=unsortedOriginal[i];
  }
  int temp;
  while (true)
  {
    for (int i = 0; i < 1000; i++)
    {
      if (insertionsorted[i] > insertionsorted[i+1])
      {
        temp = insertionsorted[i];
        insertionsorted[i] = insertionsorted[i+1];
        insertionsorted[i+1] = temp;
      }
    }

    for (int i = 0; i < 1000; i++)
    {
        if (insertionsorted[i] > insertionsorted[i + 1])
        {
            break;
        }
        else
        {
            continue;
        }
    }
    return insertionsorted;
  }
}

int* selectionsort(int* unsortedOriginal)
{
  int* selectionsorted=new int(1000);
  for (int i=0; i<1000; i++)
  {
    selectionsorted[i]=unsortedOriginal[i];
  }
  for (int a = 0; a < 1000; a++)
  {
    int min = a;
    for (int b = a + 1; b < 1000; b++)
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