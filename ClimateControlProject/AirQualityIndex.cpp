#include <iostream>
#include <string>
#include "Pollution.h"

using namespace std;
float aqico(float o)                    //CAlculating the AQI of carbon mono oxide
{
	float c;
	if (o >= 0.0 && o <= 4.4)
	{
		c = (11.364 * (o - 0.0)) + 0;
		cout << "\nAQI of CO=" << c;
		return c;
	}
	else if (o >= 4.5 && o <= 9.4)
	{
		c = (10 * (o - 4.5)) + 51;
		cout << "\nAQI of CO=" << c;
		return c;
	}
	else if (o >= 9.5 && o <= 12.4)
	{
		c = (16.896 * (o - 9.5)) + 101;
		cout << "\nAQI of CO=" << c;
		return c;
	}
	else if (o >= 12.5 && o <= 15.4)
	{
		c = (16.896 * (o - 12.5)) + 151;
		cout << "\nAQI of CO=" << c;
		return c;
	}
	else if (o >= 15.5 && o <= 30.4)
	{
		c = (6.644 * (o - 15.5)) + 201;
		cout << "\nAQI of CO=" << c;
		return c;
	}
	else if (o >= 30.5 && o <= 50.4)
	{
		c = (10 * (o - 30.5)) + 301;
		cout << "\nAQI of CO=" << c;
		return c;
	}
}
float aqipm25(float p)           //calculating AQI of particulate matter PM2.5
{
	float c;
	if (p >= 0.0 && p <= 12.0)
	{
		c = (4.166 * (p - 0.0)) + 0;
		cout << "\nAQI of PM2.5 =" << c;
		return c;
	}
	else if (p >= 12.1 && p <= 35.4)
	{
		c = (2.103 * (p - 12.1)) + 51;
		cout << "\nAQI of PM2.5=" << c;
		return c;
	}
	else if (p >= 35.5 && p <= 55.4)
	{
		c = (2.462 * (p - 35.5)) + 101;
		cout << "\nAQI of PM2.5=" << c;
		return c;
	}
	else if (p >= 55.5 && p <= 150.4)
	{
		c = (0.516 * (p - 55.5)) + 151;
		cout << "\nAQI of PM2.5=" << c;
		return c;
	}
	else if (p >= 150.5 && p <= 250.4)
	{
		c = (0.990 * (p - 150.5)) + 201;
		cout << "\nAQI of PM2.5=" << c;
		return c;
	}
	else if (p >= 250.5 && p <= 500.4)
	{
		c = (0.796 * (p - 250.5)) + 301;
		cout << "\nAQI of PM2.5=" << c;
		return c;
	}
}
float aqipm10(float q)                         //calculating AQI of particulate matter PM10
{
	float c;
	if (q >= 0 && q <= 30)
	{
		c = (0.926 * (q - 0)) + 0;
		cout << "\nAQI of the PM10=" << c;
		return c;
	}
	else if (q >= 31 && q <= 60)
	{
		c = (0.495 * (q - 55)) + 51;
		cout << "\nAQI of the PM10=" << c;
		return c;
	}
	else if (q >= 61 && q <= 90)
	{
		c = (0.495 * (q - 155)) + 101;
		cout << "\nAQI of the PM10=" << c;
		return c;
	}
	else if (q >= 91 && q <= 120)
	{
		c = (0.495 * (q - 255)) + 151;
		cout << "\nAQI of the PM10=" << c;
		return c;
	}
	else if (q >= 121 && q <= 250)
	{
		c = (1.434 * (q - 355)) + 201;
		cout << "\nAQI of the PM10=" << c;
		return c;
	}
	else if (q >= 251 && q <= 380)
	{
		c = (1.112 * (q - 425)) + 301;
		cout << "\nAQI of the PM10=" << c;
		return c;
	}
}
void prescription(float e)                  //prescription as per the value of AQI
{
	if (e >= 0 && e <= 50)
	{
		cout << "\nAQI of the AIR is=" << e;
		cout << "\n";
		cout << "\nPrescription:";
		cout << "\nAir Quality is satisfactory and poses little or no health risk.";
	}
	if (e >= 51 && e <= 100)
	{
		cout << "\nAQI of the AIR is=" << e;
		cout << "\n";
		cout << "\nPrescription:";
		cout << "\nAir quality is acceptable;however in this range may pose a moderate health concern for a small number of individuals.";
	}
	if (e >= 101 && e <= 150)
	{
		cout << "\nAQI of the AIR is=" << e;
		cout << "\n";
		cout << "\nPrescription:";
		cout << "\nFor this value of AQI,members of sensitive groups may experience health effects, but the general public is unlikely to be affected";
	}
	if (e > 151 && e <= 200)
	{
		cout << "\nAQI of the AIR is=" << e;
		cout << "\n";
		cout << "\nPrescription:";
		cout << "\nEveryone may begin to experience health effects for this value of AQI.Members of sensitive groups may experience more serious health effects";
	}
	if (e >= 201 && e <= 300)
	{
		cout << "\nAQI of the AIR is=" << e;
		cout << "\n";
		cout << "\nPrescription:";
		cout << "\nThis AQI value may trigger a health alert,meaning everyone may experience more serious health effects";
	}
	if (e >= 301 && e <= 500)
	{
		cout << "\nAQI of the AIR is=" << e;
		cout << "\n";
		cout << "\nPrescription:";
		cout << "\nAQi values over 300 trigger health warnings of emergency conditions. The entire population is even more likely to be affected by serious health effects";
	}
}
main()
{
	int ch = 1;
	float o, p, q;
	float a, b, d, e;
	while (ch == 1)
	{
		cout << "******************************************************************************************\n";   //To display menu of the program
		cout << "\t\t\t\tAQI(Air Quality Index) calculator\n";
		cout << "\n";
		cout << "\t\t\tPollutants used are:\n";
		cout << "\t1->Carbon Mono-Oxide(CO)\n";
		cout << "\t2->Particulate matter(PM2.5)\n";
		cout << "\t3->Particulate matter(PM10)\n";
		cout << "*******************************************************************************************\n";
		cout << "\n Enter the concentration(ppm) of CO-8hr. average:\n";                          //Taking concentrations as the input
		cin >> o;
		cout << "\n Enter the concentration (microgram per cubic metre) of PM2.5 -24 hr. average:\n";
		cin >> p;
		cout << "\nEnter the concentration(microgram per cubic metre) of PM10 -24 hr. average:\n";
		cin >> q;
		a = aqico(o);                                                  // function call to calculate aqi of individual pollutants                     
		b = aqipm25(p);
		d = aqipm10(q);
		if ((a > b) && (a > d))                                          //calculating AQI of the air(AQI of air is the highest AQI among the given polllutants)
			e = a;
		else if (b > d)
			e = b;
		else
			e = d;
		cout << "\n";
		cout << "\n";
		prescription(e);                                          //prescription function called by passing value of AQI
		cout << "\nWant to continue (1-Continue,0-Exit)?\n";         // choice given to user whether to continue or exit from the program
		cin >> ch;
		system("cls");
	}
}