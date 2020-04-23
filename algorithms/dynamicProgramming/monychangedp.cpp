#include<iostream>
#include <bits/stdc++.h> 
#include <vector>
#include <algorithm>
#include <iterator>


using namespace std;


void minNumberOfCoinss(int v){

    int arr[3]={1,2,5};
    int arr2[v+1]={0};
    int minimum=v;
    int c=0;
    for (int i = 1; i<=11; i++)
    {
          
        for (int index = 0; index<3; index++)
        {
          
            if (i>=arr[index]){  
               
                minimum=min(i-arr[index],minimum);

                
                arr2[i]=arr2[minimum]+1;
    
            }
            
        }
    

        minimum =11;
               
    }

           cout<<arr2[11]<<" ";
      
}

int main(){
    
   int v=11;
    cout<<"minimum number of coins ";    

    minNumberOfCoinss(v);


}