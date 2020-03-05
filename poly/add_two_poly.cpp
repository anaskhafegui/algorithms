#include <iostream>

using namespace std;

struct poly{
    
    int coffienct;
    int power;
};

int main()
{
   int na=3,nb=3,nc=na+nb;
   
    poly a[na],b[nb],c[nc];
    
    int i=1, j=1,k=1;

    a[1].coffienct=3;
    a[1].power=2;
    
    a[2].coffienct=1;
    a[2].power=4;
    
    b[1].coffienct=1;
    b[1].power=1;
    
    b[2].coffienct=1;
    b[2].power=3;
    
    while ( i<=na && j<=nb )
    {
        if     (a[i].power<b[j].power) { c[k]=a[i]; i++; k++;}
        else if(b[j].power<a[i].power) { c[k]=b[j]; j++; k++;}
        
        else 
        {
            int t=a[i].coffienct+b[j].coffienct;
            if(t!=0)
            {
                c[k].coffienct=t;
                c[k].power=a[i].power;
                k++;
            }
            
            i++; j++;
        }
        for (i=i; i<na; i++) { c[k]=a[i]; k++; }
        for (j=j; j<nb; j++) { c[k]=b[j]; k++; nc=k-1; }
    }
    
    
    for (int i=1; i<=nc; i++) {
         std::cout <<"+"<< c[i].coffienct <<"X^"<<c[i].power;
    }
   
}
