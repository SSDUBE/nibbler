#ifndef _IGRAPHICS_HPP
#define _IGRAPHICS_HPP

#include <ncurses.h>

class IGraphics
{

public:
	virtual ~IGraphics() {}

	virtual void drawBorder(int w, int h) = 0;
	virtual int getInput() = 0;
	virtual void clearScreen() = 0;
	virtual void printChar(int x, int y, char c) = 0;
	virtual void printScore(int x, int y, int points) = 0;
	virtual void printFood(int x, int y) = 0;
};

typedef IGraphics* create_t();
typedef void destroy_t(IGraphics*);

#endif
