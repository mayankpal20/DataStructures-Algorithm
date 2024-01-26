#include<iostream>
using namespace std;
void largestrowwisesum(int arr[][3] , int row , int col){
    int count = 0 ;
    int result = 0 ;
    int rowno = 0;
    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j<col ; j++){
            count = count + arr[i][j];
        }
        result = max(result,count);
        
        if(result<=count){
            rowno = i ;
        }

        count = 0 ;
    }
    cout << "Largest Row Wise Sum : " << result << " " << rowno<< endl;
}
int main(){
    int arr[3][3];


    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cin >> arr[i][j];
        }
    }
    largestrowwisesum(arr,3,3);

}