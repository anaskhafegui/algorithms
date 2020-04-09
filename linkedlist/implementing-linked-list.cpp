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
void print_recursively(node_ptr first){
        if(first!=NULL){
            cout<<first->name<<" "<<first->mark<<" "<<first->grade<<endl;
            print_recursively(first->next);
        }
}
int lengthOflist(node_ptr first){
    node_ptr p;
    p=first;
    int size=0;
        while(p!=NULL){
            size++;
            p=p->next;
        }
       return size;
}
void reverse_list(node_ptr last){
    node_ptr p;
    p=last;
    int size=0;
        while(p!=NULL){
            cout<<p->name<<" "<<p->mark<<" "<<p->grade<<endl;
            p=p->next;
        }
        
}
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
// A function to implement bubble sort  
void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    // Last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
}  
  
/* Function to print an array */
void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
void sorting_list_of_degrees(node_ptr first,int n){
    int a[n];
    node_ptr p;
    p=first;
    while (p!=NULL){
        for (int i = 0; i < n; i++)
        {
            a[i]=p->mark;
        }
        p=p->next;
    }
    bubbleSort(a,n);
    printArray(a,n);

}

int main()
{
    node_ptr first,last,p,q,r;
   
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
    first=p;

    print(p);
    print_recursively(first);
     int size=lengthOflist(p);
     cout<<"Length of the list is "<<size<<endl;
    sorting_list_of_degrees(p,size);
   

    p->next =NULL;
    q->next =p;
    r->next=q;
    last=r;
    reverse_list(last);


  

    
    return 0;
}
