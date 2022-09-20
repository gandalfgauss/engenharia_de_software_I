#ifndef MODALITYIMPL_H
#define MODALITYIMPL_H

#include "modality.h"
using namespace std;


class ModalityImpl : public Modality
{
protected:
    /** Modality name */
    string name;
    /** Medal list */
    list<Medal*> medals;
public:
    /** Default Modality constructor */
    ModalityImpl();
    /** Modality constructor */
    ModalityImpl(string);
    /** Copy Modality constructor */
	ModalityImpl(ModalityImpl*);
    /** Modality destructor */
	~ModalityImpl();

    /** Get Name of Modality*/
    string getName();
    /** Change Name of Modality */
    bool setName(string);
    /** Given a champion removes the medal from the modality */
    bool removeMedal(string);
    /** Given a champion returns the medal of the modality */
    Medal* returnMedal(string);
    /** Given a champion and a medal type creates the medal in the modality */
    bool createMedal(string, int);
    /** Return the medals of the modality */
    list<Medal*> getMedals();
    /** Get the amount of gold medals in the modality */
    int getGoldMedals();
    /** Get the amount of silver medals in the modality */
    int getSilverMedals();
    /** Get the amount of bronze medals in the modality */
    int getBronzeMedals();


    /** operator = overload */
	ModalityImpl& operator= (const ModalityImpl&);

};






#endif