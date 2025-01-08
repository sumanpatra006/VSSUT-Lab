#include<iostream>
using namespace std;

//---------printing of array---------

void printArray(int arr[],int length){
    for(int i=0; i<length; i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
}

//--------input of array elements----------

void inputArrayElements(int arr[],int length){
    for(int i=0; i<length; i++){
        cin >> arr[i];
    }
}

//-----insertion sort --------------

void insertionSort(int arr[], int length){
    int key;
    for(int i=1; i<length; i++){
        key = arr[i];
        int j=i-1;
        while(j>=0 && key < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key ;
    }
    printArray(arr,length);
}

int main(){
    int length;
    cout<<"enter length of array : ";
    cin>>length;
    int arr[length];
    inputArrayElements(arr,length);
    cout << "given array is : " , printArray(arr , length);
    cout << "sorted array is : " , insertionSort(arr,length);
}