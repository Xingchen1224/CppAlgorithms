// Created by Xingchen Wang on 26/07/2016.
// CSort will focus on algorithms, CSequence will focus on data structure.
// Sort algorithms with the ascending order.

#ifndef CPPALGORITHMS_CSORT_H
#define CPPALGORITHMS_CSORT_H

#include <iostream>

using namespace std;

template <class T>
class CSort{
public:

    CSort(T* data, int length){
        if(data!= nullptr){
            this->m_data = data;
            this->m_length = length;
            this->mPrintSequence("Input Sequence",-1,31);
        }
        else {
            cout << "Error: The data is NULL." << endl;
        }
    }

    ~CSort(){
        mPrintSequence("Output Sequence",-1,31);
        cout<<endl;
    }

    //assist
    void mPrintSequence(string headStr,int round=-1,int headWidth=15,int numberWidth=6){
        cout.width(headWidth);
        cout.setf(ios::left);
        headStr = headStr+" :";
        cout<<headStr;

        if(round!=-1){
            cout<<"(round: ";
            cout.width(numberWidth);
            cout.setf(ios::left);
            cout<<round;
            cout<<") ";
        }

        if(m_data!= nullptr){
            for (int i = 0; i < m_length; ++i) {
                cout.width(numberWidth);
                cout.setf(ios::left);
                cout<< m_data[i] << " ";
            }

            cout<< endl;
        }
        else {
            cout<<"Error: The m_data is NULL." << endl;
        }
    }

    //sort algorithms
    void mBubbleSort(){
        int round = 0;
        for (int i = 0; i < m_length-1; ++i) {
            for (int j = 0; j < m_length-1-i; ++j) {
                round++;
                if(m_data[j]> m_data[j+1]) {
                    this->mSwap(m_data[j],m_data[j+1]);
                }
                this->mPrintSequence("Bubble Sort",round);
            }
        }
    }

//    void mSelectSort();
//    void mInsertSort();
//    void mMergeSort();
//    void mQuickSort();
//    void mRQuickSort();
//    void mCountSort();
//    void mRadixSort();


private:
    T* m_data{nullptr};
    int  m_length{0};

    void mSwap(T& a, T& b){
        T temp = a;
        a = b;
        b = temp;
    }
};

#endif //CPPALGORITHMS_CSORT_H

/* Notes:
 * 1. The implmentation and the declaration of the template should be in the same class or it cannot be compiled.
 * */
