#ifndef COUNTRYIMPL_H
#define COUNTRYIMPL_H

#include "country.h"
using namespace std;


class CountryImpl : public Country
{
protected:
    /** Country Name */
    string name;
    /** Continent Name */
    string continent;
    /** List of modalities */
    list<Modality*> modalities;
public:
    /** Default Country constructor */
    CountryImpl();
    /** Country constructor */
    CountryImpl(string, string);
    /** Copy Country constructor */
	CountryImpl(CountryImpl*);
    /** Country destructor */
	~CountryImpl();

    /** Get Name of Country*/
    string getName();
    /** Change Name of Country */
    bool setName(string);
    /** Get Continent of Country*/
    string getContinent();
    /** Change Continent of Country */
    bool setContinent(string);
    /** Given a modality name creates a modality */
    bool createModality(string);
    /** Given a modality name removes the modality from the country */
    bool removeModality(string);
    /** Given a modality name returns the modality of the country */
    Modality* returnModality(string);
    /** Returns the list of modalities of a country */
    list<Modality*> getModalities();
    /** Get the amount of gold medals in the Country */
    int getGoldMedals();
    /** Get the amount of silver medals in the Country */
    int getSilverMedals();
    /** Get the amount of bronze medals in the Country */
    int getBronzeMedals();
    
    /** operator = overload */
	CountryImpl& operator= (const CountryImpl&);

};






#endif