#include <iostream>
using namespace std;
void reverse_array(int reverse[], int n)
{
    cout << "enter the elements in array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> reverse[i];
    }
    int i = 0;
    int j = n - 1;
    int temp;
    while (i < j)
    {
        temp = reverse[i];
        reverse[i] = reverse[j];
        reverse[j] = temp;
        i++;
        j--;
    }
    cout << "reverse array elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << reverse[i] << "\t";
    }
}
int main()
{
    int n;
    cout << "enter the size of element: ";
    cin >> n;
    int reverse[n];
    reverse_array(reverse, n);
}