#include<iostream>
using namespace std;

// Function to implement merging
void merge(int *arr, int l, int mid, int r){
    int A = mid- l + 1;
    int arrA[A];
    for(int i = 0; i < A; i++){
        arrA[i] =  arr[l+i];
    }

    int B = r-mid;
    int arrB[B];
    for(int i = 0; i < B; i++){
        arrB[i] = arr[mid+1+i];
    }

    // Funciton to check which one to push in the main array
    int i = 0;
    int j = 0; 
    int k = l;

    while(i < A and j < B){
        if(arrA[i] < arrB[j]){
            arr[k++] = arrA[i++];
        }else{
            arr[k++] = arrB[j++];
        }
    }

    while(i < A){
        arr[k++] = arrA[i++];
    }
    while(j < B){
        arr[k++] = arrB[j++];
    }
}

// Function to implement merge sort
void mergeSort(int arr[], int l, int size){
    if(l >= size) return;
    int mid = (l+size)/2;

    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, size);
    merge(arr, l, mid, size);

}

int main(){
    // Sort the array using merge sort
    int arr[] = {10, 28, 24, 6, 34, 18, 38, 44};
    int size = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr, 0, size);
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}