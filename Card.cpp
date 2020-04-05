#include <string>
#include "Card.h"
using namespace std;

Card::Card() {}

Card::Card(int value, string name, string suit) : value_(value), name_(name), suit_(suit) {}

Card::Card(const Card& origin) : value_(origin.value_), name_(origin.name_), suit_(origin.suit_) {}

void Card::setValue(int value) { value_ = value; }

void Card::setName(string name) { name_ = name; }

void Card::setSuit(string suit) { suit_ = suit; }

int Card::sortValue() const {
	return sortValue_.at(name_);
}

bool Card::operator==(const Card& rhs) const {
	return ((this->name_).compare(rhs.name_) == 0  && 
			(this->suit_).compare(rhs.suit_) == 0);
}

Card& Card::operator=(const Card& rhs) {
	name_ = rhs.name_;
	value_ = rhs.value_;
	suit_ = rhs.suit_;

	return *this;
}
