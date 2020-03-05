#include <iostream>

using namespace std;

int partition (int arr[],int low,int high)
{
    if (low < high)
    {
        int i=-1;

        int pivot = arr[6];
    
        for(int j=0; j<high; j++)
        {
            if(arr[j]<=pivot)
            {
                  i++; swap(arr[i],arr[j]); 
            }
        }
        swap(arr[i+1],arr[high]);
        
        return i+1;
    }
}
void quickSort(int arr[],int low,int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[pi] is now
           at right place */
      int  pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  // Before pi
        quickSort(arr, pi + 1, high); // After pi
    }
}
int main(){
    int arr[7]={10,80,30,90,40,50,70};
    
    quickSort(arr,0,6);
    
    for (int i = 0; i <= 6; i++)
    {
        cout << arr[i]<<endl;
    }
   
}