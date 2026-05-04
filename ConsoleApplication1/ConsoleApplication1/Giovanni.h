#pragma once
#include <string>
#include <iostream>
using namespace std;
class Giovanni
{
	string persian;
	int persianlvl;
	int persianhp;
	int persianatk;
	string nidoking;
	int nidokinglvl;
	int nidokinghp;
	int nidokingatk;
	string Flygon;
	int Flygonlvl;
	int Flygonhp;
	int Flygonatk;
	string Ursaluna;
	int Ursalunalvl;
	int Ursalunahp;
	int Ursalunaatk;
public:
	Giovanni();
	Giovanni(string, int, int, int, string, int, int, int, string, int, int, int, string, int, int, int);
	void setPersianName(string);
	string getPersianName();
	void setPersian(int, int, int);
	int getPersion();
	void setNidokingName(string);
	void setNidoking(int, int, int);
	string getNidoking();
	void setFlygonName(string);
	void setFlygon(int, int, int);
	string getFlygonName();
	int getFlygon();
	void setUrsalunaName(string);
	void setUrsaluna(int, int, int);
	string getUrsalunaName();
	int getUrsaluna();


}

