#include <iostream>
#include <cstdlib>

using namespace std;

const int ROWS = 100;
const int COLUMNS = 2;

string items[ROWS] = {""};
double amountAndPrice[COLUMNS][ROWS] = {{0}, {0}};

void title()
{
    cout<<"HEOUT - ONLINE SHOPPING PLATFORM\n\n\n";
}

bool checkNum(string text)
{
    int i;
    char piece;
    bool isNumber;

    isNumber = false;

    for(i = 0; i < text.length(); i++)
    {
        piece = text[i];

        if (piece >= '0' && piece <= '9')
        {
            isNumber = true;
        }
    }

    if (isNumber)
    {
        return true;
    }
        else
        {
            return false;
        }
}

double calculator(double quantity, double cost)
{
    double result;

    result = quantity * cost;

    return result;
}

double howMany()
{
    string reply;
    double thisMany;

    cout<<"How many would you like to buy?: ";
    getline(cin, reply);

    if (checkNum(reply))
    {
        thisMany = stod(reply);

        return thisMany;
    }
}

void cart(string item, double quantity, double cost)
{
    int i, j;

    for(i = 0; i < ROWS; i++)
    {
        if (items[i] == "")
        {
            items[i] = item;
            
            for(j = 0; j < COLUMNS; j++)
            {
                if (j == 0)
                {
                    amountAndPrice[j][i] = quantity;
                }
                    else
                    {
                        amountAndPrice[j][i] = cost;
                    }
            }

            break;
        }
    }
}

void meat()
{
    const double CHICKEN = 160.00;
    const double PORK = 250.00;
    const double BEEF = 324.88;

    string reply;
    int choice, i;
    double total, Kg;
    bool buying;

    buying = true;

    title();
    cout<<"T-SHIRTS\n\n";
    cout<<"1.) Whole Chicken - 160.00 PHP/Kg \n2.) Pork Lean Meat - 250.00 PHP/Kg \n3.) Beef Ground Round - 324.88 PHP/Kg \n4.) Return to Home\n\n";

    while (buying)
    {
        cout<<"Select from the items above (1-2-3-4): ";
        getline(cin, reply);

        if (checkNum(reply))
        {
            choice = stoi(reply);

            switch (choice)
            {
                case 1:
                    Kg = howMany();
                    total = calculator(Kg, CHICKEN);

                    cart("Whole Chicken", Kg, total);

                    break;
                case 2:
                    Kg = howMany();
                    total = calculator(Kg, PORK);

                    cart("Pork Lean Meat", Kg, total);

                    break;
                case 3:
                    Kg = howMany();
                    total = calculator(Kg, BEEF);

                    cart("Beef Ground Round", Kg, total);

                    break;
                case 4:
                    buying = false;

                    break;
                default:
                    cout<<"Wrong input! Please enter from the options only.\n";
            }
        }
            else
            {
                cout<<"Wrong input! Please enter numbers only.\n";
            }
    }
}

void vegetables()
{
    const double TOMATO = 64.31;
    const double CARROT = 80.00;
    const double ONION = 75.95;
    const double GARLIC = 196.21;

    string reply;
    int choice, i;
    double total, Kg;
    bool buying;

    buying = true;

    title();
    cout<<"T-SHIRTS\n\n";
    cout<<"1.) Tomato - 64.31 PHP/Kg \n2.) Carrots - 80.00 PHP/Kg \n3.) Onions - 75.95 PHP/Kg \n4.) Garlic - 196.21 PHP/Kg \n5.) Return to Home\n\n";

    do
    {
        cout<<"Select from the items above (1-2-3-4-5):";
        getline(cin, reply);

        if (checkNum(reply))
        {
            choice = stoi(reply);

            switch (choice)
            {
                case 1:
                    Kg = howMany();
                    total = calculator(Kg, TOMATO);

                    cart("Tomato", Kg, total);

                    break;
                case 2:
                    Kg = howMany();
                    total = calculator(Kg, CARROT);

                    cart("Carrots", Kg, total);

                    break;
                case 3:
                    Kg = howMany();
                    total = calculator(Kg, ONION);

                    cart("Onions", Kg, total);

                    break;
                case 4:
                    Kg = howMany();
                    total = calculator(Kg, GARLIC);

                    cart("Garlic", Kg, total);

                    break;
                case 5:
                    buying = false;;

                    break;
                default:
                    cout<<"Wrong input! Please enter from the options only.\n";
            }
        }
            else
            {
                cout<<"Wrong input! Please enter numbers only.\n";
            }
    }while (buying);
}

void dairy()
{
    const double MILK = 106.55;
    const double CHEESE = 145.00;

    string reply;
    int choice, qty, i;
    double total;
    bool buying;
    
    buying = true;

    title();
    cout<<"T-SHIRTS\n\n";
    cout<<"1.) Nestle Fresh Milk 1L - 106.55 PHP \n2.) Eden Filled Cheese 430g - 145.00 PHP \n3.) Return to Home\n\n";

    while (buying)
    {
        cout<<"Select from the items above (1-2-3): ";
        getline(cin, reply);

        if (checkNum(reply))
        {
            choice = stoi(reply);

            switch (choice)
            {
                case 1:
                    qty = howMany();
                    total = calculator(qty, MILK);

                    cart("Nestle Fresh Milk 1L", qty, total);

                    break;
                case 2:
                    qty = howMany();
                    total = calculator(qty, CHEESE);

                    cart("Eden Filled Cheese 430g", qty, total);

                    break;
                case 3:
                    buying = false;

                    break;
                default:
                    cout<<"Wrong input! Please enter from the options only.\n";
            }
        }
            else
            {
                cout<<"Wrong input! Please enter numbers only.\n";
            }
    }
}

void other()
{
    const double SALT = 28.75;
    const double PEPPER = 20.66;
    const double SUGAR = 84.92;

    string reply;
    int choice, subTotal, i;
    double total, Kg;
    bool buying;

    buying = true;

    title();
    cout<<"T-SHIRTS\n\n";
    cout<<"1.) Iodized Salt 1Kg - 28.75 PHP/Kg \n2.) Black Pepper 1Kg - 20.66 PHP/Kg \n3.) Sugar 1Kg - 84.92 PHP/Kg \n4.) Return to Home\n\n";

    while (buying)
    {
        cout<<"Select from the items above (1-2-3-4): ";
        getline(cin, reply);

        if (checkNum(reply))
        {
            choice = stoi(reply);

            switch (choice)
            {
                case 1:
                    Kg = howMany();
                    total = calculator(Kg, SALT);

                    cart("Iodized Salt 1Kg", Kg, total);

                    break;
                case 2:
                    Kg = howMany();
                    total = calculator(Kg, PEPPER);

                    cart("Black Pepper 1Kg", Kg, total);

                    break;
                case 3:
                    Kg = howMany();
                    total = calculator(Kg, SUGAR);

                    cart("Sugar 1Kg", Kg, total);

                    break;
                case 4:
                    buying = false;

                    break;
                default:
                    cout<<"Wrong input! Please enter from the options only.\n";
            }
        }
            else
            {
                cout<<"Wrong input! Please enter numbers only.\n";
            }
    }
}

void viewCart()
{
    int i, j, count;
    string reply;

    count = 1;

    title();
    cout<<"SHOPPING CART:\n\n";

    for(i = 0; i < ROWS; i++)
    {
        if (items[i] != "")
        {
            cout<<count<<".) ";
            cout<<items[i]<<": ";

            for(j = 0; j < COLUMNS; j++)
            {
                if (j == 0)
                {
                    cout<<amountAndPrice[j][i]<<"(Kg/g/L)";
                }
                    else
                    {
                        cout<<" - "<<amountAndPrice[j][i]<<" PHP"<<endl;
                    }
            }
        }
            else
            {
                break;
            }
    }

    cout<<endl<<"Enter anything to return: ";
    getline(cin, reply);
}

void checkout(string accountName)
{
    string address, reply;
    int i;
    double total;

    title();
    cout<<"CHECKOUT\n\n";
    viewCart();

    for(i = 0; items[i] != ""; i++)
    {
        total += amountAndPrice[1][i];
    }

    cout<<endl<<"TOTAL AMOUNT DUE: "<<total<<" PHP"<<endl;;

    do
    {
        cout<<"Would you like to buy this items? (Y/N): ";
        getline(cin, reply);

        if (reply == "Y" || reply == "y")
        {
            cout<<"Please provide you address: ";
            getline(cin, address);

            cout<<"\nItems are now being shipped to "<<address<<"\nTHANK YOU!\n\n";

            break;
        }
            else if (reply == "N" || reply == "n")
            {
                cout<<"\nShipout request has been cancelled!\n\n";

                break;
            }
                else
                {
                    cout<<"Invalid input! Please input from the options only.\n\n";
                }
    }while (true);
}

void home(string pangalan)
{
    string reply;
    int choice;

    do
    {
        title();
        cout<<"Welcome, "<<pangalan<<endl<<endl;
        cout<<"HOT ITEMS FOR TODAY:\n";
        cout<<"1.) Meat Products \n2.) Vegetable Products \n3.) Dairy Products \n4.) Others \n5.) Cart \n6.) Checkout \n\n";

        cout<<"Select the category you want to access: ";
        getline(cin, reply);

        if (checkNum(reply))
        {
            choice = stoi(reply);

            switch (choice)
            {
                case 1:
                    meat();

                    break;
                
                case 2:
                    vegetables();

                    break;
                
                case 3:
                    dairy();

                    break;
                case 4:
                    other();

                    break;
                
                case 5:
                    viewCart();

                    break;
                case 6:
                    checkout(pangalan);

                    break;
                default:
                    cout<<"Wrong input! Please enter from the options only.\n";
            }
        }
            else
            {
                cout<<"Wrong input! Please enter numbers only.\n";
            }
    }while (choice != 7);
}

void signUp()
{
    string name, pass;

    title();
    cout<<"Sign Up\n\n";

    cout<<"Username: ";
    getline(cin, name);
    cout<<"Password: ";
    getline(cin, pass);

    home(name);
}

int main()
{
    signUp();

    return EXIT_SUCCESS;
}