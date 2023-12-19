#include<iostream>
using namespace std;
int firstpos(int arr[] , int size , int key){
    int i = 0 ;
    int ans = -1;
    while(i<=size){
        int mid = (i+size)/2;
        if(arr[mid] == key){
            ans = mid;
            size = mid-1;
        }
        else if (arr[mid]>key){
            size = mid-1;
        }
        else if (arr[mid]<key){
            i = mid + 1;
        }
    }
    return ans;
}

int lastpos(int arr[] , int size , int key){
    int i = 0 ;
    int ans = -1;
    while(i<=size){
        int mid = (i+size)/2;
        if(arr[mid] == key){
            ans = mid;
            i = mid+1;
        }
        else if (arr[mid]>key){
            size = mid-1;
        }
        else if (arr[mid]<key){
            i = mid + 1;
        }
    }
    return ans;
}
int main(){
    int even[9]={3, 4 ,4 ,4 ,4, 5 ,5 ,5, 6 };
    int firstocc = firstpos(even , 9 , 5);
    int lastocc = lastpos(even , 9 , 5);

    cout << firstocc << endl;
    cout << lastocc << endl;


}
