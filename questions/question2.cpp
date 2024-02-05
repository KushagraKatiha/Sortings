#include<iostream>
using namespace std;

int main(){
    // Given two sorted arrays, Write a program to merge them in a sorted manner
    int num1[] = {5, 8, 10, 11, 12};
    int num2[] = {2, 7, 8};

    int n1 = sizeof(num1)/sizeof(num1[0]);
    int n2 = sizeof(num2)/sizeof(num2[0]);

    int n3 = n1+n2;
    int num3[n3];

    for(int i = 0; i < n3; i++){
        cout<<num3[i]<<" ";
    }
    cout<<endl;
    return 0;
}