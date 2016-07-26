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

        cout.width(10);
        cout.setf(ios::left);
        cout<< endl<< "Input:";

        this->mPrintSequence();

        cout<< endl;
    }
    else
    {
        cout<<"Error: The data is NULL." << endl;
    }

}

void CSort::mPrintSequence()
{
    if(m_data!= nullptr)
    {
        for (int i = 0; i < m_length; ++i)
        {
            cout.width(4);
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
    cout.width(10);
    cout.setf(ios::left);
    cout<< "Output:";
    mPrintSequence();
}