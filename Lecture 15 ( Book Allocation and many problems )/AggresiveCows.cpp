#include<iostream>
#include<math.h>
using namespace std;
bool ispossible(int stalls[], int k , int mid,int size){
    int cowCount=1;
    int lastpos = stalls[0];
    for(int i =0;i<size;i++){
        if(stalls[i]-lastpos >=mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastpos=stalls[i];
        }
    }
}


int main()
{
    //    Write your code here.
    int stalls[4]={5,5,5,5};
    int k =2;
    int size =4;
    int s = 0;
    int maxi = -1;
    for(int i = 0 ; i < size;i++){
        maxi = max(maxi,stalls[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(ispossible(stalls,k,mid,size)){
            ans = mid;
            s= mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    cout<< ans << endl;
}