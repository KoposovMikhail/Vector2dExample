#pragma once
#include <string>
#include <iostream>
using namespace std;

class Vector2d
{
private:
	double x, y;

public:
	Vector2d();
	~Vector2d();
	Vector2d(double, double);
	Vector2d(double, double, double, double);
	Vector2d(const Vector2d&);

	void setx(double);
	double getx();
	void sety(double);
	double gety();

	Vector2d operator+(const Vector2d&) const;
	Vector2d operator-(const Vector2d&) const;
	Vector2d operator*(double) const;
	friend Vector2d operator*(double, const Vector2d& vec1);
	double operator*(const Vector2d&) const;

	double len() const;
	double cos(const Vector2d&) const;
	double tg(const Vector2d&) const;
	double angle(const Vector2d&) const;

	Vector2d& operator++();
	Vector2d operator++(int);
	Vector2d& operator--();
	Vector2d operator--(int);
	const Vector2d& operator+=(const Vector2d&);
	const Vector2d& operator-=(const Vector2d&);
	const Vector2d& operator*=(double);

	operator string() const;
};