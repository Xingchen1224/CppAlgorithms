#include <iostream>
#include "CSort.h"

using namespace std;

int main() {
    int pData1[] = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};
    int size1 = sizeof(pData1)/sizeof(int);

    CSort testSort1(pData1, size1);
    testSort1.mBubbleSort();

    return 0;
}