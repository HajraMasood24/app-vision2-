#include <iostream>
#include <conio.h>
using namespace std;
void menu();
int ttlbill(int espressoQ, int cappuccinoQ, int latteQ, int americanoQ, int chaiQ, int greenTeaQ, int chaiLatteQ, int browniesQ, int cheesecakeQ, int cookiesQ);
string placeorder();
string feedback();
void golden();
void reset();
void login();

int total=0;
int op;
string o,m;
int q;
int espressoQ, cappuccinoQ, latteQ, americanoQ;
int chaiQ, greenTeaQ, chaiLatteQ, browniesQ;
int cheesecakeQ, cookiesQ;
string username[3]={"Hajra","Sara"};
int userpin[3]={123,456};

main()
{
while(true)
	{
	    system("cls");
	    system("Color E0");
	
        cout<<"###################################################################"<<endl;
        cout<<" 	 	   		@@                                       	   "<<endl; 
        cout<<" 	       		@@                                         		"<<endl; 
        cout<<"  	       		@@      @@@  @@@@ @@@@ @@@@                		 "<<endl; 
        cout<<" 	      		@@     @   @  @@   @@  @                      "<<endl; 
        cout<<"   	       		@@  @@ @@@@@  @@   @@  @@@                   "<<endl; 
        cout<<" 		 @@     @@@@@@ @   @  @@   @@  @@@@@          		 "<<endl; 
        cout<<"  		 @@				 		                      	 "<<endl; 
        cout<<" 		 @@       @@@  @  @ @@@@  @@@   @@@            		 "<<endl; 
        cout<<"  		 @@      @   @ @  @ @  @ @   @ @   @				"<<endl; 
        cout<<"  	 	 @@      @   @ @  @ @  @ @   @ @@@@             			"<<endl; 
        cout<<"  		 @@@@@@@  @@@   @@  @  @  @@ @  @@@@@            		 "<<endl; 
        cout<<"                                	 	@                      		 "<<endl; 
        cout<<"                           	 	  @@                         "<<endl; 
        cout << "**************************************************************" << endl;
        cout << "		* 		  Where every sip tells a story     *                 "<< endl;
        cout << "		*  	 Coffee  •  Comfort  •  Community       *                 " << endl;
        cout << "***************************************************************       "<< endl;
        cout<<"		1.Menu"<<endl;
        cout<<"		2.Feedback"<<endl;
        cout<<"     3.Golden Card"<<endl;
	cout<<"         4.Login(Only for Admins)"<<endl;
        cout<<"##################################################################"<<endl;
        cout<<"Select an option:";
        cin>>op;

        if(op==1)
        {
            menu();
            placeorder();
            ttlbill(espressoQ, cappuccinoQ, latteQ, americanoQ, chaiQ, greenTeaQ, chaiLatteQ, browniesQ, cheesecakeQ, cookiesQ);
            reset();
        }
        else if(op==2)
        {
            feedback();
        }
        else if(op==3)
        {
            golden();
        }
	else if(op==4)
	{
	    login();
	}
    else{
        cout<<"Invalid option";
    }
    }
}
void menu()
{
	system("cls");
	if(op==1)
	{
		cout<<"-----------------------------------------------------------------"<<endl;
		cout<<"                           Main Menu                             "<<endl;
		cout<<"-----------------------------------------------------------------"<<endl;
		cout<<"   COFFEE                                "<<endl;
		cout<<"      - Espresso   ______________________Rs.750"<<endl;
		cout<<"      - Cappuccino  _____________________RS.650"<<endl;
		cout<<"      - Latte   _________________________Rs.800"<<endl;
		cout<<"      - Americano  ______________________Rs.500"<<endl;
		cout<<"                                                   "<<endl;
		cout<<"   TEA                                             "<<endl;
		cout<<"     -SpecialChai  ____________________Rs.100  "<<endl;
		cout<<"     -GreenTea   ______________________Rs.150"   <<endl;
		cout<<"     -ChaiLatte   _____________________Rs.150"<<endl;
		cout<<"                                                      "<<endl;
		cout<<"   DESSERTS                                           "<<endl;
		cout<<"     -Brownies  _______________________Rs.650(3pcs)"<<endl;
		cout<<"     -Cheesecake  _____________________Rs.300"<<endl;
		cout<<"     -Cookies  ________________________Rs.500(6pcs)"<<endl;
	}
}
string placeorder()
{
    
    string o;
    int q;
    cout <<"Place your order here(type 'done' to finish ordering):"<<endl;
    
    while(true)
    {
        cout<<"ITEM:"<<endl;
        cin>>o;
        
        if(o=="done")
        {
            break;
        }
        cout<<"Qunatity:";
        cin>>q;
        if (o=="Espresso")
        {
            espressoQ += q;
        }
        else if (o == "Cappuccino")
        {
            cappuccinoQ += q;
        }
        else if (o == "Latte")
        {
            latteQ += q;
        }
        else if (o == "Americano")
        {
            americanoQ += q;
        }
        else if (o == "SpecialChai")
        {
            chaiQ += q;
        }
        else if (o == "GreenTea")
        {
            greenTeaQ += q;
        }
        else if (o == "ChaiLatte")
        {
            chaiLatteQ += q;
        }
        else if (o == "Brownies")
        {
            browniesQ += q;
        }
        else if (o == "Cheesecake")
        {
            cheesecakeQ += q;
        }
        else if (o == "Cookies")
        {
            cookiesQ += q;
        }
	else
	{
	   cout<<"Item is not on list"<<endl;
	}
    }   

    
    cout<<"Order placed successfully!"<<endl;
    return "Order placed";
    cout<<" "<<endl;
    cout<<" "<<endl;      	
}
int ttlbill(int espressoQ, int cappuccinoQ, int latteQ, int americanoQ, int chaiQ, int greenTeaQ, int chaiLatteQ, int browniesQ, int cheesecakeQ, int cookiesQ)
{
    string m,name;
    int pin;
    char g;
	int espressoPrice = 750, cappuccinoPrice = 650, lattePrice = 800, americanoPrice = 500; int chaiPrice = 100, greenTeaPrice = 150, chaiLattePrice = 150; int browniesPrice = 650, cheesecakePrice = 300, cookiesPrice = 500;
    total = (espressoQ * espressoPrice) +(cappuccinoQ * cappuccinoPrice) +(latteQ  * lattePrice) + (americanoQ * americanoPrice) +(chaiQ * chaiPrice) + (greenTeaQ * greenTeaPrice) + (chaiLatteQ * chaiLattePrice) +(browniesQ * browniesPrice) + (cheesecakeQ * cheesecakePrice) +(cookiesQ * cookiesPrice);
    
    cout<<"Choose a payment method:"<<endl;
    cout<<" a.Credit card     b.Cash                    |TYPE a FOR CARD AND b FOR CASH|"<<endl;
    cin>>m;
    cout<<"ARE YOU A GOLDEN CARD HOLDER"<<endl;
    cout<<"a.Yes               b.No"<<endl;
    cin>>g;
    if(g=='a'){
	
	bool valid= false;
        cout<<"Enter your username:";
        cin>>name;
        cout<<"Enter your pin:";
        cin>>pin;
        
            for(int i=0;i<3;i++)
            {
            if(name==username[i] && pin==userpin[i]){
		valid=true;
                cout<<"Your total bill is:Rs.";
                total=total-(total*0.10);
                cout<< total;
                cout<<" "<<endl;
            }
            } 
	if(!valid){
		cout<<"Invalid username or pin!" << endl;
        }
      }
        
    if(g=='b'){
        cout<<"Your total bill is:Rs.";
        cout<< total;
        cout<<" "<<endl;
    }
    cout<<"Press enter key to go back to main page"<<endl;
    getch();
    system("cls");
    return total;
}

string feedback()
{
    string fb;
    cout << "*******************************************************************************" << endl;
    cout << "Please give us your feedback:" << endl;
    cout << "FEEDBACK: ";
    cin >> fb;
    cout << "Thank You for giving us your feedback" << endl;
    cout << "Click anywhere on the screen" << endl;    
    getch();
    system("cls");	
    return fb;
}
void reset()
{
    espressoQ = 0;
    cappuccinoQ = 0;
    latteQ = 0;
    americanoQ = 0;
    chaiQ = 0;
    greenTeaQ = 0;
    chaiLatteQ = 0;
    browniesQ = 0;
    cheesecakeQ = 0;
    cookiesQ = 0;
}
void golden()
{

    char option;
    cout<<"###################################################################################"<<endl;
    
    cout<<"Press a for golden card registration"<<endl;
    cout<<"Press b to view current golden card holder"<<endl;
    cout<<"Press c to update golden card holder information"<<endl;
    cout<<"Press d to delete a golden card holder"<<endl;

    cin>>option;
    
    
    if(option=='a'){
       
        cout<<"Enter your username:";
        cin>>username[2];
        cout<<"Enter a pin:";
        cin>>userpin[2];
        cout<<"CONGRATULATION! You are a GOLDEN CARD holder now.";
        

       	 getch();
        system("cls");

    }
    else if(option=='b'){
       
        for(int i=0;i<3;i++)
        {
            cout<<"USERNAME:"<<username[i]<<"\t"<<"PIN:"<<userpin[i]<<endl;
        }
         getch();
        system("cls");
    }
    else if(option=='c'){
        for(int i=0;i<3;i++)
        {
            cout<<"USERNAME:"<<username[i]<<"\t"<<"PIN:"<<userpin[i]<<endl;
        }
        int j;
        cout<<"Enter ENTRY of member you want to update(i.e. 0 for first):";
        cin>>j;
        cout <<"Enter new username: ";
        cin >> username[j];
        cout << "Enter new pin: ";
        cin >> userpin[j];
        cout<<"Information updated:";
        for(int i=0;i<3;i++)
        {
            cout<<"USERNAME:"<<username[i]<<"\t"<<"PIN:"<<userpin[i]<<endl;
        }
        getch();
        system("cls");
    }
     else if (option == 'd')
      { 
         for(int i=0;i<3;i++)
        {
            cout<<"USERNAME:"<<username[i]<<"\t"<<"PIN:"<<userpin[i]<<endl;
        }
        int j;
        cout<<"Enter ENTRY of member you want to delete(i.e. 0 for first):";
        cin>>j;
            username[j] = "";
            userpin[j] = 0;
            
            cout << "Golden Card holder deleted successfully." << endl;
            for(int i=0;i<3;i++)
        {
            cout<<"USERNAME:"<<username[i]<<"\t"<<"PIN:"<<userpin[i]<<endl;
        }
            getch();
        system("cls");
        } 
}
void login()
{
	int pin;
    char option;
	cout<<"#####################################################################################"<<endl;
	cout<<"ENTER PIN"<<endl;
	cin>>pin;
	while(true)
	{
		
		if(pin == 1010){
			cout<<"********************WELCOME TO ADMIN PAGE**************************"<<endl;
	
			cout<<"Dashboard Summary:"<<endl;
			cout<<"  "<<endl;
			cout<<"Menu items:20"<<endl;
            cout<<"a.Total balance"<<endl;
            cout<<"b.Golden Card information"<<endl;
            cin>>option;
            if(option=='a'){
                cout<<total;
            }
            if(option=='b'){
                for(int i=0;i<3;i++)
            {
            cout<<"USERNAME:"<<username[i]<<"\t"<<"PIN:"<<userpin[i]<<endl;
            }
            }
			cout<<"still in process"<<endl;	
			break;
			}
		else {
			cout<<"You have entered wrong pin!"<<endl;
			break;
			}

	}
			
	cout<<"Press enter key to return"<<endl;
	getch();
    	system("cls");	
    	
}
	
