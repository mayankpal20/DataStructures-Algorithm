#include<iostream>
using namespace std;
int squareroot(int x){
 int i = 1;
 int size = x-1;
 int ans =0;
 while(i<=x){
    int mid = (i+size)/2;
   
    
    if((mid^2)==x){
        ans = mid;
        break;
    }
    else if ((mid^2>x)){
        if(((mid-1)^2)>=x && x<=mid^2){
            ans = mid-1;
            break;
        }
        else{
            size = mid-1;
        }
        
    }
    else if ((mid^2)<x)
    {
         if((mid^2)>=x && x<=((mid+1)^2)){
            ans = mid+1;
         }
         else{
            i = mid+1;
         }
    }
    
 } 
 return ans;  
}
int main(){
    int n = 100;
    int result = squareroot(n);
    cout << result ;
}