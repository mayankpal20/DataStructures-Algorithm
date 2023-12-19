#include<iostream>
using namespace std;
int bladesize(int arrsize , int M , int array[]){
    int ans = 0;
    int arraysize = arrsize - 1 ;
    int maxi = 0;
    int s = 0 ;
    for(int i =0 ; i<=arraysize ; i++){
        maxi = max(maxi,array[i]);
    }
    int e = maxi;
    
    while(s<e){
        int summ = 0;
        int mid = (s+e)/2;
        for(int j =0 ; j<=arraysize;j++){
            if(array[j]>mid){
                summ = summ + (array[j]-mid);
            }
            else{
                continue;
            }
        }
        if(summ == M){
            ans = mid;
            break;
        }
        else if(summ != M && summ > M){
            s = mid;
        }
        else{
            e = mid;
        }
    }
    return ans;
    
}
int main(){
    int n , m ;
    cout << "enter a value of n and m " << " ";
    cin >> n >> m ;

    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
    }
    // int arr[4]={20,15,10,17};
    // int M = 7;
    int result = bladesize(n,m,arr);
    cout << result;
}