#include <iostream> 
#include <vector>
#include <algorithm>

using namespace std;

void bubbleSort(vector<int>& arr){
    int n=arr.size();
    //bubble and float up 

    for(int i=0;i<n-1;i++){
          int flag=false;
          for(int j=0;j<n-i-1;j++){
              if(arr[j]>arr[j+1]){
                    flag=true;
                    swap(arr[j],arr[j+1]);
              }
          }

          if(!flag) return;
    }
}

int main(){
    vector<int>arr={64, 34, 25, 12, 22, 11, 90};
    bubbleSort(arr);

    return 0;
}