#ifndef __STRNGBAD_H__
#define __STRNFBAD_H__
#include <iostream>

class Stringbad
{
    private:
        char * str;
        int len;
        static int num_strings;
    public:
        Stringbad(const char * s);
        Stringbad();
        ~Stringbad();
        friend std::ostream & operator<<(std::ostream &os, const Stringbad &st);
};

#endif