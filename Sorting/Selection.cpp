#include <iostream> 
#include <vector> 

using namespace std;
//TC: O(n^2) best /worst
//SC: O(1) (in-place sorting)
//stable: NO
void selectionSort(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
         int minIndex=i;
         for(int j=i+1;j<n;j++){
             int curr=arr[j];
             if(curr<arr[minIndex]){
                    minIndex=j;
             }
         }

         if(minIndex!=i) swap(arr[i],arr[minIndex]);
    }

}

int main(){

    vector<int> arr={64, 34, 25, 12, 22, 11, 90};
    selectionSort(arr);
    return 0;
}