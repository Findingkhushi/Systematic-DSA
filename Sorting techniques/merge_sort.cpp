#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int left, int mid, int right){
    int n1 = mid-left;
    int n2 = right-mid+1;

    int arr1[n1], arr2[n2];

    for(int i=0;i<n1;i++){
        arr1[i] = arr[left+i];
    }
    for(int i=0;i<n2;i++){
        arr2[i] = arr[mid+i]; 
    }

    int i = 0, j=0, k=left;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            arr[k] = arr1[i];
            i++;
        }
        else{
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = arr2[j];
        j++;
        k++;
    }

}

void merge_sort(int arr[], int left, int right){
    if(left>=right){
        return ;
    }
    else{
        int mid = left+(right-left)/2;

        merge_sort(arr, left, mid);
        merge_sort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];

    cout<<"Input values for array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"print non sorted array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    merge_sort(arr, 0, n-1);
    cout<<"Print sorted array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}