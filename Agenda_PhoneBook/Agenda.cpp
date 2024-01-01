#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector <string> Names;
vector <string> Phones;

void NewContact();
void SearchById();
void SearchByName();

int main(){

    int sel = 0;

    while (true)
    {
        cout << "\nMy Agenda :\n\n";
        cout << "Choose a number to execute an option\n\n";
        cout << "[1] New Contact\n";
        cout << "[2] Search By Id \n";
        cout << "[3] Search By Name \n";
        cout << "[4] Exit \n";

        cout << "Your choice: ";
        cin >> sel;

        switch (sel)
        {
        case 1:
            NewContact();
            break;
        
        case 2:
            SearchById();
            break;
        
        case 3:
            SearchByName();
            break;
        
        case 4:
            return 0;         

        default:
        cout << "Invalid Option. Please select a valid option.\n";        
        }        
    }
       
}

void NewContact(){
    string name;
    string phone;

    cout << "\n\nEnter the name of the contact: ";

    cin >> name;

    cout << "Enter the phone for this contact: ";

    cin >> phone;

    cout << "ID for this contact will be: " << Names.size();

    Names.push_back(name);
    Phones.push_back(phone);
}

void SearchById(){
    int value;

    cout << "\n\nEnter the ID of the contact to Search: ";
    cin >> value;

    if (value >= Names.size()) {
    cout << "This ID does not exist\n\n";
    return;
    }

    cout << "Information for the contact"<< value << "\n";
    cout << "Name:" << Names[value] << "\n";

    cout << "Phone:" << Phones[value] << "\n";
}

void SearchByName(){
    bool found = false;
    string name;
    cout << "\n\n Enter the name to search: ";

    cin >> name;

    for (int i = 0; i != Names.size(); i++)       
    {
         if(Names[i] == name){
            cout << "Names:" << Names[i] <<"\n";
            cout << "Phones:" << Phones[i] <<"\n";
            found = true;
        }
    }
    if(!found){
        cout << "No contact was found with this name! \n\n";
    }

}
