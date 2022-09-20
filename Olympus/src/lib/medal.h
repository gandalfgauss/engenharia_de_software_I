#ifndef MEDAL_H
#define MEDAL_H

#include <string>
using namespace std;

/**interface declaration*/
class Medal
{
public:
    /** Medal destructor */
	virtual ~Medal(){};
    /** Get Champion */
    virtual string getChampion() = 0;
    /** Change Champion */
    virtual bool setChampion(string) = 0;
    /** Get Value */
    virtual int getValue() = 0;
    /** Change Value */
    virtual bool setValue(int) = 0;
};


#endif