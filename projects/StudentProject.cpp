#include <iostream>

using namespace std;

struct student
{
    string name;
    int marks[4];
    int average;
    string grade;
};

void createstudent(student s[],int n)
{
       for(int j=0; j<n; j++)
       {
           cout<<"please input student name : ";
           cin>>s[j].name;
           cout<<"please input four marks : ";
           int sum=0;
          
           for(int i=0; i<4; i++)
           {
               cin>>s[j].marks[i];
               sum+=s[j].marks[i];
           }
           s[j].average = sum/4;
          
           if     ( s[j].average<=100 && s[j].average>=85 ) s[j].grade='A';
           else if( s[j].average<85 && s[j].average>=75 )   s[j].grade='B';
           else if( s[j].average<75 && s[j].average>=65 )   s[j].grade='C';
           else if( s[j].average<65 && s[j].average>=60 )   s[j].grade='D';
           else s[j].grade='E';
       }   
          
       
}   

void printstudents(student s[],int n)
{
   cout<<"StudentName"<<"\t"<< "Mark1" <<"\t"<< "Mark2" <<"\t"<< "Mark3" <<"\t" << "Mark4" <<"\t" << "average" <<"\t"<<"grade"<<endl<<endl;

   for(int i=0;i<n;i++)
   {
            cout <<s[i].name<<"\t"<<"\t";
            for(int j=0;j<4;j++){ cout <<s[i].marks[j]<<"\t";  }
            cout <<s[i].average<<"\t";
            cout <<s[i].grade<<"\t"<<endl;
   }
    
}
int Search(student s[], string name,int n)
{
    bool found=false;
    int index;
    int i=0;
        while((i<n)&&(!found))
              {
                  if(s[i].name==name)
                  {
                      found =true;
                      index=i;
                  }
                else
                    i++;
              }
              if(found)
                return index;
              else
                return -1;
}
void changstudentmark(student s[],string name,int n)
{
    int index,mark,indexofmark;
        index=Search(s,name,n);
        if(index==-1)
            cout<<"\n"<<name <<" is not found\n\n";
        else
        {
            cout<<"\n enter index(1,2,3,4) of mark and mark\n";
            cin>>indexofmark>>mark;
            
            s[index].marks[indexofmark-1]=mark;
            int sum;
          for(int i=0; i<4; i++)
           {
            
               sum+=s[index].marks[i];
           }
           s[index].average = sum/4;
          
           if     ( s[index].average<=100 && s[index].average>=85 ) s[index].grade='A';
           else if( s[index].average<85 && s[index].average>=75 )   s[index].grade='B';
           else if( s[index].average<75 && s[index].average>=65 )   s[index].grade='C';
           else if( s[index].average<65 && s[index].average>=60 )   s[index].grade='D';
           else s[index].grade='E';
        }
}
void printstudent(student s)
{
    cout<<"##############\n";
    cout <<"Name\t:"<<s.name<<endl;
    for(int j=0;j<4;j++){ cout <<s.marks[j]<<"\t";  }
    cout<<"\nAverage\t:"<<s.average<<endl;
    cout<<"Grad\t:"<<s.grade<<endl;
}
void ptrintstudentgivenname(student s[],string name,int n)
{
    int index;
    index=Search(s,name,n);
    if(index==-1)
        cout<<"\n"<<name <<" is not found\n\n";
    else
        printstudent(s[index]);
}
void deletstudent(student s[],string name,int n)
{
    int index;
        index=Search(s,name,n);
        if(index==-1)
            cout<<"\n"<<name <<" is not found\n\n";
        else
        {
            for(int i=index ;i<n; i++)
                s[i]=s[i+1];
            n--;
            cout<<"\n  "<<name<<" is deleted\n\n";
        }
}
int main()
{
    int n=2;
    bool studentcreated = false;
    student s[n];
    int c;
    while (c!=0)
    { 
        cout<<endl<<"press 1 for create students"<<endl;
        cout<<"press 2 for print students recordes"<<endl;
        cout<<"press 3 for print student"<<endl;
        cout<<"press 4 for Search student"<<endl;
        cout<<"press 5 for change student mark"<<endl;
        cout<<"press 6 for Delete student"<<endl;
        cout<<"exit press 0"<<endl;
        cin>>c;
                switch(c)
                {    
                   case 1: 
                            createstudent(s,n);
                            studentcreated=true;
                            break;
                   case 2:    
                            if(studentcreated)  printstudents(s,n);
                            else cout<<"you should create students before printing"<<endl;
                            break;
                   case 3:    
                            if(studentcreated)
                            {
                                string name;
                                cout<<"Put name of student do you want to looking for"<<endl;
                                cin>>name;
                                ptrintstudentgivenname(s,name,n);
                            }
                            else cout<<"you should create students before printing"<<endl;
                            break;        
                   case 4:    
                        if(studentcreated) 
                        {
                            string name;
                            cout<<"Put name of student do you want to Search for"<<endl;
                            cin>>name;
                            if(Search(s,name,n)!=-1)  cout<<"student founded"<<endl;
                            else cout<<"Student not found "<<endl;
                        } 
                        else cout<<"you should create students before Searching"<<endl;
                        break;       
                   case 5:
                        if(studentcreated) 
                        { 
                            string name;
                            cout<<"Put name of student do you want to modify his degree"<<endl;
                            cin>>name;
                            changstudentmark(s,name,n);
                        } 
                        else cout<<"you should create students before modify degrees"<<endl;
                        break;      
                     case 6:
                        if(studentcreated) 
                        { 
                            string name;
                            cout<<"Put name of student do you want to remove"<<endl;
                            cin>>name;
                            deletstudent(s,name,n);
                        } 
                        else cout<<"you should create students before remove him"<<endl;
                        break;           
                        
                }   
    }       
}


