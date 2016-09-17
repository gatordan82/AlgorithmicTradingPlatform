#include <iostream>

void waitForEnter()
{
    using namespace std;
    cin.clear();
    cin.ignore(32767, '\n');
    cin.get();
}

int main(int argc, char* argv[])
{
    using namespace std;

    cout << argv[1] << "\n";
    waitForEnter();

    return 0;
}