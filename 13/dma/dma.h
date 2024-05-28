#ifndef DMA_H_
#define DMA_H_
#include <iostream>

using namespace std;

class baseDMA
{
	private:
		char * label;
		int rating;
	public:
		baseDMA(const char * l = "null", int r = 0);
		baseDMA(const baseDMA & rs);
		virtual~baseDMA();
		baseDMA & operator=(const baseDMA & rs);
		friend ostream& operator<<(ostream & os, const baseDMA & rs);
};

class lackDMA : public baseDMA
{
	private:
		enum {COL_LEN = 40};
		char color[COL_LEN];
	public:
		lackDMA(const char * l = "null", int r = 0, const char * c = "blank");
		lackDMA(const baseDMA & rs, const char * c );
		friend ostream & operator<<(ostream & os,const lackDMA & rs);
};

class hasDMA : public baseDMA
{
	private:
		char * style;
	public:
		hasDMA(const char * l = "null", int r = 0, const char * s = "none");
		hasDMA(const baseDMA & rs, const char * s);
		hasDMA(const hasDMA & hs);
		~hasDMA();
		hasDMA & operator=(const hasDMA & hs);
		friend ostream & operator<<(ostream & os, const hasDMA & hs);
};

#endif
