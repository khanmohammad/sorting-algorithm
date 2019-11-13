//Selection sort

#include<iostream>
using namespace std;


void swapArray(int *, int *);
void selectionSort(int[], int);
void printArray(int[], int);


//Main function
int main (void)
{

int arr[] = {64,25,12,22,11,100,7};

int size = sizeof(arr)/sizeof(arr[0]);

 
//Print the originl array.
cout<<"Original array .."<<endl;
printArray(arr, size);

selectionSort(arr, size);

cout<<"\nSorted arrays are.."<<endl;
printArray(arr, size);

cout <<endl;


return 0;
}


/*Function for Selection Sort algorithm*/
void selectionSort(int arr[], int size)
{

int i;
int j;
int lowest_value_index;




for (i =0; i<size-1; i++)
{
lowest_value_index = i;

for (j=i+1; j<size; j++)
  {
   if (arr[j] < arr[lowest_value_index]) 
   	   {
   	   lowest_value_index = j;
   	   }
   
  } //end of inner for loop
  swapArray(&arr[lowest_value_index], &arr[i]);
 }//end of first for loop

} // end of function selection sort


/*Functio to print the sortted array*/
void printArray(int arr[], int size)
{
int i;
for (i =0; i <size; i++)
   {
   cout<<arr[i]<<"\t";

   }
cout<<endl;

}






//Function to swap values
void swapArray(int *x, int *y)
{
int temp;
temp = *x;
*x = *y;
*y = temp;
}