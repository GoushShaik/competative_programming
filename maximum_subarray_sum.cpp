#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int array[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int currentSum = array[0];
    int maxSum = array[0];

    for (int i = 1; i < n; i++)
    {
        if (currentSum + array[i] > array[i])
            currentSum = currentSum + array[i];
        else
            currentSum = array[i];

        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    cout << maxSum;

    return 0;
}
