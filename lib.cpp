#include "lib.h"
float funzione (float a[], int num) {
    
    float max = a[0];

    for (int i=0; i<num; i++) {
        if (a[i]>max) {
            max = a[i];
        }
    }
    return max;
}
