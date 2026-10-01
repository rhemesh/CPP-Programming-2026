#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<limits>

using namespace std;
class Menu
{
    public:
    int TableNumber;
    vector<string> Dishes;
};
int main()
{
    vector<Menu> vec;
    cout<<"Your ABC Restaurent Welcomes You!"<<endl;
    int option;
    
       
    while(1)
    {
        
       cout<<"Select the Option below: \n"<<
        "0-> NEW ORDER\n"<<
        "1-> ADD NEW DISH TO THE EXISTING ORDER\n"<<
        "2-> REMOVE DISH FROM THE EXISTING ORDER\n"<<
        "3-> ADD MULTIPLE DISHES TO THE EXISTING ORDER\n"<<
        "4-> DELETE MULTIPLE DISHES FROM THE EXISTING ORDER\n"<<
        "5-> CLEAR THE ORDER\n"<<
        "6-> DISPLAY THE ORDER\n"<<
        "7-> EXIT"<<endl;
        if(!(cin >> option))
        {
            cout << "Invalid option! Please enter a number from 0 to 7." << endl;

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            continue;
        }
        if(option < 0 || option > 7)
        {
            cout << "Please select an option from 0 to 7." << endl;
            continue;
        }
        switch(option)
        {
            
            case 0:
            {

                Menu m;
                bool found = false;
                cout<<"You're Into New order"<<endl;
                cout<<"Enter Table Number: ";
                if(!(cin >> m.TableNumber))
                {
                    cout << "Invalid table number! Please enter an integer." << endl;

                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    break;
                }
                for(auto &existing_order : vec)
                {
                    if(existing_order.TableNumber == m.TableNumber)
                    {
                        found = true;
                        break;
                    }
                }
                if(found)
                {
                    cout << "This table already has an order!" << endl;
                    cout << "Please use the existing order options."
                        << endl;

                    break;
                }
                cout<<"Enter the dishes: ";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                string dish1;
                while(true)
                {
                    getline(cin,dish1);
                    if(dish1.empty())
                        break;
                    m.Dishes.push_back(dish1);
                }
                vec.push_back(m);
                
            break;
            }

            case 1:
            {
                cout<<"You Can add new dish to the existing order"<<endl;
                int tablenum;
                string dish2;
                cout<<"Enter Table Number: ";
                if(!(cin >> tablenum))
                {
                    cout << "Invalid table number! Please enter an integer." << endl;

                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    break;
                }
                bool found = false;
                for(auto &m : vec)
                {
                    if(m.TableNumber == tablenum)
                    {
                        found = true;
                        cout<<"Enter dish: ";
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        getline(cin,dish2);
                        cout<<"Dish added to the order"<<endl;
                        m.Dishes.push_back(dish2);
                        break;
                    }
                   
                }
                if(!found)
                    cout<<"Table is empty,Create New order"<<endl;

                
            break;
            }
            case 2:
            {
                cout<<"You Can remove the dish from the existing order"<<endl;
                int tablenum;
                string dish3;
                cout<<"Enter Table Number: ";
                if(!(cin >> tablenum))
                {
                    cout << "Invalid table number! Please enter an integer." << endl;

                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    break;
                }
                bool found = false;
                for(auto &m : vec)
                {
                    if(m.TableNumber == tablenum)
                    {
                        found = true;
                        cout<<"Enter dish: ";
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        getline(cin,dish3);
                        auto it  = find(m.Dishes.begin(),m.Dishes.end(),dish3);
                        if(it != m.Dishes.end())
                        {
                            m.Dishes.erase(it);
                            cout<<"Dish removed"<<endl;
                        }
                        else    
                            cout<<"The dish is not present in the current order"<<endl;

                        break;
                    }
                   

                }
                if(!found)
                    cout<<"Table is empty,Create New order"<<endl;
            break;
            }
            case 3:
            {
                cout<<"You can ADD MULTIPLE DISHES TO THE EXISTING ORDER"<<endl;
                int tablenum;
                string dish;
                bool found = false;
                cout<<"Enter tableNumber:";
                if(!(cin>>tablenum))
                {
                    cout << "Invalid table number! Please enter an integer." << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(),'\n');
                    break;
                }
               
                for(auto &m : vec)
                {
                    if(m.TableNumber == tablenum)
                    {
                        found = true;
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "Enter dishes (press Enter on an empty line to finish):"<< endl;
                        while(true)
                        {
                            getline(cin,dish);
                            
                            if(dish.empty())
                                break;
                            m.Dishes.push_back(dish);
                            cout<<"Dish added to order!"<<endl;
                        }
                       
                    }
                }
                if(!found)
                    cout<<"Table is empty,Create New order"<<endl;
            break;
            }
            case 4:
            {
                cout<<"You Can DELETE MULTIPLE DISHES FROM THE EXISTING ORDER"<<endl;

                int tablenum;
                string dish;
                bool found = false;
                cout<<"Enter tableNum: ";
                if(!(cin>>tablenum))
                {
                    cout << "Invalid table number! Please enter an integer." << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(),'\n');
                    break;
                }
                for(auto &m : vec)
                {
                    if(m.TableNumber == tablenum)
                    {
                        found = true;
                        cin.ignore(numeric_limits<streamsize>::max(),'\n');
                        cout<<"Enter the dishes to delete:"<<endl;
                        while(true)
                        {
                            getline(cin,dish);
                             if(dish.empty())
                                break;
                            auto it = find(m.Dishes.begin(),m.Dishes.end(),dish);
                            if(it != m.Dishes.end())
                            {
                                m.Dishes.erase(it);
                                cout<<"Dish deleted from the order!"<<endl;
                            }
                            else
                                cout<<"Dish entered not found in the order"<<endl;

                           
                        }
                    }
                    if(!found)
                        cout<<"Table is empty,Create New order"<<endl;
                }
                
            break;
            }

            case 5:
            {
                cout<<"CLEAR THE ORDER USING table number"<<endl;
                int tablenum;
                bool found = false;
                cout<<"Enter table Num: ";
                if(!(cin>>tablenum))
                {
                    cout << "Invalid table number! Please enter an integer." << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(),'\n');
                    break;
                }
                for(auto &m : vec)
                {
                    if(m.TableNumber == tablenum)
                    {
                        found = true;
                        m.Dishes.clear();
                        //m.TableNumber.clear();
                        cout<<"All dishes erased from the order"<<endl;
                        break;
                    }
                }
                if(!found)
                    cout<<"Table is empty,Create New order"<<endl;
            break;
            }
            case 6:
            {
                cout<<"DISPLAY THE ORDER USING table number"<<endl;
                int tablenum;
                cout<<"Enter Table Number: ";
                if(!(cin >> tablenum))
                {
                    cout << "Invalid table number! Please enter an integer." << endl;

                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    break;
                }
                bool found = false;
                for(const auto&m : vec)
                {
                    if(tablenum == m.TableNumber)
                    {
                        found = true;
                        cout<<"DISHES ORDERED BY TABLE NUMBER "<<tablenum<<" is: ";
                        for(const string &s : m.Dishes)
                        {
                            cout<<s<<" ";
                        }
                        cout<<endl;
                        break;
                    }
                }
                if(!found)
                    cout<<"Table is empty,Create New order"<<endl;

            break;
            }
            case 7:
            {
                 return 0;
            }


        }
        

      
    }

}