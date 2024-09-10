#include<bits/stdc++.h>
using namespace std;

//approach-1
void bubble_sort(int arr[], int n){
    bool swapped ;
    for(int i = 0;i<n-1;i++){
        bool swapped = false;
        for(int j = i+1;j<n-1-i;j++){
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
                swapped = true;
            }

        }
            if(swapped == false){
                break;
            }
    }
}

//approach-2
void bubble_sort(int arr[], int n){
    bool swapped ;
    for(int i = 0;i<n-1;i++){
        bool swapped = false;
        for(int j = 0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }

        }
            if(swapped == false){
                break;
            }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    bubble_sort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}