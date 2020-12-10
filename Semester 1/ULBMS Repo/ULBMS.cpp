#include <iostream>
#include <conio.h>
#include <cctype>
#include <cstring>
#include <fstream>
#include <ctime>
#include <cmath>

using namespace std;

int const MAX_BOOK_ID = 13;
int const DATE_SIZE = 11;
int const MAX_COPY_NUMBER = 17;
int const MAX_BOOKS = 200;
int const MAX_CATEGORIES = 30;
int const MAX_BOOK_NAME = 60;
int const MAX_CATEGORY_NAME = 20;
int const MAX_CATEGORY_NUMBER = 4;
int const MAX_STUDENTS = 100;
int const MAX_STUDENT_NAME = 60;
int const MAX_REGISTRATION_NUMBER = 12;
int const MAX_USERS = 10;
int const MAX_USER_NAME = 60;
int const MAX_PASSWORD = 30;

enum Month
{
	January = 1, February, March, April, May, June, July, August, September, October, November, December
};

enum BookStatus
{
	Returned = 1, Issued = 0
};

struct Book
{
	char Id[MAX_BOOK_ID] = { 0 };
	char Name[MAX_BOOK_NAME] = { 0 };
	int Edition = 0;
};

struct Category
{
	char Id[MAX_CATEGORY_NUMBER] = { 0 };
	char Name[MAX_CATEGORY_NAME] = { 0 };

};

struct Date
{
	int Day = 0;
	Month month;
	int Year = 0;
};

struct BookCopy
{
	char Id[MAX_COPY_NUMBER] = { 0 };
	Date PurchaseDate;
};

struct Student
{
	char RegistrationNo[MAX_REGISTRATION_NUMBER] = { 0 };
	char Name[MAX_STUDENT_NAME] = { 0 };
	int Session = 0;
	Date AdmissionDate;
};

struct User
{
	char userName[MAX_USER_NAME] = { 0 };
	char password[MAX_PASSWORD] = { 0 };
};

struct BookIssue
{
	char regNo[MAX_REGISTRATION_NUMBER] = { 0 };
	char bookCopyId[MAX_COPY_NUMBER] = { 0 };
	BookStatus status;
	Date issueDate;
};

bool isValidBookId(char bookId[]);
bool isValidbookName(char bookName[]);
bool isValidCopyNumber(char bookCopy[]);
bool isValidCategoryName(char bookCategory[]);
bool isValidCategoryNumber(char bookCategory[]);
bool isValidDate(Date date);
bool isValidRegistrationNo(char regNo[]);
bool isValidLoginId(char userName[]);


bool isExist(Category arr[], int arraySize, char catId[]);
bool addCategory(Category arr[], int arraySize, Category newCategory);
bool deleteCategory(Category arr[], int arraySize, char catId[]);
bool editCategory(Category arr[], int arraySize, char catId[], Category newData);
void printCategories(Category arr[], int arraySize);
bool saveCategories(Category arr[], int arraySize);
bool loadCategories(Category arr[], int arraySize);
void readInCategory(Category& category);

bool isExist(Book arr[], int arraySize, char bookId[]);
bool addBook(Book arr[], int arraySize, Book newBook);
bool editBook(Book arr[], int arraySize, char bookId[], Book newData);
bool deleteBook(Book arr[], int arraySize, char bookId[]);
void printBooks(Book arr[], int arraySize);
bool saveBooks(Book arr[], int arraySize);
bool loadBooks(Book arr[], int arraySize);
void readInBook(Book& book);

bool isExist(BookCopy arr[], int arraySize, char CopyId[]);
bool addBookCopy(BookCopy arr[], int arraySize, BookCopy newBookCopy);
bool editBookCopy(BookCopy arr[], int arraySize, char bookCopyId[], BookCopy newData);
bool deleteBookCopy(BookCopy arr[], int arraySize, char bookCopyId[]);
void printBookCopies(BookCopy arr[], int arraySize, char bookId[]);
bool saveBookCopies(BookCopy arr[], int arraySize);
bool loadBookCopies(BookCopy arr[], int arraySize);
bool readInBookCopy(BookCopy& bookCopy);

bool isExist(Student arr[], int arraySize, char regNo[]);
bool addStudent(Student arr[], int arraySize, Student newStudent);
bool editStudent(Student arr[], int arraySize, char regNo[], Student newData);
void printStudents(Student arr[], int arraySize);
bool deleteStudent(Student arr[], int arraySize, char regNo[]);
bool saveStudents(Student arr[], int arraySize);
bool loadStudents(Student arr[], int arraySize);
void readInStudent(Student& student);

void loadUser(User arr[], int size);
bool findUser(User arr[], int size, User toFind);
bool issueBook(BookIssue arr[], int size, BookIssue toIssue);
void checkBookstatus(BookIssue booksIssued[], BookCopy bookCopies[], int IssueSize, int bookCopySize, char copyId[]);
void studentCurrentBook(BookIssue arr[], int size, char regNo[]);
int returnBook(BookIssue arr[], int size, char copyIdtoReturn[]);
void saveBookIssue(BookIssue arr[], int size);
void loadBookIssue(BookIssue arr[], int size);

void printMenu();
void TakeMenuInput(int& mainOption, char& subOption);

int main()
{
	int mainOption = -1;
	int arraySize = 0;
	char subOption = 0;

	Category categories[MAX_CATEGORIES];
	Book books[MAX_BOOKS];
	BookCopy bookCopies[MAX_BOOKS];
	Student students[MAX_STUDENTS];
	User users[MAX_USERS];
	User user;
	BookIssue booksIssued[MAX_BOOKS];

	char BookId[MAX_BOOKS][MAX_BOOK_ID] = { 0 };
	char BookName[MAX_BOOKS][MAX_BOOK_NAME] = { 0 };
	char CopyId[MAX_BOOKS][MAX_COPY_NUMBER] = { 0 };
	char PublishedDates[MAX_BOOKS][DATE_SIZE] = { 0 };

	loadCategories(categories, arraySize);
	loadBooks(books, arraySize);
	loadBookCopies(bookCopies, arraySize);
	loadStudents(students, arraySize);
	loadUser(users, arraySize);
	loadBookIssue(booksIssued, arraySize);

	while (true)
	{
		cout << "Kindly Enter the credentials to acccess the System Features!" << endl << endl;

		do
		{
			cout << "User Name: ";
			cin.getline(user.userName, MAX_USER_NAME, '\n');

		} while (!isValidLoginId(user.userName));

		char ch = '\0';
		int i = 0;

		cout << "Password: ";

		while (true)
		{
			ch = getch();

			if (ch == 13)
			{
				break;
			}
			else if (ch == 8)
			{
				if (i > 0)
				{
					cout << "\b \b";

					user.password[i] = 0;

					i--;
				}
			}
			else
			{
				user.password[i] = ch;

				i++;

				cout << "*";
			}
		}

		if (findUser(users, arraySize, user))
		{
			cout << "\n\n** Welcome to University Library Management System **" << endl << endl;

			while (true)
			{
				printMenu();
				TakeMenuInput(mainOption, subOption);

				if (mainOption == 0)
				{
					if (subOption == 'E')
					{
						saveCategories(categories, arraySize);
						saveBooks(books, arraySize);
						saveBookCopies(bookCopies, arraySize);
						saveStudents(students, arraySize);
						saveBookIssue(booksIssued, arraySize);

						return 0;
					}
					else
					{
						cout << "No Sub Option (" << subOption << ") exists under Main Option (" << mainOption << ")" << endl << endl;
					}
				}
				else if (mainOption == 9)
				{
					if (subOption == 'L')
					{
						saveCategories(categories, arraySize);
						saveBooks(books, arraySize);
						saveBookCopies(bookCopies, arraySize);
						saveStudents(students, arraySize);
						saveBookIssue(booksIssued, arraySize);

						break;
					}
					else
					{
						cout << "No Sub Option (" << subOption << ") exists under Main Option (" << mainOption << ")" << endl << endl;
					}
				}
				else if (mainOption == 1)
				{
					if (subOption == 'A')
					{
						Category newCategory;

						do
						{
							readInCategory(newCategory);

						} while (isExist(categories, arraySize, newCategory.Id));

						addCategory(categories, arraySize, newCategory);
					}
					else if (subOption == 'D')
					{
						char catId[MAX_CATEGORY_NUMBER];

						do
						{
							cout << "\nEnter the Category ID to delete: ";
							cin >> catId;

							if (cin.fail())
							{
								cout << "Please choose a Valid a Option!" << endl << endl;

								cin.clear();
								cin.ignore(100000, '\n');
							}

							cin.clear();

						} while (!isValidCategoryNumber(catId));

						deleteCategory(categories, arraySize, catId);
					}
					else if (subOption == 'L')
					{
						printCategories(categories, arraySize);
					}
					else if (subOption == 'E')
					{
						char catId[MAX_CATEGORY_NUMBER] = { 0 };
						Category newData;

						do
						{
							cout << "\nEnter Category ID to edit: ";
							cin >> catId;

							cin.clear();
							cin.ignore(100000, '\n');

						} while (!isValidCategoryNumber(catId));

						do
						{
							readInCategory(newData);

						} while (isExist(categories, arraySize, newData.Id));

						editCategory(categories, arraySize, catId, newData);
					}
					else
					{
						cout << "No Sub Option (" << subOption << ") exists under Main Option (" << mainOption << ")" << endl << endl;
					}
				}
				else if (mainOption == 2)
				{
					if (subOption == 'A')
					{
						Book newBook;

						for (int i = 0; i < MAX_CATEGORIES; i++)
						{
							for (int j = 0; j < MAX_CATEGORY_NUMBER - 1; j++)
							{
								books[i].Id[j] = categories[i].Id[j];
							}
						}

						do
						{
							readInBook(newBook);

						} while (isExist(books, arraySize, newBook.Id));

						addBook(books, arraySize, newBook);
					}
					else if (subOption == 'E')
					{
						char bookId[MAX_BOOK_ID] = { 0 };
						Book newData;

						do
						{
							cout << "\nEnter Book ID to Edit: ";
							cin >> bookId;

							cin.clear();
							cin.ignore(100000, '\n');

						} while (!isValidBookId(bookId));

						do
						{
							readInBook(newData);

						} while (isExist(books, arraySize, newData.Id));

						editBook(books, arraySize, bookId, newData);
					}
					else if (subOption == 'D')
					{
						char bookId[MAX_BOOK_ID] = { 0 };

						do
						{
							cout << "Enter Book ID to delete: ";
							cin >> bookId;

							if (cin.fail())
							{
								cout << "Please choose a Valid a Option!" << endl << endl;

								cin.clear();
								cin.ignore(100000, '\n');
							}

							cin.clear();

						} while (!isValidBookId(bookId));

						deleteBook(books, arraySize, bookId);
					}
					else if (subOption == 'L')
					{
						printBooks(books, arraySize);
					}
					else
					{
						cout << "No Sub Option (" << subOption << ") exists under Main Option (" << mainOption << ")" << endl << endl;
					}
				}
				else if (mainOption == 3)
				{
					if (subOption == 'A')
					{
						BookCopy newBookCopy;

						for (int i = 0; i < MAX_BOOKS; i++)
						{
							strcpy(bookCopies[i].Id, books[i].Id);
						}

						do
						{
							readInBookCopy(newBookCopy);

						} while (isExist(bookCopies, arraySize, newBookCopy.Id));

						addBookCopy(bookCopies, arraySize, newBookCopy);
					}
					else if (subOption == 'E')
					{
						char bookCopyId[MAX_COPY_NUMBER];
						BookCopy newData;

						do
						{
							cout << "Enter the Book Copy to Edit: ";
							cin >> bookCopyId;

							cin.clear();
							cin.ignore(100000, '\n');

						} while (!isValidCopyNumber(bookCopyId));

						do
						{
							readInBookCopy(newData);

						} while (isExist(bookCopies, arraySize, newData.Id));

						editBookCopy(bookCopies, arraySize, bookCopyId, newData);
					}
					else if (subOption == 'L')
					{
						char bookId[MAX_BOOK_ID] = { 0 };

						do
						{
							cout << "Enter the book ID for details: ";
							cin >> bookId;

							if (cin.fail())
							{
								cout << "Please choose a Valid a Option!" << endl << endl;

								cin.clear();
								cin.ignore(100000, '\n');
							}

							cin.clear();

						} while (!isValidBookId(bookId));

						printBookCopies(bookCopies, arraySize, bookId);
					}
					else if (subOption == 'D')
					{
						char bookCopyId[MAX_COPY_NUMBER];

						do
						{
							cout << "Enter the Book Copy ID to delete: ";
							cin >> bookCopyId;

							if (cin.fail())
							{
								cout << "Please choose a Valid a Option!" << endl << endl;

								cin.clear();
								cin.ignore(100000, '\n');
							}

							cin.clear();

						} while (!isValidCopyNumber(bookCopyId));

						deleteBookCopy(bookCopies, arraySize, bookCopyId);
					}
					else
					{
						cout << "No Sub Option (" << subOption << ") exists under Main Option (" << mainOption << ")" << endl << endl;
					}
				}
				else if (mainOption == 4)
				{
					if (subOption == 'A')
					{
						Student newStudent;

						do
						{
							readInStudent(newStudent);

						} while (isExist(students, arraySize, newStudent.RegistrationNo));

						addStudent(students, arraySize, newStudent);
					}
					else if (subOption == 'E')
					{
						char regNo[MAX_REGISTRATION_NUMBER] = { 0 };
						Student newData;

						do
						{
							cout << "\nEnter Student's Registration Number to edit: ";
							cin >> regNo;

							cin.clear();
							cin.ignore(100000, '\n');

						} while (!isValidRegistrationNo(regNo));

						do
						{
							readInStudent(newData);

						} while (isExist(categories, arraySize, newData.RegistrationNo));

						editStudent(students, arraySize, regNo, newData);
					}
					else if (subOption == 'L')
					{
						printStudents(students, arraySize);
					}
					else if (subOption == 'D')
					{
						char regNo[MAX_REGISTRATION_NUMBER] = { 0 };

						do
						{
							cout << "\nEnter the Category ID to delete: ";
							cin >> regNo;

							if (cin.fail())
							{
								cout << "Please choose a Valid a Option!" << endl << endl;

								cin.clear();
								cin.ignore(100000, '\n');
							}

							cin.clear();

						} while (!isValidRegistrationNo(regNo));

						deleteStudent(students, arraySize, regNo);
					}
					else
					{
						cout << "No Sub Option (" << subOption << ") exists under Main Option (" << mainOption << ")" << endl << endl;
					}
				}
				else if (mainOption == 5)
				{
					for (int i = 0; i < MAX_BOOKS; i++)
					{
						strcpy(booksIssued[i].bookCopyId, bookCopies[i].Id);
					}

					if (subOption == 'I')
					{
						BookIssue Book;

						do
						{
							cout << "\nEnter Registration No: ";

							cin.getline(Book.regNo, MAX_REGISTRATION_NUMBER, '\n');

							cin.clear();
							cin.ignore(100000, '\n');

						} while ((!isValidRegistrationNo(Book.regNo)) && (!isExist(students, arraySize, Book.regNo)));

						do
						{
							cout << "\nEnter Book ID to be Issued: ";

							cin.getline(Book.bookCopyId, MAX_COPY_NUMBER, '\n');

							cin.clear();
							cin.ignore(100000, '\n');

						} while ((!isValidBookId(Book.bookCopyId)) && (!isExist(bookCopies, arraySize, Book.bookCopyId)));

						if (Book.status != Issued)
						{
							issueBook(booksIssued, arraySize, Book);
						}
						else
						{
							checkBookstatus(booksIssued, bookCopies, arraySize, arraySize, Book.bookCopyId);
						}
					}
					else if (subOption == 'R')
					{
						char copyIdtoReturn[MAX_COPY_NUMBER] = { 0 };

						do
						{
							cout << "\nEnter Book Copy Number to return: ";

							cin.getline(copyIdtoReturn, MAX_COPY_NUMBER);

							if (cin.fail())
							{
								cout << "Please choose a Valid a Option!" << endl << endl;

								cin.clear();
								cin.ignore(100000, '\n');
							}

							cin.clear();

						} while ((!isValidCopyNumber(copyIdtoReturn)) || (!isExist(bookCopies, arraySize, copyIdtoReturn)));

						returnBook(booksIssued, arraySize, copyIdtoReturn);
					}
					else if(subOption == 'S')
					{
						char regNo[MAX_REGISTRATION_NUMBER] = { 0 };

						do
						{
							cout << "\nEnter Registration No of Student: ";

							cin.getline(regNo, MAX_REGISTRATION_NUMBER, '\n');

							if (cin.fail())
							{
								cout << "Please choose a Valid a Option!" << endl << endl;

								cin.clear();
								cin.ignore(100000, '\n');
							}

							cin.clear();

						} while ((!isValidRegistrationNo(regNo)) && (!isExist(students, arraySize, regNo)));

						studentCurrentBook(booksIssued, arraySize, regNo);
					}
					else if (subOption == 'B')
					{
						char copyId[MAX_COPY_NUMBER] = { 0 };

						do
						{
							cout << "\nEnter Copy ID of the Book: ";

							cin.getline(copyId, MAX_COPY_NUMBER);

							if (cin.fail())
							{
								cout << "Please choose a Valid a Option!" << endl << endl;

								cin.clear();
								cin.ignore(100000, '\n');
							}

							cin.clear();

						} while ((!isValidCopyNumber(copyId)) || (!isExist(bookCopies, arraySize, copyId)));

						checkBookstatus(booksIssued, bookCopies, arraySize, arraySize, copyId);
					}
					else
					{
						cout << "No Sub Option (" << subOption << ") exists under Main Option (" << mainOption << ")" << endl << endl;
					}
				}
			}
		}
	}
}


// VALIDATION FUCTIONS

bool isValidCategoryNumber(char CatNo[])
{
	for (int i = 0; i < MAX_CATEGORY_NUMBER - 1; i++)
	{
		if (!isdigit(CatNo[i]))
		{
			cout << "Book Category can only be a number!" << endl << endl;

			return false;
		}
	}

	return true;
}

bool isValidCategoryName(char CatName[])
{
	for (int i = 0; i < MAX_CATEGORY_NAME - 1; i++)
	{
		if (!isalpha(CatName[i]))
		{
			cout << "Category Name can only be an Alphabet!" << endl << endl;

			return false;
		}

		if (CatName[i + 1] == 0)
		{
			break;
		}
	}

	return true;
}

bool isValidBookId(char bookId[])
{
	int i;

	for (i = 0; i < 3; i++)
	{
		if (!isdigit(bookId[i]))
		{
			cout << "Enter a number for book Category! Accorging to Format DDD-AA-DDDDD" << endl << endl;

			return false;
		}
	}

	if ((bookId[3] != '-') || (bookId[6] != '-'))
	{
		cout << "Expected an Hyphen! According to Format DDD-AA-DDDDD" << endl << endl;

		return false;
	}

	if ((((int)bookId[4] < 65) && ((int)bookId[4] > 90)) && (((int)bookId[5] < 65) && ((int)bookId[5] > 90)))
	{
		cout << "Enter a capital Letter for Language Code! According to Format DDD-AA-DDDDD" << endl << endl;

		return false;
	}

	for (i = 7; i < MAX_BOOK_ID - 1; i++)
	{
		if (!isdigit(bookId[i]))
		{
			cout << "Enter a number for book Code! Accorging to Format DDD-AA-DDDDD" << endl << endl;

			return false;
		}
	}

	return true;
}

bool isValidbookName(char bookName[])
{
	for (int i = 0; i < MAX_BOOK_NAME - 1; i++)
	{
		if ((!isalpha(bookName[i])) && (bookName[i] != 32) && (bookName[i] != 44) && (bookName[i] != 58) && (bookName[i] != 0))
		{
			cout << "\nBook Name can only contain Alphabets, Colons, Spaces and Commas! " << i << endl << endl;

			return false;
		}
		else if (((bookName[i] == 32) && (bookName[i + 1] == 32)) || ((bookName[i] == 44) && (bookName[i + 1] == 44)) || ((bookName[i] == 58) && (bookName[i + 1] == 58)))
		{
			cout << "\nBook Name can not contain two Simultaneous Spaces, Commas and Colons!" << endl << endl;

			return false;
		}
	}

	return true;
}

bool isValidCopyNumber(char bookCopy[])
{
	if (!isValidBookId(bookCopy))
	{
		return false;
	}

	if (bookCopy[12] != '#')
	{
		cout << "Copy Number must be append with Book ID using # sign!" << endl << endl;

		return false;
	}

	for (int i = 13; i < MAX_COPY_NUMBER - 1; i++)
	{
		if (!isdigit(bookCopy[i]))
		{
			cout << "Invalid Copy Number, it must be a number!" << endl << endl;

			return false;
		}
	}

	return true;
}

bool isValidDate(Date date)
{
	if (date.Day > 31)
	{
		cout << "Day cannot be more then 31! Please Enter a Valid Date!" << endl << endl;

		return false;
	}
	else if ((date.Day > 30) && ((date.month == 1) || (date.month == 3) || (date.month == 5) || (date.month == 7) || (date.month == 8) || (date.month == 10) || (date.month == 12)))
	{
		cout << "Day cannot be more then 30 for Month " << date.month << " ! Please Enter a Valid Date!" << endl << endl;

		return false;
	}
	else if (date.month > 12)
	{
		cout << "Month cannot be more then 12! Please Enter a Valid Date!" << endl << endl;

		return false;
	}
	else if (date.Year > 2020)
	{
		cout << "Year cannot be more then 2020! Please Enter a Valid Date!" << endl << endl;

		return false;
	}
	else if ((date.Year % 4 == 0) && (date.month == 2) && (date.Day > 29))
	{
		cout << "February cannot have more than 29 days in a Leap Year! Please Enter a Valid Date!" << endl << endl;

		return false;
	}
	else if ((date.Year % 4 != 0) && (date.month == 2) && (date.Day > 28))
	{
		cout << "February cannot have more than 28 days in a Non-Leap Year! Please Enter a Valid Date!" << endl << endl;

		return false;
	}

	return true;
}

bool isValidRegistrationNo(char regNo[])
{
	for (int i = 0; i < 4; i++)
	{
		if (!isdigit(regNo[i]))
		{
			cout << "\nRegistration Number is invalid! Session shall be a number!" << endl << endl;

			return false;
		}
	}

	if ((regNo[4] != '-') && (regNo[7] != '-'))
	{
		cout << "\nRegistration Number is invalid! Expected Hyphens after Session and before Roll Number!" << endl << endl;

		return false;
	}

	if (!isupper(regNo[5]) && !isupper(regNo[6]))
	{
		cout << "\nRegistration Number is invalid! Department shall be repreasented by Upper case Letters!" << endl << endl;

		return false;
	}

	for (int i = 8; i < 11; i++)
	{
		if (!isdigit(regNo[i]))
		{
			cout << "\nRegistration Number is invalid! Roll Number shall be a Number!" << endl << endl;

			return false;
		}

		if (regNo[i + 1] == 0 || regNo[i + 1] == 32)
		{
			break;
		}
	}

	return true;
}

bool isValidStudentName(char stdName[])
{
	for (int i = 0; i < MAX_STUDENT_NAME - 1; i++)
	{
		if (!isalpha(stdName[i]) && stdName[i] != 32)
		{
			cout << "\nInvalid Name! Name can only consist of Alphabets!" << endl << endl;

			return false;
		}

		if (stdName[i + 1] == 0)
		{
			break;
		}
	}

	return true;
}

bool isValidLoginId(char userName[])
{
	bool isfoundDomain = false;

	for (int i = 0; i < MAX_USER_NAME; i++)
	{
		if (((userName[i] > 0) && ((userName[i] <= 45) || (userName[i] == 47))) || ((userName[i] >= 58) && (userName[i] <= 63)) || ((userName[i] >= 91) && (userName[i] <= 96)) || ((userName[i] >= 123) && (userName[i] <= 127)))
		{
			cout << "\nUsername cannot contain Special Character at " << endl << endl;

			return false;
		}

		if (userName[i] == 64)
		{
			isfoundDomain = true;
		}
	}

	if (isfoundDomain)
	{
		return true;
	}
	else
	{
		cout << "Invalid Username! No Domain Found!" << endl << endl;

		return false;
	}
}


// CATEGORIES RELATED FUCTIONS

bool isExist(Category arr[], int arraySize, char catId[])
{
	for (int i = 0; i < MAX_CATEGORIES; i++)
	{
		if (!strcmp(arr[i].Id, catId))
		{
			cout << "Category ID is already Existing!" << endl << endl;

			return true;
		}
	}

	return false;
}

bool addCategory(Category arr[], int arraySize, Category newCategory)
{
	char compare[MAX_CATEGORY_NUMBER] = { 0 };

	for (int i = 0; i < MAX_CATEGORIES; i++)
	{
		if (!strcmp(arr[i].Id, compare))
		{
			arr[i] = newCategory;

			cout << "\nCategory has been added succesfully!" << endl << endl;

			return true;
		}
	}

	cout << "\nThere was an error occured while Adding Category!" << endl << endl;

	return false;
}

bool deleteCategory(Category arr[], int arraySize, char catId[])
{
	char empty[MAX_CATEGORY_NUMBER] = { 0 };

	Category Delete;

	for (int i = 0; i < MAX_CATEGORIES; i++)
	{
		if (!strcmp(arr[i].Id, catId))
		{
			arr[i] = Delete;

			cout << "\nCategory has been deleted Successfully!" << endl << endl;

			return true;
		}
	}

	cout << "\nThere was an error while deleting the Category!" << endl << endl;

	return false;
}

bool editCategory(Category arr[], int arraySize, char catId[], Category newData)
{
	for (int i = 0; i < MAX_CATEGORIES; i++)
	{
		if (!strcmp(arr[i].Id, catId))
		{
			arr[i] = newData;

			cout << "\nCategory has been updated successfully!" << endl << endl;

			return true;
		}
	}

	cout << "\nThere was an error during updating the Book ID!" << endl << endl;

	return false;
}

void printCategories(Category arr[], int arraySize)
{
	cout << "\tCATEGORY ID\tNAME" << endl << endl;

	for (int i = 0; i < MAX_CATEGORIES; i++)
	{
		if ((arr[i].Id[1] != 0) && (arr[i].Id[2] != 0))
		{
			cout << "\t" << arr[i].Id << "\t" << arr[i].Name << endl;
		}
	}
}

bool saveCategories(Category arr[], int arraySize)
{
	ofstream saveCategories;

	saveCategories.open("categories.csv");

	for (int i = 0; i < MAX_CATEGORIES; i++)
	{
		saveCategories << arr[i].Id << "," << arr[i].Name << endl;
	}

	saveCategories.close();

	return true;
}

bool loadCategories(Category arr[], int arraySize)
{
	ifstream loadCategories;

	loadCategories.open("categories.csv");

	for (int i = 0; i < MAX_CATEGORIES; i++)
	{
		loadCategories.getline(arr[i].Id, MAX_CATEGORY_NUMBER, ',');
		loadCategories.getline(arr[i].Name, MAX_CATEGORY_NAME, '\n');
	}

	loadCategories.close();

	return true;
}

void readInCategory(Category& category)
{
	do
	{
		cout << "\nEnter the details of Category (ID and Name) : ";

		cin.getline(category.Id, MAX_CATEGORY_NUMBER, ' ');
		cin.getline(category.Name, MAX_CATEGORY_NAME, '\n');

		if (cin.fail())
		{
			cout << "Please choose a Valid a Option!" << endl << endl;

			cin.clear();
			cin.ignore(100000, '\n');
		}

		cin.clear();

	} while ((!isValidCategoryNumber(category.Id)) || (!isValidCategoryName(category.Name)));
}


// BOOKS RELATED FUCTIONS

bool isExist(Book arr[], int arraySize, char bookId[])
{
	for (int i = 0; i < MAX_BOOKS; i++)
	{
		if (!strcmp(arr[i].Id, bookId))
		{
			cout << "Book ID is already Existing!" << endl << endl;

			return true;
		}
	}

	return false;
}

bool addBook(Book arr[], int arraySize, Book newBook)
{
	for (int i = 0; i < MAX_BOOKS; i++)
	{
		if (!strncmp(arr[i].Id, newBook.Id, 3))
		{
			arr[i] = newBook;

			cout << "\nBook Added Successfully!" << endl << endl;

			return true;
		}
	}

	cout << "\nThere was an error while Adding Book!" << endl << endl;

	return false;
}

bool editBook(Book arr[], int arraySize, char bookId[], Book newData)
{
	for (int i = 0; i < MAX_BOOKS; i++)
	{
		if (!strcmp(arr[i].Id, bookId))
		{
			arr[i] = newData;

			cout << "\nBook has been updated successfully!" << endl << endl;

			return true;
		}
	}

	cout << "\nThere was an error during Editing the Book!" << endl << endl;

	return false;
}

bool deleteBook(Book arr[], int arraySize, char bookId[])
{
	char empty[MAX_BOOK_ID] = { 0 };

	Book Delete;

	for (int i = 0; i < MAX_CATEGORIES; i++)
	{
		if (!strcmp(arr[i].Id, bookId))
		{
			arr[i] = Delete;

			cout << "\nBook has been deleted Successfully!" << endl << endl;

			return true;
		}
	}

	cout << "\nThere was an error while deleting the Book!" << endl << endl;

	return false;
}

void printBooks(Book arr[], int arraySize)
{
	cout << "\tBOOKS ID\t   NAME\t\t\tEDITIONS\tCATEGORIES" << endl << endl;

	for (int i = 0; i < MAX_BOOKS; i++)
	{
		if (arr[i].Id[4] != 0 && arr[i].Edition != 0)
		{
			cout << "\t" << arr[i].Id;
			cout << "\t" << arr[i].Name;
			cout << "\t\t" << arr[i].Edition << ((arr[i].Edition > 3) ? ("th") : ((arr[i].Edition == 1) ? ("st") : ((arr[i].Edition == 2) ? ("nd") : ("rd"))));
			cout << "\t\t";

			for (int j = 0; j < MAX_CATEGORY_NUMBER - 1; j++)
			{
				cout << arr[i].Id[j];
			}

			cout << endl;
		}
	}
}

bool saveBooks(Book arr[], int arraySize)
{
	ofstream saveBooks;

	saveBooks.open("books.csv");

	for (int i = 0; i < MAX_BOOKS; i++)
	{
		if ((arr[i].Id[4] != 0) && (arr[i].Id[5] != 0))
		{
			saveBooks << arr[i].Id << "," << arr[i].Name << "," << arr[i].Edition << endl;
		}
	}

	saveBooks.close();

	return true;
}

bool loadBooks(Book arr[], int arraySize)
{
	ifstream loadBooks;

	loadBooks.open("books.csv");

	for (int i = 0; i < MAX_BOOKS; i++)
	{
		loadBooks.getline(arr[i].Id, MAX_BOOK_ID, ',');
		loadBooks.getline(arr[i].Name, MAX_BOOK_NAME, ',');

		loadBooks >> arr[i].Edition;
	}

	loadBooks.close();

	return true;
}

void readInBook(Book& book)
{
	do
	{
		if (book.Edition > 15)
		{
			cout << "\n\nEditions can only be 15 or less!" << endl << endl;
		}

		cout << "\nEnter the details of the Book (ID, Edition, Name): ";

		cin.getline(book.Id, MAX_BOOK_ID, ' ');
		cin >> book.Edition;
		cin.ignore(1, ' ');
		cin.getline(book.Name, MAX_BOOK_NAME, '\n');

		if (cin.fail())
		{
			cout << "Please choose a Valid a Option!" << endl << endl;

			cin.clear();
			cin.ignore(100000, '\n');
		}

		cin.clear();

	} while (!isValidBookId(book.Id) || !isValidbookName(book.Name) || book.Edition > 15);
}


// BOOK'S SAMPLES RELATED FUNCTIONS

bool isExist(BookCopy arr[], int arraySize, char CopyId[])
{
	for (int i = 0; i < MAX_BOOKS; i++)
	{
		if (!strcmp(arr[i].Id, CopyId))
		{
			cout << "Book Copy is already Existing!" << endl << endl;

			return true;
		}
	}

	return false;
}

bool addBookCopy(BookCopy arr[], int arraySize, BookCopy newBookCopy)
{
	for (int i = 0; i < MAX_BOOKS; i++)
	{
		if (!strncmp(arr[i].Id, newBookCopy.Id, 3))
		{
			arr[i] = newBookCopy;

			cout << "\nBook Copy Added Successfully!" << endl << endl;

			return true;
		}
	}

	cout << "\nThere was an error while Adding Book Copy!" << endl << endl;

	return false;
}

bool deleteBookCopy(BookCopy arr[], int arraySize, char bookCopyId[])
{
	char empty[MAX_COPY_NUMBER] = { 0 };

	BookCopy Delete;

	for (int i = 0; i < MAX_BOOKS; i++)
	{
		if (!strcmp(arr[i].Id, bookCopyId))
		{
			arr[i] = Delete;

			cout << "\nBook has been deleted Successfully!" << endl << endl;

			return true;
		}
	}

	cout << "\nThere was an error while deleting the Book!" << endl << endl;

	return false;
}

bool editBookCopy(BookCopy arr[], int arraySize, char bookCopyId[], BookCopy newData)
{
	bool isEdited = false;

	for (int i = 0; i < MAX_BOOKS; i++)
	{
		if (!strcmp(arr[i].Id, bookCopyId))
		{
			arr[i] = newData;

			cout << "\nBook has been updated successfully!" << endl << endl;

			return true;
		}
	}

	cout << "\nThere was an error during Editing the Book!" << endl << endl;

	return false;
}

void printBookCopies(BookCopy arr[], int arraySize, char bookId[])
{
	cout << "\tBOOKS ID\t\tPurchased Date" << endl << endl;

	for (int i = 0; i < MAX_BOOKS; i++)
	{
		if (arr[i].PurchaseDate.Day != 0)
		{
			if (!strncmp(arr[i].Id, bookId, 12));
			{
				cout << "\t" << arr[i].Id << "\t" << arr[i].PurchaseDate.Day << "-" << arr[i].PurchaseDate.month << "-" << arr[i].PurchaseDate.Year << endl;
			}
		}
	}
}

bool saveBookCopies(BookCopy arr[], int arraySize)
{
	ofstream saveBookCopies;

	saveBookCopies.open("bookcopies.csv");

	for (int i = 0; i < MAX_BOOKS; i++)
	{
		saveBookCopies << arr[i].Id << "," << arr[i].PurchaseDate.Day << "-" << arr[i].PurchaseDate.month << "-" << arr[i].PurchaseDate.Year << endl;
	}

	saveBookCopies.close();

	return true;
}

bool loadBookCopies(BookCopy arr[], int arraySize)
{
	ifstream loadBookCopies;

	loadBookCopies.open("bookcopies.csv");

	for (int i = 0; i < MAX_BOOKS; i++)
	{
		int month_get = 0;

		loadBookCopies.getline(arr[i].Id, MAX_COPY_NUMBER, ',');
		loadBookCopies >> arr[i].PurchaseDate.Day;
		loadBookCopies.ignore(1, '-');
		loadBookCopies >> month_get;
		loadBookCopies.ignore(1, '-');
		loadBookCopies >> arr[i].PurchaseDate.Year;

		arr[i].PurchaseDate.month = static_cast<Month>(month_get);
	}

	loadBookCopies.close();

	return true;
}

bool readInBookCopy(BookCopy& bookCopy)
{
	char dash[2];
	int getMonth;

	time_t t = time(NULL);
	tm* date = localtime(&t);

	do
	{
		cout << "\nEnter the details of the Sample(ID, DATE OF PURCHASE): ";

		cin.getline(bookCopy.Id, MAX_COPY_NUMBER, ' ');

		cin >> bookCopy.PurchaseDate.Day >> dash[0] >> getMonth >> dash[1] >> bookCopy.PurchaseDate.Year;

		if (cin.fail())
		{
			cout << "Please choose a Valid a Option!" << endl << endl;

			cin.clear();
			cin.ignore(100000, '\n');
		}

		cin.clear();

		bookCopy.PurchaseDate.month = static_cast<Month>(getMonth);

	} while (!isValidCopyNumber(bookCopy.Id) || !isValidDate(bookCopy.PurchaseDate));

	return true;
}


// STUDENT RELATED FUCTIONS

bool isExist(Student arr[], int arraySize, char regNo[])
{
	for (int i = 0; i < MAX_REGISTRATION_NUMBER - 1; i++)
	{
		if (!strcmp(arr[i].RegistrationNo, regNo))
		{
			cout << "Registration Number is already Existing!" << endl << endl;

			return true;
		}
	}

	return false;
}

bool addStudent(Student arr[], int arraySize, Student newStudent)
{
	char compare[MAX_REGISTRATION_NUMBER] = { 0 };

	for (int i = 0; i < MAX_STUDENTS; i++)
	{
		if (!strcmp(arr[i].RegistrationNo, compare))
		{
			arr[i] = newStudent;

			cout << "\nStudent has been added succesfully!" << endl << endl;

			return true;
		}
	}

	cout << "\nThere was an error occured while Adding Student!" << endl << endl;

	return false;
}

bool editStudent(Student arr[], int arraySize, char regNo[], Student newData)
{
	for (int i = 0; i < MAX_STUDENTS; i++)
	{
		if (!strcmp(arr[i].RegistrationNo, regNo))
		{
			arr[i] = newData;

			cout << "\nStudent Information has been Edited successfully!" << endl << endl;

			return true;
		}
	}

	cout << "\nThere was an error during Editing the Student!" << endl << endl;

	return false;
}

void printStudents(Student arr[], int arraySize)
{
	cout << "\tREGISTRATION NUMBER\t   NAME\t\t\tSESSION\t\tADMISSSION DATE" << endl << endl;

	for (int i = 0; i < MAX_STUDENTS; i++)
	{
		if (arr[i].RegistrationNo[4] != 0)
		{
			cout << "\t" << arr[i].RegistrationNo;
			cout << "\t\t" << arr[i].Name;
			cout << "\t\t\t" << arr[i].Session;
			cout << "\t\t" << arr[i].AdmissionDate.Day << "-" << arr[i].AdmissionDate.month << "-" << arr[i].AdmissionDate.Year << endl;
		}
	}
}

bool deleteStudent(Student arr[], int arraySize, char regNo[])
{
	Student Delete;

	for (int i = 0; i < MAX_STUDENTS; i++)
	{
		if (!strcmp(arr[i].RegistrationNo, regNo))
		{
			arr[i] = Delete;

			cout << "\nStudent has been deleted Successfully!" << endl << endl;

			return true;
		}
	}

	cout << "\nThere was an error while deleting the Student!" << endl << endl;

	return false;
}

bool saveStudents(Student arr[], int arraySize)
{
	ofstream saveStudents;

	saveStudents.open("students.csv");

	for (int i = 0; i < MAX_STUDENTS; i++)
	{
		if ((arr[i].RegistrationNo[4] != 0) && (arr[i].RegistrationNo[5] != 0))
		{
			saveStudents << arr[i].RegistrationNo << "," << arr[i].Name << "," << arr[i].Session << "," << arr[i].AdmissionDate.Day << "-" << arr[i].AdmissionDate.month << "-" << arr[i].AdmissionDate.Year << endl;
		}
	}

	saveStudents.close();

	return true;
}

bool loadStudents(Student arr[], int arraySize)
{
	ifstream loadStudents;

	loadStudents.open("students.csv");

	for (int i = 0; i < MAX_STUDENTS; i++)
	{
		int monthGet = 0;

		loadStudents.getline(arr[i].RegistrationNo, MAX_REGISTRATION_NUMBER, ',');
		loadStudents.getline(arr[i].Name, MAX_USER_NAME, ',');

		loadStudents >> arr[i].Session;
		loadStudents.ignore(1, ',');
		loadStudents >> arr[i].AdmissionDate.Day;
		loadStudents.ignore(1, '-');
		loadStudents >> monthGet;
		loadStudents.ignore(1, '-');
		loadStudents >> arr[i].AdmissionDate.Year;

		arr[i].AdmissionDate.month = static_cast<Month>(monthGet);
	}

	loadStudents.close();

	return true;
}

void readInStudent(Student& student)
{
	char dash[2] = { 0 };
	int getMonth = 0;

	do
	{
		cout << "\nEnter the details of the Student (regNo, Session, Admission Date, Name) : ";

		cin.getline(student.RegistrationNo, MAX_REGISTRATION_NUMBER, ' ');
		cin >> student.Session;
		cin.ignore(1, ' ');
		cin >> student.AdmissionDate.Day >> dash[0] >> getMonth >> dash[1] >> student.AdmissionDate.Year;
		cin.ignore(1, ' ');
		cin.getline(student.Name, MAX_STUDENT_NAME, '\n');

		if (cin.fail())
		{
			cout << "Please choose a Valid a Option!" << endl << endl;

			cin.clear();
			cin.ignore(100000, '\n');
		}

		student.AdmissionDate.month = static_cast<Month>(getMonth);

	} while (!isValidRegistrationNo(student.RegistrationNo) || !isValidStudentName(student.Name));
}


// USER RELATED FUCTIONS

void loadUser(User arr[], int size)
{
	ifstream loadUsers;

	loadUsers.open("users.csv");

	for (int i = 0; i < MAX_USERS; i++)
	{
		loadUsers.getline(arr[i].userName, MAX_USER_NAME, ',');
		loadUsers >> arr[i].password;
		loadUsers.ignore(1, '\n');
	}

	loadUsers.close();
}

bool findUser(User arr[], int size, User toFind)
{
	for (int i = 0; i < MAX_USERS; i++)
	{
		if (!strcmp(toFind.userName, arr[i].userName))
		{
			if (!strcmp(toFind.password, arr[i].password))
			{
				cout << endl << endl;
				cout << "Welcome! " << toFind.userName << endl;

				return true;
			}
		}
	}

	cout << "\nIncorrect Username or Password!" << endl << endl;

	return false;
}

bool issueBook(BookIssue arr[], int size, BookIssue toIssue)
{
	time_t t = time(NULL);
	tm* date = localtime(&t);

	for (int i = 0; i < MAX_BOOKS; i++)
	{
		if (!strcmp(arr[i].bookCopyId, toIssue.bookCopyId))
		{
			if (arr[i].status != Issued)
			{
				strcpy(arr[i].regNo, toIssue.regNo);

				arr[i].issueDate.Day = date->tm_mday;
				arr[i].issueDate.month = static_cast<Month>(date->tm_mon + 1);
				arr[i].issueDate.Year = date->tm_year + 1900;

				arr[i].status = Issued;

				cout << "\nBook has been Issued to " << arr[i].regNo << " Successfully!" << endl << endl;

				return true;
			}
			else
			{
				cout << "Book is Issued to Student " << arr[i].regNo << endl << endl;

				return false;
			}
		}
	}

	cout << "\nThere was an Error while issuing of the Book!" << endl << endl;

	return false;
}

void checkBookstatus(BookIssue booksIssued[], BookCopy bookCopies[], int IssueSize, int bookCopySize, char copyId[])
{
	for (int i = 0; i < MAX_BOOKS; i++)
	{
		if (!strcmp(booksIssued[i].bookCopyId, copyId))
		{
			if (booksIssued[i].status == Issued)
			{
				cout << "Book is currently issued to " << booksIssued[i].regNo << endl << endl;

				break;
			}
			else
			{
				cout << "\nBook Copy is Available!" << endl << endl;

				break;
			}
		}
		else
		{
			cout << "\nBook Copy is Available!" << endl << endl;

			break;
		}
	}
}

void studentCurrentBook(BookIssue arr[], int size, char regNo[])
{
	bool isStudent = false;

	for (int i = 0; i < MAX_BOOKS; i++)
	{
		if (!strcmp(arr[i].regNo, regNo))
		{
			cout << arr[i].regNo << " has book " << arr[i].bookCopyId << endl;
		}
	}
}

int returnBook(BookIssue arr[], int size, char copyIdtoReturn[])
{
	time_t t = time(NULL);
	tm* day = localtime(&t);

	unsigned int Days = 0;

	for (int i = 0; i < MAX_BOOKS; i++)
	{
		if (!strcmp(arr[i].bookCopyId, copyIdtoReturn))
		{
			Days = ((day->tm_year + 1900) - arr[i].issueDate.Year) * 365;
			Days = Days - round(static_cast<unsigned>(((day->tm_mon + 1) - static_cast<int>(arr[i].issueDate.month)) * 30.5));
			Days = Days - static_cast<unsigned>(day->tm_mday - arr[i].issueDate.Day);

			arr[i].status = Returned;

			if (Days > 14)
			{
				cout << "Student " << arr[i].regNo << " has returned the Book with late return fine of " << ((Days - 14) * 10) << " Rs." << endl << endl;

				return ((Days - 14) * 10);
			}
			else
			{
				cout << "Student " << arr[i].regNo << " has returned the book without any Fine!" << endl << endl;

				return 0;
			}
		}
	}
}

void saveBookIssue(BookIssue arr[], int size)
{
	ofstream saveIssued;

	saveIssued.open("bookhistory.csv");

	for (int i = 0; i < MAX_BOOKS; i++)
	{
		saveIssued << arr[i].bookCopyId << "," << arr[i].regNo << "," << arr[i].status << ",";
		saveIssued << arr[i].issueDate.Day << "-" << arr[i].issueDate.month << "-" << arr[i].issueDate.Year << endl;
	}

	saveIssued.close();
}

void loadBookIssue(BookIssue arr[], int size)
{
	ifstream loadIssued;

	loadIssued.open("bookhistory.csv");

	for (int i = 0; i < MAX_BOOKS; i++)
	{
		int getStatus = 0;
		int getMonth = 0;

		loadIssued.getline(arr[i].bookCopyId, MAX_COPY_NUMBER, ',');
		loadIssued.getline(arr[i].regNo, MAX_REGISTRATION_NUMBER, ',');

		loadIssued >> getStatus;
		loadIssued >> arr[i].issueDate.Day;
		loadIssued.ignore(1, '-');
		loadIssued >> getMonth;
		loadIssued.ignore(1, '-');
		loadIssued >> arr[i].issueDate.Year;

		arr[i].issueDate.month = static_cast<Month>(getMonth);
	}
}


// MENU FUNCTIONS

void printMenu()
{
	cout << "Choose one of the following Options" << endl << endl;
	cout << "1\tCategory Management(A, E, L, D)" << endl;
	cout << "2\tBook Management (A, E, L, D)" << endl;
	cout << "3\tBook Copies Management(A, E, L, D)" << endl;
	cout << "4\tStudents Management(A, E, L, D)" << endl;
	cout << "5\tBook Issue Management (I, R, S, B)" << endl;
	cout << "9\tLogout (9L)" << endl;
	cout << "0\tExit Program(0E)" << endl;
}

void TakeMenuInput(int& mainOption, char& subOption)
{
	while (true)
	{
		cout << "Choose the Option: ";
		cin >> mainOption;
		cin.get(subOption);
		cin.clear();
		cin.ignore(100000, '\n');

		if (cin.fail())
		{
			cout << "Please choose a Valid a Option!" << endl << endl;

			cin.clear();
			cin.ignore(100000, '\n');
		}
		else if (((mainOption == 1) || (mainOption == 2) || (mainOption == 3) || (mainOption == 4) || (mainOption == 5) || (mainOption == 0) || (mainOption == 9)) && ((subOption == 'A') || (subOption == 'E') || (subOption == 'L') || (subOption == 'D') || (subOption == 'L') || (subOption == 'I') || (subOption == 'R') || (subOption == 'S') || (subOption == 'B')))
		{
			break;
		}
	}
}
