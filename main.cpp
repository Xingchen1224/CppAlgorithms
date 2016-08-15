#include <iostream>
#include "CSort.h"
#include "CTask.h"

using namespace std;

void testCase1();   //Bubble Sort <int>
void testCase2();   //Bubble Sort <float>
void testCase3();   //Bubble Sort <double>
void testCase4();   //Bubble Sort <char>
void testCase5();   //Bubble Sort <CTask>
void testCase6();   //Select Sort <int>
void testCase7();   //Select Sort <float> & Bubble Sort <float>
void testCase8();   //Select Sort <CTask>
void testCase9();   //Insert Sort <int> & Select Sort <int> & Bubble Sort <int>
void testCase10();  //Insert Sort <CTask>
void testCase11();  //Quick Sort <int>
void testCase12();  //Merge Sort <int>

int main() {
//    testCase1();
//    testCase2();
//    testCase3();
//    testCase4();
//    testCase5();
//    testCase6();
//    testCase7();
//    testCase8();
//    testCase9();
//    testCase10();
//    testCase11();
    testCase12();

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

void testCase6(){
    int pData[] = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};
    int size = sizeof(pData)/sizeof(int);
    CSort<int> testSort(pData, size);
    testSort.mSelectSort();
}

void testCase7(){
    float pData[] = {3.0, 44.1, 38.2, 5.3, 47.4, 15.5, 36.6, 26.7, 27.8, 2.9, 46.0, 4.1, 19.2, 50.3, 48.4};
    int size = sizeof(pData)/sizeof(float);
    CSort<float> testSort(pData, size);
    testSort.mSelectSort();

    float pData2[] = {3.0, 44.1, 38.2, 5.3, 47.4, 15.5, 36.6, 26.7, 27.8, 2.9, 46.0, 4.1, 19.2, 50.3, 48.4};
    int size2 = sizeof(pData2)/sizeof(float);
    CSort<float> testSort2(pData2, size2);
    testSort2.mBubbleSort();
}

void testCase8(){
    CTask task1("Learn machine learning", 2.0);
    CTask task2("Review C++", 3.0);
    CTask task3("Learn image processing", 1.3);
    CTask task4("Review algorithms", 1.1);
    CTask task5("Review math", 2.1);
    CTask task6("Reading inside c++ model", 0.3);

    CTask tasks[]{task1,task2,task3,task4,task5,task6};
    int size = sizeof(tasks)/sizeof(CTask);
    CSort<CTask> testSort(tasks,size);
    testSort.mSelectSort();
}

void testCase9(){
    int pData[] = {56,78,37,11,53,13,756,43,9,67,4,32,12,14,75,99,15,33,38,74,35,246,74,373,743,212,42,56,41,98};
    int size = sizeof(pData)/sizeof(int);
    CSort<int>* testSort = new CSort<int>(pData, size);
    testSort->mInsertSort();
    delete testSort;

    cout << "---------------------------------------------------------" <<endl <<endl;
    int pData2[] = {56,78,37,11,53,13,756,43,9,67,4,32,12,14,75,99,15,33,38,74,35,246,74,373,743,212,42,56,41,98};
    int size2 = sizeof(pData2)/sizeof(int);
    CSort<int>* testSort2 = new CSort<int>(pData2, size2);
    testSort2->mSelectSort();
    delete testSort2;

    cout << "---------------------------------------------------------" <<endl <<endl;
    int pData3[] = {56,78,37,11,53,13,756,43,9,67,4,32,12,14,75,99,15,33,38,74,35,246,74,373,743,212,42,56,41,98};
    int size3 = sizeof(pData3)/sizeof(int);
    CSort<int>* testSort3 = new CSort<int>(pData3, size3);
    testSort3->mBubbleSort();
    delete testSort3;
}

void testCase10(){
    CTask task1("Learn machine learning", 2.0);
    CTask task2("Review C++", 3.0);
    CTask task3("Learn image processing", 1.3);
    CTask task4("Review algorithms", 1.1);
    CTask task5("Review math", 2.1);
    CTask task6("Reading inside c++ model", 0.3);

    CTask tasks[]{task1,task2,task3,task4,task5,task6};
    int size = sizeof(tasks)/sizeof(CTask);
    CSort<CTask> testSort(tasks,size);
    testSort.mInsertSort();
}

void testCase11(){
//    int pData[] = {31, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};
    int pData[] = {56,78,37,11,53,13,756,43,9,67,4,32,12,14,75,99,15,33,38,74,35,246,74,373,743,212,42,56,41,98};
//    int pData[] = {2,8,7,1,3,5,6,4};
    int size = sizeof(pData)/sizeof(int);
    CSort<int> testSort(pData, size);
    testSort.mQuickSort();
}

void testCase12(){
    int pData[] = {31, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};
//    int pData[] = {56,78,37,11,53,13,756,43,9,67,4,32,12,14,75,99,15,33,38,74,35,246,74,373,743,212,42,56,41,98};
//    int pData[] = {2,8,7,1,3,5,6,4};
    int size = sizeof(pData)/sizeof(int);
    CSort<int> testSort(pData, size);
    testSort.mMergeSort();
}