#include<iostream>
using namespace std;

// Function to set zeros in last
void setZeroes(int *arr, int n){
    // We will set non-zero elements to the front of the array
    for(int i = 0; i < n-1; i++){
        int curr = arr[i];
        int j = i+1;
        while(j < n){
            if(curr == 0 && arr[j] != 0){
                swap(arr[i], arr[j]);
                curr = arr[i];
                j++;
            }else{
                j++;
            }
        }
    }
}

int main(){
    // Given an integer array arr, move all 0's to the end of it while maintaining the relative order of the non-zero elements
    // Note => You must do this in place without making a copy of the array

    int arr[] = {3, 0, 2, 0, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    setZeroes(arr, n);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}