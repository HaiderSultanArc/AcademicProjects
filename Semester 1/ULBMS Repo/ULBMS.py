# -------------------------------------------------- CONSTANTS -------------------------------------------------- #
MAX_USERS = 3
MAX_USERNAME = 60
MAX_CATEGORIES = 30
MAX_CATEGORY_NUMBER = 4
MAX_CATEGORY_NAME = 20
MAX_BOOKS = 200
MAX_BOOK_ID = 13
MAX_BOOK_NAME = 20
MAX_COPY_NUMBER = 17
DATE_SIZE = 11
MAX_STUDENTS = 50
MAX_REGISTRATION_NUMBER = 12
MAX_STUDENT_NAME = 60


# -------------------------------------------------- CLASSES -------------------------------------------------- #
class Category:
    id = ''
    name = ''


class Book:
    id = ''
    name = ''
    edition = ''


class Date:
    day = ''
    month = ''
    year = ''


class BookCopy:
    id = ''
    purchaseDate = Date()


class Student:
    registrationNo = ''
    name = ''
    session = ''
    admissionDate = Date()


class User:
    userName = ''
    password = ''


# -------------------------------------------------- FUNCTIONS -------------------------------------------------- #
def menu():
    print("\nChoose the Following Options:")
    print("1\tCategory Management (A, E, L, D)")
    print("2\tBooks Management (A, E, L, D)")
    print("3\tBook Copies Management (A, E, L, D)")
    print("4\tStudent Management (A, E, L, D)")
    print("5\tBook Issue Management (I, R, S, B)")
    print("9\tLogout Management (9L)")
    print("0\tExist Program (0E)")

    Option = input("\nChoose an Option: ")
    return Option


# -------------------------------------------------- USER RELATED FUNCTIONS -------------------------------------------------- #
def loadUsers(users):
    with open("users.csv", "r") as file:
        i = 0

        for line in file:
            split = line.split(",")

            users[i].userName = split[0]
            users[i].password = split[1]


def findUser(users):
    for match in enumerate(users):
        if ((userName == match[1].userName) and (password == match[1].password)):
            return True


# -------------------------------------------------- VALIDATIONS RELATED FUNCTIONS -------------------------------------------------- #
def isValidCategoryID(categoryId):
    if (len(categoryId) == MAX_CATEGORY_NUMBER - 1):
        if (categoryId.isdigit()):
            return True

    print("Enter a Valid Category Number!")


def isValidCategoryName(catName):
    if (len(catName) == MAX_CATEGORY_NAME - 1):
        if (catName.isalpha()):
            return True

    print("Enter a Valid Category Name!")


def isValidBookID(bookId):
    if (len(bookId) == MAX_BOOK_ID - 1):
        splitID = bookId.split('-')

        if ((bookId[3] == '-' and bookId[6] == '-')):
            if (splitID[0].isdigit() and splitID[2].isdigit()):
                if (splitID[1].isupper()):
                    return True

    print("Enter a Valid Book ID!")


def isValidBookName(bookName):
    if (len(bookName) == MAX_BOOK_NAME - 1):
        if (bookName.isprintable()):
            from string import punctuation
            import re

            pun = punctuation
            pun = re.sub('[,."():]', '?', pun)

            A = set(bookName)
            B = set(pun)

            if (not(A.intersection(B))):
                return True

    print("Enter a Valid Book Name!")


def isValidBookCopyID(bookCopyId):
    if (len(bookCopyId) == (MAX_COPY_NUMBER - 1)):
        splitID = bookCopyId.split['#']

        if (isValidBookId(splitID[0])):
            if (bookCopyId[13] == '#'):
                if (splitID[1].isdigit()):
                    return True


def isValidDate(Date):
    import datetime

    try:
        datetime.date(int(Date.year), int(Date.month), int(Date.day))
    except:
        print("Please Enter a Valid Date!")


def isValidRegistrationNo(regNo):
    if (len(regNo) == MAX_REGISTRATION_NUMBER - 1):
        splitRegNo = regNo.split('-')

        if (splitRegNo[0].isdigit() and splitRegNo[1].isupper() and splitRegNo[2].isdigit()):
            if (regNo[4] == '-' and regNo[7] == '-'):
                return True

    print("Please Enter a Valid Registration Number!")


def isValidStudentName(name):
    if (len(name) == MAX_STUDENT_NAME - 1):
        splitName = name.split(" ")

        if (splitName[0].isalpha() and splitName[1].isalpha()):
            return True

    print("Enter a Valid Name!")


# -------------------------------------------------- CATEGORY RELATED FUNCTIONS -------------------------------------------------- #
def isExistCategory(categories, categoryId):
    for ID in enumerate(categories):
        if(categoryId in ID[1]):
            return true


def addCategory(categories, newCategory):
    for space in enumerate(categories):
        if(space[1].id == ''):
            categories[space[0]].id = newCategory.id
            categories[space[0]].name = newCategory.name

            break


def editCategory(categories, categoryId, newData):
    for match in enumerate(categories):
        if(match[1].id == categoryId):
            categories[match[0]].id = newData.id
            categories[match[0]].name = newData.name


def deleteCategory(categories, categoryId):
    for match in enumerate(categories):
        if(match[1].id == categoryId):
            categories[match[0]] = Category()


def printCategories(categories):
    for i in range(MAX_CATEGORIES):
        if(categories[i].id != ''):
            print("\n\tCATEGORY ID\t\tCATEGORY NAME")
            print("\t{0}\t\t{1}".format(categories[i].id, categories[i].name))


def loadCategories(categories):
    with open("categories.csv", "r") as file:
            i = 0

            for line in file:
                split = line.split(",")

                categories[i].id = split[0]
                categories[i].name = split[1]

                i += 1


def saveCategores(categories):
    with open("categories.csv", "w") as file:
        for category in range(MAX_CATEGORIES):
            file.write(categories[category].id)
            file.write(",")
            file.write(categories[category].name)


# -------------------------------------------------- BOOK RELATED FUNCTIONS -------------------------------------------------- #
def isExistBook(books, bookId):
    for ID in enumerate(books):
        if(bookId in ID[1]):
            return true


def addBook(books, newbook):
    for space in enumerate(books):
        if(space[1].id == ''):
            books[space[0]].id = newbook.id
            books[space[0]].name = newbook.name
            books[space[0]].edition = newbook.edition

            break


def editBook(books, bookId, newData):
    for match in enumerate(books):
        if(match[1].id == bookId):
            books[match[0]].id = newData.id
            books[match[0]].name = newData.name
            books[match[0]].edition = newData.edition


def deleteBook(books, bookId):
    for match in enumerate(books):
        if(match[1].id == bookId):
            books[match[0]] = Book()


def printBooks(books):
    for i in range(MAX_BOOKS):
        if(books[i].id != ''):
            print("\n\tBOOK ID\t\tBOOK NAME\t\tBOOK EDITION")
            print("\t{0}\t\t{1}\t\t{2}".format(books[i].id, books[i].name, books[i].edition))


def loadBooks(books):
    with open("books.csv", "r") as file:
            i = 0

            for line in file:
                split = line.split(",")

                books[i].id = split[0]
                books[i].name = split[1]
                books[i].edition = split[2]

                i += 1


def saveBooks(books):
    with open("books.csv", "w") as file:
        for book in range(MAX_BOOKS):
            file.write(books[book].id)
            file.write(",")
            file.write(books[book].name)
            file.write(",")
            file.write(books[book].edition)


# -------------------------------------------------- BOOK COPY RELATED FUNCTIONS -------------------------------------------------- #
def isExistBookCopy(bookCopies, bookCopyId):
    for ID in enumerate(bookCopies):
        if(bookCopyId in ID[1]):
            return true


def addBookCopy(bookCopies, newBookCopy):
    for space in enumerate(bookCopies):
        if(space[1].id == ''):
            bookCopies[space[0]].id = newBookCopy.id
            booksCopies[space[0]].purchaseDate = newBookCopy.purchaseDate

            break


def editBookCopy(bookCopies, bookCopyId, newData):
    for match in enumerate(bookCopies):
        if(match[1].id == bookCopyId):
            bookCopies[match[0]].id = newData.id
            bookCopies[match[0]].purchaseDate = newData.purchaseDate


def deleteBookCopy(bookCopies, bookCopyId):
    for match in enumerate(bookCopies):
        if(match[1].id == bookCopyId):
            bookCopies[match[0]] = BookCopy()


def printBooksCopies(bookCopies):
    for i in range(MAX_BOOKS):
        if(bookCopies[i].id != ''):
            print("\n\tBOOK COPY ID\t\tPURCHASE DATE")
            print("\t{0}\t\t{1}/{2}/{3}".format(bookCopies[i].id, bookCopies.purchaseDate.day, bookCopies.purchaseDate.month, bookCopies.purchaseDate.year))


def loadBookCopies(bookCopies):
    with open("bookCopies.csv", "r") as file:
            i = 0

            for line in file:
                split = line.split(",")

                bookCopies[i].id = split[0]
                bookCopies[i].purchaseDate.day = split[1]
                bookCopies[i].purchaseDate.month = split[2]
                bookCopies[i].purchaseDate.year = split[3]

                i += 1


def saveBookCopies(bookCopies):
    with open("bookCopies.csv", "w") as file:
        for bookCopy in range(MAX_BOOKS):
            file.write(bookCopies[bookCopy].id)
            file.write(",")
            file.write(bookCopies[bookCopy].purchaseDate.day)
            file.write(",")
            file.write(bookCopies[bookCopy].purchaseDate.month)
            file.write(",")
            file.write(bookCopies[bookCopy].purchaseDate.year)


# -------------------------------------------------- STUDENT RELATED FUNCTIONS -------------------------------------------------- #
def isExistStudent(students, studentRegNo):
    for regNo in enumerate(students):
        if(studentRegNo in regNo[1]):
            return true


def addStudent(students, newStudent):
    for space in enumerate(students):
        if(space[1].registrationNo == ''):
            students[space[0]].registrationNo = newStudent.registrationNo
            students[space[0]].name = newStudent.name
            students[space[0]].session = newStudent.session
            students[space[0]].admissionDate = newStudent.admissionDate

            break


def editStudent(students, regNo, newData):
    for match in enumerate(students):
        if(match[1].registrationNo == regNo):
            students[match[0]].registrationNo = newData.registrationNo
            students[match[0]].name = newData.name
            students[match[0]].session = newData.session
            students[match[0]].admissionDate = newData.admissionDate


def deleteStudent(students, regNo):
    for match in enumerate(students):
        if(match[1].registrationNo == regNo):
            students[match[0]] = Student()


def printStudents(students):
    for i in range(MAX_STUDENTS):
        if(students[i].registrationNo != ''):
            print("\n\tRegistraion No\t\tName\t\tSession\t\tAdmission Date")
            print("\t{0}\t\t{1}\t\t{2}\t\t{3}".format(students[i].registrationNo, students[i].name, students[i].session, students[i].admissionDate))


def loadStudents(students):
    with open("students.csv", "r") as file:
            i = 0

            for line in file:
                split = line.split(",")

                students[i].registrationNo = split[0]
                students[i].name = split[1]
                students[i].session = split[2]
                students[i].admissionDate = split[3]
                i += 1


def saveStudents(students):
    with open("students.csv", "w") as file:
        for student in range(MAX_STUDENTS):
            file.write(students[student].registrationNo)
            file.write(",")
            file.write(students[student].name)
            file.write(",")
            file.write(students[student].session)
            file.write(",")
            file.write(students[student].admissionDate)


# -------------------------------------------------- MAIN PROGRAM -------------------------------------------------- #
print("** Welcome to University Library Management System **")


users = [User()] * MAX_USERS
for obj in range(MAX_USERS):
    users[obj] = User()

categories = [Category()] * MAX_CATEGORIES
for obj in range(MAX_CATEGORIES):
    categories[obj] = Category()

books = [Book()] * MAX_BOOKS
for obj in range(MAX_BOOKS):
    books[obj] = Book()

bookCopies = [BookCopy()] * MAX_BOOKS
for obj in range(MAX_BOOKS):
    bookCopies[obj] = BookCopy()

students = [Student()] * MAX_STUDENTS
for obj in range(MAX_STUDENTS):
    students[obj] = Student()


loadUsers(users)
loadCategories(categories)
loadBooks(books)
loadBookCopies(bookCopies)
loadStudents(students)

exit = False
while (not(exit)):
    print("Please Enter Credentials to Login")
    userName = input("Username: ")
    password = input("Password: ")

    logIn = findUser(users)

    while (logIn):
        mainOption = int(menu()[0])
        subOption = menu()[1]

        if (mainOption == 1):
            if (subOption == 'A'):
                newCategory = Category()

                while (not(isValidCategoryID(newCategory.id)) and not(isValidCategoryName(newCategory.name))):
                    newCategory.id = input("Enter details of Category (ID): ")
                    newCategory.name = input("Enter details of Category (Name): ")

                addCategory(categories, newCategory)

            elif (subOption == 'E'):
                newData = Category()
                categoryId = ''

                while(not(isValidCategoryID(categoryId))):
                    categoryId = input("Enter Category ID to edit: ")

                while(not(isValidCategoryID(newData.id)) and not(isValidCategoryName(newData.name))):
                    newData.id = input("Enter new details of Category (ID): ")
                    newData.name = input("Enter new details of Category (Name): ")

                editCategory(categories, categoryId, newData)

            elif (subOption == 'L'):
                printCategories(categories)

            elif (subOption == 'D'):
                categoryId = ''

                while (not(isValidCategoryID(categoryId))):
                    categoryId = input("Enter Category Number to Delete: ")

                deleteCategory(categories, categoryId)

        elif (mainOption == 2):
            if (subOption == 'A'):
                newBook = Book()

                while (not (isValidBookID(newBook.id)) and not (isValidBookName(newBook.name))):
                    newBook.id = input("Enter details of Book (ID): ")
                    newBook.name = input("Enter details of Book (Name): ")
                    newBook.edition = input("Enter details of Book (Edition): ")

                addBook(books, newBook)

            elif (subOption == 'E'):
                newData = Book()
                bookId = ''

                while (not (isValidBookID(bookId))):
                    bookId = input("Enter Book ID to edit: ")

                while (not (isValidBookID(newData.id)) and not (isValidBookName(newData.name))):
                    newData.id = input("Enter new details of Book (ID): ")
                    newData.name = input("Enter new details of Book (Name): ")
                    newData.edition = input("Enter new details of Book (Edition): ")

                editBook(books, bookId, newData)

            elif (subOption == 'L'):
                printBooks(books)

            elif (subOption == 'D'):
                bookId = ''

                while (not(isValidBookID(bookId))):
                    bookId = input("Enter Book ID to Delete: ")

                deleteBook(books, bookId)

        elif (mainOption == 3):
            if (subOption == 'A'):
                newBookCopy = BookCopy()

                while (not (isValidBookCopyID(newBookCopy.id)) and not (isValidDate(newBookCopy.purchaseDate))):
                    newBookCopy.id = input("Enter details of Book Copy (ID): ")
                    newBookCopy.purchaseDate.day = input("Enter details of Book Copy Purchase Date (Day): ")
                    newBookCopy.purchaseDate.month = input("Enter details of Book Copy Purchase Date (Month): ")
                    newBookCopy.purchaseDate.year = input("Enter details of Book Copy Purchase Date (Year): ")

                addBookCopy(bookCopies, newBookCopy)

            elif (subOption == 'E'):
                newData = BookCopy()
                bookCopyId = ''

                while (not (isValidBookCopyID(bookCopyId))):
                    bookCopyId = input("Enter Book Copy ID to edit: ")

                while (not (isValidBookVopyID(newData.id)) and not (isValidDate(newData.purchaseDate))):
                    newData.id = input("Enter new details of Book (ID): ")
                    newData.purchaseDate.day = input("Enter details of Book Copy Purchase Date (Day): ")
                    newData.purchaseDate.month = input("Enter details of Book Copy Purchase Date (Month): ")
                    newData.purchaseDate.year = input("Enter details of Book Copy Purchase Date (Year): ")

                editBookCopy(bookCopies, bookCopyId, newData)

            elif (subOption == 'L'):
                printBooksCopies(bookCopies)

            elif (subOption == 'D'):
                bookCopyId = ''

                while (not(isValidBookCopyID(bookCopyId))):
                    bookCopyId = input("Enter Book Copy ID to Delete: ")

                deleteBookCopy(bookCopies, bookCopyId)

        elif (mainOption == 4):
            if (subOption == 'A'):
                newStudent = Student()

                while (not (isValidStudentName(newStudent.name)) and not (isValidRegistrationNo(newStudent.registrationNo)) and not (isValidDate(newStudent.admissionDate))):
                    newStudent.registrationNo = input("Enter details of Student (Registration No): ")
                    newStudent.name = input("Enter details of Student (Name): ")
                    newStudent.admissionDate.day = input("Enter details of Student Admission Date (Day): ")
                    newStudent.admissionDate.month = input("Enter details of Student Admission Date (Month): ")
                    newStudent.admissionDate.year = input("Enter details of Student Admission Date (Year): ")
                    newStudent.session = input("Enter details of Student (Session): ")

                addStudent(students, newStudent)

            elif (subOption == 'E'):
                newData = Student()
                studentRegNo = ''

                while (not (isValidRegistrationNo(studentRegNo))):
                    studentRegNo = input("Enter Registration No to edit: ")

                while (not (isValidRegistrationNo(newData.registrationNo)) and not (isValidStudentName(newData.name)) and not (isValidDate(newData.admissionDate))):
                    newData.registrationNo = input("Enter details of Student (Registration No): ")
                    newData.name = input("Enter details of Student (Name): ")
                    newData.admissionDate.day = input("Enter details of Student Admission Date (Day): ")
                    newData.admissionDate.month = input("Enter details of Student Admission Date (Month): ")
                    newData.admissionDate.year = input("Enter details of Student Admission Date (Year): ")
                    newData.session = input("Enter details of Student (Session): ")

                editStudent(students, studentRegNo, newData)

            elif (subOption == 'L'):
                printStudents(students)

            elif (subOption == 'D'):
                studentRegNo = ''

                while (not(isValidRegistrationNo(studentRegNo))):
                    studentRegNo = input("Enter Student Registration No to Delete: ")

                deleteStudent(students, studentRegNo)
