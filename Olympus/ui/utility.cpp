#include "utility.h"

string addSpaces(string name, int len)
{
    int nameSize = name.size();
    string nameAux;

    if(nameSize > len)
    {
        for(int i =0; i < len; i++)
        {
            nameAux.push_back(name[i]);
        }
        return nameAux;

    }
    else if(nameSize < len)
    {
        nameAux = name;

        for(int i =0; i < len-nameSize; i++)
        {
            nameAux += " ";
        }
        return nameAux;
    }

    return name;

}

string splitString(string name)
{

    string aux = "";

    for(auto c: name)
    {
        if(c == ' ')
        {
           break;
        }
        aux +=c;

    }

    return aux;
}
