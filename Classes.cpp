

#include "stdafx.h"
#include "Classes.h"


TPhoneNumber::TPhoneNumber()
{
	Country = 7;
	City = 921;
	Line = 666666;
}

TPhoneNumber::~TPhoneNumber()
{
}

ostream &operator << (ostream & Stream, const TPhoneNumber & Number){
	Stream << "+" << Number.Country << " " << Number.City << " " << Number.Line;
	return Stream;
}

istream &operator >> (istream &Stream, TPhoneNumber &Number){
	char C[3],Cit[4],LineC[7];

	int Convert(char * InString, const int size);

	Stream.getline(C, 3); Number.Country = Convert(C, 3);
	Stream.getline(Cit, 4); Number.City = Convert(Cit, 4);
	Stream.getline(LineC, 7); Number.Line = Convert(LineC, 7);
	cout << C << endl;
	cout << Cit << endl;
	cout << LineC << endl;
	return Stream;

}

int Convert(char * InString, const int size) {
	int out = 0;
	int fig = 0;
	for (int i = 0; i < size; i++){
		switch (*(InString+i))
		{
		case '1':{fig = 1; break; }
		case '2':{fig = 2; break; }
		case '3':{fig = 3; break; }
		case '4':{fig = 4; break; }
		case '5':{fig = 5; break; }
		case '6':{fig = 6; break; }
		case '7':{fig = 7; break; }
		case '8':{fig = 8; break; }
		case '9':{fig = 9; break; }
		case '0':{fig = 0; break; }


		default:
			break;
		}
		out = out * 10 + fig;
	}
	return out;
}
