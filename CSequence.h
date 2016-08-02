//
// Created by Xingchen Wang on 02/08/2016.
//

#ifndef CPPALGORITHMS_CSEQUENCE_H
#define CPPALGORITHMS_CSEQUENCE_H

#include <iostream>

using namespace std;

template <class T>
class CSequence {
public:
    CSequence(T* p_data):m_data(p_data){
    };

    void m_setLength(int len){
        m_length = len;
        cout<<"test lenght: "<< m_length;
    };

private:
    T*  m_data;
    int m_length;
};


#endif //CPPALGORITHMS_CSEQUENCE_H
