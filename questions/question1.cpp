#include <iostream>
#include <vector>
using namespace std;
// Function to find kth smallest element
int kthElem(int *arr, int size, int k){
    
}
int main(){
    // Program to find kth smallest element in an array using QuickSort
    int n; cout<<"Enter size of array: "; cin>>n;
    vector<int> v(n);
    cout<<"Enter elements of the array: ";

    for(int i : v){
        int ele; 
        cin>>ele;
        v.push_back(ele);
    }

    cout<<"Input array is: ";
    for(int ele : v){
        cout<<ele<<" ";
    }
    cout<<endl;

    int x; cout<<"Enter x: "; cin>>x;

    int result = kthElem(v, n, k);
    cout<<result;

    return 0;
}