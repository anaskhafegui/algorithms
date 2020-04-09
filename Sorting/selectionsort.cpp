#include <iostream>
#include <bits/stdc++.h> 
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

/* void swap(int &x,int &y){
    int z=x;
    x=y;
    y=z;
} */
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
void print(std::vector<int> const &input)
{
	for (int i = 0; i < input.size(); i++) {
		std::cout << input.at(i) << ' ';
	}
}
int main(){

    int arr[7]={10,80,30,90,40,50,70};

    vector <int> v1={10,11,,4,12,8,7,2};

    sort(v1.end,v1.begin);
    
    selectionSort(arr,7);

  //  print(v1);

  for (auto i:v1)
  
      std::cout<<i<<" ";   
  
  
   
    
}