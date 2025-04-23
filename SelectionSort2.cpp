#include <iostream>
using namespace std;
void selectionSort(int arr[] , int n) {
    for(int i=0 ; i<n ; i++) {
        int smallest = i;
        for(int j=i+1 ; j<n ; j++) {
            if(arr[j] < arr[smallest]) {
                smallest = j;
            }
        }
        swap(arr[i],arr[smallest]);
    }
}
void printArray(int arr[],int n) {
    for(int i=0; i<n ; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
   int n=5;
   int arr[] = {100 , 92 , 184 , 78 , 60};
   selectionSort(arr , n);
   printArray(arr , n);
    return 0;
}