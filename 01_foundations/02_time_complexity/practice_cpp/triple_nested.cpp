#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                cout << i << j << k << endl;
            }
        }
    }

    return 0;
}

/*
    Your Task
        + Reply with:
            - Answer for each file (complexity)
            => O(n ^ 3)
            - Short explanation (1–2 lines each)
            => if i = 3, 
                - i => 1 work for j = 3 time (in any j work for k = 3 time)

*/ 