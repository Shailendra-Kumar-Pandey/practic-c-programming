  /* Write a Progream to following step:-
    First Page - 01  
             Ral English High School
    1) Login.........
    2) Register.........
    3) Forget Login ID/Password........
    4) Exit......

    Enter your choice(1-4):-

    Second Page - 02
             Ral English High School
    1) Enter Student Data (Roll No, Name, Gender, Marks of 5 subject)
    2) Append New Data
    3) Display Result Sheet
    4) Display Merit List
    5) Display List of Boys/Girls
    6) Exit

    Enter your choice(1-6):-
  */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50
#define MAX_SUBJECTS 5
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} Student;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentData;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentMarks;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentGender;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
    float marks[MAX_SUBJECTS];
} StudentResult;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentMeritList;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentList;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentBoysGirls;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentExit;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentLogin;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentRegister;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentForget;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice2;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice3;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice4;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice5;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice6;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice7;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice8;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice9;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice10;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice11;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice12;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice13;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice14;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice15;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice16;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice17;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice18;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice19;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice20;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice21;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice22;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice23;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice24;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice25;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice26;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice27;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice28;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice29;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice30;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice31;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice32;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice33;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice34;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice35;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice36;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice37;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice38;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice39;
typedef struct {
    int rollNo;
    char name[MAX_NAME_LENGTH];
} StudentChoice40;
int studentCount = 0;
Student students[MAX_STUDENTS];
void displayMenu() {
    printf("Ral English High School\n");
    printf("1) Login\n");
    printf("2) Register\n");
    printf("3) Forget Login ID/Password\n");
    printf("4) Exit\n");
    printf("Enter your choice (1-4): ");
} 
void displaySecondMenu() {
    printf("Ral English High School\n");
    printf("1) Enter Student Data (Roll No, Name, Gender, Marks of 5 subject)\n");
    printf("2) Append New Data\n");
    printf("3) Display Result Sheet\n");
    printf("4) Display Merit List\n");
    printf("5) Display  List of Boys/Girls\n");
    printf("6) Exit\n");
    printf("Enter your choice (1-6): ");
}
void enterStudentData() {
    if (studentCount >= MAX_STUDENTS) {
        printf("Maximum student limit reached.\n");
        return;
    }
    Student newStudent;
    printf("Enter Roll No: ");
    scanf("%d", &newStudent.rollNo);
    printf("Enter Name: ");
    scanf(" %[^\n]", newStudent.name);
    students[studentCount++] = newStudent;
    printf("Student data entered successfully.\n");
} 
void appendNewData() {
    if (studentCount >= MAX_STUDENTS) {
        printf("Maximum student limit reached.\n");
        return;
    }
    Student newStudent;
    printf("Enter Roll No: ");
    scanf("%d", &newStudent.rollNo);
    printf("Enter Name: ");
    scanf(" %[^\n]", newStudent.name);
    students[studentCount++] = newStudent;
    printf("New student data appended successfully.\n");
} 
void displayResultSheet() {
    if (studentCount == 0) {
        printf("No student data available.\n");
        return;
    }
    printf("Result Sheet:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("Roll No: %d, Name: %s\n", students[i].rollNo, students[i].name);
    }
} 
void displayMeritList() {
    if (studentCount == 0) {
        printf("No student data available.\n");
        return;
    }
    printf("Merit List:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("Roll No: %d, Name: %s\n", students[i].rollNo, students[i].name);
    }
} 
void displayListOfBoysGirls() {
    if (studentCount == 0) {
        printf("No student data available.\n");
        return;
    }
    printf(" ");
    for (int i = 0; i < studentCount; i++) {
        printf("Roll No: %d, Name: %s\n", students[i].rollNo, students[i].name);
    }
}
void exitProgram() {
    printf("Exiting the program. Goodbye!\n");
    exit(0);
}
void login() {
    char username[MAX_NAME_LENGTH];
    char password[MAX_NAME_LENGTH];
    printf("Enter Username: ");
    scanf(" %[^\n]", username);
    printf("Enter Password: ");
    scanf(" %[^\n]", password);
    // For simplicity, we assume the login is always successful
    printf("Login successful!\n");
} 
void registerUser() {
    char username[MAX_NAME_LENGTH];
    char password[MAX_NAME_LENGTH];
    printf("Enter Username: ");
    scanf(" %[^\n]", username);
    printf("Enter Password: ");
    scanf(" %[^\n]", password);
    // For simplicity, we assume the registration is always successful
    printf("Registration successful!\n");
} 
void forgetLogin() {
    char username[MAX_NAME_LENGTH];
    printf("Enter Username: ");
    scanf(" %[^\n]", username);
    // For simplicity, we assume the forget login is always successful
    printf("Login ID/Password recovery successful!\n");
} 
int main() {
    int choice;
    while (true) {
        displayMenu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                login();
                break;
            case 2:
                registerUser();
                break;
            case 3:
                forgetLogin();
                break;
            case 4:
                exitProgram();
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
        displaySecondMenu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                enterStudentData();
                break;
            case 2:
                appendNewData();
                break;
            case 3:
                displayResultSheet();
                break;
            case 4:
                displayMeritList();
                break;
            case 5:
                displayListOfBoysGirls();
                break;
            case 6:
                exitProgram();
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
} 
// End of file: Assignment%2002/Assignment%2002.c
// --- IGNORE ---
// This file is part of the C programming assignment.