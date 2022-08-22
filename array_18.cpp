#include <iostream>
using namespace std;
void reverse(int arr[], int i, int j)
{
    int temp;
    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
void right_rotation(int arr[],int n,int d)
{
    reverse(arr,0,n-1-d);
    reverse(arr,n-d,n-1);
    reverse(arr,0,n-1);

}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "enter d : ";
    int d;
    cin >> d;
    right_rotation(arr, n, d);

    for (int i = 0; i < n; i++)
        cout << arr[i] << "      ";

}