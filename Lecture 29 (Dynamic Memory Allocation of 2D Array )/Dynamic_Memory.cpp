#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n ;

    int **arr = new int*[n];

    for(int i = 0 ; i < n ; i++){
        /*enter a array inside arr[i]*/
        arr[i]=new int[n];
    } 

    for(int i = 0 ; i < n ; i++){
     
        for(int j = 0 ; j < n ; j++){
          cin >> arr[i][j];
      }   
    }

      for(int i = 0 ; i < n ; i++){
     
        for(int j = 0 ; j < n ; j++){
          cout << arr[i][j] << "";
      }   
      cout << endl;
    }


    /*Releasing heap memory in 2d array*/
    for(int i = 0 ; i < n ; i++){
      delete []arr[i];  
    } 

    delete []arr;
}