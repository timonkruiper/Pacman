#ifndef POSITION_H
#define POSITION_H

class Position
{
public:
	Position() = default;
	Position(int x, int y);
	void setX(int x);
	void setY(int y);
	int getX();
	int getY();
	bool operator==(const Position& pos);
private:
	int x, y;
};

#endif // !POSITION_H



