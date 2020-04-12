#include<iostream>
#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int linearsearch(int key,int arr[],int low,int high){

    if (low>high) return 0;

    if(key==arr[low]) return low;

    return linearsearch(key,arr,low+1,high);
}

int main(){

    int arr [10]={1,4,8,9,5,3,7,6,2};
    int index;

    index = linearsearch(5,arr,0,9);

    cout<<index<<endl;

}