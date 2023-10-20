#ifndef DATE_H
#define DATE_H

class Date
{
public:
	static const unsigned int monthsPerYear = 12;
	explicit Data(int = 1, int = 1, int = 1900);
	void print() const;
	~Data();
private:
	unsigned int month;
	unsigned int day;
	unsigned int year;

	// utility function to check if day is proper for month and year
	unsigned int checkDay(int) const;
};
