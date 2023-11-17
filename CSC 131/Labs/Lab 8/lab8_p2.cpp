#include <iostream>
#include <iomanip>  // Required for setprecision
using namespace std;

/*
Name: Evan Musick
Date: 10/20/2023
Course: CSC-131-002
Purpose: This program will input temperatures for consecutive days.
The program will store these values into an array and call ONE FUNCTION that will return the average,
the highest, and the lowest temperatures in the array. The user will input the number of temperatures to be read. 
*/

void find_max_min_avg(int a[], int n, float *max, float *min, float *avg) {
    *max = *min = a[0]; // Initialize max and min with the first temperature
    float sum = 0; // Initialize sum to calculate the average

    for (int i = 0; i < n; i++) {
        if (a[i] > *max) {
            *max = a[i];
        }
        if (a[i] < *min) {
            *min = a[i];
        }
        sum += a[i]; // Add each temperature to the sum
    }

    *avg = sum / n;
}

int main() {
    int numTemps;
    float high, low, average;
    cout << "Please input the number of temperatures to be read" << endl;
    cin >> numTemps;
    int temp[numTemps];

    for (int i = 0; i < numTemps; i++) {
        cout << "Input temperature " << i + 1 << ":" << endl;
        cin >> temp[i];
    }

    find_max_min_avg(temp, numTemps, &high, &low, &average);

    cout << fixed << setprecision(2); // Set the output to display two decimal places
    cout << "The average temperature is " << average << endl;
    cout << "The highest temperature is " << high << endl;
    cout << "The lowest temperature is " << low << endl;

    return 0;
}
