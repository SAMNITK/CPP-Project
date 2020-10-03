
#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;

struct data{
  string cust_name;
  unsigned long long int contact_num;
  int amount;
  string address;
};

struct item{
  string item_name;
  unsigned long int item_code;
  int price;
  int quantity;
  string category;
};

void add_cust(struct data arr[], int n, int n1);
void delete_data_name(struct data a[], int n);
void delete_data_cont(struct data a[], int n);
void selection_sort_cust_name(struct data arr[], int n);
void binary_search_cust_name(struct data a[], int n, string str);
void selection_sort_cont_number(struct data arr[], int n);
void binary_search_cust_name(struct data a[], int n, string str);
void binary_search_cont_number(struct data a[], int n, unsigned long long int lno);
void show_all_data(struct data a[], int n);

void add_item(struct item arr[], int n, int n2);
void show_all_items(struct item a[], int n);
void delete_item(struct item a[], int n);
void search_item(struct item a[], int n);
void update_item(struct item a[], int n);

//main function
int main(){


struct data a[100];
struct item b[100];
int n = 10, num = 6;

//entries assign to its appropriate fields
a[0].cust_name="HARWINDER SINGH";         a[0].contact_num=9915224086;    a[0].amount=150000;
a[1].cust_name="GURJOT KAUR";             a[1].contact_num=9463375626;    a[1].amount=20000;
a[2].cust_name="GURMEET SINGH";           a[2].contact_num=9354255355;    a[2].amount=600000;
a[3].cust_name="AMANDEEP SINGH";          a[3].contact_num=9501126529;    a[3].amount=80000;
a[4].cust_name="ROHAN";                   a[4].contact_num=9915324018;    a[4].amount=90000;
a[5].cust_name="KULWANT SINGH";     	  a[5].contact_num=9876543210;    a[5].amount=20000;
a[6].cust_name="GURMUKH SINGH";           a[6].contact_num=8956690001;    a[6].amount=30000;
a[7].cust_name="PARAMJEET SINGH";         a[7].contact_num=9357321461;    a[7].amount=10000;
a[8].cust_name="GURBAKHASH SINGH"; 		  a[8].contact_num=9876520611;    a[8].amount=250000;
a[9].cust_name="VIJAY KUMAR";       	  a[9].contact_num=9041414826;    a[9].amount=10000;
a[0].address = "SARDULGARH";		      a[1].address = "AMRITSAR";	  a[2].address = "MANSA";
a[3].address = "KHAIRA KHURD";			  a[4].address = "JATTANA KHURD"; a[5].address = "HAMIRPUR";
a[6].address = "JHANDA KHURD";			  a[7].address = "PANIHARI";	  a[8].address = "BATHINDA";
a[9].address = "SARDULGARH";



b[0].item_name="CINTHOL";         	   b[0].item_code=99152240;    b[0].price=15;     b[0].quantity = 10;
b[1].item_name="CLINIC PLUS";          b[1].item_code=94633756;    b[1].price=65;     b[1].quantity = 12;
b[2].item_name="MAGGI";                b[2].item_code=93542553;    b[2].price=20;     b[2].quantity = 20;
b[3].item_name="LAYS";         		   b[3].item_code=95011269;    b[3].price=15;     b[3].quantity = 30;
b[4].item_name="PARLE G";              b[4].item_code=99153218;    b[4].price=10;     b[4].quantity = 15;
b[5].item_name="BRITANIA";     	       b[5].item_code=98765210;    b[5].price=20;     b[5].quantity = 15;
b[0].category = "BATHING SOAP";		   b[1].category = "SHAMPOO";			 			b[2].category = "MAGGI";
b[3].category = "CHIPS";		       b[4].category = "BISCUIT";            			b[5].category = "BISCUIT";

	int choice1;
	string c_name;
	up :
		system("CLS");
		cout << "\n\n\n\n\t\t\t\t    **********************************************\n";
		cout << "\t\t\t\t\t\tSHOP MANAGEMENT SYSTEM\n\n";
		cout << "\t\t\t\t\tEnter 1 for check detail about items : \n";
		cout << "\t\t\t\t\tEnter 2 for check detail about customer : \n";
		cout << "\t\t\t\t\tEnter 3 for exit : \n";
		cout << "\n\t\t\t\t    **********************************************\n";
		while(1){
			cout << " \t\t\t\t\t\t\t";
		cin >> choice1;
		switch(choice1)
		{
			case 1 :
				system("CLS");
				int choice, n2;
				while(1)
				{
					cout << "Enter 1 for add new item : ";
					cout << "\nEnter 2 for search item : ";
					cout << "\nEnter 3 for show all items : ";
					cout << "\nEnter 4 for delete item : ";
					cout << "\nenter 5 for go to main menu : ";
					cout << "\nEnter 6 for exit \n";

					cin >> choice;

					switch(choice)
					{
					case 1 :
						system("CLS");
						cout << "How many customers detail you want to add : ";
						cin >> n2;
						add_item(b, num, n2);
						num = num + n2;
						break;

					case 2 :
						system("CLS");
						search_item(b, num);
						break;
					case 3 :
						system("CLS");
						show_all_items(b, num);
						break;
					case 4 :
						system("CLS");
						delete_item(b, num);
						num--;
						break;
					case 5 :
						goto up;
						break;
					case 6 :
						system("CLS");
						exit(1);
					default :
						system("CLS");
						cout << "Enter valid case";
						break;

					}
				}
				break;
			case 2 :
				system("CLS");
				int ch, n1;
			while(1)
			{
				cout << "Enter 1 for add new customer detail : ";
				cout << "\nEnter 2 for sort customer detail : ";
				cout << "\nEnter 3 for search customer detail : ";
				cout << "\nEnter 4 for show all customer detail : ";
				cout << "\nEnter 5 for delete customer detail : ";
				cout << "\nenter 6 for go to main menu : ";
				cout << "\nEnter 7 for exit \n";

				cin >> ch;
				switch(ch)
				{
				case 1 :
					system("CLS");
					cout << "How many customers detail you want to add : ";
					cin >> n1;
					add_cust(a, n, n1);
					n = n + n1;
					break;

				case 2 :
					system("CLS");
					int ch2;
					cout << "Enter 1 for sort by name : \n";
					cout << "Enter 2 for sort by contact : \n";
					cin >> ch2;
					switch(ch2)
					{
					case 1 :
						selection_sort_cust_name(a, n);
						break;

					case 2 :
						selection_sort_cont_number(a, n);
						break;
					}
				break;

				case 3 :
					system("CLS");
					int ch5;
					cout << "Enter 1 for search cutomer by name \n";
					cout << "Enter 2 for search customer by contact \n";
					cin >> ch5;
					switch(ch5)
					{
					case 1 :
						int m;
						selection_sort_cust_name(a, n);
						cout<<"Enter the 'Customer Name want to search from record : ";
						cin.ignore();
						getline(cin, c_name);
						for(m=0; m<c_name.length(); m++)
							c_name[m] = toupper(c_name[m]);
						binary_search_cust_name(a, n, c_name);
						break;

            		case 2 :
            			selection_sort_cont_number(a, n);
						cout<<"Enter the 'Contact' want to search from record : ";
						unsigned long long int cont1;
						cin>>cont1;
						binary_search_cont_number(a, n, cont1);
						break;
            		}
            	break;

				case 4 :
					system("CLS");
					show_all_data(a, n);
					break;

				case 6 :
					goto up;
					break;
				case 5 :
					system("CLS");
					int ch4;
					cout << "Enter 1 for delete customer detail by name \n";
					cout << "Enter 2 delete customer detail by contact \n";
					cin >> ch4;
					switch(ch4)
					{
					case 1 :
						delete_data_name(a, n);
						n--;
            			break;

            		case 2 :
            			delete_data_cont(a, n);
						n--;
            			break;
            		}

					break;

				case 7 :
					system("CLS");
					exit(1);
					break;

				default :
					system("CLS");
					cout << "Enter valid choice\n";
					break;
				}

			}
			break;
			case 3 :
				exit(1);
			default :
				cout << "enter a valid case\n";
				break;
		}
	}



return 0;
}


//add customer
void add_cust(struct data arr[], int n, int n1)
{
		int i,j,k, n2;
		n2 = n + n1;
		for(i=n; i<n2; i++)
		{
			cout << "Enter customer's name" << endl;
			cin.ignore();
			getline(cin, arr[i].cust_name);
			for(j=0; j<arr[i].cust_name.length(); j++)
				arr[i].cust_name[j] = toupper(arr[i].cust_name[j]);

			cout << "Enter contact of customer\n";
			cin >> arr[i].contact_num;

			cout << "Enter shopping amount of customer\n";
			cin >> arr[i].amount;

			cin.ignore();
			cout << "Enter address of customer\n";
			getline(cin, arr[i].address);
			for(k=0; k<arr[i].address.length(); k++)
				arr[i].address[k] = toupper(arr[i].address[k]);
		}
		cout << "Record added successfully" << endl;
}

//display all customer data
void show_all_data(struct data a[], int n)
{
	cout<<endl<<"CUSTOMER-NAME"<<"\t\t"<<"CONTACT-NUMBER"<<"\t\t    "<<"SHOPING AMOUNT\t\t"<<"  ADDRESS"<<endl<<endl;
	cout<<"......................................................................................"<<endl;
	//display the details
	for(int i=0; i<=n-1; i++)
	{
		cout<<setw(25)<<setiosflags(ios::left)<<a[i].cust_name;
		cout<<setw(15)<<setiosflags(ios::left)<<a[i].contact_num<<"\t\t";
		cout<<setw(25)<<setiosflags(ios::left)<<a[i].amount;
		cout<<setw(2)<<setiosflags(ios::left) << a[i].address << endl;
		cout<<"......................................................................................"<<endl;
	}
	cout<<endl;
}


//delete customer by name
void delete_data_name(struct data a[], int n)
{
	int i, j, k, temp, flag = 0;
	string str;
	cout << "Enter name of customer which you want delete\n";
	cin >> str;
	for(j=0; j<str.length(); j++)
		str[j] = toupper(str[j]);
	for(i=0; i<n; i++)
	{
		if(a[i].cust_name == str)
		{
			temp = i;
			flag = 1;
			break;
		}
	}

    if(flag == 0)
        cout << "Record not found\n";
    else
    {
        for(k=temp; k<n-1; k++)
		{
			a[k].cust_name = a[k+1].cust_name;
			a[k].contact_num = a[k+1].contact_num;
			a[k].amount = a[k+1].amount;
		}
		cout << "Record deleted successfully" << endl;
	}
}

// delete by customer contact
void delete_data_cont(struct data a[], int n)
{
	int x, y, z, temp1, flag = 0;
    unsigned long long int cont;
	cout << "Enter contact of customer which you want delete\n";
	cin >> cont;
	for(y=0; y<n; y++)
	{
		if(a[y].contact_num == cont)
		{
			temp1 = y;
			flag = 1;
			break;
		}
	}

    if(flag == 0)
        cout << "Record not found\n";
    else
    {
       	for(z=temp1; z<n-1; z++)
		{
			a[z].cust_name = a[z+1].cust_name;
			a[z].contact_num = a[z+1].contact_num;
			a[z].amount = a[z+1].amount;
		}
		cout << "Record deleted successfully" << endl;
	}
}


//for binary search functions...
void selection_sort_cust_name(struct data arr[], int n)
{
     //for ascending order...
  for(int i=0; i<n-1; i++)
  {
    int min_index=i;
    for(int j=i; j<=n-1; j++)
    {
      if(arr[j].cust_name<arr[min_index].cust_name)
        min_index=j;
        }
        swap(arr[i],arr[min_index]);
  }

return;
}

void binary_search_cust_name(struct data a[], int n, string str){

int low=0;
int high=n-1, flag = 0;

while(low<=high){
  //int mid=(low+high)/2;
  int mid=low+(high-low)/2;

  if(a[mid].cust_name==str)
  {
      flag = 1;

      cout<<endl<<"CUSTOMER-NAME"<<"\t\t"<<"CONTACT-NUMBER"<<"\t\t    "<<"SHOPING AMOUNT\t\t"<<"  ADDRESS"<<endl<<endl;
	  cout<<"................................................................................................"<<endl;
		cout<<setw(25)<<setiosflags(ios::left)<<a[mid].cust_name;
		cout<<setw(15)<<setiosflags(ios::left)<<a[mid].contact_num<<"\t\t";
		cout<<setw(25)<<setiosflags(ios::left)<<a[mid].amount;
		cout<<setw(2)<<setiosflags(ios::left) << a[mid].address << endl;
		cout<<"................................................................................................"<<endl;
	cout<<endl;
      break;
  }

  if (str<a[mid].cust_name)
       high=mid-1;

       else
        low=mid+1;

  }

    if(flag == 0)
            cout << "Record not found\n";
}


//sorting function for Contact number
void selection_sort_cont_number(struct data arr[], int n)
{
     //for ascending order...
  for(int i=0; i<n-1; i++)
  {
    int min_index=i;
    for(int j=i; j<=n-1; j++)
    {
      if(arr[j].contact_num<arr[min_index].contact_num)
        min_index=j;
    }
        swap(arr[i],arr[min_index]);
  }

return;
}

void binary_search_cont_number(struct data a[], int n, unsigned long long int lno){

int low=0;
int high=n-1 , flag = 0;

while(low<=high){
  //int mid=(low+high)/2;
  int mid=low+(high-low)/2;

  if(a[mid].contact_num==lno)
  {
      flag = 1;

      cout<<endl<<"CUSTOMER-NAME"<<"\t\t"<<"CONTACT-NUMBER"<<"\t\t    "<<"SHOPING AMOUNT\t\t"<<"  ADDRESS"<<endl<<endl;
	  cout<<"................................................................................................"<<endl;
		cout<<setw(25)<<setiosflags(ios::left) << a[mid].cust_name;
		cout<<setw(15)<<setiosflags(ios::left) << a[mid].contact_num<<"\t\t";
		cout<<setw(25)<<setiosflags(ios::left) << a[mid].amount;
		cout<<setw(2)<<setiosflags(ios::left) << a[mid].address << endl;
		cout<<"................................................................................................"<<endl;
	cout<<endl;
      break;
  }

  if (lno<a[mid].contact_num)
       high=mid-1;

       else
        low=mid+1;

  }

    if(flag == 0)
            cout << "Record not found\n";

    return;
}


//item's functions
void add_item(struct item arr[], int n, int n2)
{
	int i,j,k, n3;
		n3 = n + n2;
		for(i=n; i<n3; i++)
		{
			cout << "Enter item's name" << endl;
			cin.ignore();
			getline(cin, arr[i].item_name);
			for(j=0; j<arr[i].item_name.length(); j++)
				arr[i].item_name[j] = toupper(arr[i].item_name[j]);

			cout << "Enter code of item\n";
			cin >> arr[i].item_code;

			cout << "Enter price of item\n";
			cin >> arr[i].price;

			cout << "Enter quantity of item\n";
			cin >> arr[i].quantity;

			cin.ignore();
			cout << "Enter category of item\n";
			getline(cin, arr[i].category);
			for(k=0; k<arr[i].category.length(); k++)
				arr[i].category[k] = toupper(arr[i].category[k]);
		}
		cout << "Record added successfully" << endl;
}


void show_all_items(struct item a[], int n)
{

	cout<<endl<<"ITEM-NAME"<<"\t\t"<<"ITEM-CODE"<<"\t\t    "<<"ITEM-PRICE\t\t"<<"ITEM-QUANTITY\t\t"<<"ITEM-CATEGORY"<<endl<<endl;
	cout<<"................................................................................................................"<<endl;
	//display the details
	for(int i=0; i<=n-1; i++)
	{
		cout<<setw(25)<<setiosflags(ios::left)<<a[i].item_name;
		cout<<setw(30)<<setiosflags(ios::left)<<a[i].item_code;
		cout<<setw(22)<<setiosflags(ios::left)<<a[i].price;
		cout<<setw(1)<<setiosflags(ios::left) << a[i].quantity << "\t\t\t";
		cout<</*setw(2)<<setiosflags(ios::left) << */a[i].category << endl;
		cout<<"................................................................................................................"<<endl;
	}
	cout<<endl;

}

void delete_item(struct item a[], int n)
{
	int x, y, z, temp1, flag = 0;
    unsigned long int code;
	cout << "Enter code of item which you want to delete\n";
	cin >> code;
	for(y=0; y<n; y++)
	{
		if(a[y].item_code == code)
		{
			temp1 = y;
			flag = 1;
			break;
		}
	}

    if(flag == 0)
        cout << "Record not found\n";
    else
    {
       	for(z=temp1; z<n-1; z++)
		{
			a[z].item_name = a[z+1].item_name;
			a[z].item_code = a[z+1].item_code;
			a[z].price = a[z+1].price;
			a[z].quantity = a[z+1].quantity;
			a[z].category = a[z+1].category;
		}
		cout << "Record deleted successfully" << endl;
	}

}

void search_item(struct item a[], int n)
{
	int flag = 0, i;
	unsigned long int cod;
	cout << "Enter item code which you want to search \n";
	cin >> cod;


	for(i=0; i<n; i++)
	{
		if(a[i].item_code == cod)
		{
			cout<<endl<<"ITEM-NAME"<<"\t\t"<<"ITEM-CODE"<<"\t\t    "<<"ITEM-PRICE\t\t"<<"ITEM-QUANTITY\t\t"<<"ITEM-CATEGORY"<<endl<<endl;
			cout<<"................................................................................................................"<<endl;
			cout<<setw(25)<<setiosflags(ios::left)<<a[i].item_name;
			cout<<setw(30)<<setiosflags(ios::left)<<a[i].item_code;
			cout<<setw(22)<<setiosflags(ios::left)<<a[i].price;
			cout<<setw(1)<<setiosflags(ios::left) << a[i].quantity << "\t\t\t";
			cout<</*setw(2)<<setiosflags(ios::left) << */a[i].category << endl;
			cout<<"................................................................................................................"<<endl;
			cout<<endl;
			flag = 1;
			break;
		}
		else
			flag = 0;
	}

    if(flag == 0)
            cout << "Record not found\n";

    return;
}

void update_item(struct item a[], int n)
{

}

