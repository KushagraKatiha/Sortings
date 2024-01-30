#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Function to implement bucket sort
void bucketSort(float *arr, int size){
    // Make a bucket of size "size"
    vector<vector<float>> bucket(size, vector<float> ());

    // Insert elements into each buckets
    for(int i = 0; i < size; i++){
        bucket[arr[i]*size].push_back(arr[i]);
    }

    // Sort the individual bucket
    for(int i = 0; i < size; i++){
        if(!bucket.empty()){
            sort(bucket[i].begin(), bucket[i].end());
        }   
    }

    // Combining the elements from the bucket
    int k = 0; 
    for(int i = 0; i < size; i++){
        for(int j = 0; j < bucket[i].size(); j++){
            arr[k++] = bucket[i][j];
        }
    }
    return;
}
int main(){
    // Use bucket sort to sort the given array
    float arr[] = {0.13, 0.45, 0.12, 0.89, 0.75, 0.63, 0.85, 0.39};
    int size = sizeof(arr)/sizeof(arr[0]);

    bucketSort(arr, size);
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    return 0;
}