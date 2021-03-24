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
void showMenu() {}

// Riaz please commit your code here
void getInput() {

    int limit;

    if (isAryDefined) {
        printf("\nAdd to wallet\n");
        printf("-------------\n");
        printf("How much more notes you want to store in? ");
        scanf("%d", &limit);

        insertData(arySize, arySize + limit);
    } else {
        printf("\nAdd to wallet\n");
        printf("-------------\n");
        printf("Please enter the number of note you want to put in: ");
        scanf("%d", &arySize);

        insertData(0, arySize);
    }

}

// Kabir please commit your code here
void insertData(int start, int limit) {}

// Shakil commit here
void showWallet() {}

// Parvez please commit your code here
void spend() {}