// Activity 0.3.3: Random Data Generation and Sum

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned>(time(0))); // Seed for random number generation

    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    int* arr = new int[n]; // Dynamically allocate array

    cout << "Generated data using pointer-notation: ";
    for (int i = 0; i < n; i++) {
        *(arr + i) = rand() % 101; // Generate random numbers (0 to 100)
        cout << *(arr + i) << " ";
    }
    cout << "\n";

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i); // Calculate sum using pointer-notation
    }

    cout << "Sum of the generated data: " << sum << endl;

    delete[] arr; // Free allocated memory
    return 0;
}
