#include "medalImpl.h"

/**
  * \return Medal
  */
MedalImpl:: MedalImpl()
{
    champion = "adm";
    value = 0;
}

/**
  * \param championName is the name of the champion who won the medal
  * \param valueMedal is the kind of medal won by the champion
  * \return Medal
  */
MedalImpl :: MedalImpl(string championName, int valueMedal)
{
    if(championName == " " || championName == "")
    {
        champion = "adm";
    }
    else
    {
        champion = championName;
    }
    
    if(valueMedal > 3 || valueMedal < 1)
    {
       value = 0;
    }
    else
    {
        value = valueMedal;
    }
}

/**
  * \param medalUser is the medal of the user to be created
  * \return Medal
  */
MedalImpl:: MedalImpl(MedalImpl* medalUser)
{
    champion = medalUser->champion;
    value = medalUser->value;
}

/**
  * \return
  */
MedalImpl:: ~MedalImpl()
{
}

/**
  * \return string
  */
string MedalImpl:: getChampion()
{
    return champion;
}

/**
  * \param championName is the Champion's name
  * \return bool
  */
bool MedalImpl::setChampion(string championName)
{
    if(championName == " " || championName == "")
    {
        return false;
    }

    champion = championName;
    return true;
}

/**
  * \return int
  */
int MedalImpl::getValue()
{
    return value;
}

/**
  * \param valueMedal is the User's value of medal
  * \return bool
  */
bool MedalImpl::setValue(int valueMedal)
{
    if(valueMedal > 3 || valueMedal < 1)
    {
       return false;
    }
    

    value = valueMedal;

    return true;
}


/**
  * \param medalUser is a Medal that gonna be copied
  * \return Medal&
  */
MedalImpl& MedalImpl::operator= (const MedalImpl& medalUser)
{
	if (this == &medalUser)
		return *this;

	champion = medalUser.champion;
	value = medalUser.value;

	return *this;
}