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


  int*bubblesorted=bubblesort(unsortedOriginal);
  cout<<"For Bubble Sort: ";
//output of sorted array from bubble sort entered to verify result
  if (verifySort(bubblesorted))
  {
    cout<<"The array has been verified as sorted."<<endl;
  }
  else
  {
    cout<<"The array has been verified as not sorted."<<endl;
  }

//to check manually if it's sorted
  for (int i=0;i<10;i++)
    {
      cout<<bubblesorted[i]<<" ";
    }
  cout<<"\n\n";  





  int*insertionsorted=insertionsort(unsortedOriginal);
  cout << "For Insertion Sort: ";

  if (verifySort(insertionsorted))
  {
      cout << "The array has been verified as sorted." << endl;
  }
  else
  {
      cout << "The array has been verified as not sorted." << endl;
  }

//to check manually if it's sorted
  for (int i=0;i<10;i++)
    {
      cout<<insertionsorted[i]<<" ";
    }
    cout<<"\n\n";





  cout<<"For Selection Sort: ";

  int*selectionsorted=selectionsort(unsortedOriginal);

  if (verifySort(selectionsorted))
  {
    cout<<"The array has been verified as sorted."<<endl;
  }
  else
  {
    cout<<"The array has been verified as not sorted."<<endl;
  }

//to check manually if it's sorted
  for (int i=0;i<1000-1;i++)
    {
      cout<<selectionsorted[i]<<" ";
    }
    cout<<"\n\n";

  //system("pause");
  return 0;
}