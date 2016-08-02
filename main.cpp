#include <iostream>
#include "CSort.h"

using namespace std;

void testCase1();
void testCase2();

int main() {
    testCase1();
    testCase2();
    return 0;
}

void testCase1()
{
    int pData1[] = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};
    int size1 = sizeof(pData1)/sizeof(int);
    CSort<int> testSort1(pData1, size1);
    testSort1.mBubbleSort();
}

void testCase2()
{
    float pData2[] = {3.0, 44.1, 38.2, 5.3, 47.4, 15.5, 36.6, 26.7, 27.8, 2.9, 46.0, 4.1, 19.2, 50.3, 48.4};
    int size2 = sizeof(pData2)/sizeof(float);
    CSort<float> testSort2(pData2, size2);
    testSort2.mBubbleSort();
}