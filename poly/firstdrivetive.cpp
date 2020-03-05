#include <iostream>

using namespace std;

int 
main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)              // Big Theta of N
        cin >> arr[i];
    
    cout << "you Entered:      ";                // Big Theta of N
    for(int i = 0; i < n; i++){
        if(i == 0)
            cout << arr[i];
        else
            cout << arr[i] << "(x^" << i << ')' ;
        if(i != n-1)
            cout << '+';
    }
    cout << "\nFirst Derivative: ";         // Big Theta of N
    for(int i = 0; i < n; i++){
        if(i == 0)
            continue;
        else if(i == 1)
            cout << arr[i];
        else
            cout << i*arr[i] << "(x^" << i-1 << ')' ;
        if(i != n-1)
            cout << '+';
    }
    cout << "\n";

}
