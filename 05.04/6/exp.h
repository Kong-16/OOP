#pragma once

class Exp {
	int exp;
	int base;
public:
	Exp(int b, int e) { base = b; exp = e; }
	Exp(int b) { base = b; exp = 1; }
	Exp() { base = 1; exp = 1; }

	int getExp() { return exp; }
	int getBase() { return base; }
	int getValue();
	bool equals(Exp b);
};