#pragma once
class String
{
private:
    char* data;

public:
    String();
    String(const char* str);
    String(const String& other);

    String& operator=(const String& other);

    ~String();

    const char* c_str() const;
};

