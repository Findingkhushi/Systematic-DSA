#include<bits/stdc++.h>
using namespace std;
int partition(int arr[], int low, int high){
    int pivot_element = arr[high];

    int first_pointer = low-1;
    for(int second_pointer = low;second_pointer<=high-1;second_pointer++){
        if(arr[second_pointer]<=pivot_element){
            first_pointer++;
            swap(arr[first_pointer], arr[second_pointer]);
        }
    }

    swap(arr[first_pointer+1], arr[high]);
    return first_pointer+1;
}
void quick_sort(int arr[], int low, int high){
    if(low>=high) return;
    else if(low<high){
        int pi = partition(arr, low, high);

        quick_sort(arr, low, pi-1);
        quick_sort(arr, pi+1, high);
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quick_sort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}