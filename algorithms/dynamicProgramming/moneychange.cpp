#include<iostream>
#include <bits/stdc++.h> 
#include <vector>
#include <algorithm>
#include <iterator>


using namespace std;

void minNumberOfCoins(int n, vector<int> x,int v)
{
    int c=0;
    for (int i = n-1; i>=0;  i--)
    {
       while(v>=x[i]){
        v-=x[i];
        c++;  
       }
    }
    cout<<c<<endl;
}
main(){

    int v,n = 0;
    vector<int> x;

    cin>>n>>v;
    int temp = 0;

    for(int i = 0; i < n; i++)
    {
    cin>>temp;
    x.push_back(temp);
    }

    cout<<"minimum number of coins ";    

    minNumberOfCoins(n,x,v);
  
     
}