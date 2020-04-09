#include<iostream>
#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  

void selectionSort(int arr[],int n)
{
    int i,j,min_index;
    
    for (i = 0; i < n-1; i++){
        min_index = i;
        for (j = i+1; j <n; j++)
            if(arr[j]<arr[min_index]) min_index=j;
        

         swap(&arr[min_index], &arr[i]);  
    }
}
int main(){

    long long n;
    cin >> n;
    long long a[n];
    long long b[n];
 
    
        for(int j=0; j<n; j++){ 
            cin>>a[j];
            cin>>b[j];

             if ( a[j] != b[j]){ cout<<"rated"<<endl; return 0; }
        }
           
        for(int j=0; j<n; j++){ 

            if (a[j] > a[j-1]){
            cout<<"unrated"<<endl;  return 0;
            }
            
        } 

        cout<<"maybe"<<endl;  return 0;  

}
