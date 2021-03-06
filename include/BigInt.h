#ifndef BIG_INT_H
#define BIG_INT_H

#include<string>
#include<iostream>

class BigInt{
private:
    std::string value;
    bool positive;
    std::string align(unsigned long long zeros);
    std::string align_left(unsigned long long zeros);
    BigInt add(BigInt other);
    BigInt subtract(BigInt other);
    BigInt multiply(BigInt other);
    void clean_leading_zeros();
public:
    // constructors
    BigInt();
    BigInt(std::string s);
    BigInt(long long l);
    // setters and getters
    void set_value(std::string s);
    void set_value(long long l);
    void set_positive(bool b);
    std::string get_value();
    bool get_positive();
    // operators
    friend std::ostream& operator<<(std::ostream& out, BigInt num);
    bool operator<(BigInt other);
    bool operator<(std::string s);
    bool operator<(long long l);
    bool operator>(BigInt other);
    bool operator>(std::string s);
    bool operator>(long long l);
    bool operator<=(BigInt other);
    bool operator<=(std::string s);
    bool operator<=(long long l);
    bool operator>=(BigInt other);
    bool operator>=(std::string s);
    bool operator>=(long long l);
    bool operator==(BigInt other);
    bool operator==(std::string s);
    bool operator==(long long l);
    bool operator!=(BigInt other);
    bool operator!=(std::string s);
    bool operator!=(long long l);
    BigInt operator-();
    BigInt operator+(BigInt other);
    BigInt operator+(std::string s);
    BigInt operator+(long long l);
    BigInt operator-(BigInt other);
    BigInt operator-(std::string s);
    BigInt operator-(long long l);
    BigInt operator*(BigInt other);
    BigInt operator*(std::string s);
    BigInt operator*(long long l);
    BigInt operator++(int);
    BigInt operator--(int);
    BigInt operator++();
    BigInt operator--();
    BigInt* operator+=(BigInt other);
    BigInt* operator+=(std::string s);
    BigInt* operator+=(long long l);
    BigInt* operator-=(BigInt other);
    BigInt* operator-=(std::string s);
    BigInt* operator-=(long long l);
    BigInt* operator*=(BigInt other);
    BigInt* operator*=(std::string s);
    BigInt* operator*=(long long l);
    BigInt* operator=(std::string s);
    BigInt* operator=(long long l);
    // other
    BigInt abs();
    long long length();
    BigInt pow(BigInt other);
    BigInt pow(std::string s);
};

#endif //BIG_INT_H
