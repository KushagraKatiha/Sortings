#include<iostream>
#include<vector>
using namespace std;

// Function to implement bubble sort
void bubbleSort(vector<int> &arr){
    for(int i = 0; i < arr.size()-1; i++){
        bool flag = false;
        for(int j = 0; j < arr.size()-i-1; j++){
            if(arr[j] > arr[j+1]){
                flag = true;
                swap(arr[j], arr[j+1]);
            }
        }
        if(!false) break; 
    }
}
int main(){
    // Apply bubble sort on the following array
    vector<int> arr = {20, 50, 40, 10, 30};

    bubbleSort(arr);
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}
