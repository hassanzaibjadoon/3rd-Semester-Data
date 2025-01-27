// Activity 0.3.1: Calculate Average

#include <iostream>
using namespace std;

// Function to calculate average
double calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}

int main() {
    int n;
    cout << "Enter the number of values to average: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter " << n << " integer values, one by one:\n";
    for (int i = 0; i < n; i++) {
        cout << "Value " << i + 1 << ": ";
        cin >> arr[i];
    }

    double avg = calculateAverage(arr, n);
    cout << "The average of the entered values is: " << avg << endl;

    delete[] arr;
    return 0;
}
