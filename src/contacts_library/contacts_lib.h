#ifndef CONTACTS_LIB_H
#define CONTACTS_LIB_H

#include <string>
#include <vector>


class Contacts
{
    private:
        std::string conn;

    public:
        Contacts();
        virtual ~Contacts();

        void set();
        std::vector<std::string> get();
};

#endif