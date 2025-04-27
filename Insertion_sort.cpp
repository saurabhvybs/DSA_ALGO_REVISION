// Insertion_sort: the main idea behind this algorith is to check if the element just befor the element is smaller or now if not then swap in this way in each iteration one of the element enountered will reach its correct spot each time.
// Time complexity for this algo is O(n^2) in worst and avg case but in best case only first loop will run from 0 to n so it will be O(n)
#include <bits/stdc++.h>
using namespace std;

void Insertion_sort(int *arr,int n){
    for(int i=0 ;i<n; i++){
        int j = i;
        while(j>0 && arr[j]< arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}

int main() {
    int size;
    cout<<Enter the size of the array<<endl;
    cin>>size;
    int *arr = new int[size];
    cout<<Enter the Elements in the array<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    Insertion_sort(arr,size);
    for (int el =0; el<size; el++){
        cout<<arr[el]<< ;
    }
    delete [] arr;
    return 0;
}
