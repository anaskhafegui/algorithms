#include <iostream>

using namespace std;

// defin
struct node {
    
    string name;
    int mark;
    char grade;
    node *next;
};

typedef float real;
typedef node *node_ptr;


void print(node_ptr first){
    node_ptr p;
    p=first;
        while(p!=NULL){
            cout<<p->name<<" "<<p->mark<<" "<<p->grade<<endl;
            p=p->next;
        }
}


int main()
{
    node_ptr first,p,q,r;
   
    p = new node;
    p-> name  ="anas khafagy";
    p-> mark  =99;
    p-> grade ='A';
    p-> next  = NULL;
    
    q = new node;
    q-> name  ="zakrya";
    q-> mark  =50;
    q-> grade ='C';
    q-> next  =NULL;
    
    r = new node;
    r-> name  ="mohamed salah";
    r-> mark  =100;
    r-> grade ='C';
    r-> next  =NULL;
  
    p->next =q;
    q->next =r;
    r->next=NULL;

    print(p);
    

    return 0;
}
