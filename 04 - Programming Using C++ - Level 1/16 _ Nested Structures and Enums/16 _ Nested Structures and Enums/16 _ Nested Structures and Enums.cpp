

#include <iostream>
using namespace std;
// structures فيها بس properties
// structures ما بتقدر تحط فيها functions

// structures + functions => class

enum enColor { Red, Green, Yellow, Blue };
enum enGender { Male, Female };
enum enMaritalStatus { Single, Married };

struct stAddress
{
	string StreetName;
	string BuildingNo;
	string POPox;
	string ZipCode;
};

struct stContactInfo
{
	string Phone;
	string Email;

	stAddress Address;
};

struct stPerson
{
	string FirstName;
	string LastName;

	stContactInfo ContactInfo;

	enMaritalStatus MaritalStatus;
	enGender Gender;
	enColor FavouriteColor;

};

int main()
{
	stPerson Person1;

	Person1.FirstName = "Mohamad Khaled";
	Person1.LastName = "Abu-Sultan";

	Person1.ContactInfo.Email = "mohamadkns2002@gmail.com";
	Person1.ContactInfo.Phone = "0595303842";

	Person1.ContactInfo.Address.POPox = "7777";
	Person1.ContactInfo.Address.ZipCode = "11194";
	Person1.ContactInfo.Address.StreetName = "Tal-Alhawa";
	Person1.ContactInfo.Address.BuildingNo = "5";

	Person1.Gender = enGender::Male;
	Person1.MaritalStatus = enMaritalStatus::Married;
	Person1.FavouriteColor = enColor::Blue;

	cout << Person1.ContactInfo.Address.StreetName << endl;
}
