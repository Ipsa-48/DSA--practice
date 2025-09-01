#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int n, i, key, arr[100];
    cout << "Enter number of elements" << endl;
    cin >> n;
    cout << "Enter elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to be searched" << endl;
    cin >> key;
    bool found = false;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at position " << i + 1 << endl;
            found = true;
            break;
        }}
    if(found!=true){
    
        cout << "Element not found" << endl;
    }
    return 0;
}