#include "application.h"
#include <iostream>
#include "array.h"
#include "polinome.h"

using namespace std;

Application::Application()
{

}

int Application::exec()
{
    int ch;
    Array arr;
    number n_roots[] = {3, 7, 1};
    Polinome polin(3, n_roots, 3);

    while(true)
    {
        ch = menu();
        switch(ch)
        {
            case 0:
                return 0;
            case 1:
            {
                cout << "Enter an and the roots" << endl;
                cin >> polin;
                break;
            }
            case 2:
            {
                cout << "Input index" << endl;
                number elem;
                cin >> elem;
                cout << polin.count_val(elem) << endl;
                break;
            }
            case 3:
            {
                cout << "Input new size" << endl;
                int num;
                cin >> num;
                polin.change_size(num);
                break;
            }
            case 4:
            {
                char ch_n;
                cout << "1. Change an" << endl;
                cout << "2. Change roots" << endl;
                cin >> ch_n;
                if(ch_n == '1')
                {
                    number an;
                    cout << "Enter value" << endl;
                    cin >> an;
                    polin.change_an(an);
                }
                else if(ch_n == '2')
                {
                    number n_root;
                    int index;
                    cout << "Enter value" << endl;
                    cin >> n_root;
                    cout << "Enter the index" << endl;
                    cin >> index;
                    polin.change_roots(n_root, index);
                }
                else
                {
                    cout << "Error" << endl;
                    break;
                }
                break;
            }
            case 5:
            {
                int mode_c;
                cout << "1. Print Classic" << endl;
                cout << "2. Print Canonical" << endl;
                cin >> mode_c;
                if(mode_c == '1') polin.change_print_mode(PrintModeClassic);
                else if(mode_c == '2') polin.change_print_mode(PrintModeCanonic);
                else
                {
                    cout << "Error" << endl;
                    break;
                }
                break;
            }
            default:
                break;
        }
    }
}

int Application::menu()
{
    int ch;

    cout << "1 - Enter value" << endl;
    cout << "2 - Calculating the value of a polynomial at a given point" << endl;
    cout << "3 - Change array lenth" << endl;
    cout << "4 - Changing the coefficient of an or one of the roots selected by the index" << endl;
    cout << "5 - Print array" << endl;
    cout << "0 - Exit" << endl;

    cin >> ch;
    return ch;
}
