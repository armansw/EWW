#include <iostream>
#include "SapperAdapter.h"
#include "Sapper.h"
#include "AbstractUnit.h"
#include "FriendUnitAdapter.h"
using namespace std;
int main() {
	shared_ptr<Sapper> sapper;
	shared_ptr<SapperAdapter> sapperadapter = make_shared<SapperAdapter>(sapper);
	sapperadapter->attack();
	system("pause, void");
	cout << "Hello, world!" << endl;
}