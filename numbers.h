// numbers.h 
//Class Definition - 
#ifndef _NUMBERS_H
#define _NUMBERS_H

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <cmath>

#define _NUMBERS_MAXSTR 1024

//Largest number to convert to words
#define _MAXNUM 999999999999999999

namespace numbers {

static const char * errnum = "error";

static const char * _singles[] = {
    "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
};

static const char * _teens[] = {
    "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
};

static const char * _tens[] = {
    errnum, errnum, "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninty",
};

static const char * _hundred = "hundred";

static const char * _powers[] = {
    errnum, "thousand", "million", "billion", "trillion", "quadrillion"
};

static const char * _hyphen = "-";
static const char * _space = " ";
    
class numbers {
    uint64_t _num = 0;
    char * _buf = nullptr;
    size_t _buflen = 0;
    bool hyphen_flag = false; //Toggle hypens

    void clearbuf();
    void initbuf();
    void appendspace();
    void appendbuf(const char * s);

public:
    //Constructors
    numbers() : _num(0) {}
    numbers(const uint64_t num) : _num(num) {}
    //destructors
    ~numword();
    void setnum(const uint64_t num) { _num = num; }
    uint64_t getnum() const { return _num; }
    uint64_t operator = ( const uint64_t num );
    const char * words();
    const char * words( const uint64_t num );
};

}
