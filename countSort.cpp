#include<iostream>
#include<vector>
using namespace std;

// Function to implement count sort
void countSort(vector<int> &v, int size){
    // Finding the maximum element of the array
    int max = INT16_MIN;
    for(int i = 0; i < size; i++){
        if(v[i] > max){
            max = v[i];
        }
    }

    // Making a frequency array of size max+1;
    int freq[max+1];
    
    for(int i = 0; i < (max+1); i++){
        freq[i] = 0;
    }

    // Filling the frequency array
    for(int i = 0; i < size; i++){
        freq[v[i]]++; // increasing the index of the frequency array which is equal to the ith element of the array
    }

    // Calculating the cumulative frequency
    for(int i = 1; i < max+1; i++){
        freq[i] += freq[i-1];
    }

    int ans[size];
    // Filling the answer array
    for(int i = size-1; i >= 0; i--){
        ans[--freq[v[i]]] = v[i]; 
    }

    // Copy the answer array back to the original array
    for(int i = 0; i < size; i++){
        v[i] = ans[i];
    }

    return;
}

int main(){
    // Take a array input from user and sort it using count sort
    int n; cout<<"Enter size of the array: "; cin>>n;
    vector<int> v(n);

    cout<<"Enter array elements: ";
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }

    cout<<"Input array is: ";
    for(int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    countSort(v, n);
    cout<<"Output array: ";
    for(int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}