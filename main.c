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
void getInput() {}

// Kabir please commit your code here
void insertData(int start, int limit) {
 for (int i = start; i < limit; ++i) {
        printf("\tPlease enter the value of your %d note: ", i + 1);
        scanf("%d", &walletAry[i]);
    }

    arySize = limit;
    isAryDefined = true;

    printf("Your notes has been stored successfully.\n what would you like to do next?\n");

    showMenu();
}

// Shakil commit here
void showWallet() {}

// Parvez please commit your code here
void spend() {}