#ifndef MEDALIMPL_H
#define MEDALIMPL_H

#include "medal.h"
using namespace std;


class MedalImpl : public Medal
{
protected:
    /** Champion Name */
    string champion;
    /** Medal Type 1-Gold 2-Silver 3-Bronze */
    int value;
public:
    /** Default Medal constructor */
    MedalImpl();
    /** Medal constructor */
    MedalImpl(string, int);
    /** Copy Medal constructor */
	MedalImpl(MedalImpl*);
    /** Medal destructor */
	~MedalImpl();

    /** Get Champion */
    string getChampion();
    /** Change Champion */
    bool setChampion(string);
    /** Get Value */
    int getValue();
    /** Change Value */
    bool setValue(int);
    
    /** operator = overload */
	MedalImpl& operator= (const MedalImpl&);

};






#endif