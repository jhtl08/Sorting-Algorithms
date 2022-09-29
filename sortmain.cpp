//sortmain.cpp
//Kyle Coloma, Jason Lorenzo, Paolo Ong
//ENGG 24-J
//September 26, 2022

#include <iostream>
#include <chrono>
#include "algosource.h"

using namespace std::chrono;
using namespace std;

int main()
{
  //set number of items
  int nItems = 1000;

  //calls the function to generate unsorted array not to be modified
  int* unsorted = generateArray(nItems);

  //initialize array to contain sorted output
  int* sorted = new int[nItems]();

  int sort_count = 0;
  int run_count = 10;

  int* bsortCounts = new int[10]();
  int* isortCounts = new int[10]();
  int* ssortCounts = new int[10]();

  //initializes a time point in which an algorithm should stop
  std::chrono::time_point<std::chrono::high_resolution_clock> end;
  //should stop after 5 seconds
  std::chrono::seconds duration(5);

  for (int i = 0; i < run_count;i++)
  {
    end = std::chrono::high_resolution_clock::now() + duration;

    //run bubble sort while it's not yet time point end
    while (std::chrono::high_resolution_clock::now() < end)
    {
      bubblesort(unsorted, sorted, nItems);
      sort_count++;
    }
    *(bsortCounts + i) = sort_count;
    sort_count = 0;

  }
 for (int i = 0; i < run_count;i++)
  {
    end = std::chrono::high_resolution_clock::now() + duration;

    while (std::chrono::high_resolution_clock::now() < end)
    {
      insertionsort(unsorted, sorted, nItems);
      sort_count++;
    }
    *(isortCounts + i) = sort_count;
    sort_count = 0;

  }
  for (int i = 0; i < run_count;i++)
  {
    //reset end time point
    end = std::chrono::high_resolution_clock::now() + duration;

    //run selection sort while it's not yet time point end
    while (std::chrono::high_resolution_clock::now() < end)
    {
      selectionsort(unsorted, sorted, nItems);
      sort_count++;
    }
    *(ssortCounts + i) = sort_count;
    sort_count = 0;

  }

  cout << "Sort count for Bubble Sort: ";
  for (int i = 0; i < run_count;i++)
  {
    cout << *(bsortCounts + i) << " ";
  }
  cout << "\n";

  cout << "Sort count for Insertion Sort: ";
  for (int i = 0; i < run_count;i++)
  {
      cout << *(isortCounts + i) << " ";
    }
    cout << "\n";

    cout << "Sort count for Selection Sort: ";
    for (int i = 0; i < run_count;i++)
    {
      cout << *(ssortCounts + i) << " ";
    }
    cout << "\n";

  system("pause");
}