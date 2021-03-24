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
void showWallet() {
    for (int i = 0; i < arySize; ++i) {
        for (int j = i + 1; j < arySize; ++j) {
            if (walletAry[i] > walletAry[j]) {
                int temp = walletAry[i];
                walletAry[i] = walletAry[j];
                walletAry[j] = temp;
            }
        }
    }

    printf("Here is the list of your notes\n");

    printf("| Sl | \t | Note |\n");
    for (int i = 0; i < arySize; ++i) {
        printf("| %d | \t | %d |\n", i + 1, walletAry[i]);
    }

    showMenu();
}

// Parvez please commit your code here
void spend() {
    if (arySize <= 0) {
        printf("You don't have any money to spend! \n");
    } else {

        for (int i = 0; i < arySize; ++i) {
            for (int j = i + 1; j < arySize; ++j) {
                if (walletAry[i] > walletAry[j]) {
                    int temp = walletAry[i];
                    walletAry[i] = walletAry[j];
                    walletAry[j] = temp;
                }
            }
        }

        printf("Here is the list of your notes\n");

        printf("| Sl | \t | Note |\n");
        for (int i = 0; i < arySize; ++i) {
            printf("| %d | \t | %d |\n", i + 1, walletAry[i]);
        }

        int noteSerialNumber;
        printf("Please press the serial number of the note you want to spend: ");
        scanf("%d", &noteSerialNumber);

        if (noteSerialNumber > 0 && noteSerialNumber <= arySize) {
            for (int i = noteSerialNumber - 1; i < arySize; ++i) {
                walletAry[i] = walletAry[i + 1];
            }

            arySize -= 1;

            printf("After spending here is the list of your notes: \n");
            printf("| Sl | \t | Note |\n");
            for (int i = 0; i < arySize; ++i) {
                printf("| %d | \t | %d |\n", i + 1, walletAry[i]);
            }
        } else {
            printf("Invalid Input!\n");
            spend();
        }
    }

    showMenu();
}