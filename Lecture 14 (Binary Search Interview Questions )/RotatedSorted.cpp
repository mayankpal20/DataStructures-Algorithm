int BinarySearch(int arr[], int start , int n , int key){
    int i = start ;
    int size = n;
    
    while( i<=size){
        int mid = (i + size)/2 ;
        //If key found
        if(arr[mid] == key ){
            return mid;
           
        }
        //If key is greater than arr[mid]
        else if (key>arr[mid] ){
            i = mid+1;
            
        }
        // If key is less than arr[mid]
        else if(key<arr[mid] ){
            i = 0;
            size = mid-1;
        }
        
    }
     return -1;
    
    
}

int pivotelement(int arr[] , int n){
     int i = 0;
    int size = n - 1;
    int mid = (i+size)/2;
   
    while(i<size){
        
        if(arr[mid]>=arr[0]){
            i = mid + 1;
        }
       
        else{
            size = mid;
        }
        mid = (i+size)/2;
    }
    return i;
}


int search(int arr[], int n, int k)
{
    
    int pivot = pivotelement(arr,n);
  if(k==arr[pivot]){
      return pivot;
  }
  else if(k==arr[n-1]){
      return n-1;
  }
    else if(k>arr[pivot] && k<arr[n-1]){
        return BinarySearch(arr,pivot,n-1,k);
    }
    else{
        return BinarySearch(arr,0,pivot-1,k);
    }
}

#include<iostream>
using namespace std;
int main(){
    int arr[9]={10 ,11, 12 ,13 ,3 ,4 ,5, 6, 9 };
    int result = search(arr,9,4);
    cout << result << endl;
}
