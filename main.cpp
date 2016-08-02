#include <iostream>
#include "CSort.h"
#include "CTask.h"

using namespace std;

void testCase1();
void testCase2();
void testCase3();
void testCase4();
void testCase5();

int main() {
//    testCase1();
//    testCase2();
//    testCase3();
//    testCase4();
    testCase5();
    return 0;
}

void testCase1(){
    int pData[] = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};
    int size = sizeof(pData)/sizeof(int);
    CSort<int> testSort(pData, size);
    testSort.mBubbleSort();
}

void testCase2(){
    float pData[] = {3.0, 44.1, 38.2, 5.3, 47.4, 15.5, 36.6, 26.7, 27.8, 2.9, 46.0, 4.1, 19.2, 50.3, 48.4};
    int size = sizeof(pData)/sizeof(float);
    CSort<float> testSort(pData, size);
    testSort.mBubbleSort();
}

void testCase3()
{
    double pData[] = {3.0, 44.1, 38.2, 5.3, 47.4, 15.5, 36.6, 26.7, 27.8, 2.9, 46.0, 4.1, 19.2, 50.3, 48.4};
    int size = sizeof(pData)/sizeof(double);
    CSort<double> testSort(pData, size);
    testSort.mBubbleSort();
}

void testCase4(){
    char pData[] = {'x','i','n','g','c','h','e','n','w','a','n','g'};
    int size = sizeof(pData)/sizeof(char);
    CSort<char> testSort(pData, size);
    testSort.mBubbleSort();
}

void testCase5(){
    CTask task1("Learn machine learning", 2.0);
    CTask task2("Review C++", 3.0);
    CTask task3("Learn image processing", 1.3);
    CTask task4("Review algorithms", 1.1);
    CTask task5("Review math", 2.1);
    CTask task6("Reading inside c++ model", 0.3);

    CTask tasks[]{task1,task2,task3,task4,task5,task6};
    int size = sizeof(tasks)/sizeof(CTask);
    CSort<CTask> testSort(tasks,size);
    testSort.mBubbleSort();
}