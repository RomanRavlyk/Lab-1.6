#include "Solution.h"
#include <iostream>
using namespace std;

Solution Create_Solution() {
	Solution solution;
	solution.Read();
	solution.Display();
	return solution;
}
int main()
{
	Solution s = Create_Solution();
	return 0;
}