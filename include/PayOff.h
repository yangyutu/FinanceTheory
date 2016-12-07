#pragma once


class PayOff{
public:
	PayOff(){}

	virtual double opertor()(double spot) const = 0;
	virtual ~PayOff(){}
	virtual PayOff* clone() const = 0;
};


class PayOffCall :public PayOff{
public:
	PayOffCall(doubel Strike0);

	virtual double operator()(double spot) const;
	virtual ~PayOffCall();
	virtual PayOff* clone() const;

private:
	double strike;
};


class PayOffPut :public PayOff{
public:
	PayOffPut(doubel Strike0);

	virtual double operator()(double spot) const;
	virtual ~PayOffPut();
	virtual PayOff* clone() const;

private:
	double strike;
};


