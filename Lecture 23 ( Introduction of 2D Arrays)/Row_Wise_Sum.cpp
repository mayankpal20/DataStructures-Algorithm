#include<iostream>
using namespace std;
void rowwisesum(int arr[][3] , int row , int col){
    int count = 0 ;
    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j<col ; j++){
            count = count + arr[i][j];
        }
        cout << count << endl;
        count = 0 ;
    }
}
int main(){
    int arr[3][3];


    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cin >> arr[i][j];
        }
    }
    rowwisesum(arr,3,3);

}