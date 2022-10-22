#include <iostream>
using namespace std;
class Critter
{
public:
	int m_Hunger;
	void Greet();
};
void Critter::Greet()
{
	cout << "Hi, I'm critter. My hunger level is " << m_Hunger << ".\n";
}
int main()
{
	Critter Crit1;
	Critter Crit2;
	Crit1.m_Hunger = 9;
	cout << "crit1's hunger level is " << Crit1.m_Hunger << ".\n";
	Crit2.m_Hunger = 3;
	cout << "crit2's hunger level is " << Crit2.m_Hunger << ".\n\n";
	Crit1.Greet();
	Crit2.Greet();
	return 0;
}