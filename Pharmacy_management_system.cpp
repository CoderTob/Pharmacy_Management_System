#include<iostream>
using namespace std;

class Pharamacy{

// -------------------------------------------------------------
//                         CLASS ATTRIBUTES
// -------------------------------------------------------------
    string med_name[100];
    string expiry_date[100];
    double price[100];
    public:
    static int count;

// -------------------------------------------------------------
//                         TO ADD DATA
// -------------------------------------------------------------


    void Add(){
        int number;
        cout<<"Number of medicines want to add : ";
        cin>>number;
        for (int i = 0; i < number; i++)
        {
        cout<<"Add Medicine Name : ";
        cin>>med_name[i];
        cout<<"Add expiry date of "<<med_name[i]<<": ";
        cin>>expiry_date[i];
        cout<<"Add price of "<<med_name[i]<<" : ";
        cin>>price[i];
        cout<<"---------------------------------"<<endl;
        count++;
        }
    }

// -------------------------------------------------------------
//                         TO SHOW DATA
// -------------------------------------------------------------

    void Show(){

            if (count==1)
            {
                cout<<endl<<" ^-^'''NO MEDICINE FOUND'''^-^      "<<endl;
            }
        else{
        cout<<"           ********************************************"         <<endl;
        cout<<"           ***                                      ***"     <<endl;
        cout<<"           ***          List of  medicines          ***"     <<endl;
        cout<<"           ***                                      ***"     <<endl;
        cout<<"           ********************************************"         <<endl<<endl;
        for (int i = 0; i<=count; i++)
        {
        
            cout<<"Medicine Name : "<<med_name[i]<<endl<<"Expiry Date : "
            <<expiry_date[i]<<endl<<"Price : "<<price[i]<<endl
            <<"---------------------------"<<endl;}
    }
    }

// -------------------------------------------------------------
//                         TO DELETE DATA
// -------------------------------------------------------------
    void Delete(){
        string medicine;
        cout<<"Enter Medicine Name You Want To Delete : ";
        cin>>medicine;
        int found=0;
        int j,i;
    for(i=0; i<count; i++)
    {
        if(med_name[i]==medicine)
        {
            for(j=i; (j<(count-1)); j++){
                med_name[j] = med_name[j+1];
                price[j] = price[j+1];
                expiry_date[j] = expiry_date[j+1];
                found++;
                i--;
                count--;
                }
        }
    }
        if(found==0){
        cout<<"\nElement doesn't found in the Array!"<<endl;}
        else{
        cout<<"\nElement Deleted Successfully!"<<endl;}
        // Show(); 

    }

// -------------------------------------------------------------
//                         TO UPDATE DATA
// -------------------------------------------------------------

    void update(){
    string new_medicine;
    double new_exp;
    int new_price;
    
    cout<<"Enter Medicine Name You Want To Update : ";
    cin>>new_medicine;  
    

     for (int i = 0; i <count; i++)
        {
            if (med_name[i] == new_medicine)
        {
            cout<<endl<<"Medicine Found In List!!!!!!"<<endl;
            cout<<"Enter New Medicine Name: ";
            cin>>med_name[i];
            cout<<"Enter Expiry Date Of "<<med_name[i]<<": ";
            cin>>expiry_date[i];
            cout<<"Enter Price Of "<<med_name[i]<<": ";
            cin>>price[i];
            Show();
        }
        else{
            cout<<endl<<"Sorry,Medicine Not Found!"<<endl;
        }
        }
    }
};

// -------------------------------------------------------------
//                         DEFINE STATIC DATA
// -------------------------------------------------------------

int Pharamacy::count = 1;

// -------------------------------------------------------------
//                         MAIN FUNCTION
// -------------------------------------------------------------
int main(){
    Pharamacy med1;
    int i=1;
    while (true)
    {
    cout<<endl<<endl;        
    cout<<"1: Show Data "<<endl;
    cout<<"2: Add Data "<<endl;
    cout<<"3: Update Data "<<endl;
    cout<<"4: Delete Data "<<endl;
    cout<<"5: Exit Process "<<endl;
    cout<<endl<<endl;
    cout<<"Enter Your Choice: ";
    int choice;
    cin>>choice;
    cout<<endl<<endl;
    switch (choice)
    {
    case 1:choice==1;
        med1.Show();
        break;
    
    case 2:choice==2;
        med1.Add();
        break;
    
    case 3:choice==3;
        med1.update();
        break;

    case 4:choice ==4;
        med1.Delete();
        break;

    case 5:choice ==5;
        exit(0);
        break;
    }
}
    
    return 0;
}