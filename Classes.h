#pragma once
#include "stdafx.h"
#include <iostream>

using namespace std;

class TPhoneNumber
{
	friend istream &operator >> (istream &, TPhoneNumber &);
	friend ostream &operator << (ostream &,const TPhoneNumber &);
public:
	TPhoneNumber();
	~TPhoneNumber();

private:
	int Country;
	int City;
	int Line;
};
