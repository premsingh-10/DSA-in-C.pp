#include <iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout <<endl;
}

void inputs(int arr[],int n){
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void swapAlternate(int arr[],int n){
    for(int i = 0; i < n; i=i+2) {
       if(i+1 < n){
           swap(arr[i],arr[i+1]);
       } 
    }
}

int main()
{
   int n,arr[10];
   cout << "Enter no of elements " <<endl;
   cin >> n;
    inputs(arr,n);
    printArray(arr,n);
    swapAlternate(arr,n);
    printArray(arr,n);
    return 0;
}