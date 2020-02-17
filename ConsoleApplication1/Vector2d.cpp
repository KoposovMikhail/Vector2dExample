#include "Vector2d.h"
#include <math.h>

Vector2d::operator string() const
{
	return "(" + to_string(this->x) + "; " + to_string(this->y) + ")";
}

Vector2d::Vector2d() 
{
	x = 0;
	y = 0;
}

Vector2d::Vector2d(double x, double y) 
{
	this->x = x;
	this->y = y;
}

Vector2d::Vector2d(double x1, double y1, double x2, double y2) 
{
	x = x2 - x1;
	y = y2 - y1;
}

Vector2d::Vector2d(const Vector2d& vec2) 
{
	x = vec2.x;
	y = vec2.y;
}

void Vector2d::setx(double x)
{
	this->x = x;
}

double Vector2d::getx()
{
	return this->x;
}

void Vector2d::sety(double y)
{
	this->y = y;
}

double Vector2d::gety()
{
	return this->y;
}

Vector2d Vector2d::operator+(const Vector2d& vec2) const // Сумма векторов
{
	return Vector2d(x + vec2.x, y + vec2.y);
}

Vector2d Vector2d::operator-(const Vector2d& vec2) const // Разность векторов
{
	return Vector2d(x - vec2.x, y - vec2.y);
}

Vector2d Vector2d::operator*(double a) const // Умножение справа
{
	return Vector2d(x * a, y * a);
}

Vector2d operator*(double a, Vector2d& vec) 
{
	return vec * a; // Умножение слева
}

double Vector2d::operator*(const Vector2d& vec2) const // Скалярное произведение
{
	return (x * vec2.x + y * vec2.y);
}

Vector2d& Vector2d::operator++() 
{
	x++;
	y++;
	return *this;
}

Vector2d& Vector2d::operator--()
{
	x--;
	y--;
	return *this;
}

Vector2d Vector2d::operator++(int) 
{
	Vector2d temp(x, y);
	x++;
	y++;
	return temp;
}

Vector2d Vector2d::operator--(int)
{
	Vector2d temp(x, y);
	x++;
	y++;
	return temp;
}

const Vector2d& Vector2d::operator+=(const Vector2d& vec2) 
{
	x += vec2.x;
	y += vec2.y;
	return *this;
}

const Vector2d& Vector2d::operator-=(const Vector2d& vec2)
{
	x -= vec2.x;
	y -= vec2.y;
	return *this;
}

const Vector2d& Vector2d::operator*=(double a)
{
	x *= a;
	y *= a;
	return *this;
};



double Vector2d::len() const 
{
	return sqrt(x*x +y*y);
}

double Vector2d::cos(const Vector2d& vec2) const 
{
	double v2 = len() * vec2.len();
	return (*this) * vec2 / v2;
}

double Vector2d::angle(const Vector2d& vec2) const
{
	return acos(cos(vec2));
}

double Vector2d::tg(const Vector2d& vec2) const
{

	return tan(angle(vec2));
}


Vector2d::~Vector2d() 
{
}