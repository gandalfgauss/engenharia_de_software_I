#include "modalityimpl.h"
#include "medalImpl.h"

/**
  * \return Modality
  */
ModalityImpl:: ModalityImpl()
{
    name = "adm";
}

/**
  * \param modalityName is the name of the modality
  * \return Modality
  */
ModalityImpl :: ModalityImpl(string modalityName)
{
    if(modalityName == " " || modalityName == "")
    {
        name = "adm";
    }
    else
    {
        name = modalityName;
    }
}

/**
  * \param modalityUser is the modality to be created
  * \return Modality
  */
ModalityImpl:: ModalityImpl(ModalityImpl* modalityUser)
{
    name = modalityUser->name;

    for(Medal* medal : medals)
    {
        if(medal != nullptr)
        {
            delete medal;
        }
    }

    medals.clear();

    MedalImpl* aux;
    for(Medal* medal : modalityUser->medals)
    {
        if(medal != nullptr)
        {
            aux = new MedalImpl(reinterpret_cast<MedalImpl*>(medal));
            medals.push_back(aux);
        }
    }
}

/**
  * \return
  */
ModalityImpl:: ~ModalityImpl()
{
    for(Medal* medal : medals)
    {
        if(medal != nullptr)
        {
            delete medal;
        }
    }

    medals.clear();
}

/**
  * \return string
  */
string ModalityImpl:: getName()
{
    return name;
}

/**
  * \param nameModality is the Modality name
  * \return bool
  */
bool ModalityImpl::setName(string nameModality)
{
    if(nameModality == " " || nameModality == "")
    {
        return false;
    }

    name = nameModality;
    return true;
}

/**
  * * \param nameMedal name of the medal to be removed
  * \return bool
  */
bool ModalityImpl:: removeMedal(string nameMedal)
{
    Medal* aux = nullptr;

    for(auto medal = medals.begin(); medal != medals.end(); medal++)
    {
        if((*medal)->getChampion() == nameMedal)
        {
            aux = *medal;
            medals.erase(medal);
            break;
        }
    }

    if(aux != nullptr)
    {
        delete aux;
        return true;
    }

    return false;
}

/**
  * \param nameMedal name of the medal to be returned
  * \return Medal*
  */
Medal* ModalityImpl::returnMedal(string nameMedal)
{
    Medal* aux = nullptr;

    for(Medal* medal : medals)
    {
        if(medal->getChampion() == nameMedal)
        {
            aux = medal;
            break;
        }
    }

    return aux;
}

/**
  * \param nameMedal name of the medal to be created
  * \param valueMedal it's the medal guy
  * \return bool
  */
bool ModalityImpl::createMedal(string nameMedal, int valueMedal)
{
    for(Medal* medal : medals)
    {
        if(medal->getChampion() == nameMedal)
        {
            return false;
        }
    }

    MedalImpl* aux = new MedalImpl();
    
    if(!(aux->setChampion(nameMedal) && aux->setValue(valueMedal)))
    {
        delete aux;
        return false;
    }

    medals.push_back(aux);

    return true;
}

/**
  * \return list<Medal*>
  */
list<Medal*> ModalityImpl::getMedals()
{
    return medals;
}


/**
  * \return int
  */
int ModalityImpl:: getGoldMedals()
{
    int goldMedals = 0;

    for(Medal* medal :medals)
    {
        if(medal->getValue() == 1)
        {
            goldMedals++;
        }
    }

    return goldMedals;
}

/**
  * \return int
  */
int ModalityImpl:: getSilverMedals()
{
    int silverMedals = 0;

    for(Medal* medal :medals)
    {
        if(medal->getValue() == 2)
        {
            silverMedals++;
        }
    }

    return silverMedals;
}

/**
  * \return int
  */
int ModalityImpl:: getBronzeMedals()
{
    int bronzeMedals = 0;

    for(Medal* medal :medals)
    {
        if(medal->getValue() == 3)
        {
            bronzeMedals++;
        }
    }

    return bronzeMedals;
}
/**
  * \param modalityUser is a modality that gonna be copied
  * \return Modality&
  */
ModalityImpl& ModalityImpl::operator= (const ModalityImpl& modalityUser)
{
	if (this == &modalityUser)
		return *this;

	name = modalityUser.name;

    for(Medal* medal : medals)
    {
        if(medal != nullptr)
        {
            delete medal;
        }
    }

    medals.clear();

    MedalImpl* aux;
    for(Medal* medal : modalityUser.medals)
    {
        if(medal != nullptr)
        {
            aux = new MedalImpl(reinterpret_cast<MedalImpl*>(medal));
            medals.push_back(aux);
        }
    }

	return *this;
}