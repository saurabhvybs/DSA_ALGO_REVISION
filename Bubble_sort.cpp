// In Bubble sort the main idea is to iterate over the array each time and compare the elements from starting each time
// with its neighbour element and if it is  greater then swap it in this way in each iteration largest element will
// automatically be placed at the last of the array.
// time complexity will still be O(n^2) for Worst and Avg but for best case it will be O(n). first time it will iterate over n element second time n-1 then n-2....

#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int *arr, int size){
    for(int j = size; j>0 ; j--){
// this will remains false if array is already sorted as there will be no swapping happens in first iteration which tells us that array is already sorted
        bool swapped = false;
        for(int k = 0; k < j-1; k++){
            if(arr[k]>arr[k+1]){
                swap(arr[k],arr[k+1]);
                swapped = true;
            }
        }
        if(!swapped)break;
    }
}
int main(){
    cout<<"Enter the size of the array"<<endl;
    int size;
    cin>>size;
    cout<<"Enter the elements in the array"<<endl;
    int *arr = new int[size];
    for(int i=0; i < size; i++){
        cin>>arr[i];
    }
    bubble_sort(arr,size);
    for(int i=0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    delete [] arr;
    return 0;
}
