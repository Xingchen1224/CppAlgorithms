//
// Created by Xingchen Wang on 26/07/2016.
//
#include "CSort.h"
#include <iostream>

using namespace std;

CSort::CSort(int *data, int length)
{
    if(data!= nullptr)
    {
        this->m_data = data;
        this->m_length = length;
        this->mPrintSequence("Input Sequence",-1,29);
    }
    else
    {
        cout<<"Error: The data is NULL." << endl;
    }

}

void CSort::mPrintSequence(string headStr,int round,int headWidth,int numberWidth)
{
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

    if(m_data!= nullptr)
    {
        for (int i = 0; i < m_length; ++i)
        {
            cout.width(numberWidth);
            cout.setf(ios::left);
            cout<< m_data[i] << " ";
        }

        cout<< endl;
    }
    else
    {
        cout<<"Error: The m_data is NULL." << endl;
    }
}

CSort::~CSort()
{
    mPrintSequence("Output Sequence",-1,29);
}

void CSort::mBubbleSort() {
    int round = 0;
    for (int i = 0; i < m_length-1; ++i) {
        for (int j = i; j < m_length-1; ++j) {
            round++;
            if(m_data[j]> m_data[j+1]) {
                this->mSwap(m_data[j],m_data[j+1]);
            }
            this->mPrintSequence("Bubble Sort",round);
        }
    }


}

void CSort::mSwap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}