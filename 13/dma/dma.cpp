#include <cstring>
#include "dma.h"

baseDMA::baseDMA(const char * l , int r)
{
	label = new char[strlen(l) + 1];
	strcpy(label,l);
	rating = r;
}


baseDMA::baseDMA(const baseDMA & rs)
{
	label = new char[strlen(rs.label) + 1];
	strcpy(label,rs.label);
	rating = rs.rating;
}


baseDMA::~baseDMA()
{
	delete []label;
}

baseDMA & baseDMA::operator=(const baseDMA & rs)
{
	if(this == &rs)
		return *this;
	delete [] label;
	label = new char[strlen(rs.label) + 1];
	strcpy(label,rs.label);
	rating = rs.rating;
	
	return *this;
}

ostream & operator<<(ostream & os, const baseDMA & rs)
{
	os << "Label: " << rs.label << endl;
	os << "Rating: " << rs.rating << endl;
	return os;
}



lackDMA::lackDMA(const char * l, int r, const char * c) : baseDMA(l,r)
{
	strncpy(color, c, 39);
	color[39]= '\0';	
}

lackDMA::lackDMA(const baseDMA & rs, const char * c)
{
	strncpy(color, c, 39);
	color[39]= '\0';	
}

ostream & operator<<(ostream & os, const lackDMA & ls)
{
	os << (const baseDMA &)ls;
	os << "Color: " << ls.color << endl;
	return os;
}

hasDMA::hasDMA(const char* l, int r, const char * s): baseDMA(l, r)
{
	style = new char[strlen(s) + 1];
	strcpy(style, s);
}

hasDMA::hasDMA(const baseDMA & rs, const char * s) : baseDMA(rs)
{
	style = new char[strlen(s) + 1];
	strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA &hs):baseDMA(hs)
{
	cout << "option one"<< endl;
	style = new char[strlen(hs.style) + 1];
	strcpy(style,hs.style);
}

hasDMA::~hasDMA()
{
	delete [] style;
}

hasDMA & hasDMA::operator=(const hasDMA &hs)
{
	cout << "option two" << endl;
	if(this == &hs)
		return *this;
	baseDMA::operator=(hs);
	delete [] style;
	style = new char[strlen(hs.style) + 1];
	strcpy(style, hs.style);
	return *this;
}

ostream & operator<<(ostream & os, const hasDMA & hs)
{
	os << (const baseDMA &)hs;
	os << "Style: " << hs.style << endl;
	return os;
}
