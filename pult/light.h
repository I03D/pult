#ifndef LIGHT_H
#define LIGHT_H

#include <iostream>
#include <QString>

using namespace std;

class Light {
private:
	Qstring place;
public:
	Light(QString place);

	void on();
	void off();
};

#endif // LIGHT_H