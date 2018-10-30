#include "Blad.h"



CBlad::CBlad(int numer, char* opis)
{
	m_iKod = numer;
	m_csOpis = opis;
	if (numer<0)
	s_bJestBlad = true;
}


CBlad::~CBlad()
{
}

