#include "unit_login.h"

void unit_Login_constructor()
{
    LoginImpl* login1 = new LoginImpl();
    assert(login1->getUser() == "adm");

    LoginImpl* login2= new LoginImpl("Login2", "12");
    assert(login2->getUser() == "Login2");
    assert(login2->getPassword() == "12");

    LoginImpl* login3 = new LoginImpl();
    LoginImpl* login4= new LoginImpl(login2);

    *login3 = *login2;

    login3->setUser("LoginFinal");
    login4->setUser("LoginFinal2");

    assert(login2->getUser() == "Login2");
    assert(login3->getUser() == "LoginFinal");
    assert(login4->getUser() == "LoginFinal2");

    delete login1;
    delete login2;
    delete login3;
    delete login4;
}

void unit_Login_destructor(){}

void unit_Login_getUser()
{
    LoginImpl* login1 = new LoginImpl();
    assert(login1->getUser() == "adm");
    delete login1;
}

void unit_Login_setUser()
{
    LoginImpl* login1 = new LoginImpl();
    assert(!login1->setUser(""));
    assert(login1->getUser() == "adm");

    login1->setUser("Login");

    assert(login1->getUser() == "Login");

    delete login1;
}

void unit_Login_getPassword()
{
    LoginImpl* login1 = new LoginImpl();
    assert(login1->getPassword() == "123");
    delete login1;
}

void unit_Login_setPassword()
{
    LoginImpl* login1 = new LoginImpl();
    assert(!login1->setPassword(" "));
    assert(login1->getPassword() == "123");

    login1->setPassword("1");

    assert(login1->getPassword() == "1");

    delete login1;
}


void run_unit_tests_Login()
{
    unit_Login_constructor(); 
    unit_Login_destructor();
    unit_Login_getUser();
    unit_Login_setUser();
    unit_Login_getPassword();
    unit_Login_setPassword();

}