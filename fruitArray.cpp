#include<iostream>
using namespace std;
// Function to sort fruits array

void sortFruits(string *arr, int size){
    for(int i = 0; i < size-1; i++){
        int min_idx = i; 
        for(int j = i+1; j < size; j++){
            if(arr[min_idx] > arr[j]){
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

int main(){
    // Given an array of names of the fruits you are suppose to sort it in lexicographical order using the selection sort

    string arr[] = {"papaya", "lime", "watermelon", "apple", "mango", "kiwi"};
    int size = sizeof(arr)/sizeof(arr[0]);

    sortFruits(arr, size);
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}