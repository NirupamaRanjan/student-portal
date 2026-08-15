# Student Portal

This is a console based student portal application built using C++.
It is a simple student management where students can login, view their dashboard, check grades and manage their profile.

## Prerequisites

A computer with Windows, Mac or Linux
GCC compiler installed (g++)
A terminal or command prompt
Basic knowledge of running terminal commands

## Installation

1. Clone this repository
   git clone https://github.com/YOUR_USERNAME/student-portal.git

2. Navigate into the folder
   cd student-portal

3. Compile any file using 
   g++ login.cpp -o login

   
## Execution

Run each module separately:

- Login Module :
  g++ login.cpp -o login
  ./login

- Dashboard Module :
  g++ dashboard.cpp -o dashboard
  ./dashboard

- Grades Module :
  g++ grades.cpp -o grades
  ./grades

- Profile Module :
  g++ profile.cpp -o profile
  ./profile

- Settings Module : 
  g++ settings.cpp -o settings
  ./settings

Login Credentials==>
  Email    : student@uni.com
  Password : pass123

## Folder Structure

student-portal/
    main.cpp → Main menu of the portal
    login.cpp → Handles student login and validation
    dashboard.cpp → Displays student info and announcements
    grades.cpp       → Shows subject grades and GPA
    profile.cpp      → View and edit student profile
    settings.cpp     → Toggle notifications and dark mode
    README.md        → Project documentation

## Author

Name    : Nirupama Ranjan
Course  : CSE
Lab     : Git Lab Activity1
GitHub  : https://github.com/NirupamaRanjan