#ifndef MODALITY_H
#define MODALITY_H

#include <list>
#include "medal.h"

using namespace std;

/**interface declaration*/
class Modality
{
public:
    /** Modality destructor */
	virtual ~Modality(){};
    /** Get Name of Modality*/
    virtual string getName() = 0;
    /** Change Name of Modality */
    virtual bool setName(string) = 0;
    /** Given a champion removes the medal from the modality */
    virtual bool removeMedal(string) = 0;
    /** Given a champion returns the medal of the modality */
    virtual Medal* returnMedal(string) = 0;
    /** Given a champion and a medal type creates the medal in the modality */
    virtual bool createMedal(string, int) = 0;
    /** Return the medals of the modality */
    virtual list<Medal*> getMedals() = 0;
    /** Get the amount of gold medals in the modality */
    virtual int getGoldMedals() = 0;
    /** Get the amount of silver medals in the modality */
    virtual int getSilverMedals() = 0;
    /** Get the amount of bronze medals in the modality */
    virtual int getBronzeMedals() = 0;

};


#endif