/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{

    int subject, subsubject;
    double scienceprice = 12.50;
    double mathprice = 11.99;
    double englishprice = 10.25;
    double techprice = 13.00;
    double miscellaneous = 8.50;
    double total= 0;
    double payment, tax, change;
    char option;
    cout<<" ___ _  _  __  ___ __  _ ___   __  __  __   __  _  __   ___ __  _   _   ___ ________ _  __  __  _"<<endl;  
    cout<<"| _,\ || |/__\| __|  \| | \ \_/ / |  \/__\ /__\| |/ /  / _//__\| | | | | __/ _/_   _| |/__\|  \| | "<<endl;
    cout<<"| v_/ >< | \/ | _|| | ' | |> , <  | -< \/ | \/ |   <  | \_| \/ | |_| |_| _| \__ | | | | \/ | | ' | "<<endl;
    cout<<"|_| |_||_|\__/|___|_|\__|_/_/ \_\ |__/\__/ \__/|_|\_\  \__/\__/|___|___|___\__/ |_| |_|\__/|_|\__| "<<endl;

    system("PAUSE");
    system("CLS");
    
  
 cout<<" - - - - - - - - - - - - - - - - - - - - -"<<endl;
 cout<<"Welcome to the Phoenix Education Collection!"<<endl;
 
 
 for (int i = 1; i<6; i++){
    cout<<"Would you like the explore the library? (Y or N)"<<endl;
    cin>>option;
    
 if (option == 'y' || option == 'Y')
 {

    switch(option)
    {
    {case 'Y':
     case 'y':
        cout<<"Library: "<<endl;
        cout<<"1 - Science"<<endl;
        cout<<"2 - Math"<<endl;
        cout<<"3 - English"<<endl;
        cout<<"4 - Tech"<<endl;
        cout<<"5 - Other"<<endl;
        cout<<"- - - - - - - - - - - - - - - - - - - - - -"<<endl;
        cout<<"Please choose one subject"<<endl;
        cin>>subject;
    if (subject == 1)
        {
        cout<<"Sub-Subjects: (pick one)"<<endl;
        cout<<"1 - Science 9"<<endl;
        cout<<"2 - Science 10"<<endl;
        cout<<"3 - Biology 11"<<endl;
        cout<<"4 - Biology 12"<<endl;
        cout<<"5 - Chemistry 11"<<endl;
        cout<<"6 - Chemistry 12"<<endl;
        cout<<"7 - Physics 11"<<endl;
        cout<<"8 - Physics 12"<<endl;
        cin>>subsubject;
        total = total + scienceprice;
    }
    if (subject == 2)
        {
        cout<<"Sub-Subject - pick one"<<endl;
        cout<<"9 - Mathematics 9"<<endl;
        cout<<"10 - Mathematics 10"<<endl;
        cout<<"11- Functions - U"<<endl;
        cout<<"12 - Advanced Functions "<<endl;
        cout<<"13 - Calculus and Vectors"<<endl;
        cout<<"14- Functions and Applications"<<endl;
        cout<<"15 - Foundations of College Mathematics "<<endl;
        cout<<"16 - Mathematics for Everyday Life"<<endl;
        cout<<"17 - Mathematics for Everyday Work and Life"<<endl;
        cin>>subsubject; 
        total = total + mathprice;
    }
    if (subject == 3)
    {
        cout<<"Sub-Subjects: (pick one)"<<endl;
        cout<<"18 - English 9"<<endl;
        cout<<"19 - English 10"<<endl;
        cout<<"20 - English 11: Indigenous Voices (U)"<<endl;
        cout<<"21 - English 11: Indigenous Voices (C)"<<endl;
        cout<<"22 - English 11: Indigenous Voices (W)"<<endl;
        cout<<"23 - English 12 (U)"<<endl;
        cout<<"24 - English 12 (C)"<<endl;
        cout<<"25 - English 12 (W)"<<endl;
        cin>>subsubject;
        total = total + englishprice;
 
    }
     if (subject == 4)
    {
        cout<<"Sub-Subjects: (pick one)"<<endl;
        cout<<"26 - Exploring Technologies"<<endl;
        cout<<"27 - Computer Science 11"<<endl;
        cout<<"28 - Computer Science 12"<<endl;
        cout<<"29 - Computer Engineering 11"<<endl;
        cout<<"30 - Computer Engineering 12"<<endl;
        cout<<"31 - Construction"<<endl;
        cout<<"32 - Architectural Design"<<endl;
        cin>>subsubject;
        total = total + techprice;
     }
    if (subject == 5)
    {
        cout<<"Sub-Subjects: (pick one)"<<endl;
        cout<<"33 - Hospitality and Tourism"<<endl;
        cout<<"34 - Visual Arts"<<endl;
        cout<<"35 - Digital Media"<<endl;
        cout<<"36 - Music"<<endl;
        cout<<"37 - Business"<<endl;
        cout<<"38 - Accounting"<<endl;
        cout<<"39 - Food and Culture"<<endl;
        cout<<"40 - Family Studies"<<endl;
        cin>>subsubject;
        total = total + miscellaneous; 
 
    }
    {case 'N':
    case 'n': 
        cout<<"Come Again Soon!"<<endl;
       
    }
}
}
 
 cout<<"Your Total is: $"<<total<<endl;
 cout<<"How much would you like to pay?"<<endl;
 cin>>payment;
 
 change = payment - total;
 
 cout<<"••••••••••••••••• RECEIPT •••••••••••••••••"<<endl;
 cout<<"Math Books: $"<<mathprice<<endl;
 cout<<"Science Books: $"<<scienceprice<<endl;
 cout<<"English Books: $"<<englishprice<<endl;
 cout<<"Tech Books: $"<<techprice<<endl;
 cout<<"Other Books: $"<<miscellaneous<<endl;
 cout<<"- - - - - - - - - - - - - - -"<<endl;
 cout<<"Total: $"<<total<<endl;
 cout<<"You paid: $"<<payment<<endl;
 cout<<"Change: $"<<change<<endl;
 
 cout<<"Thank you for visitng Phoenix Book Collection, come again soon!"<<endl;
}
}
}

