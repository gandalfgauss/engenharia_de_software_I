#include "systemImpl.h"
#include "countryimpl.h"
#include "loginImpl.h"


/**
  * \return list<System*>
  */
list<System*> SystemImpl:: systems;

/**
  * \param nameSystem is the system to be created
  * \return System
  */
System* SystemImpl::createSystem(string nameSystem)
{
	System* system = new SystemImpl(nameSystem);
	SystemImpl::systems.push_back(system);
	return system;
}

/**
  * \param nameSystem is the name of the System
  * \return System*
  */
System* System::createSystem(string nameSystem)
{
	return SystemImpl::createSystem(nameSystem);
}


/**
  * \param nameSystem is the name of the System
  * \return void
  */
void SystemImpl:: deleteSystem(string nameSystem)
{
	System* aux = nullptr;

	for (auto sys = SystemImpl::systems.begin(); sys != SystemImpl::systems.end(); sys++)
	{
		if ((*sys)->getName() == nameSystem)
		{
			//delete systems
			aux = reinterpret_cast<SystemImpl*>(*sys);
            SystemImpl:: systems.erase(sys);
			break;
		}
	}

    if(aux != nullptr)
    {
        for(Login* login : aux->getLogins())
		{
            if(login != nullptr)
            {
                delete login;
            }
				
		}

        for(string* modality : aux->getModalities())
		{
            if(modality != nullptr)
            {
                delete modality;
            }
				
		}

        for(Country* country : aux->getCountries())
		{
            if(country != nullptr)
            {
                    delete country;
            }
				
		}	
    }  
}

/**
  * \param nameSystem is the name of the System
  * \return void
  */
 void System:: deleteSystem(string nameSystem)
{
	return SystemImpl::deleteSystem(nameSystem);
}



/**
  * \return System
  */
SystemImpl:: SystemImpl()
{
    name = "adm";
}

/**
  * \param systemName is the name of the system
  * \return System
  */
SystemImpl :: SystemImpl(string systemName)
{
    if(systemName == " " || systemName == "")
    {
        name = "adm";
    }
    else
    {
        name = systemName;
    }
}


/**
  * \param systemUser is the system to be created
  * \return System
  */
SystemImpl:: SystemImpl(SystemImpl* systemUser)
{
    name = systemUser->name;
    
    for(string* modality : modalities)
    {
        if(modality != nullptr)
        {
            delete modality;
        }
    }

    modalities.clear();

    for(Login* login : logins)
    {
        if(login != nullptr)
        {
            delete login;
        }
    }

    logins.clear();

    for(Country* country : countries)
    {
        if(country != nullptr)
        {
            delete country;
        }
    }

    countries.clear();


    string* modalityAux;
    for(string* modality : systemUser->modalities)
    {
        if(modality != nullptr)
        {
            modalityAux = new string(*modality);
            modalities.push_back(modalityAux);
        }
    }

    LoginImpl* loginAux;
    for(Login* login : systemUser->logins)
    {
        if(login != nullptr)
        {
            loginAux = new LoginImpl(reinterpret_cast<LoginImpl*>(login));
            logins.push_back(loginAux);
        }
    }

    CountryImpl* countryAux;
    for(Country* country : systemUser->countries)
    {
        if(country != nullptr)
        {
            countryAux = new CountryImpl(reinterpret_cast<CountryImpl*>(country));
            countries.push_back(countryAux);
        }
    }
}

/**
  * \return
  */
SystemImpl:: ~SystemImpl()
{
    System::deleteSystem(name);
    modalities.clear();
    logins.clear();
    countries.clear();
}

/**
  * \return string
  */
string SystemImpl:: getName()
{
    return name;
}

/**
  * \param nameSystem is the System name
  * \return bool
  */
bool SystemImpl::setName(string nameSystem)
{
    if(nameSystem == " " || nameSystem == "")
    {
        return false;
    }

    name = nameSystem;
    return true;
}



/**
  * \param nameModality name of the Modality to be created
  * \return bool
  */
bool SystemImpl::createModality(string nameModality)
{
    for(string* modality : modalities)
    {
        if(*modality == nameModality || nameModality == "" || nameModality ==" ")
        {

            return false;
        }
    }

    string* aux = new string(nameModality);

    modalities.push_back(aux);

    return true;
}

/**
  * \param nameModality name of the Modality to be removed
  * \return bool
  */
bool SystemImpl:: removeModality(string nameModality)
{
    string* aux = nullptr;

    for(auto modality = modalities.begin(); modality != modalities.end(); modality++)
    {
        if(**modality == nameModality)
        {
            aux = *modality;
            modalities.erase(modality);
            break;
        }
    }

    if(aux == nullptr)
    {
        return false;
    }

    delete aux;

    //delete modalities
    for(Country* country : countries)
    {
        country->removeModality(nameModality);
    }


    return true;
    
}

/**
  * \param nameModality name of the Modality to be returned
  * \return string*
  */
string* SystemImpl::returnModality(string nameModality)
{
    string* aux = nullptr;

    for(string* modality : modalities)
    {
        if(*modality == nameModality)
        {
            aux = modality;
            break;
        }
    }

    return aux;
}


/**
  * \return list<string*>
  */
list<string*> SystemImpl::getModalities()
{
    return modalities;
}



/**
  * \param nameLogin name of the Login to be created
  * \param passwordLogin is the password of User
  * \return bool
  */
bool SystemImpl::createLogin(string nameLogin, string passwordLogin)
{
    for(Login* login : logins)
    {
        if(login->getUser() == nameLogin)
        {
            return false;
        }
    }

    LoginImpl* aux = new LoginImpl();
    
    if(!(aux->setUser(nameLogin) && aux->setPassword(passwordLogin)))
    {
        delete aux;
        return false;
    }

    logins.push_back(aux);

    return true;
}

/**
  * \param nameLogin name of the Login to be removed
  * \return bool
  */
bool SystemImpl:: removeLogin(string nameLogin)
{
    Login* aux = nullptr;

    for(auto login = logins.begin(); login != logins.end(); login++)
    {
        if((*login)->getUser() == nameLogin)
        {
            aux = *login;
            logins.erase(login);
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
  * \param nameLogin name of the Login to be returned
  * \return Login*
  */
Login* SystemImpl::returnLogin(string nameLogin)
{
    Login* aux = nullptr;

    for(Login* login : logins)
    {
        if(login->getUser() == nameLogin)
        {
            aux = login;
            break;
        }
    }

    return aux;
}


/**
  * \return list<Login*>
  */
list<Login*> SystemImpl::getLogins()
{
    return logins;
}





/**
  * \param nameCountry name of the Country to be created
  * \param continentCountry is the continent of Country
  * \return bool
  */
bool SystemImpl::createCountry(string nameCountry, string continentCountry)
{
    for(Country* country : countries)
    {
        if(country->getName() == nameCountry)
        {
            return false;
        }
    }

    CountryImpl* aux = new CountryImpl();
    
    if(!(aux->setName(nameCountry) && aux->setContinent(continentCountry)))
    {
        delete aux;
        return false;
    }

    countries.push_back(aux);

    return true;
}

/**
  * \param nameCountry name of the Country to be removed
  * \return bool
  */
bool SystemImpl:: removeCountry(string nameCountry)
{
    Country* aux = nullptr;

    for(auto country = countries.begin(); country != countries.end(); country++)
    {
        if((*country)->getName() == nameCountry)
        {
            aux = *country;
            countries.erase(country);
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
  * \param nameCountry name of the Country to be returned
  * \return Country*
  */
Country* SystemImpl::returnCountry(string nameCountry)
{
    Country* aux = nullptr;

    for(Country* country : countries)
    {
        if(country->getName() == nameCountry)
        {
            aux = country;
            break;
        }
    }

    return aux;
}

/**
  * \return list<Country*>
  */
list<Country*> SystemImpl::getCountries()
{
    return countries;
}

/**
  * \param user is the name of the user
  * \param password name of the password of user
  * \return bool
  */
bool SystemImpl:: login(string user, string password)
{
    for(Login* log : logins)
    {   
        if(log != nullptr)
        {
            if(log->getUser() == user && log->getPassword() == password)
            {
            return true;
            }
        }
        
    }

    return false;
}


/**
  * \param systemUser is a System that gonna be copied
  * \return System&
  */
SystemImpl& SystemImpl::operator= (const SystemImpl& systemUser)
{
	if (this == &systemUser)
		return *this;

	name = systemUser.name;
    
    for(string* modality : modalities)
    {
        if(modality != nullptr)
        {
            delete modality;
        }
    }

    modalities.clear();

    for(Login* login : logins)
    {
        if(login != nullptr)
        {
            delete login;
        }
    }

    logins.clear();

    for(Country* country : countries)
    {
        if(country != nullptr)
        {
            delete country;
        }
    }

    countries.clear();


    string* modalityAux;
    for(string* modality : systemUser.modalities)
    {
        if(modality != nullptr)
        {
            modalityAux = new string(*modality);
            modalities.push_back(modalityAux);
        }
    }

    LoginImpl* loginAux;
    for(Login* login : systemUser.logins)
    {
        if(login != nullptr)
        {
            loginAux = new LoginImpl(reinterpret_cast<LoginImpl*>(login));
            logins.push_back(loginAux);
        }
    }

    CountryImpl* countryAux;
    for(Country* country : systemUser.countries)
    {
        if(country != nullptr)
        {
            countryAux = new CountryImpl(reinterpret_cast<CountryImpl*>(country));
            countries.push_back(countryAux);
        }
    }

	return *this;
}
