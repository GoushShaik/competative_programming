#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int smallest_pos = 0;
    int biggest_pos = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < arr[smallest_pos]) {
            smallest_pos = i;
        }
        if (arr[i] > arr[biggest_pos]) {
            biggest_pos = i;
        }
    }
    int temp = arr[smallest_pos];
    arr[smallest_pos] = arr[biggest_pos];
    arr[biggest_pos] = temp;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    
    return 0;
}
