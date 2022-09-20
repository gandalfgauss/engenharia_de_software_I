#ifndef LOGIN_H
#define LOGIN_H

#include <string>
using namespace std;

/**interface declaration*/
class Login
{
public:
    /** Login destructor */
	virtual ~Login(){};
    /** Get User */
    virtual string getUser() = 0;
    /** Change User */
    virtual bool setUser(string) = 0;
    /** Get Password */
    virtual string getPassword() = 0;
    /** Change Password */
    virtual bool setPassword(string) = 0;



};


#endif
