#pragma once
#include <iostream>
using namespace std;
class CBlad
{
	int m_iKod;
public:
	CBlad(int, char*);
	~CBlad();

	
	char * m_csOpis;
	static bool s_bJestBlad;

	inline bool Ostrzezenie() { return m_iKod != 0; }
	inline bool Blad() { return m_iKod < 0; }
	inline int DajKodBledu() { return m_iKod; }
	static inline bool JestBlad() { return s_bJestBlad; }
	friend ostream & operator << (ostream & stream, CBlad & Blad);
};

bool CBlad::s_bJestBlad = false;
