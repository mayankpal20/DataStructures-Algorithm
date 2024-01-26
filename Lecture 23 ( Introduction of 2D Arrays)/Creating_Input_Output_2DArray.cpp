#include<iostream>
using namespace std;
int main(){
    
    //Creating 2D Array
    int arr[4][5];

    //Taking Input in 2D Array
    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            cin >> arr[i][j];
        }
    }

    // Output in 2D Array 
     for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}