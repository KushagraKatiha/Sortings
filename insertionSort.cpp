#include<iostream>
using namespace std;

// Function to implement insertion sort
void insertionSort(int *arr, int size){

    for(int i = 1; i < size; i++){
        int curr = arr[i];      // store current variable
        int j = i-1;            // to get the previous element
        
        while(j >= 0 and arr[j] > curr){    // keep shifting the element untill we get element smaller than current element 
            arr[j+1] = arr[j];          // to shift the element to next position
            j--;                        // to decrease the pointer
        }

        arr[j+1] = curr;              // to insert the current element to the place next to smaller element than current in the sorted array

    }
}

int main(){
    // Apply insertion sort on the given array 
    int arr[] = {11, 8, 15, 9, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, n);

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}