#include "loginImpl.h"

/**
  * \return Login
  */
LoginImpl:: LoginImpl()
{
    user = "adm";
    password = "123";
}

/**
  * \param nameUser is the name of the user to be created
  * \param passwordUser is the password of the user to be created
  * \return Login
  */
LoginImpl :: LoginImpl(string nameUser, string passwordUser)
{
    if(nameUser == " " || nameUser == "")
    {
        user = "adm";
    }
    else
    {
        user = nameUser;
    }
    
    if(passwordUser == " " || passwordUser == "")
    {
       password = "123";
    }
    else
    {
        password = passwordUser;
    }
}

/**
  * \param loginUser is the login of the user to be created
  * \return Login
  */
LoginImpl:: LoginImpl(LoginImpl* loginUser)
{
    user = loginUser->user;
    password = loginUser->password;
}

/**
  * \return
  */
LoginImpl:: ~LoginImpl()
{
}

/**
  * \return string
  */
string LoginImpl:: getUser()
{
    return user;
}

/**
  * \param userName is the User's name
  * \return bool
  */
bool LoginImpl::setUser(string userName)
{
    if(userName == " " || userName == "")
    {
        return false;
    }

    user = userName;
    return true;
}

/**
  * \return string
  */
string LoginImpl::getPassword()
{
    return password;
}

/**
  * \param passwordUser is the User's password
  * \return bool
  */
bool LoginImpl::setPassword(string passwordUser)
{
    if(passwordUser == " " || passwordUser == "")
    {
        return false;
    }

    password = passwordUser;
    
    return true;
}


/**
  * \param loginUser is a login that gonna be copied
  * \return Login&
  */
LoginImpl& LoginImpl::operator= (const LoginImpl& loginUser)
{
	if (this == &loginUser)
		return *this;

	user = loginUser.user;
	password = loginUser.password;

	return *this;
}
