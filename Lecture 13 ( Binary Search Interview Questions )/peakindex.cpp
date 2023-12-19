#include<iostream>
using namespace std;
int peakindexele(int arr[] , int size){
    int ans = 0;
    int i = 0;
    while(i<=size){
        int mid = (i+size)/2;
        if(arr[mid]<arr[mid+1]){
            i = mid+1;
            
        }
        else if(arr[mid]<arr[mid-1]){
            size = mid-1;
        }
        else{
            ans = arr[mid];
            break;
        }
    }
    return ans;
}

int main(){
    int arr[10]={0,2,4,6,8,10,9,7,5,3};
    int result = peakindexele(arr,10);
    
    cout << result << endl;
}