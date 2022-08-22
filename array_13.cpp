#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout<<"enter the elemnts: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j] && arr[j] != -1)
            {
                arr[j] = -1;
                k = 1;
            }
        }
        if (k == 1)
        {
            count++;
            k = 0;
        }
    }
    cout << "duplicate elemnts in array are:  "<< count;
}