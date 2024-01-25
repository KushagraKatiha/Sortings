#include<iostream>
using namespace std;

// Function to implement selection sort
void selectionSort(int *arr, int &size){
   for(int i = 0; i < size-1; i++){
    int min_idx = i;
    for(int j = i+1; j < size; j++){
        if(arr[j] < arr[i]){
            min_idx = j;
        }
    }
    swap(arr[min_idx], arr[i]);
   } 
}

int main(){
    // Sort the given array using selection sort
    int arr[] = {50, 30, 40, 20, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    selectionSort(arr, n);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    return 0;
}