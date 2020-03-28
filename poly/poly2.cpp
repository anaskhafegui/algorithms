#include <iostream>

using namespace std;

struct poly{
    
    float coffienct;
    float power;
};

int main()
{
   cout<<"enter number of polynomial elements";
   int n;
   cin>>n;
   int na=n,nb=n,nc=na,nd=3,ns=na+nb;
   
    poly a[na],b[nb],c[nc],d[nd];

        a[1].coffienct=3;
        a[1].power=2;
        
        a[2].coffienct=1;
        a[2].power=4;
    
        a[3].coffienct=1;
        a[3].power=1;
    
          /* a[2].coffienct=1;
           a[2].power=3;*/
           
           
         c[1].coffienct=a[1].power*a[1].coffienct;           
         c[1].power=a[1].power-1;     
         
         c[2].coffienct=a[2].power*a[2].coffienct;           
         c[2].power=a[2].power-1;     
         
         c[3].coffienct=a[3].power*a[3].coffienct;           
         c[3].power=a[3].power-1;   
         
     
       
        
        for (int i=1; i<=nc; i++) {
            
            if(c[i].power==0) { cout <<"+"<< c[i].coffienct; }
            
            else if(c[i].power==1) { cout <<"+"<< c[i].coffienct<<"X"; }
            
            else std::cout <<"+"<< c[i].coffienct <<"X^"<<c[i].power;
        }
        
         cout<<endl;
        
         d[1].coffienct=a[1].coffienct/((a[1].power)+1);           
         d[1].power=(a[1].power)+1;     
         
         d[2].coffienct=a[2].coffienct/(a[2].power+1);           
         d[2].power=a[2].power+1;     
         
         d[3].coffienct=a[3].coffienct/(a[3].power+1);           
         d[3].power=a[3].power+1;     
         
     
      
        
        for (int i=1; i<=nd; i++) {
            
           std::cout <<"+"<< d[i].coffienct <<"X^"<<d[i].power;
        }
       
}


