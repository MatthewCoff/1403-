#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
//пример черепахи и панцыря. Композиция. Черепаха - целая часть. Панцырь - неотльемлемая часть. Без панцыря черепахи не будет:(
class Turtle {

	public:

	Turtle(string name, string variety, int age)
		: turName(name), turVariety(variety), turAge(age), turShell(Shell()) {}
	void procherepashku() {
		cout << "Name: " << turName << endl;
		cout << "variety: " << turVariety << endl;
		cout << "Age: " << turAge << endl;

		cout << "Shell color: " << turShell.datColor() << endl;
	
	}
	private:
	class Shell {
	public:
		Shell() : m_color("Green"){}
		string datColor() {
			return m_color;
		}
		
	private:
		string m_color;
		int m_size;
	};
	string turName;
	string turVariety;
	int turAge;

	string turColor;	

	Shell turShell;
};

int main() {
	Turtle gavriil("Gavriil", "BigGreen", 45);
	gavriil.procherepashku();


	Turtle hto("HtoCe", "SmallBlue", 3);
	hto.procherepashku();
	return 0;
}