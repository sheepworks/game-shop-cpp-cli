#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    string username;

    // This variable is used as an argument for the outter switch statement below.
    int options;

    /* These two variables are calculated together once the user is finished with their
    shopping. */
    double shopTotal;
    const double shoppingTax = 5.89;

    /*. If the user selects 6 as an option within the menu ("Exit"), this is switched to true,
    and the program gets terminated. */
    bool exitProgram = false;

    /* All of the price variables below are for displaying the pricing of
    an item, and used to calculate the total at the end of the program. */

    // Video Game Prices:
    const double superLarundoPrice = 59.99;
    const double dirbyPrice = 39.99;
    const double tailsTheFoxPrice = 49.99;

    // Console Prices:
    const double playDationPrice = 499.99;
    const double naytendoPrice = 399.99;
    const double yBoxPrice = 599.99;

    // Accessory Prices:
    const double gamingHeadphonesPrice = 89.99;
    const double gamingRouterPrice = 129.99;
    const double controllerPrice = 49.99;

    // Merchandise Prices:
    const double foreverShirtPrice = 39.99;
    const double foreverHoodiePrice = 69.99;

    // introduction text
    cout << "\n\n*** Hello User! Welcome to Games n' Forever! ***\n" << endl;
    cout << "- To start shopping, please input your username below -" << endl;
    cin >> username;
    cout << "\n- Thank you for logging in " << username << "! -\n" << endl;
    cout << "Here are our options! Which would you like to look into?\n" << endl;

    // The menu
    do {

        /* Checks if input is valid. If incorrect, this'll redirect user
        back to the original options to retry. */
        bool optionValid = false;

        // these validation check variables will be present in the inner switch statements.
        bool switchChoiceValid = false;

        // Prevents users from using numbers outside the 1-6 range.
        do {
            cout << "1.) Video Games\n2.) Consoles\n3.) Gaming Accessories\n4.) Merchandise\n5.) Check-Out\n6.) Exit\n\n";
            cin >> options;

            if (options <= 0 || options > 6) {
                cout << "\n\n!!!\nOption is invalid. Please try again.\n!!!\n\n";
            }
            else {
                optionValid = true;
            }
        } while (optionValid == false);

        switch (options) {

            // VIDEO GAME OPTIONS
            case 1: {
            
                int choiceCase1;

                cout << "\n*** Here are our video game options! ***\n" << endl;

                cout << "1.)\n\n- Super Larundo! -\n\n$" << superLarundoPrice << "\n\n(An action packed platformer game that features our famous hero Larundo \nto save princess Pineapple from the evil wrath of Bayser!)\n" << endl;
                cout << "2.)\n\n- Dirby! -\n\n$" << dirbyPrice << "\n\n(Be ready to kick butt with the powerful and almighty\nDirby! Traverse the lands you cross and defeat enemies to reach the\nultimate treasure!)\n" << endl;
                cout << "3.)\n\n- Tails the Fox! -\n\n$" << tailsTheFoxPrice << "\n\n(Get ready on a fast paced journey with Tails and\nhis companion Sawnic to defeat the evil Robootnac!)\n" << endl;

                do {
                    cout << "Please choose which item you would like to buy: ";
                    cin >> choiceCase1;

                    if (choiceCase1 <= 0 || choiceCase1 > 3) {
                        cout << "\n\n!!!\nOption is invalid. Please try again.\n!!!\n\n";
                    }
                    else {
                        switchChoiceValid = true;
                    }
                } while (switchChoiceValid == false);

                switch (choiceCase1) {
                    case 1: {
                        cout << "\n\nYou have put Super Larundo in your cart.\n\n";
                        shopTotal += superLarundoPrice;
                        break;
                    }
                    case 2: {
                        cout << "\n\nYou have put Dirby in your cart.\n\n";
                        shopTotal += dirbyPrice;
                        break;
                    }
                    default: {
                        cout << "\n\nYou have put Tails the Fox in your cart.\n\n";
                        shopTotal += tailsTheFoxPrice;
                        break;
                    }
                }
            }
            
            break;

            // CONSOLE OPTIONS
            case 2: {

                int choiceCase2;

                cout << "\n*** Here are our console options! ***\n" << endl;

                cout << "1.)\n\n- Playdation -\n\n$" << playDationPrice << "\n\n(The Playdation console features exclusive games for its\nconsole! Such as Sackman Planet, The First of Us,\nand so many more!)\n" << endl;
                cout << "2.)\n\n- Naytendo -\n\n$" << naytendoPrice << "\n\n(The best handheld gaming device for all sorts of play!)\n" << endl;
                cout << "3.)\n\n- YBox -\n\n$" << yBoxPrice << "\n\n(The YBox has a variety of games preinstalled on its\nconsole for immediate fun!)\n" << endl;

                do {
                    cout << "Please choose which item you would like to buy: ";
                    cin >> choiceCase2;

                    if (choiceCase2 <= 0 || choiceCase2 > 3) {
                        cout << "\n\n!!!\nOption is invalid. Please try again.\n!!!\n\n";
                    }
                    else {
                        switchChoiceValid = true;
                    }
                } while (switchChoiceValid == false);

                switch (choiceCase2) {
                    case 1: {
                        cout << "\n\nYou have put Playdation in your cart.\n\n";
                        shopTotal += playDationPrice;
                        break;
                    }
                    case 2: {
                        cout << "\n\nYou have put Naytendo in your cart.\n\n";
                        shopTotal += naytendoPrice;
                        break;
                    }
                    default: {
                        cout << "\n\nYou have put YBox in your cart.\n\n";
                        shopTotal += yBoxPrice;
                        break;
                    }
                }
            }

            break;

            // ACCESSORY OPTIONS
            case 3: {
                
                int choiceCase3;

                cout << "\n*** Here are our gaming accessory options! ***\n" << endl;

                cout << "1.)\n\n- Gaming Headphones -\n\n$" << gamingHeadphonesPrice << "\n\n(Better for hearing the game! Combatible across all consoles!)\n" << endl;
                cout << "2.)\n\n- Gaming Router -\n\n$" << gamingRouterPrice << "\n\n(For better wifi connection when gaming!)\n" << endl;
                cout << "3.)\n\n- Controller -\n\n$" << controllerPrice << "\n\n(A gaming controller combatible with all consoles!)\n" << endl;

                do {
                    cout << "Please choose which item you would like to buy: ";
                    cin >> choiceCase3;

                    if (choiceCase3 <= 0 || choiceCase3 > 3) {
                        cout << "\n\n!!!\nOption is invalid. Please try again.\n!!!\n\n";
                    }
                    else {
                        switchChoiceValid = true;
                    }
                } while (switchChoiceValid == false);

                switch (choiceCase3) {
                    case 1: {
                        cout << "\n\nYou have put the Gaming Headphones in your cart.\n\n";
                        shopTotal += gamingHeadphonesPrice;
                        break;
                    }
                    case 2: {
                        cout << "\n\nYou have put the Gaming Router in your cart.\n\n";
                        shopTotal += gamingRouterPrice;
                        break;
                    }
                    default: {
                        cout << "\n\nYou have put the Controller in your cart.\n\n";
                        shopTotal += controllerPrice;
                        break;
                    }
                }
            }

            break;

            // MERCH OPTIONS
            case 4: {

                int choiceCase4;

                cout << "\n*** Here are our merch options! ***\n" << endl;

                cout << "1.)\n\n- Games n' Forever Shirt -\n\n$" << foreverShirtPrice << "\n\n(Wear our shirt to represent our store!)\n" << endl;
                cout << "2.)\n\n- Games n' Forever Hoodie -\n\n$" << foreverHoodiePrice << "\n\n(Wear our hoodie to represent our store, and to warm yourself up a bit.)\n" << endl;

                do {
                    cout << "Please choose which item you would like to buy: ";
                    cin >> choiceCase4;

                    if (choiceCase4 <= 0 || choiceCase4 > 2) {
                        cout << "\n\n!!!\nOption is invalid. Please try again.\n!!!\n\n";
                    }
                    else {
                        switchChoiceValid = true;
                    }
                } while (switchChoiceValid == false);

                switch (choiceCase4) {
                    case 1: {
                        cout << "\n\nYou have put the Games n' Forever Shirt in your cart.\n\n";
                        shopTotal += foreverShirtPrice;
                        break;
                    }
                    default: {
                        cout << "\n\nYou have put the Games n' Forever Hoodie in your cart.\n\n";
                        shopTotal += foreverHoodiePrice;
                        break;
                    }
                }
            }

            break;

            case 5: {

                if (shopTotal == 0) {
                    cout << "\n\nYou have nothing in your cart. Please choose an item, or exit the program.\n\n";
                }
                else {

                    double newTotal = shopTotal + shoppingTax;

                    cout << "\n\nHere is your reciept!\n\n";
                    cout << "-------------------------------\n";
                    cout << "Total: $" << shopTotal << endl;
                    cout << "Tax: $" << shoppingTax << endl;
                    cout << "\nNew Total: $" << newTotal << endl;
                    cout << "-------------------------------";

                    cout << "\n\nThank you for shopping at Games n' Forever " << username << "!" << endl << endl;

                    return 0;
                }

            }

            break;

            default: {

                exitProgram = true;
                break;

            }

            break;
        }

    } while (exitProgram == false);

    cout << "You have decided to exit the program " << username << "." << endl;

    return 0;

}

