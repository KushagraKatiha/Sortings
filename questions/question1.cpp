 #include <iostream>
#include <vector>
using namespace std;
// Function to make the partition
int partition(vector<int> v, int left, int right){
    int pe = v[right];
    int i = left;

    for(int j = left; j < right; j++){
        if(v[j]<pe){
            swap(v[i], v[j]);
            i++;
        }
    }
    swap(v[i], v[right]);
    return i;
}

// Function to find kth smallest element
int kthElem(vector<int> v, int k, int left, int right){
    if(k>0 && k<=right-left+1){
        int pos = partition(v, left, right);
        
        if(pos-left == k-1){
            return v[pos];
        }else if(pos-left > k-1){
            return kthElem(v, k, left, pos-1);
        }else{
            return kthElem(v, k-pos+left-1, pos+1, right);
        }
    }
    return -1;
}
int main(){
    // Program to find kth smallest element in an array using QuickSort
    int n; cout<<"Enter size of array: "; cin>>n;
    vector<int> v(n);
    cout<<"Enter elements of the array: ";

    for(int i = 0; i < n; i++){
        cin>>v[i];
    }

    cout<<"Input array is: ";
    for(int ele : v){
        cout<<ele<<" ";
    }
    cout<<endl;

    int x; cout<<"Enter x: "; cin>>x;

    int result = kthElem(v, x, 0, n-1);
    cout<<result<<endl;

    return 0;
}