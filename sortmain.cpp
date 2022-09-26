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
  //calls the function to generate unsorted array not to be modified
  int* unsortedOriginal= generateArray();

  int counter=0;
  int run_count=3;

  int *bsortCounts, *isortCounts, *ssortCounts=new int(10);

  for(int i=0; i<run_count;i++)
  {
    //initializes a time point in which an algorithm should stop
    std::chrono::time_point<std::chrono::system_clock> end;
    //should stop after 5 seconds
    std::chrono::seconds duration(5);
    end = std::chrono::system_clock::now() + duration;
  
    //run bubble sort while it's not yet time point end
    cout<<"Test";
    while(true)
    {
      cout<<"test 1";
      bubblesort(unsortedOriginal);
      counter++;
      if (std::chrono::system_clock::now() > end)
      {
        break;
      }
    }
    cout<<"done";
    bsortCounts[run_count]=counter;
  }

  for(int i=0; i<run_count;i++)
  {
    cout<<bsortCounts[i]<<" ";
  }
  return 0;
}