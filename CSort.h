// for ascending order
// Created by Xingchen Wang on 26/07/2016.
//

#ifndef CPPALGORITHMS_CSORT_H
#define CPPALGORITHMS_CSORT_H

#include <iostream>

using namespace std;

class CSort
{
public:
    //cons and des
    CSort(int* data, int length);
    ~CSort();

    //assist
    void mPrintSequence(string headStr,int round=-1,int headWidth=15,int numberWidth=4);

    //sort algorithms
    void mBubbleSort();
//    void mSelectSort();
//    void mInsertSort();
//    void mMergeSort();
//    void mQuickSort();
//    void mRQuickSort();
//    void mCountSort();
//    void mRadixSort();


private:
    int* m_data;
    int  m_length;

    void mSwap(int&, int&);
};


#endif //CPPALGORITHMS_CSORT_H
