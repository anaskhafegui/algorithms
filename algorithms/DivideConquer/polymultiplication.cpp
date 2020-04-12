#include<iostream>
#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int mutlpoly(int a[],int b[],int n,int product[]){

   

   for (int i = 0; i <2; i++)
    for (int j = 0; j <2; j++){
        product[i+j]+=a[i]*b[j];
   }
   
   
}

int main(){

    int a[2]={2,3};
    int b[2]={1,3};
    int c[3]={0};

    mutlpoly(a,b,2,c);

    
    cout<<c[0]<<" "<<c[1]<<" "<<c[2]<<endl;
    
     

}