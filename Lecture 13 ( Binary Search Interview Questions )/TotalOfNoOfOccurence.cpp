#include<iostream>
using namespace std;
/*First Method*/
/*
int noofocc(int arr[] , int size , int key){
    int count = 0;
    for(int i = 0 ; i<=size ; i++){
        if(arr[i]==key){
            count = count + 1;
        }
        else{
            continue;
        }
    }
    return count;
}
*/
/*Second Method*/
int leftocc(int arr[] , int size , int key){
    int i = 0 ;
    int count = 0;
    while(i<=size){
        int mid = (i+size)/2;
        if(arr[mid] == key){
            count = count+1;
            size = mid-1;
        }
        else if (arr[mid]>key){
            size = mid-1;
        }
        else if (arr[mid]<key){
            i = mid + 1;
        }
    }
    return count;
}

int rightocc(int arr[] , int size , int key){
    int i = 0 ;
    int count = -1;
    while(i<=size){
        int mid = (i+size)/2;
        if(arr[mid] == key){
            count = count+1;
            i = mid+1;
        }
        else if (arr[mid]>key){
            size = mid-1;
        }
        else if (arr[mid]<key){
            i = mid + 1;
        }
    }
    return count;
}
int main(){
    int array[11]={1,2,3,3,3,3,3 , 4 ,4,4,5};
    int firstcount = leftocc(array , 11 , 4);
    int secondcount = rightocc(array , 11 , 4);
    cout << firstcount << endl;
    cout << secondcount << endl;
    cout << "Total count is : " << (firstcount+secondcount) << endl;
}