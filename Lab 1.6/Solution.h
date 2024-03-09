#pragma once
#include <string>

using namespace std;
class Solution
{
private:
	int amount;
	class Liquid {
	private:
		std::string name;
		int density;
	public:
		std::string getName() const { return name; }
		void setName(std::string value);
		int getDensity() const { return density; }
		void setDen(int value);
		void Read();
		void Display() const;
		bool Init(std::string value, int Den);
		std::string toString();
	};
	Liquid liquid;
public:
	int getAmount() const { return amount; }
	void setAmount(int value) { this->amount = value; };
	void setLiquid(Solution::Liquid liquid) { this->liquid = liquid; };
	Solution::Liquid getLiquid() const { return liquid; }
	void Init(int amount, Liquid liquid);
	void Display() const;
	void Read();
	string toString();
};

