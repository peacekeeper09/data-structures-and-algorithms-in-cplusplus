#include <iostream>

using namespace std;

int main () {
    int a[4] = {1, 2, 3, 4};
    int i;
    for (i = 0; i < 4; i++) {
        cout << a[i] << endl;
    }

    cout << "Size of array a is " << sizeof(a) << "."<<endl;
}

// knowning the size of array using `sizeof(array name)
