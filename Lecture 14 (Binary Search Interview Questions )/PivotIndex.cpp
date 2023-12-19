#include<iostream>
using namespace std;
int pivotelement(int array[] , int n){
     int i = 0;
    int size = n - 1;
    int mid = (i+size)/2;
   
    while(i<size){
        
        if(array[mid]>=array[0]){
            i = mid + 1;
        }
       
        else{
            size = mid;
        }
        mid = (i+size)/2;
    }
    return i;
}
int main(){
    int arr[8]={11,3,4,5,6,7,8,9};
    int result = pivotelement(arr,8);
    cout << result << endl;
}