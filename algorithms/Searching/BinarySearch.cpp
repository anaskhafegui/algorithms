#include<iostream>
#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int Binarysearch(int key,int arr[],int low,int high){
    
    int mid;
 
    if (low>high) return low-1;

    mid=(low+(high-low)/2);

    if(arr[mid]==key) return mid;

    else if (arr[mid]<key)  Binarysearch(key,arr,mid+1,high);

    else Binarysearch(key,arr,low,mid-1);
}

int main(){
    int arr [10]={1,4,8,9,5,3,7,6,2};
    int index;
    index = Binarysearch(5,arr,0,9);
    cout<<index<<endl;
}