#include<iostream>
#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int calculate_right_water_drop_in_specific_index(int i,int arr[],int n){
   int c=0;
   while (arr[i]>=arr[i+1] && i<n)
   { 
      c++;
      i++;
   }
   return c;
}
int calculate_left_water_drop_in_specific_index(int i,int arr[],int n){
   int c=0;
   while (arr[i]>=arr[i-1] && i>0)
   { 
      c++;
      i--;
   }
   return c;
}
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
   int  n;
   cin>>n;
   int arr[n];
   int cal_drops[n]={0};

   for (int i = 0; i <n; i++){
       cin>>arr[i];
   }
   for (int i = 0; i <n; i++){
    
         if(i==0) cal_drops[i]+=calculate_right_water_drop_in_specific_index(i,arr,n);
         
         else if(i==n-1) cal_drops[i]+=calculate_left_water_drop_in_specific_index(i,arr,n);

         else
         {
            cal_drops[i]+=calculate_right_water_drop_in_specific_index(i,arr,n);
            cal_drops[i]+=calculate_left_water_drop_in_specific_index(i,arr,n);
         }
   }      
   selectionSort(cal_drops,n); 
   cout<<cal_drops[n-1]+1<<endl;
}


