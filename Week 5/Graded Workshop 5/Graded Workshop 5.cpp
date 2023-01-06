#include <iostream>
#include "rectangle.h";
#include "triangle.h";

int main()
{
    int option;
    cout << "\nchoose 1 for area of rectangle: \nchoose 2 for area of triangle: \n" << endl;
    cin >> option;

    while (option > 2 || option < 1) {
        cout << "invalid input " << endl;
        cin >> option;
    }

    if (option == 1) {
        Rectangle R;
        R.get_area();
        R.show_area();
    }
    else if (option == 2) {
        Triangle T;
        T.get_area();
        T.show_area();
    }
    else {
        cout << "invalid option" << endl;
    }
   
    cout << "\n1. restart program?\n2. end program" << endl;
    int end_program;
    cin >> end_program;

    if (end_program == 1){
        main();
    }
    else {
        exit;
    }





}
