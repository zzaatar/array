#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main() {
    int array1[] = {-1, 5, 23, 45, 12, 67, 89, 34, 78, 90, 15, 28};
    int array2[] = {26, 6, 14, 33, 88, 92, 11, 47, 25, 66, 71, 19};
    
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    
    int minDistance = INT_MAX;
    int num1, num2;
    
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            int distance = abs(array1[i] - array2[j]);
            
            if (distance < minDistance) {
                minDistance = distance;
                num1 = array1[i];
                num2 = array2[j];
            }
        }
    }
    
    cout << minDistance << endl;
    
    return 0;
}