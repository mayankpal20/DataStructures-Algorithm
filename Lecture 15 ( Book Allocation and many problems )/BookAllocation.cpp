#include<iostream>
using namespace std;
bool ispossiblesolution(int array[],int n , int m ,int mid){
    int studentcount = 1;
    int pagesum =0;
    for (int i = 0; i < n; i++)
    {
        if(pagesum+array[i] <= mid){
            pagesum+=array[i];
        }
        else{
            studentcount++;
            if(studentcount>m || array[i]>mid){
                return false;
            }
            pagesum=array[i];
        }
    }
    return true;
}
int main(){
    int n = 4;
    int m = 2;
    int array[4]={10,20,30,40};
    int s = 0;
    int sum = 0;
    for(int i = 0; i <n ; i++){
        sum+=array[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(ispossiblesolution(array,n,m,mid)){
            ans = mid;
            e=mid-1;
        }
        else{
            s = mid +1;
        }
        mid = s + (e-s)/2;
    }
    cout<< ans;
}