#include <iostream>

using namespace std;

struct poly{
    
    float coffienct;
    float power;
};
void deffofpoly(poly a[],poly c[],int nc)
{
     c[1].coffienct=a[1].power*a[1].coffienct;           
         c[1].power=a[1].power-1;     
         
         c[2].coffienct=a[2].power*a[2].coffienct;           
         c[2].power=a[2].power-1;     
         
         c[3].coffienct=a[3].power*a[3].coffienct;           
         c[3].power=a[3].power-1;   
         
     
       
        
        for (int i=1; i<=nc; i++) {
            
            if(c[i].power==0) { cout << c[i].coffienct<<"+"; }
            
            else if(c[i].power==1) { cout << c[i].coffienct<<"X"<<"+"; }
            
            else  std::cout << c[i].coffienct <<"X^"<<c[i].power<<"+";
        }
        
         cout<<endl;
        
}
void integrateofpoly(poly a[],poly d[],int nd)
{
    
         d[1].coffienct=a[1].coffienct/((a[1].power)+1);           
         d[1].power=(a[1].power)+1;     
         
         d[2].coffienct=a[2].coffienct/(a[2].power+1);           
         d[2].power=a[2].power+1;     
         
         d[3].coffienct=a[3].coffienct/(a[3].power+1);           
         d[3].power=a[3].power+1;     
         
     
      
        
        for (int i=1; i<=nd; i++) {
            
           std::cout << d[i].coffienct <<"X^"<<d[i].power<<"+";
        }
}
void sumofpoly(int a[],na,int b[],int nb)
{
    int c[na+nb];
    
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

int main()
{
   cout<<"enter number of polynomial elements : ";
   int n;
   cin>>n;
   int na=n,nb=n,nc=na,nd=n;
   
    poly a[na],b[nb],c[nc],d[nd];
    
    
        a[1].coffienct=3;
        a[1].power=2;
        
        a[2].coffienct=1;
        a[2].power=4;
    
        a[3].coffienct=1;
        a[3].power=1;
        
        cout<<"the sum of two polynomial is : "<<endl;
        sumofpoly(a,na,b,nb);

        
        cout<<"the deffrention of polynomial is : "<<endl;
        deffofpoly(a,c,nc);
        cout<<"the intgeration of polynomial is : "<<endl;
        integrateofpoly(a,d,nd);
        
       
           
}


