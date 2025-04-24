#include <iostream>
using namespace std;
void insertionSort(int a[] , int n) {
    for(int i=1 ; i<n ; i++)
    {
        int current = a[i];
        int j=i-1;
        while(a[j] > current && j>=0)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = current;
    }
}
void printArray(int a[] , int n) {
    for(int i=0 ; i<n ; i++) 
    {
        cout<<a[i] << " ";
    }
}
int main() {
    int n =5 ;
    int a[] = {100 , 93 , 84 ,120 , 45};
    insertionSort(a , n);
    printArray(a , n);
    return 0;
}