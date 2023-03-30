#include "Electronics.h"
#include "Tablet.h"
#include "Vacuum_cleaner.h"
#include "Smart_lamp.h"
using namespace std;

int main()
{
    Electronics* electronics_store[3];

    electronics_store[0] = new Tablet(200, 300, 14.1);
    electronics_store[1] = new Vacuum_cleaner(500, 600, 10.3);
    electronics_store[2] = new Smart_lamp(800, 1440);
    

    bool open = true;
    while (open)
    {
        cout << "Choose a product: 1 - tablet, 2 - vacuum cleaner, 3 - smart lamp, 0 - exit. \n" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            electronics_store[0]->ShowSpec();
            break;

        case 2:
            electronics_store[1]->ShowSpec();
            break;

        case 3:
            electronics_store[2]->ShowSpec();
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "Choose a product from 1 to 3 or 0 for exit." << endl;
            break;
        }
    }
    delete electronics_store[0];
    delete electronics_store[1];
    delete electronics_store[2];
   
    return 0;
}