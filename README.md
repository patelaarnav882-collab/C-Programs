# 📚 Book Management System in C

A simple console-based Book Management System written in C that allows users to manage a collection of books efficiently. This project demonstrates the use of structures, arrays, loops, and basic programming concepts in C.

---

## 🚀 Features

- Add new books  
- Display all books  
- Search book by title  
- Search books by author  
- Update book details  
- Delete a book  
- Sort books by price (low to high)  
- Exit program  

---

## 🛠️ Technologies Used

- C Programming Language  
- Standard Libraries:
  - stdio.h
  - string.h

---

## 📂 Project Structure

Book-Management-System/
│
├── main.c
└── README.md

---

## ▶️ How to Run

### Step 1: Compile the program
gcc main.c -o book

### Step 2: Run the program
./book

(For Windows use: book.exe)

---

## 💡 How It Works

- The program uses a struct Book to store:
  - Book Name
  - Author Name
  - Price
- Books are stored in an array with a maximum capacity of 100.
- A menu-driven interface allows users to perform different operations.

---

## ⚠️ Limitations

- Uses gets() which is unsafe and deprecated  
- Data is not stored permanently (no file handling)  
- Limited to 100 books  
- Case-sensitive search  

---

## 🔧 Future Improvements

- Replace gets() with fgets()  
- Add file handling to store data permanently  
- Implement case-insensitive search  
- Add sorting by name or author  
- Improve user interface  

---

## 🧑‍💻 Author

Patel Aarnav

---

## 📜 License

This project is open-source and free to use for learning purposes.
