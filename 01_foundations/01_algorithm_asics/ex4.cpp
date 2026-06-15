// Exercise 4: Revers an array
#include <iostream>
using namespace std;

int main(){
    int array[13] = {1, 2, 3, 4, 6, 8, 12, 13, 13, 0, 11, 17, 11};
    int n = 13;

    int left = 0;
    int right = n - 1;

    while (left < right){
        int temp = array[left];
        array[left] = array[right];
        array[right] = temp;

        left++;
        right--;
    }

    for (int i = 0; i < n; i++){
        cout << array[i] << " ";
    }

    return 0;
}