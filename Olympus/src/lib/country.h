#ifndef COUNTRY_H
#define COUNTRY_H

#include "modality.h"

using namespace std;

/**interface declaration*/
class Country
{
public:
    /** Country destructor */
	virtual ~Country(){};
    /** Get Name of Country*/
    virtual string getName() = 0;
    /** Change Name of Country */
    virtual bool setName(string) = 0;
    /** Get Continent of Country*/
    virtual string getContinent() = 0;
    /** Change Continent of Country */
    virtual bool setContinent(string) = 0;
    /** Given a modality name creates a modality */
    virtual bool createModality(string) = 0;
    /** Given a modality name removes the modality from the country */
    virtual bool removeModality(string) = 0;
    /** Given a modality name returns the modality of the country */
    virtual Modality* returnModality(string) = 0;
    /** Returns the list of modalities of a country */
    virtual list<Modality*> getModalities() = 0;
    /** Get the amount of gold medals in the Country */
    virtual int getGoldMedals() = 0;
    /** Get the amount of silver medals in the Country */
    virtual int getSilverMedals() = 0;
    /** Get the amount of bronze medals in the Country */
    virtual int getBronzeMedals() = 0;
};


#endif