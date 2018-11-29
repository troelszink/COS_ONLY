#pragma once
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <exception>
#include <fstream>
#include <iterator>
#include <thread>
#include <bitset>

using namespace std;
class Buffer
{
public:
	static Buffer* getInstance();

	void addToDTMF_SlicesBufferRecive(bitset<4> newElemnt);
	bitset<4> takeFromDTMF_SlicesBufferRecive();

	void addTo_soundToDatalink(bitset<4> newElemnt);
	bitset<4> takeFrom_soundToDatalink();

	void addTo_datalinkToSound(bitset<4> newElemnt);
	bitset<4> takeFrom_datalinkToSound();

	void addTo_appToDatalink(string newstring);
	string takeFrom_appToDatalink();

	void addTo_datalinkToApp(string newstring);
	string takeFrom_datalinkToApp();

private:
	static Buffer* instance;
	Buffer();
	~Buffer();

	vector<bitset<4>>DTMF_SlicesBufferRecive;//Er til at opbevare bider af funde og endnu ikke godkendte DTMF toner.
	vector<bitset<4>>soundToDatalink;//Er til at opbevare funde og godkendte DTMF toner.

	vector<bitset<4>>datalinkToSound;//Er til at opbevare DTMF toner, der skal afspilles.

	vector<string>appToDatalink;//(Klient perspektiv)Er til at opbevare forespørgelser fra klienten om server tjeneste.
	vector<string>datalinkToApp;//(Klient perspektiv)Er til at opbevare svar om server tjeneste til klient fra server.
};

