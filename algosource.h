//algosource.h
//Kyle Coloma, Jason Lorenzo, Paolo Ong
//ENGG 24-J
//September 19, 2022

#ifndef CODE_ALGOHEADER_H
#define CODE_ALGOHEADER_H

//initializes the random array generator function
int* generateArray();

//initializes verify function
bool verifySort(int * arraySorted);

//initializes Bubble Sort function
int* bubblesort(int * unsortedOriginal);

//initializes Insertion Sort function
int* insertionsort(int* unsortedOriginal);

//initializes Insertion Sort functon
int* selectionsort(int* unsortedOriginal);
#endif