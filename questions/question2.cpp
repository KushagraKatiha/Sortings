#include<iostream>
using namespace std;

void mergeArray(int *arr1, int n1, int *arr2, int n2, int *arr3, int n3){
    int i = 0;
    int j = 0;
    int k = 0; 
    while(i < n1 and j < n2){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }else{
            arr3[k++] = arr2[j++];
        }
    }

    while(i < n1){
        arr3[k++] = arr1[i++];
    }

    while(j < n2){
        arr3[k++] = arr2[j++];
    }

}

int main(){
    // Given two sorted arrays, Write a program to merge them in a sorted manner
    int num1[] = {5, 8, 10, 11, 12};
    int num2[] = {2, 7, 8};

    int n1 = sizeof(num1)/sizeof(num1[0]);
    int n2 = sizeof(num2)/sizeof(num2[0]);

    int n3 = n1+n2;
    int num3[n3];

    mergeArray(num1, n1, num2, n2, num3, n3);
    for(int i = 0; i < n3; i++){
        cout<<num3[i]<<" ";
    }
    cout<<endl;
    return 0;
}