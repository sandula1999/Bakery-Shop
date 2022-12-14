#include <iostream> //basic input output
#include<string>  // to enable the use of string in the program
#include<fstream>  // to enable file handling 
#include <cstdlib> // to insert exit()


using namespace std;


//global variables
string username;
string pwd;
string usernamecust;
string pwdcust;

// Declaring all function prototypes
void mainmenu();
void admlogin();
void customerlog();
void VDUadmin();
void VDUcustomer();
void viewItemList();
void addItem();
void help();
void error();
void logout();

int main()
{
    system("cls");
    mainmenu();
    return 0;
}


void mainmenu()
{
    system("cls");
    char op1;//local variable
    cout << "************************************************************************************" << endl;
    cout << "|          |              |  *** PANADERIA BAKERY ***   |                |          |" << endl;
    cout << "|          |------------------It's Cookie O' Clock-----------------------|          |" << endl;
    cout << "|          | ____________________________________________________________|          |" << endl;
    cout << "|          | Call us- 0716640496 / 0758950476        24x7                |          |" << endl;
    cout << "|          | Email- panaderiabakery001@gmail.com                         |          | " << endl;
    cout << "************************************************************************************" << endl;
    cout << "                       **** 01. Login As Administrator ****                 " << endl;
    cout << "" << endl;
    cout << "                       **** 02. Login As Customer      ****                 " << endl;
    cout << "" << endl;
    cout << "                       **** [ SELECT - 01 OR 02 ]      ****                " << endl;
    cout << "" << endl;
    cout << " select :::                                          " << endl;
    cin >> op1;
    switch (op1)
    {
    case '1':
        admlogin();
        break;
        system("cls");
    case '2':
        customerlog();
        break;
    default:
        error();
        break;
        system("cls");

    }

}

void admlogin()
{
    system("cls");
    cout << "" << endl;
    cout << "************************************************************************************" << endl;
    cout << "|          |              |  *** PANADERIA BAKERY ***   |                |          |" << endl;
    cout << "|          |------------------It's Cookie O' Clock-----------------------|          |" << endl;
    cout << "|          | ____________________________________________________________|          |" << endl;
    cout << "|          | Call us- 0716640496 / 0758950476        24x7                |          |" << endl;
    cout << "|          | Email- panaderiabakery001@gmail.com                         |          | " << endl;
    cout << "************************************************************************************" << endl;
    cout << "                           * *Administrator Login * *                        " << endl;
    cout << "" << endl;

    cout << "Enter Your Loggin Name::: " << endl;
    cin >> username;
    cout << "Enter Your Loggin Password ::: " << endl;
    cin >> pwd;

    if ((username == "roof" && pwd == "1122"))
    {
        VDUadmin();
    }
    else
    {
        char op2;
        cout << "" << endl;
        cout << " oopz password that you entered is incorrect !!! " << endl;
        cout << "" << endl;
        cout << " To go Back press [ 01 ] again     " << endl;
        cout << " To go Main Menu press [ 0 ]       " << endl;
        cin >> op2;
        switch (op2)
        {
        case '1':
            admlogin();
            break;
        case '2':
            mainmenu();
            break;
        default:
            error();
            break;
        }

    }

}

void customerlog()
{
    system("cls");
    cout << "" << endl;
    cout << "************************************************************************************" << endl;
    cout << "|          |              |  *** PANADERIA BAKERY ***   |                |          |" << endl;
    cout << "|          |------------------It's Cookie O' Clock-----------------------|          |" << endl;
    cout << "|          | ____________________________________________________________|          |" << endl;
    cout << "|          | Call us- 0716640496 / 0758950476        24x7                |          |" << endl;
    cout << "|          | Email- panaderiabakery001@gmail.com                         |          | " << endl;
    cout << "************************************************************************************" << endl;
    cout << "                          * * Customer Login * *                                      " << endl;
    cout << "" << endl;

    cout << "         enter your username                                                 " << endl;
    cin >> usernamecust;
    cout << "         enter your password                                                 " << endl;
    cin >> pwdcust;

    if ((usernamecust == "user" && pwdcust == "4455"))
    {
        VDUcustomer();
    }
    else
    {
        char opt2;
        cout << "" << endl;
        cout << " oopz password that you entered is incorrect !!! " << endl;
        cout << "" << endl;
        cout << " To go Back press [ 01 ] again     " << endl;
        cout << " To go Main Menu press [ 0 ]       " << endl;
        cin >> opt2;
        switch (opt2)
        {
        case '1':
            admlogin();
            break;
        case '2':
            mainmenu();
            break;
        default:
            error();
            break;
        }

    }


}

void VDUadmin()
{
    system("cls");
    string opt1;//local variable
    cout << "_____________________________________________________________________________________________" << endl;
    cout << "|                         Autherization granted for VDU of admin                            |" << endl;
    cout << "|___________________________________________________________________________________________|" << endl;

    cout << "|                              WELCOME FOODIE                                               |" << endl;
    cout << "|             Have a Nice Day ********************* Stay Safe                               |" << endl;
    cout << "|___________________________________________________________________________________________|" << endl;

    cout << " 1. View Item List " << endl;
    cout << "+*+*+*+*+*+*+*+*+*+*+" << endl;
    cout << " 2. Add Item  " << endl;
    cout << "+*+*+*+*+*+*+*+*+*+*+" << endl;
    cout << " 3. help " << endl;
    cout << "+*+*+*+*+*+*+*+*+*+*+" << endl;
    cout << " 4. main menu " << endl;
    cout << "+*+*+*+*+*+*+*+*+*+*+" << endl;
    cout << " 5. logout " << endl;
    cout << "+*+*+*+*+*+*+*+*+*+*+" << endl;
    cout << " Enter 1/2/3/4/5/6   " << endl;
    cin >> opt1;

    if (opt1 == "1") {
        viewItemList();
        system("CLS");// go to view item list
    }
    else if (opt1 == "2") {
        addItem();
        system("CLS");// add item

    }

    else if (opt1 == "3") {
        help();
        system("CLS");// help
    }
    else if (opt1 == "4") {
        mainmenu();
        system("CLS"); // back to the main menu function
    }
    else if (opt1 =="5"){
        logout();
        system("cls");
        admlogin();
        
    }
    else {
        error();// error message
    }

}


void viewItemList() {
    system("cls");
    string getcontent;
    ifstream openfile("cake.txt");
    if (openfile.is_open())
    {
        while (!openfile.eof())
        {
            getline(openfile, getcontent);
            cout << getcontent << endl;
        }
    }
    system("pause");

}
void addItem() {
    system("cls");
    string getcontent;
    ifstream openfile("cake.txt");
    if (openfile.is_open())
    {
        while (!openfile.eof())
        {
            getline(openfile, getcontent);
            cout << getcontent << endl;
        }
    }
    system("pause");
    mainmenu();
        
       
}


void logout() {
    string quit, Y, N;
    cout << "" << endl;
    cout << "________________________________________________" << endl;
    cout << "|               EXIT                           |" << endl;
    cout << "|______________________________________________|" << endl;
    cout << "" << endl;
    cout << "Do you sure ??????" << endl;
    cout << "press y to logout or N to go back" << endl;
    cout << "" << endl;
    cin >> quit;
    if (quit == "Y" || quit == "y") {
        mainmenu();
    }
    else if (quit == "N" || quit == "n") {
        system("cls");
        mainmenu();
    }
    else {
        cout << "invalid input" << endl;
        system("pause");
        logout();
    }



  
}
    void help() {

    string s;

    cout << "" << endl;
    cout << "************************************************************************************" << endl;
    cout << "|          |              |  *** PANADERIA BAKERY ***   |                |          |" << endl;
    cout << "|          |------------------It's Cookie O' Clock-----------------------|          |" << endl;
    cout << "|          | ____________________________________________________________|          |" << endl;
    cout << "|          | Call us- 0716640496 / 0758950476        24x7                |          |" << endl;
    cout << "|          | Email- panaderiabakery001@gmail.com                         |          | " << endl;
    cout << "************************************************************************************" << endl;
    cout << "                          * * HELP CENTRE * *                                      " << endl;
    cout << "" << endl;
    cout << " shop - PANADERIA BAKERY " << endl;
    cout << "" << endl;
    cout << " telephone -0716640496 / 0758950476" << endl;
    cout << "" << endl;
    cout << "our email-panaderiabakery001@gmail.com " << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "Press s for main menu " << endl;
    cin >> s;
    if (s == "s") {
        system("cls");
        mainmenu();
    }
    else {
        cout << "invalid input" << endl;
        system("pause");
        help();
    }



}

void error()
{
    system("cls");
    int back;
    do {
        cout << "Invalid Input Please Enter Valid Number..." << endl;

        cout << "Enter 0 to Back to main menu: ";
        cin >> back;
    } while (back != 0);
    {
        mainmenu();
    };
}


void VDUcustomer()
{
    system("cls");
    string opt1;//local variable
    cout << "_____________________________________________________________________________________________" << endl;
    cout << "|                         Autherization granted for VDU of Customer                         |" << endl;
    cout << "|___________________________________________________________________________________________|" << endl;

    cout << "|                              WELCOME FOODIE                                               |" << endl;
    cout << "|             Have a Nice Day ********************* Stay Safe                               |" << endl;
    cout << "|___________________________________________________________________________________________|" << endl;
    cout << " 1. View Item List " << endl;
    cout << "+*+*+*+*+*+*+*+*+*+*+" << endl;
    cout << " 2. help " << endl;
    cout << "+*+*+*+*+*+*+*+*+*+*+" << endl;
    cout << " 3. main menu " << endl;
    cout << "+*+*+*+*+*+*+*+*+*+*+" << endl;
    cout << " 4. Exit / Logout " << endl;
    cout <<" Enter 1/2/3/4 "<< endl;
    cin >> opt1;
    if (opt1 == "1") {
        viewItemList();
        //system("CLS");// go to view item list
    }
   
    else if (opt1 == "2") {
        help();
        //system("CLS");// help

    }
    
    else if (opt1 == "3") {
        mainmenu();
        //system("CLS");// back to the main menu function
    }
    else if (opt1 == "4") {
        logout();
        //system("cls");//log out
    }
    else {
        error();// error message
    }
}