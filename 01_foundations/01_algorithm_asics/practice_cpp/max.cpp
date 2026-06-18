#include <iostream>
using namespace std;

int findMax(int array[], int n){
    int maxValue = array[0];

    for (int i = 1; i < n; i++){
        if (array[i] > maxValue){
            maxValue = array[i];
        }
    }

    return maxValue;
}

int main(){
    int arr[15] = {1, 3, 2, 5, 4, 6, 7, 8, 11, 13, 0, 11, 17};

    cout <<"Max value in array : "<<findMax(arr, 15);

    return 0;
}