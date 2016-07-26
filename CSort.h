// for ascending order
// Created by Xingchen Wang on 26/07/2016.
//

#ifndef CPPALGORITHMS_CSORT_H
#define CPPALGORITHMS_CSORT_H


class CSort
{
public:
    //cons and des
    CSort(int* data, int length);
    ~CSort();

    //assist
    void mPrintSequence();

    //sort algorithms
//    void mBubbleSort();
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
};


#endif //CPPALGORITHMS_CSORT_H
