// Find the second largest element in the given array without sorting.
#include <bits/stdc++.h>
using namespace std;

int second_largest(int *arr, int size){
    int lg =0, second_lg = 0;
    for(int i=0;i<size;i++){
        if(arr[i]>lg){
            slg= lg;
            lg = arr[i];
        }
    }
    return slg;
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
   int result= second_largest(arr,size);
   cout<<result<<endl;
    delete [] arr;
    return 0;
}
