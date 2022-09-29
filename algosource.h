//algosource.h
//Kyle Coloma, Jason Lorenzo, Paolo Ong
//ENGG 24-J
//Project 1 Sorting Algorithms
//September 30, 2022
 
#ifndef CODE_ALGOHEADER_H
#define CODE_ALGOHEADER_H

//initializes the random array generator function
int* generateArray(int nItems);

//initializes verify function
bool verifySort(int * sorted, int nItems);

//initializes a function to copy unsorted to sorted
void unsortedCopy(int * unsorted, int * sorted, int nItems);

//initializes Bubble Sort function
void bubblesort(int * unsorted, int * sorted, int nItems);

//initializes Insertion Sort function
void insertionsort(int* unsorted, int * sorted, int nItems);

//initializes Insertion Sort functon
void selectionsort(int* unsorted, int * sorted, int nItems);

#endif