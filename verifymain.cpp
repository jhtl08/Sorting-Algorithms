//verifymain.cpp
//Kyle Coloma, Jason Lorenzo, Paolo Ong
//ENGG 24-J
//Project 1 Sorting Algorithms
//September 30, 2022

#include <iostream>
#include "algosource.h"

using namespace std;

int main()
{
  //set number of items
  int nItems=1000;

  //calls the function to generate unsorted array not to be modified
  int* unsorted= generateArray(nItems);

  //initialize array to contain sorted output
  int* sorted= new int(nItems);


  cout<<"For Bubble Sort: ";
  //copies "unsorted" to "sorted" then bubble sorts "sorted"
  bubblesort(unsorted, sorted, nItems);
  //checks sorted
  if (verifySort(sorted, nItems))
  {
    cout<<"The array has been verified as sorted."<<endl;
  }
  else
  {
    cout<<"The array has been verified as not sorted."<<endl;
  }


  cout << "For Insertion Sort: ";

  //sets sorted = unsorted again inside the function
  insertionsort(unsorted, sorted, nItems);
  //then insertion sorts "sorted"

  //checks sorted
  if (verifySort(sorted, nItems))
  {
      cout << "The array has been verified as sorted." << endl;
  }
  else
  {
      cout << "The array has been verified as not sorted." << endl;
  }


  cout<<"For Selection Sort: ";

  //sets sorted = unsorted again inside the function
  selectionsort(unsorted, sorted, nItems);
  //then insertion sorts "sorted"

  //checks sorted
  if (verifySort(sorted, nItems))
  {
    cout<<"The array has been verified as sorted."<<endl;
  }
  else
  {
    cout<<"The array has been verified as not sorted."<<endl;
  }

  system("pause");
}