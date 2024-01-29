#include<iostream>
using namespace std;
// Function to implement quick sort
// Function to implement partition function

int partition(int arr[], int l, int r){
    int pe = arr[r];
    int i = l-1;
    int j = l;

    for(; j < r; j++){
        if(arr[j] < pe){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[r]);
    return i+1;
}

// Recursive funtion
void quickSort(int arr[], int l, int r){
    // base case
    if(l >= r) return;

    // self work and assumption
    int pi = partition(arr, l, r);
    quickSort(arr, l, pi-1);
    quickSort(arr, pi+1, r);
}
int main(){
    // Sort the given array using quick sort
    int arr[] = {4,3,6,5,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, size);
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}