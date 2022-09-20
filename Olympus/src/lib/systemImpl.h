#ifndef SYSTEMIMPL_H
#define SYTEMIMPL_H

#include "system.h"
using namespace std;



class SystemImpl : public System
{
protected:
    /** System name */
    string name;
    /** System container */
	static list<System*> systems;
    /** List of Logins */
    list<Login*> logins;
    /** List of modalities */
    list<string*> modalities;
    /** List of Countries */
    list<Country*> countries;
public:
    /** Default System constructor */
    SystemImpl();
    /** System constructor */
    SystemImpl(string);
    /** Copy System constructor */
	SystemImpl(SystemImpl*);
    /** System destructor */
	~SystemImpl();

    /** Get System name */
    string getName();
    /** Change System name */
    bool setName(string);

    /** Given a modality name creates the modality from the system */
    bool createModality(string);
    /** Given a modality name removes the modality from the system */
    bool removeModality(string);
    /** Given a modality name returns the modality of the sytstem */
    string* returnModality(string);
    /** Returns the list of modalities of a country */
    list<string*> getModalities();

    /** Given a Login name creates the Login from the system */
    bool createLogin(string, string);
    /** Given a Login name removes the Login from the system */
    bool removeLogin(string);
    /** Given a Login name returns the Login of the system */
    Login* returnLogin(string);
    /** Returns the list of Login of a country */
    list<Login*> getLogins();

    /** Given a Country name creates the Country from the system */
    bool createCountry(string, string);
    /** Given a Country name removes the Country from the system */
    bool removeCountry(string);
    /** Given a Country name returns the Country of the system */
    Country* returnCountry(string);
    /** Returns the list of modalities of a country */
    list<Country*> getCountries();

    /** operator = overload */
	SystemImpl& operator= (const SystemImpl&);

    /**create a System */
	static System* createSystem(string);
    /**delete a System */
	static void deleteSystem(string);

    /** Get Permission */
    bool login(string, string);

};






#endif
