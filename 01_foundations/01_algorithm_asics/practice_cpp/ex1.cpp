// Exercise 1: Find minimum in array
#include <iostream>
using namespace std;

int findMin(int array[], int n){
    int minValue = array[0];

    for (int i = 0; i < n; i++){
        if (minValue > array[i]){
            minValue = array[i];
        }
    }

    return minValue;
}

int main(){
    int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 19, 10, 0};

    cout << "Minimum value in array : "<<findMin(arr, 11);

    return 0;
}