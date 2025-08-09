#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//TC: O(n^2)
//SC: O(1) (in-place sorting)
//Already/nearly  Sorted: O(n) (best case)
//Worst Case: O(n^2) (when the array is sorted in reverse order)
//Stable: Yes (it maintains the relative order of equal elements)
void insertionSort( vector<int> & arr){

    int n=arr.size();
    int key=0;
    for(int i=1;i<n;i++){
           key=arr[i];
           int j=i-1;

           while(j>=0 && arr[j]>key){
               arr[j+1]=arr[j];
               j--;
           }
           if(j+1!=i){
                arr[j+1]=key; 
           }
    }
}

int main(){

    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    insertionSort(arr);
    return 0;
}