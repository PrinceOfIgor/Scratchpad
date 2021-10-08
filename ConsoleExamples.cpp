#include <iostream>

using namespace std;


    
void helloworld()
{
    cout << "Hello World\n";
    cout << "That's it.\n\n";
}


int main()
{
    int selNum;
    cout << "Welcome to my scratchpad, I'll be adding little applets to this as I write 'em." << endl;
    cout << "Please make a selection for what you'd like to see:" << endl;
    cout << "1) Hello World" << endl;
    cout << "2) Exit" << endl;

    cin >> selNum;

    switch (selNum)
    {
        case 1:
            helloworld();            
            break;
        case 2:
            exit;
            break;

    }

}




