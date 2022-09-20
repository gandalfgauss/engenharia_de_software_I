#ifndef LOGINIMPL_H
#define LOGINIMPL_H

#include "login.h"
using namespace std;


class LoginImpl : public Login
{
protected:
    /** User Name */
    string user;
    /** User password */
    string password;
public:
    /** Default Login constructor */
    LoginImpl();
    /** Login constructor */
    LoginImpl(string, string);
    /** Copy Login constructor */
	LoginImpl(LoginImpl*);
    /** Login destructor */
	~LoginImpl();
    /** Get User */
    string getUser();
    /** Change User */
    bool setUser(string);
    /** Get Password */
    string getPassword();
    /** Change Password */
    bool setPassword(string);
    /** operator = overload */
	LoginImpl& operator= (const LoginImpl&);

};






#endif