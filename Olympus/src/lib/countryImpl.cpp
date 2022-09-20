#include "modalityimpl.h"
#include "countryImpl.h"

/**
  * \return Country
  */
CountryImpl:: CountryImpl()
{
    name = "adm";
    continent = "adm";
}

/**
  * \param countryName is the name of the country
  * \param countryContinent is the continent of the country
  * \return Country
  */
CountryImpl :: CountryImpl(string countryName, string countryContinent)
{
    if(countryName == " " || countryName == "")
    {
        name = "adm";
    }
    else
    {
        name = countryName;
    }

    if(countryContinent == " " || countryContinent == "")
    {
        continent = "adm";
    }
    else
    {
        continent = countryContinent;
    }
}

/**
  * \param countryUser is the country to be created
  * \return Country
  */
CountryImpl:: CountryImpl(CountryImpl* countryUser)
{
    name = countryUser->name;
    continent = countryUser->continent;


    for(Modality* modality : modalities)
    {
        if(modality != nullptr)
        {
            delete modality;
        }
    }

    modalities.clear();

    ModalityImpl* aux;
    for(Modality* modality : countryUser->modalities)
    {
        if(modality != nullptr)
        {
            aux = new ModalityImpl(reinterpret_cast<ModalityImpl*>(modality));
            modalities.push_back(aux);
        }
    }
}

/**
  * \return
  */
CountryImpl:: ~CountryImpl()
{
    for(Modality* modality : modalities)
    {
        if(modality != nullptr)
        {
            delete modality;
        }
    }
    modalities.clear();
}

/**
  * \return string
  */
string CountryImpl:: getName()
{
    return name;
}

/**
  * \param nameCountry is the Country name
  * \return bool
  */
bool CountryImpl::setName(string nameCountry)
{
    if(nameCountry == " " || nameCountry == "")
    {
        return false;
    }

    name = nameCountry;
    return true;
}

/**
  * \return string
  */
string CountryImpl:: getContinent()
{
    return continent;
}

/**
  * \param continentCountry is the Country name
  * \return bool
  */
bool CountryImpl::setContinent(string continentCountry)
{
    if(continentCountry == " " || continentCountry == "")
    {
        return false;
    }

    continent = continentCountry;
    return true;
}


/**
  * \param nameModality name of the Modality to be created
  * \return bool
  */
bool CountryImpl::createModality(string nameModality)
{
    for(Modality* modality : modalities)
    {
        if(modality->getName() == nameModality)
        {
            return false;
        }
    }

    ModalityImpl* aux = new ModalityImpl();
    
    if(!(aux->setName(nameModality)))
    {
        delete aux;
        return false;
    }

    modalities.push_back(aux);

    return true;
}

/**
  * \param nameModality name of the Modality to be removed
  * \return bool
  */
bool CountryImpl:: removeModality(string nameModality)
{
    Modality* aux = nullptr;

    for(auto modality = modalities.begin(); modality != modalities.end(); modality++)
    {
        if((*modality)->getName() == nameModality)
        {
            aux = *modality;
            modalities.erase(modality);
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
  * \param nameModality name of the Modality to be returned
  * \return Modality*
  */
Modality* CountryImpl::returnModality(string nameModality)
{
    Modality* aux = nullptr;

    for(Modality* modality : modalities)
    {
        if(modality->getName() == nameModality)
        {
            aux = modality;
            break;
        }
    }

    return aux;
}


/**
  * \return list<Modality*>
  */
list<Modality*> CountryImpl::getModalities()
{
    return modalities;
}


/**
  * \return int
  */
int CountryImpl:: getGoldMedals()
{
    int goldMedals = 0;

    for(Modality* modality :modalities)
    {
        goldMedals += modality->getGoldMedals();
    }

    return goldMedals;
}

/**
  * \return int
  */
int CountryImpl:: getSilverMedals()
{
    int silverMedals = 0;

    for(Modality* modality :modalities)
    {
        silverMedals += modality->getSilverMedals();
    }
    return silverMedals;
}

/**
  * \return int
  */
int CountryImpl:: getBronzeMedals()
{
    int bronzeMedals = 0;

    for(Modality* modality :modalities)
    {
        bronzeMedals += modality->getBronzeMedals();
    }
    return bronzeMedals;
}
/**
  * \param countryUser is a Country that gonna be copied
  * \return Country&
  */
CountryImpl& CountryImpl::operator= (const CountryImpl& countryUser)
{
	if (this == &countryUser)
		return *this;

	name = countryUser.name;
    continent = countryUser.continent;


    for(Modality* modality : modalities)
    {
        if(modality != nullptr)
        {
            delete modality;
        }
    }

    modalities.clear();

    ModalityImpl* aux;
    for(Modality* modality : countryUser.modalities)
    {
        if(modality != nullptr)
        {
            aux = new ModalityImpl(reinterpret_cast<ModalityImpl*>(modality));
            modalities.push_back(aux);
        }
    }

	return *this;
}