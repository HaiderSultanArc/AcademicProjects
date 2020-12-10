using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace ULBMS
{
	class Program
	{
		const int MAX_BOOK_ID = 13;
		const int DATE_SIZE = 11;
		const int MAX_COPY_NUMBER = 17;
		const int MAX_BOOKS = 200;
		const int MAX_CATEGORIES = 30;
		const int MAX_BOOK_NAME = 60;
		const int MAX_CATEGORY_NAME = 20;
		const int MAX_CATEGORY_NUMBER = 4;
		const int MAX_STUDENTS = 100;
		const int MAX_STUDENT_NAME = 60;
		const int MAX_REGISTRATION_NUMBER = 12;
		const int MAX_USERS = 10;
		const int MAX_USER_NAME = 60;
		const int MAX_PASSWORD = 30;

		class User
		{
			public char[] username = new char[MAX_USER_NAME];
			public char[] password = new char[MAX_PASSWORD];
		}

		class Category
		{
			public char[] id = new char[MAX_CATEGORY_NUMBER];
			public char[] name = new char[MAX_CATEGORY_NAME];
		}

		class Book
		{
			public char[] id = new char[MAX_BOOK_ID];
			public char[] name = new char[MAX_BOOK_NAME];
		}

		class Date
		{
			public int Day = 0;
			public int Month = 0;
			public int Year = 0;
		}

		class BookCopy
		{
			public char[] id = new char[MAX_COPY_NUMBER];
			public Date PurchaseDate = new Date();
		}

		class Student
		{
			public char[] registrationNo = new char[MAX_REGISTRATION_NUMBER];
			public char[] name = new char[MAX_STUDENT_NAME];
			public int session = 0;
			public Date admissionDate = new Date();
		}

		static void printMenu()
		{
			Console.WriteLine("Choose one of the following Options");
			Console.WriteLine("1\tCategory Management(A, E, L, D)");
			Console.WriteLine("2\tBook Management (A, E, L, D)");
			Console.WriteLine("3\tBook Copies Management(A, E, L, D)");
			Console.WriteLine("4\tStudents Management(A, E, L, D)");
			Console.WriteLine("5\tBook Issue Management (I, R, S, B)");
			Console.WriteLine("9\tLogout (9L)");
			Console.WriteLine("0\tExit Program(0E)");
		}

		static void takeMenuInput(ref int mainOption, ref char subOption)
		{
			while (true)
			{
				string option;

				Console.Write("Choose the Option: ");
				option = Console.ReadLine();

				mainOption = Convert.ToInt32(option[0]);
				subOption = option[1];


				if (((mainOption == 1) || (mainOption == 2) || (mainOption == 3) || (mainOption == 4) || (mainOption == 5) || (mainOption == 0) || (mainOption == 9)) && ((subOption == 'A') || (subOption == 'E') || (subOption == 'L') || (subOption == 'D') || (subOption == 'L') || (subOption == 'I') || (subOption == 'R') || (subOption == 'S') || (subOption == 'B')))
				{
					break;
				}
				else
				{
					Console.WriteLine("Please Enter a Valid Option");
				}
			}
		}

		bool isValidCategoryNumber(char[] catNo)
		{
			foreach (char ch in catNo)
			{
				if (!Char.IsNumber(ch))
				{
					Console.WriteLine("Book Category can only contains Numbers. Invalid Character ({0})", ch);

					return false;
				}
			}

			return true;
		}

		bool isValidCategoryName(char[] catName)
		{
			foreach (char ch in catName)
			{
				if (Char.IsWhiteSpace(ch))
				{
					break;
				}
				else if (!Char.IsLetter(ch))
				{
					Console.WriteLine("Book Category Name can only contain Alphabets. Invalid Character ({0})", ch);

					return false;
				}
			}

			return true;
		}

		bool isValidBookId(char[] bookId)
		{
			for (int i = 0; i < 3; i++)
			{
				if (!Char.IsNumber(bookId[i]))
				{
					Console.Write("Enter a number for book Category! Accorging to Format DDD-AA-DDDDD. Invalid Character ({0})", bookId[i]);

					return false;
				}
			}

			if (bookId[3] != '-' && bookId[6] != '-')
			{
				Console.Write("Expected an Hyphen! According to Format DDD-AA-DDDDD");

				return false;
			}

			if (!Char.IsUpper(bookId[4]) || !Char.IsUpper(bookId[5]))
			{
				Console.WriteLine("Enter a capital Letter for Language Code! According to Format DDD-AA-DDDDD");

				return false;
			}

			for (int i = 7; i < MAX_BOOK_ID - 1; i++)
			{
				if (!Char.IsNumber(bookId[i]))
				{
					Console.WriteLine("Enter a number for book Code! Accorging to Format DDD-AA-DDDDD. Invalid Character ({0})", bookId[i]);

					return false;
				}
			}

			return true;
		}

		bool isValidBookName(char[] bookName)
		{
			foreach (char ch in bookName)
			{
				if (Char.IsWhiteSpace(ch) && ch != 32)
				{
					break;
				}
				else if (!Char.IsLetterOrDigit(ch) && ch != 32 && ch != 44 && ch != 58)
				{
					Console.WriteLine("Book Name can only contain Alphabets, Colons, Spaces and Commas! Invalid Character ({0})", ch);

					return false;
				}
			}

			return true;
		}

		bool isValidCopyNumber(char[] copyNumber)
		{
			char[] temp = new char[MAX_BOOK_ID];

			for (int i = 0; i < MAX_BOOK_ID - 1; i++)
			{
				temp[i] = copyNumber[i];
			}

			if (!isValidBookId(temp))
			{
				return false;
			}

			if (copyNumber[13] != '#')
			{
				Console.WriteLine("Book ID and Copy Number must be seprated by '#'");

				return false;
			}

			for (int i = 14; i < MAX_COPY_NUMBER - 1; i++)
			{
				if (!Char.IsNumber(copyNumber[i]))
				{
					Console.WriteLine("Copy Number shall be a Number! Invalid Character ({0})", copyNumber[i]);

					return false;
				}
			}

			return true;
		}

		bool isValidDate(char[] date)
		{
			string checkDate;

			checkDate = Convert.ToString(date);

			try
			{
				DateTime.Parse(checkDate);

				return true;
			}
			catch
			{
				Console.WriteLine("Invalid Date! Use Format Standard en-US: mm/dd/yyyy.");

				return false;
			}
		}

		bool isValidRegistrationNo(char[] regNo)
		{
			for (int i = 0; i < 4; i++)
			{
				if (!Char.IsNumber(regNo[i]))
				{
					Console.WriteLine("Invalid Format! Follow specified format as: 2019-CS-36! Invalid character: ({0})", regNo[i]);

					return false;
				}
			}

			if (regNo[4] != '-' || regNo[7] != '-')
			{
				Console.WriteLine("Invalid Format! Follow specified format as: 2019-CS-36!");

				return false;
			}

			if (!Char.IsUpper(regNo[5]) || !Char.IsUpper(regNo[6]))
			{
				Console.WriteLine("Invalid Format! Use Upper Case Letters for Department. Follow specified format as: 2019-CS-36!");

				return false;
			}

			for (int i = 8; i < MAX_REGISTRATION_NUMBER - 1; i++)
			{
				if (!Char.IsNumber(regNo[i]) && !Char.IsWhiteSpace(regNo[i]))
				{
					Console.WriteLine("Invalid Format! Follow specified format as: 2019-CS-36! Invalid character: ({0})", regNo[i]);

					return false;
				}
			}

			return true;
		}

		bool isValidStudentName(char[] name)
		{
			foreach (char ch in name)
			{
				if (Char.IsWhiteSpace(ch) && ch != 32)
				{
					break;
				}
				else if (!Char.IsLetter(ch))
				{
					Console.WriteLine("Student name can only consist of Alphabets and Space");

					return false;
				}
			}

			return true;
		}

		bool addCategory(Category[] categories, Category newCategory)
		{
			foreach (Category space in categories)
			{
				int i = 0;

				if (Char.IsWhiteSpace(space.id[0]))
				{
					categories[i] = newCategory;

					Console.WriteLine("Category with ID ({0}) and Name ({1}) has been Added Successfully!", newCategory.id, newCategory.name);

					return true;
				}
				else
				{
					i++;
				}
			}

			Console.WriteLine("There was no empty space found for new Category");

			return false;
		}

		bool editCategory(Category[] categories, char[] catId, Category newData)
		{
			foreach (Category match in categories)
			{
				int i = 0;

				if (String.Equals(match.id, catId))
				{
					categories[i] = newData;

					Console.WriteLine("Category with ID ({0}) has been Updated Successfully!", catId);

					return true;
				}
				else
				{
					i++;
				}
			}

			Console.WriteLine("There was no Category with ID ({0}) was found!", catId);

			return false;
		}

		bool deleteCategory(Category[] categories, char[] catId)
		{
			foreach (Category match in categories)
			{
				int i = 0;

				if (String.Equals(match.id, catId))
				{
					categories[i] = new Category();

					Console.WriteLine("Category with ID ({0}) has been Deleted Successfully!", catId);

					return true;
				}
				else
				{
					i++;
				}
			}

			Console.WriteLine("There was no Category with ID ({0}) was found!", catId);

			return false;
		}

		static void printCategory(Category[] categories)
		{
			Console.WriteLine("\tCategory ID\tCategory Name");

			foreach (Category category in categories)
			{
				int i = 0;

				if (!String.IsNullOrEmpty(Convert.ToString(category.id)))
				{
					Console.WriteLine("{0}\t{1}", categories[i].id, categories[i].name);
				}
				else
				{
					i++;
				}
			}
		}

		bool saveCategories(Category[] categories)
		{
			using (FileStream sw = File.OpenWrite("categories.txt")
			{
				foreach (Category category in categories)
				{
					//TODO
				}
			}
		}

		static void Main(string[] args)
		{
			User[] users = new User[MAX_USERS];
			Category[] categories = new Category[MAX_CATEGORIES];
			Book[] books = new Book[MAX_BOOKS];
			BookCopy[] bookCopies = new BookCopy[MAX_COPY_NUMBER];
			Student[] students = new Student[MAX_STUDENTS];

			while (true)
			{
				while (true)
				{
					printMenu();

					int mainOption = -1;
					char subOption = '\0';

					takeMenuInput(ref mainOption, ref subOption);
				}
			}
		}
	}
}
