#include "head.h"

int fn01() {
    int a, b;
    cin >> a >> b;
    int arr[4] = { 2,0,2,5 };
    int count = 0;
    for (int i = 0; i < a; i++) {
        for (int k = 0; k < b; k++)
        {
            cout << arr[count];
            count = (count + 1) % 4;
        }
        cout << endl;
    }
    return 0;
}