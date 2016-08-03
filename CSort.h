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
                cout<<"[";
                cout.width(numberWidth);
                cout.setf(ios::left);
                cout<< m_data[i] <<"]";
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

                if(m_data[j]> m_data[j+1]) {
                    round++;
                    this->mSwap(m_data[j],m_data[j+1]);
                    this->mPrintSequence("Bubble Sort",round);
                }
            }
        }
    }

    void mSelectSort(){
        int round = 0;
        for (int i = 0; i < m_length; ++i) {
            int minIndex = i;
            for (int j = i; j < m_length; ++j) {

                if(m_data[j]< m_data[minIndex]){
                    minIndex = j;
                }
            }
            if(minIndex != i){
                round++;
                mSwap(m_data[i],m_data[minIndex]);
                this->mPrintSequence("Select Sort",round);
            }
        }
    }

    void mInsertSort(){
        int round = 0;
        T current = m_data[0];
        for (int i = 0; i < m_length-1; ++i) {
            current = m_data[i+1];
            int step = 0;
            while(current < m_data[i-step] && (i-step)>=0)
            {
                m_data[i-step+1] = m_data[i-step];
                step++;
                round++;
                this->mPrintSequence("Insert Sort",round);
            }
            m_data[i-step+1] = current;
        }
    }
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
