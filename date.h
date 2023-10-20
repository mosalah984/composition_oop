#ifndef DATE_H
#define DATE_H

class Date
{
public:
    static const unsigned int monthsPerYear = 12;
    explicit Date( int = 1, int = 1, int = 1900 ); // default constructor
    void print() const; // print date in month/day/year format
    ~Date(); // provided to confirm destruction order
private:
    unsigned int month;
    unsigned int day;
    unsigned int year;

    // utility function to check if day is proper for month and year
    unsigned int checkDay(int) const;
};

#endif // DATE_H
