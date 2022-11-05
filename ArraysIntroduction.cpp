#include <iostream>
using namespace std;
void reverse(int arr[], int n)
{
    int output[n];
    for (int i = 0; i < n; i++)
    {
        output[i] = arr[n - i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << output[i] << " ";
    }
}
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    cin >> size; // always input size of array before intialising the array as it can result in inconsistent array size
    int input[size];

    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }
    reverse(input, size);
    return 0;
}
