//
// Created by Xingchen Wang on 02/08/2016.
//

#ifndef CPPALGORITHMS_CTASK_H
#define CPPALGORITHMS_CTASK_H

#include <iostream>

using namespace std;

class CTask {
public:
    CTask(string p_str,float p_priority){
        m_description = p_str;
        m_priority = p_priority;
    };

    bool operator> (const CTask& a){
        return this->m_getPriority() > a.m_getPriority() ? true: false;
    }

    bool operator< (const CTask& a){
        return this->m_getPriority() < a.m_getPriority() ? true: false;
    }



    friend ostream& operator<< (ostream& outStream, const CTask& task){
        //outStream << task.m_description; // ok: friend
        outStream << task.m_getDescription();
        return outStream;
    }

    float m_getPriority() const{
        return m_priority;
    }

    string m_getDescription() const{
        return m_description;
    }
private:
    string m_description{"NULL TASK"};
    float m_priority{1.0};
};

/* Notes:
 * 1. Overload the operator << as 'friend' memeber function.
 * 2. Add a getx() function for operator >.
 * */


#endif //CPPALGORITHMS_CTASK_H
