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
            this->mPrintSequence("Input Sequence",-1,28,3);
        }
        else {
            cout << "Error: The data is NULL." << endl;
        }
    }

    ~CSort(){
        mPrintSequence("Output Sequence",-1,28,3);
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

        for (int i = 0; i < m_length-1; ++i) {
            for (int j = 0; j < m_length-1-i; ++j) {

                if(m_data[j]> m_data[j+1]) {
                    m_round++;
                    this->mrSwap(m_data[j],m_data[j+1]);
                    this->mPrintSequence("Bubble Sort",m_round);
                }
            }
        }
    }

    void mSelectSort(){

        for (int i = 0; i < m_length; ++i) {
            int minIndex = i;
            for (int j = i; j < m_length; ++j) {

                if(m_data[j]< m_data[minIndex]){
                    minIndex = j;
                }
            }
            if(minIndex != i){
                m_round++;
                mrSwap(m_data[i],m_data[minIndex]);
                this->mPrintSequence("Select Sort",m_round);
            }
        }
    }

    void mInsertSort(){

        T current = m_data[0];
        for (int i = 0; i < m_length-1; ++i) {
            current = m_data[i+1];
            int step = 0;
            while(current < m_data[i-step] && (i-step)>=0)
            {
                m_data[i-step+1] = m_data[i-step];
                step++;
                m_round++;
                this->mPrintSequence("Insert Sort",m_round);
            }
            m_data[i-step+1] = current;
        }
    }
    void mMergeSort(){
        mMergeSort(0,m_length-1);
    }

    void mQuickSort(){
//        this->mQuickSort(m_data, m_data+m_length-1); // pEnd = pBegin+len-1 !!!
        this->mQuickSort(0, m_length - 1); // pEnd = pBegin+len-1 !!!
    }
//    void mRQuickSort();
//    void mCountSort();
//    void mRadixSort();


private:
    T*      m_data{nullptr};
    int     m_length{0};
    int     m_round{1};

//    void mpSwap(T* a, T* b){
//        T temp = *a;
//        *a = *b;
//        *b = temp;
//    }

    void mrSwap(T& a, T& b){
            T temp = a;
            a = b;
            b = temp;
    }



    //set last element as pivot
    void mQuickSort(T *p, T *r){
        if(p== nullptr || r== nullptr){
            cout << "nullptr error." <<endl;
            return;
        }
        if(p == r){
            cout << "Only one element:  " << *p << endl;
            return;
        }

        T* pAnchor = mPartition(p,r);

        if(p == pAnchor){//left empty
            mQuickSort(pAnchor + 1, r);
            return;
        }

        if(r==pAnchor){//right empty
            mQuickSort(p, pAnchor - 1);
            return;
        }

        //both sides are not empty
        mQuickSort(p, pAnchor - 1);
        mQuickSort(pAnchor + 1, r);

    }

    //return the index of anchor
    T* mPartition(T* p, T* r){
        T pivot = *r;

        T* i = p;
        for (T* j = p; j<= r-1; j++) {
            if(*j < pivot){ //both < and <= ok
                if(i!=j){
                    mrSwap(*i, *j);
                }
                i++;
            }
        }

        mrSwap(*i,*r);

        this->mPrintSequence("Quick Sort",m_round,15,3);
        m_round++;

        return i;
    }

    //set last element as pivot
    void mQuickSort(int p, int r){
        if(p == r){
            cout << "Only one element:  " << m_data[p] << endl;
            return;
        }


        int anchor = mPartition(p, r);

        if(p == anchor){ //left empty
            mQuickSort(anchor + 1, r);
            return;
        }
        if(r == anchor){ //right empty
            mQuickSort(p, anchor - 1);

            return;
        }

        //both sides are not empty
        mQuickSort(p, anchor - 1);
        mQuickSort(anchor + 1, r);
    }

    //return the index of anchor
    int mPartition(int p, int r){

        T pivot = m_data[r];
        int i = p - 1;

        for (int j = p; j <= r-1; ++j) {
            if (m_data[j] <= pivot){ //should be <= or 74 75 74
                i++;
                mrSwap(m_data[j],m_data[i]);
            }
        }

        mrSwap(m_data[i+1], m_data[r]);
        this->mPrintSequence("Quick Sort",m_round,15,3);
        m_round++;

        return i+1;
    }

    void mMergeSort(int p, int r){
        if(p >= r){
            return;

        } else{
            int q = -1;

            if((p+r)%2 == 0){ //e.g. len = 9 (p=0, r=8) => q = 4
                q=(p+r)/2;
            }else{ //e.g. len = 8 (p=0, r=7) => q = 3
                q=(p+r-1)/2;
            }

            this->mMergeSort(p, q);
            this->mMergeSort(q+1, r);
            this->mMerge(p, q, r);
        }
    }

    void mMerge(int p, int q, int r){
        int n1 = q - p + 1;
        int n2 = r - q;

        // L [1 .. n+1] = m_data[p .. q+1] = m_data[p .. p+n1-1]
        T* L = new T[n1];
        cout<< "L[i]: ";
        for (int i = 0; i < n1; ++i) {
            L[i] = m_data[p+i];
            cout<< " "<<L[i]<<" ";
        }
        cout<<endl;

        // R: m_data[1 .. n+2] = m_data[q .. r] = m_data[q .. q+n2]
        T* R = new T[n2];
        cout<< "R[j]: ";
        for (int j = 0; j < n2; ++j) {
            R[j] = m_data[q+j+1];
            cout<< " "<<R[j]<<" ";
        }
        cout<<endl;

        int i = 0;
        int j = 0;

        for (int k = p; k <= r; ++k) {
            if(L[i] <= R[j]){
                m_data[k] = L[i];
                //cout<< "L[i]  "<<L[i]<<endl;
                i++;
            } else{
                m_data[k] = R[j];
                //cout<< "R[j]  "<<R[j]<<endl;
                j++;
            }
        }
        m_round++;
        this->mPrintSequence("Merge Sort",m_round,15,3);

        delete []L;
        delete []R;
    }
};

#endif //CPPALGORITHMS_CSORT_H

/* Notes:
 * 1. The implmentation and the declaration of the template should be in the same class or it cannot be compiled.
 * */
