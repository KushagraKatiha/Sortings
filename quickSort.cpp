#include<iostream>
using namespace std;
// Function to implement quick sort
void quickSort(int *arr, int size){

}
int main(){
    // Sort the given array using quick sort
    int arr[] = {4,3,6,5,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, size);
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}