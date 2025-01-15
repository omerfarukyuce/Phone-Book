# 📱 Phone Book Application

A simple command-line phone book application written in C that allows you to manage your contacts efficiently.

## 🚀 Features

- ➕ Add new contacts
- 📋 List all contacts
- 🔍 Search contacts by name
- 💾 File-based storage system

## 🛠️ Technical Details

- Language: C
- Storage: Text file based
- Platform: Windows/Linux/MacOS
## 📱 Usage

The application provides a simple menu interface with the following options:

1. **Add Telephone Number**
   - Enter contact name (max 20 characters)
   - Enter last name (max 20 characters)
   - Enter phone number (max 11 digits)

2. **List Telephone Numbers**
   - Displays all stored contacts in a formatted table

3. **Search**
   - Search contacts by name
   - Shows all matching records

4. **Exit**
   - Closes the application

## 🏗️ Project Structure

Phone-Book/

│

├── main.c # Main program file

├── header.h # Structure definitions and function declarations

├── menu.h # Menu interface implementation

├── phoneadd.h # Contact addition functionality

├── phonelist.h # Contact listing functionality

├── phonesearch.h # Contact search functionality

└── data.txt # Contact storage file

## 📝 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## ⚠️ Known Issues

- Search function is case-sensitive
- No data validation for phone numbers
- Limited character length for names
