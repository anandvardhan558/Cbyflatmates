#include <stdio.h>

void printLine() {
    printf("---------------------------------------------\n");
}

int main() {
    char name[50], email[50], phone[20], education[100], skills[200], experience[200];
    
    // Taking user inputs
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Enter your email: ");
    fgets(email, sizeof(email), stdin);
    
    printf("Enter your phone number: ");
    fgets(phone, sizeof(phone), stdin);
    
    printf("Enter your education details: ");
    fgets(education, sizeof(education), stdin);
    
    printf("Enter your skills: ");
    fgets(skills, sizeof(skills), stdin);
    
    printf("Enter your work experience: ");
    fgets(experience, sizeof(experience), stdin);
    
    // Printing Resume
    printLine();
    printf("\t\tRESUME\n");
    printLine();
    printf("Name: %s", name);
    printf("Email: %s", email);
    printf("Phone: %s", phone);
    printLine();
    printf("Education:\n%s", education);
    printLine();
    printf("Skills:\n%s", skills);
    printLine();
    printf("Experience:\n%s", experience);
    printLine();
    
    return 0;
}
