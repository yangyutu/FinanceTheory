#pragma once


class PayOff{
public:
	PayOff(){}

	virtual double opertor()(double spot) const = 0;
	virtual ~PayOff(){}
	virtual PayOff* clone() const = 0;
};


