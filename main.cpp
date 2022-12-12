#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int num;
    cin >> num;
    float a[num];

    for (int i=0; i<num; i++) {
        cin >> a[i];
    }

    cout << funzione(a, num) ;

    return 0;
}
