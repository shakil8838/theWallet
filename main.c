#include <stdio.h>
#include <stdbool.h>

void showMenu();
void getInput();
void showWallet();
void spend();
void insertData(int start, int limit);

int walletAry[100];
int arySize = 0;

bool isAryDefined = false;

int main() {

    printf("Hi, what would you like to do? press the digit to operate");
    showMenu();

    return 0;
}

// Saif please commit your code here
void showMenu() {
int theInput = 0;

    printf("\n\n\tAdd to wallet\t\t-> 1");
    printf("\n\tMy Wallet \t\t-> 2");
    printf("\n\tSpend from wallet  \t-> 3");
    printf("\n\tExit  \t\t\t-> 4\n\n");

    printf("Enter your choice : ");
    scanf("%d", &theInput);

    switch (theInput) {

        case 1:
            getInput();
            break;
        case 2:
            showWallet();
            break;
        case 3:
            spend();
            break;
        case 4:
            break;
        default:
            printf("Invalid input! if you want to exit please press 4\n\n");
            showMenu();
            break;

    }
}

// Riaz please commit your code here
void getInput() {}

// Kabir please commit your code here
void insertData(int start, int limit) {}

// Shakil commit here
void showWallet() {}

// Parvez please commit your code here
void spend() {}