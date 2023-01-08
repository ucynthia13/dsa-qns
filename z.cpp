
// CPP program to find out
// Sum of elements at even and
// odd index positions separately
#include <iostream>
   
using namespace std;
   
// Function to calculate sum
void EvenOddSum(int arr[], int n)
{
    int even = 0;
    int odd = 0;
    for (int i = 0; i < n; i++) {
        // Loop to find even, odd sum
        if (i % 2 == 0)
            even += arr[i];
        else
            odd += arr[i];
    }
   
    cout << "Even index positions sum " << even;
    cout << "\nOdd index positions sum " << odd;
}
   
// Driver function
int main()
{
	cout << "E"
    cout << "Enter elements: ";
    for
    int n = sizeof(arr) / sizeof(arr[0]);
   
    EvenOddSum(arr, n);
   
    return 0;
}
