#ifndef _SNAKE_HPP
#define _SNAKE_HPP

class Snake
{
private:
	int x, y;
public:
	Snake();
	Snake(int a, int b);
	Snake(const Snake & s);
	~Snake();

	Snake & operator =(const Snake &rhs);

	int getX();
	int getY();
};

#endif
