#include <iostream>
using namespace std;

// Function Declaration
float onlineShopping();

int main() {
    char startvalue;
    char choiceAgain;

startLevel:
    cout << "Please press s to start shopping " << endl;

start:
    cin >> startvalue;
    if (startvalue == 's' || startvalue == 'S') {
        float totalAmount = onlineShopping();
        cout << "Total Bill Amount is " << totalAmount << endl;

    shopAgain:
        cout << "Do you want shopping again, y or n" << endl;
        cin >> choiceAgain;
        if (choiceAgain == 'y' || choiceAgain == 'Y') {
            goto startLevel;
        } else if (choiceAgain == 'n' || choiceAgain == 'N') {
            cout << "Thanks for shopping " << endl;
        } else {
            cout << "You have entered wrong option, please type again" << endl;
            goto shopAgain;
        }
    } else {
        cout << "You have entered wrong option, please press s" << endl;
        goto start;
    }

    return 0;
}

float onlineShopping() {
    char choice;
    char item;
    int quantity;
    float billAmount = 0;

itemLevel:
    cout << "\n*************** Welcome to Online Shopping ***************" << endl;
    cout << "------------- please follow the instructions -------------" << endl;
    cout << "(1) please enter m to order mobile phones " << endl;
    cout << "(2) please enter l to order laptops " << endl;
    cout << "(3) please enter d to order desktops " << endl;
    cout << "(4) please enter s to order speakers " << endl;
    cout << "(5) please enter h to order Headphones " << endl;
    cin >> choice;

    //****************************** Mobile **********************************/
    if (choice == 'm' || choice == 'M') {
    mobileLevel:
        cout << "Mobile details " << endl;
        cout << "(1) Apple  =>  price : 40000" << endl;
        cout << "(2) Vivo   =>  price : 25000" << endl;
        cout << "(3) Oppo   =>  price : 20000" << endl;
        cout << "(4) Redmi  =>  price : 18000" << endl;
        cout << "(5) Realme =>  price : 17000" << endl;
        cout << "(6) Samsung=>  price : 25000" << endl;
        cout << "Please enter your choice" << endl;
        cin >> item;
        if (item == '1') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 40000;
        } else if (item == '2') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 25000;
        } else if (item == '3') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 20000;
        } else if (item == '4') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 18000;
        } else if (item == '5') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 17000;
        } else if (item == '6') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 25000;
        } else {
            cout << "You have entered wrong option, please type again " << endl;
            goto mobileLevel;
        }
    }

    //****************************** Desktop **********************************/
    else if (choice == 'd' || choice == 'D') {
    desktopLevel:
        cout << "Desktop details " << endl;
        cout << "(1) Apple  =>  price : 40000" << endl;
        cout << "(2) Vivo   =>  price : 25000" << endl;
        cout << "(3) Oppo   =>  price : 20000" << endl;
        cout << "(4) Redmi  =>  price : 18000" << endl;
        cout << "(5) Realme =>  price : 17000" << endl;
        cout << "(6) Samsung=>  price : 25000" << endl;
        cout << "Please enter your choice" << endl;
        cin >> item;
        if (item == '1') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 40000;
        } else if (item == '2') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 25000;
        } else if (item == '3') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 20000;
        } else if (item == '4') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 18000;
        } else if (item == '5') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 17000;
        } else if (item == '6') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 25000;
        } else {
            cout << "You have entered wrong option, please type again " << endl;
            goto desktopLevel;
        }
    }

    //****************************** Laptop **********************************/
    else if (choice == 'l' || choice == 'L') {
    laptopLevel:
        cout << "Laptop details " << endl;
        cout << "(1) Apple  =>  price : 40000" << endl;
        cout << "(2) Vivo   =>  price : 25000" << endl;
        cout << "(3) Oppo   =>  price : 20000" << endl;
        cout << "(4) Redmi  =>  price : 18000" << endl;
        cout << "(5) Realme =>  price : 17000" << endl;
        cout << "(6) Samsung=>  price : 25000" << endl;
        cout << "Please enter your choice" << endl;
        cin >> item;
        if (item == '1') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 40000;
        } else if (item == '2') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 25000;
        } else if (item == '3') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 20000;
        } else if (item == '4') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 18000;
        } else if (item == '5') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 17000;
        } else if (item == '6') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 25000;
        } else {
            cout << "You have entered wrong option, please type again " << endl;
            goto laptopLevel;
        }
    }

    //****************************** Speaker **********************************/
    else if (choice == 's' || choice == 'S') {
    speakerLevel:
        cout << "Speaker details " << endl;
        cout << "(1) Apple  =>  price : 40000" << endl;
        cout << "(2) Vivo   =>  price : 25000" << endl;
        cout << "(3) Oppo   =>  price : 20000" << endl;
        cout << "(4) Redmi  =>  price : 18000" << endl;
        cout << "(5) Realme =>  price : 17000" << endl;
        cout << "(6) Samsung=>  price : 25000" << endl;
        cout << "Please enter your choice" << endl;
        cin >> item;
        if (item == '1') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 40000;
        } else if (item == '2') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 25000;
        } else if (item == '3') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 20000;
        } else if (item == '4') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 18000;
        } else if (item == '5') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 17000;
        } else if (item == '6') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 25000;
        } else {
            cout << "You have entered wrong option, please type again " << endl;
            goto speakerLevel;
        }
    }

    //****************************** Headphone **********************************/
    else if (choice == 'h' || choice == 'H') {
    headphoneLevel:
        cout << "Headphone details " << endl;
        cout << "(1) Apple  =>  price : 40000" << endl;
        cout << "(2) Vivo   =>  price : 25000" << endl;
        cout << "(3) Oppo   =>  price : 20000" << endl;
        cout << "(4) Redmi  =>  price : 18000" << endl;
        cout << "(5) Realme =>  price : 17000" << endl;
        cout << "(6) Samsung=>  price : 25000" << endl;
        cout << "Please enter your choice" << endl;
        cin >> item;
        if (item == '1') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 40000;
        } else if (item == '2') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 25000;
        } else if (item == '3') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 20000;
        } else if (item == '4') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 18000;
        } else if (item == '5') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 17000;
        } else if (item == '6') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 25000;
        } else {
            cout << "You have entered wrong option, please type again " << endl;
            goto headphoneLevel;
        }
    }

    else {
        cout << "You have entered wrong option, please type again " << endl;
        goto itemLevel;
    }

    return billAmount;
}
