#include<iostream>
#include<string>
using namespace std;
class Product
{
	private:
		int productId;
		string productName;
		float price;
		int montlySales[12];
		int totalQuantity;
		float totalBill;
	
	
	public:
	void acceptDetails()
	{
		cout<<"Enter Product ID:  ";
		cin>>productId;
		cin.ignore();
		cout<<"Enter product  Name";
		getline(cin, productName);	
		cout<<"Enter Price per unit: ";
		cin>>price;
		cout<<"Enter montly sales for 12 months : ";
		totalQuantity =0;
		for(int i =0;i<12;i++)
		{
			cin>montlySales[i];
			totalQuantity+=monthlySales[i];
		}

		   totalBill = totalQuantity * price;
	}

void displayDetails()
{
 cout<<"/n Product ID: "<<productId<<endl;
 cout<<"Product Name :"<<product<<productName<endl;
 cout<<"Price :  "<<price<<endl;
 cout<<"Total Quantity Sold: "<<toatalQuantity<<endl;
 cout<<"Total Bill "<<totalBill<<endl;
}
	
float getotalBill()  const {
return totalBill;
}
};

int main(){
	int n;
	cout<<"Enter number of products: ";
	cin>>n;
 
	Product products[100];
	float grandTotal=0;

	for(int i=0;i<n;i++)

