#ifndef SYSTEM_H
#define SYSTEM_H

#include "login.h"
#include "country.h"


using namespace std;

/**interface declaration*/
class System
{
public:
    /**create a System */
	static System* createSystem(string);
    /**delete a System */
	static void deleteSystem(string);
    /** System destructor */
	virtual ~System(){};
    /** Get System name */
    virtual string getName() = 0;
    /** Change System name */
    virtual bool setName(string) = 0;

    /** Given a modality name creates the modality from the system */
    virtual bool createModality(string) = 0;
    /** Given a modality name removes the modality from the system */
    virtual bool removeModality(string) = 0;
    /** Given a modality name returns the modality of the sytstem */
    virtual string* returnModality(string) = 0;
    /** Returns the list of modalities of a country */
    virtual list<string*> getModalities() = 0;

    /** Given a Login name creates the Login from the system */
    virtual bool createLogin(string, string) = 0;
    /** Given a Login name removes the Login from the system */
    virtual bool removeLogin(string) = 0;
    /** Given a Login name returns the Login of the system */
    virtual Login* returnLogin(string) = 0;
    /** Returns the list of Login of a country */
    virtual list<Login*> getLogins() = 0;

    /** Given a Country name creates the Country from the system */
    virtual bool createCountry(string, string) = 0;
    /** Given a Country name removes the Country from the system */
    virtual bool removeCountry(string) = 0;
    /** Given a Country name returns the Country of the system */
    virtual Country* returnCountry(string) = 0;
    /** Returns the list of modalities of a country */
    virtual list<Country*> getCountries() = 0;
    
    /** Get Permission */
    virtual bool login(string, string) = 0;

};



#endif
