#include "String.h"
#include <cstring>

String::String()
{
    data = new char[1];
    data[0] = '\0';
}

String::String(const char* str)
{
    if (str != nullptr)
    {
        data = new char[strlen(str) + 1];
        strcpy_s(data, strlen(str) + 1, str);
    }
    else
    {
        data = new char[1];
        data[0] = '\0';
    }
}

String::String(const String& other)
{
    data = new char[strlen(other.data) + 1];
    strcpy_s(data, strlen(other.data) + 1, other.data);
}

String& String::operator=(const String& other)
{
    if (this != &other)
    {
        delete[] data;

        data = new char[strlen(other.data) + 1];
        strcpy_s(data, strlen(other.data) + 1, other.data);
    }

    return *this;
}

String::~String()
{
    delete[] data;
}

const char* String::c_str() const
{
 
}