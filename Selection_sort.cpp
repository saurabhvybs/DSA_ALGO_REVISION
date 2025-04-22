// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n,i,pos = 0;
    // dynamic array initialisation
    cout<<please enter the size of the array<<endl;
    cin>>n;
    int *arr = new int[n];
    // Populating the array
    cout<<Enter the elements in the array<<endl;
    int size = n;
    while(size--){
        cin>>i;
        arr[pos++] = i;
    }
    int j = 0, len = n;
    while(j<len-1){
        int min_index = j;
        for(int k = j+1; k < n; k++){
            if( arr[k] < arr[min_index] ){
                min_index = k;
            }
        }
        if(j != min_index){
            swap(arr[j],arr[min_index]);
        }
        j++;
    }
    for (int i = len - 1; i >= 0; i--) {
        cout << arr[i] << endl;
    }

    
    delete [] arr;

    return 0;
} 
