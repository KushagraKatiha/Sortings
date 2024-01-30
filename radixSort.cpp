#include<iostream>
#include<vector>
using namespace std;

// Function to alter count sort as per use
void countSort(vector<int> &v, int size, int pos){
    // creating the frequency array of size 10
    vector<int> arr(10, 0);

    // filling the frequency array
    for(int i = 0; i < size; i++){
        arr[(v[i]/pos)%10]++;
    }

    // calculating the cf
    for(int i = 1; i < 10; i++){
        arr[i] += arr[i-1];
    }

    // Defining and filling the answer array
    vector<int> ans(size);
    for(int i = size-1; i >= 0; i--){
        ans[--arr[(v[i]/pos)%10]] = v[i];
    }

    // Copying the final array into original array
    for(int i = 0; i < size; i++){
        v[i] = ans[i];
    }
}

// Function to implement radix sort
void radixSort(vector<int> &v, int size){
    // Find maximum element
    int max_ele = INT16_MIN;

    for(int i = 0; i < size; i++){
        max_ele = max(v[i], max_ele);
    }

    // get the position by which we have to sort
    for(int pos = 1; (max_ele/pos) > 0; pos *= 10){
        countSort(v, size, pos);
    }
}

int main(){
    // Apply radix sort on the array given by user
    int size; cout<<"Enter size of the array: "; cin>>size;
    vector<int> v(size);

    // get elemets in the array
    cout<<"Enter array elements: ";
    for(int i = 0; i < size; i++){
        cin>>v[i];
    }

    // Print the array
    cout<<"Input array is: ";
    for(int i = 0; i < size; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    radixSort(v, size);
    // print the sorted array
    cout<<"Output array is: ";
    for(int i = 0; i < size; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}