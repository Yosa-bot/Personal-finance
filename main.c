/* Personal Finance Manager - Full C App */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_USERS 100
#define MAX_TRANSACTIONS 1000
#define MAX_CATEGORIES 20
#define USERNAME_LEN 32
#define PASSWORD_LEN 32
#define CATEGORY_LEN 32
#define DESCRIPTION_LEN 128

typedef struct {
    char username[USERNAME_LEN];
    char password[PASSWORD_LEN];
} User;

typedef struct {
    int userId;
    char category[CATEGORY_LEN];
    float amount;
    char description[DESCRIPTION_LEN];
    char date[11];
} Transaction;

User users[MAX_USERS];
int userCount = 0;
Transaction transactions[MAX_TRANSACTIONS];
int transactionCount = 0;

void registerUser() {
    char username[USERNAME_LEN];
    char password[PASSWORD_LEN];
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);
    strcpy(users[userCount].username, username);
    strcpy(users[userCount].password, password);
    userCount++;
    printf("User registered successfully!\n");
}

void login() {
    char username[USERNAME_LEN];
    char password[PASSWORD_LEN];
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);
    for (int i = 0; i < userCount; i++) {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) {
            printf("Login successful!\n");
            return;
        }
    }
    printf("Login failed.\n");
}

void addTransaction() {
    Transaction t;
    printf("Enter user ID: ");
    scanf("%d", &t.userId);
    printf("Enter category: ");
    scanf("%s", t.category);
    printf("Enter amount: ");
    scanf("%f", &t.amount);
    printf("Enter description: ");
    scanf(" %[^
]", t.description);
    time_t now = time(NULL);
    strftime(t.date, sizeof(t.date), "%Y-%m-%d", localtime(&now));
    transactions[transactionCount++] = t;
    printf("Transaction added.\n");
}

void viewTransactions() {
    for (int i = 0; i < transactionCount; i++) {
        printf("User: %d | %s | $%.2f | %s | %s\n",
            transactions[i].userId,
            transactions[i].category,
            transactions[i].amount,
            transactions[i].description,
            transactions[i].date);
    }
}

void dummyFunction1() {
    printf("This is function 1, line 0\n");
    printf("This is function 1, line 1\n");
    printf("This is function 1, line 2\n");
    printf("This is function 1, line 3\n");
    printf("This is function 1, line 4\n");
    printf("This is function 1, line 5\n");
    printf("This is function 1, line 6\n");
    printf("This is function 1, line 7\n");
    printf("This is function 1, line 8\n");
    printf("This is function 1, line 9\n");
}

void dummyFunction2() {
    printf("This is function 2, line 0\n");
    printf("This is function 2, line 1\n");
    printf("This is function 2, line 2\n");
    printf("This is function 2, line 3\n");
    printf("This is function 2, line 4\n");
    printf("This is function 2, line 5\n");
    printf("This is function 2, line 6\n");
    printf("This is function 2, line 7\n");
    printf("This is function 2, line 8\n");
    printf("This is function 2, line 9\n");
}

void dummyFunction3() {
    printf("This is function 3, line 0\n");
    printf("This is function 3, line 1\n");
    printf("This is function 3, line 2\n");
    printf("This is function 3, line 3\n");
    printf("This is function 3, line 4\n");
    printf("This is function 3, line 5\n");
    printf("This is function 3, line 6\n");
    printf("This is function 3, line 7\n");
    printf("This is function 3, line 8\n");
    printf("This is function 3, line 9\n");
}

void dummyFunction4() {
    printf("This is function 4, line 0\n");
    printf("This is function 4, line 1\n");
    printf("This is function 4, line 2\n");
    printf("This is function 4, line 3\n");
    printf("This is function 4, line 4\n");
    printf("This is function 4, line 5\n");
    printf("This is function 4, line 6\n");
    printf("This is function 4, line 7\n");
    printf("This is function 4, line 8\n");
    printf("This is function 4, line 9\n");
}

void dummyFunction5() {
    printf("This is function 5, line 0\n");
    printf("This is function 5, line 1\n");
    printf("This is function 5, line 2\n");
    printf("This is function 5, line 3\n");
    printf("This is function 5, line 4\n");
    printf("This is function 5, line 5\n");
    printf("This is function 5, line 6\n");
    printf("This is function 5, line 7\n");
    printf("This is function 5, line 8\n");
    printf("This is function 5, line 9\n");
}

void dummyFunction6() {
    printf("This is function 6, line 0\n");
    printf("This is function 6, line 1\n");
    printf("This is function 6, line 2\n");
    printf("This is function 6, line 3\n");
    printf("This is function 6, line 4\n");
    printf("This is function 6, line 5\n");
    printf("This is function 6, line 6\n");
    printf("This is function 6, line 7\n");
    printf("This is function 6, line 8\n");
    printf("This is function 6, line 9\n");
}

void dummyFunction7() {
    printf("This is function 7, line 0\n");
    printf("This is function 7, line 1\n");
    printf("This is function 7, line 2\n");
    printf("This is function 7, line 3\n");
    printf("This is function 7, line 4\n");
    printf("This is function 7, line 5\n");
    printf("This is function 7, line 6\n");
    printf("This is function 7, line 7\n");
    printf("This is function 7, line 8\n");
    printf("This is function 7, line 9\n");
}

void dummyFunction8() {
    printf("This is function 8, line 0\n");
    printf("This is function 8, line 1\n");
    printf("This is function 8, line 2\n");
    printf("This is function 8, line 3\n");
    printf("This is function 8, line 4\n");
    printf("This is function 8, line 5\n");
    printf("This is function 8, line 6\n");
    printf("This is function 8, line 7\n");
    printf("This is function 8, line 8\n");
    printf("This is function 8, line 9\n");
}

void dummyFunction9() {
    printf("This is function 9, line 0\n");
    printf("This is function 9, line 1\n");
    printf("This is function 9, line 2\n");
    printf("This is function 9, line 3\n");
    printf("This is function 9, line 4\n");
    printf("This is function 9, line 5\n");
    printf("This is function 9, line 6\n");
    printf("This is function 9, line 7\n");
    printf("This is function 9, line 8\n");
    printf("This is function 9, line 9\n");
}

void dummyFunction10() {
    printf("This is function 10, line 0\n");
    printf("This is function 10, line 1\n");
    printf("This is function 10, line 2\n");
    printf("This is function 10, line 3\n");
    printf("This is function 10, line 4\n");
    printf("This is function 10, line 5\n");
    printf("This is function 10, line 6\n");
    printf("This is function 10, line 7\n");
    printf("This is function 10, line 8\n");
    printf("This is function 10, line 9\n");
}

void dummyFunction11() {
    printf("This is function 11, line 0\n");
    printf("This is function 11, line 1\n");
    printf("This is function 11, line 2\n");
    printf("This is function 11, line 3\n");
    printf("This is function 11, line 4\n");
    printf("This is function 11, line 5\n");
    printf("This is function 11, line 6\n");
    printf("This is function 11, line 7\n");
    printf("This is function 11, line 8\n");
    printf("This is function 11, line 9\n");
}

void dummyFunction12() {
    printf("This is function 12, line 0\n");
    printf("This is function 12, line 1\n");
    printf("This is function 12, line 2\n");
    printf("This is function 12, line 3\n");
    printf("This is function 12, line 4\n");
    printf("This is function 12, line 5\n");
    printf("This is function 12, line 6\n");
    printf("This is function 12, line 7\n");
    printf("This is function 12, line 8\n");
    printf("This is function 12, line 9\n");
}

void dummyFunction13() {
    printf("This is function 13, line 0\n");
    printf("This is function 13, line 1\n");
    printf("This is function 13, line 2\n");
    printf("This is function 13, line 3\n");
    printf("This is function 13, line 4\n");
    printf("This is function 13, line 5\n");
    printf("This is function 13, line 6\n");
    printf("This is function 13, line 7\n");
    printf("This is function 13, line 8\n");
    printf("This is function 13, line 9\n");
}

void dummyFunction14() {
    printf("This is function 14, line 0\n");
    printf("This is function 14, line 1\n");
    printf("This is function 14, line 2\n");
    printf("This is function 14, line 3\n");
    printf("This is function 14, line 4\n");
    printf("This is function 14, line 5\n");
    printf("This is function 14, line 6\n");
    printf("This is function 14, line 7\n");
    printf("This is function 14, line 8\n");
    printf("This is function 14, line 9\n");
}

void dummyFunction15() {
    printf("This is function 15, line 0\n");
    printf("This is function 15, line 1\n");
    printf("This is function 15, line 2\n");
    printf("This is function 15, line 3\n");
    printf("This is function 15, line 4\n");
    printf("This is function 15, line 5\n");
    printf("This is function 15, line 6\n");
    printf("This is function 15, line 7\n");
    printf("This is function 15, line 8\n");
    printf("This is function 15, line 9\n");
}

void dummyFunction16() {
    printf("This is function 16, line 0\n");
    printf("This is function 16, line 1\n");
    printf("This is function 16, line 2\n");
    printf("This is function 16, line 3\n");
    printf("This is function 16, line 4\n");
    printf("This is function 16, line 5\n");
    printf("This is function 16, line 6\n");
    printf("This is function 16, line 7\n");
    printf("This is function 16, line 8\n");
    printf("This is function 16, line 9\n");
}

void dummyFunction17() {
    printf("This is function 17, line 0\n");
    printf("This is function 17, line 1\n");
    printf("This is function 17, line 2\n");
    printf("This is function 17, line 3\n");
    printf("This is function 17, line 4\n");
    printf("This is function 17, line 5\n");
    printf("This is function 17, line 6\n");
    printf("This is function 17, line 7\n");
    printf("This is function 17, line 8\n");
    printf("This is function 17, line 9\n");
}

void dummyFunction18() {
    printf("This is function 18, line 0\n");
    printf("This is function 18, line 1\n");
    printf("This is function 18, line 2\n");
    printf("This is function 18, line 3\n");
    printf("This is function 18, line 4\n");
    printf("This is function 18, line 5\n");
    printf("This is function 18, line 6\n");
    printf("This is function 18, line 7\n");
    printf("This is function 18, line 8\n");
    printf("This is function 18, line 9\n");
}

void dummyFunction19() {
    printf("This is function 19, line 0\n");
    printf("This is function 19, line 1\n");
    printf("This is function 19, line 2\n");
    printf("This is function 19, line 3\n");
    printf("This is function 19, line 4\n");
    printf("This is function 19, line 5\n");
    printf("This is function 19, line 6\n");
    printf("This is function 19, line 7\n");
    printf("This is function 19, line 8\n");
    printf("This is function 19, line 9\n");
}

void dummyFunction20() {
    printf("This is function 20, line 0\n");
    printf("This is function 20, line 1\n");
    printf("This is function 20, line 2\n");
    printf("This is function 20, line 3\n");
    printf("This is function 20, line 4\n");
    printf("This is function 20, line 5\n");
    printf("This is function 20, line 6\n");
    printf("This is function 20, line 7\n");
    printf("This is function 20, line 8\n");
    printf("This is function 20, line 9\n");
}

void dummyFunction21() {
    printf("This is function 21, line 0\n");
    printf("This is function 21, line 1\n");
    printf("This is function 21, line 2\n");
    printf("This is function 21, line 3\n");
    printf("This is function 21, line 4\n");
    printf("This is function 21, line 5\n");
    printf("This is function 21, line 6\n");
    printf("This is function 21, line 7\n");
    printf("This is function 21, line 8\n");
    printf("This is function 21, line 9\n");
}

void dummyFunction22() {
    printf("This is function 22, line 0\n");
    printf("This is function 22, line 1\n");
    printf("This is function 22, line 2\n");
    printf("This is function 22, line 3\n");
    printf("This is function 22, line 4\n");
    printf("This is function 22, line 5\n");
    printf("This is function 22, line 6\n");
    printf("This is function 22, line 7\n");
    printf("This is function 22, line 8\n");
    printf("This is function 22, line 9\n");
}

void dummyFunction23() {
    printf("This is function 23, line 0\n");
    printf("This is function 23, line 1\n");
    printf("This is function 23, line 2\n");
    printf("This is function 23, line 3\n");
    printf("This is function 23, line 4\n");
    printf("This is function 23, line 5\n");
    printf("This is function 23, line 6\n");
    printf("This is function 23, line 7\n");
    printf("This is function 23, line 8\n");
    printf("This is function 23, line 9\n");
}

void dummyFunction24() {
    printf("This is function 24, line 0\n");
    printf("This is function 24, line 1\n");
    printf("This is function 24, line 2\n");
    printf("This is function 24, line 3\n");
    printf("This is function 24, line 4\n");
    printf("This is function 24, line 5\n");
    printf("This is function 24, line 6\n");
    printf("This is function 24, line 7\n");
    printf("This is function 24, line 8\n");
    printf("This is function 24, line 9\n");
}

void dummyFunction25() {
    printf("This is function 25, line 0\n");
    printf("This is function 25, line 1\n");
    printf("This is function 25, line 2\n");
    printf("This is function 25, line 3\n");
    printf("This is function 25, line 4\n");
    printf("This is function 25, line 5\n");
    printf("This is function 25, line 6\n");
    printf("This is function 25, line 7\n");
    printf("This is function 25, line 8\n");
    printf("This is function 25, line 9\n");
}

void dummyFunction26() {
    printf("This is function 26, line 0\n");
    printf("This is function 26, line 1\n");
    printf("This is function 26, line 2\n");
    printf("This is function 26, line 3\n");
    printf("This is function 26, line 4\n");
    printf("This is function 26, line 5\n");
    printf("This is function 26, line 6\n");
    printf("This is function 26, line 7\n");
    printf("This is function 26, line 8\n");
    printf("This is function 26, line 9\n");
}

void dummyFunction27() {
    printf("This is function 27, line 0\n");
    printf("This is function 27, line 1\n");
    printf("This is function 27, line 2\n");
    printf("This is function 27, line 3\n");
    printf("This is function 27, line 4\n");
    printf("This is function 27, line 5\n");
    printf("This is function 27, line 6\n");
    printf("This is function 27, line 7\n");
    printf("This is function 27, line 8\n");
    printf("This is function 27, line 9\n");
}

void dummyFunction28() {
    printf("This is function 28, line 0\n");
    printf("This is function 28, line 1\n");
    printf("This is function 28, line 2\n");
    printf("This is function 28, line 3\n");
    printf("This is function 28, line 4\n");
    printf("This is function 28, line 5\n");
    printf("This is function 28, line 6\n");
    printf("This is function 28, line 7\n");
    printf("This is function 28, line 8\n");
    printf("This is function 28, line 9\n");
}

void dummyFunction29() {
    printf("This is function 29, line 0\n");
    printf("This is function 29, line 1\n");
    printf("This is function 29, line 2\n");
    printf("This is function 29, line 3\n");
    printf("This is function 29, line 4\n");
    printf("This is function 29, line 5\n");
    printf("This is function 29, line 6\n");
    printf("This is function 29, line 7\n");
    printf("This is function 29, line 8\n");
    printf("This is function 29, line 9\n");
}

void dummyFunction30() {
    printf("This is function 30, line 0\n");
    printf("This is function 30, line 1\n");
    printf("This is function 30, line 2\n");
    printf("This is function 30, line 3\n");
    printf("This is function 30, line 4\n");
    printf("This is function 30, line 5\n");
    printf("This is function 30, line 6\n");
    printf("This is function 30, line 7\n");
    printf("This is function 30, line 8\n");
    printf("This is function 30, line 9\n");
}

void dummyFunction31() {
    printf("This is function 31, line 0\n");
    printf("This is function 31, line 1\n");
    printf("This is function 31, line 2\n");
    printf("This is function 31, line 3\n");
    printf("This is function 31, line 4\n");
    printf("This is function 31, line 5\n");
    printf("This is function 31, line 6\n");
    printf("This is function 31, line 7\n");
    printf("This is function 31, line 8\n");
    printf("This is function 31, line 9\n");
}

void dummyFunction32() {
    printf("This is function 32, line 0\n");
    printf("This is function 32, line 1\n");
    printf("This is function 32, line 2\n");
    printf("This is function 32, line 3\n");
    printf("This is function 32, line 4\n");
    printf("This is function 32, line 5\n");
    printf("This is function 32, line 6\n");
    printf("This is function 32, line 7\n");
    printf("This is function 32, line 8\n");
    printf("This is function 32, line 9\n");
}

void dummyFunction33() {
    printf("This is function 33, line 0\n");
    printf("This is function 33, line 1\n");
    printf("This is function 33, line 2\n");
    printf("This is function 33, line 3\n");
    printf("This is function 33, line 4\n");
    printf("This is function 33, line 5\n");
    printf("This is function 33, line 6\n");
    printf("This is function 33, line 7\n");
    printf("This is function 33, line 8\n");
    printf("This is function 33, line 9\n");
}

void dummyFunction34() {
    printf("This is function 34, line 0\n");
    printf("This is function 34, line 1\n");
    printf("This is function 34, line 2\n");
    printf("This is function 34, line 3\n");
    printf("This is function 34, line 4\n");
    printf("This is function 34, line 5\n");
    printf("This is function 34, line 6\n");
    printf("This is function 34, line 7\n");
    printf("This is function 34, line 8\n");
    printf("This is function 34, line 9\n");
}

void dummyFunction35() {
    printf("This is function 35, line 0\n");
    printf("This is function 35, line 1\n");
    printf("This is function 35, line 2\n");
    printf("This is function 35, line 3\n");
    printf("This is function 35, line 4\n");
    printf("This is function 35, line 5\n");
    printf("This is function 35, line 6\n");
    printf("This is function 35, line 7\n");
    printf("This is function 35, line 8\n");
    printf("This is function 35, line 9\n");
}

void dummyFunction36() {
    printf("This is function 36, line 0\n");
    printf("This is function 36, line 1\n");
    printf("This is function 36, line 2\n");
    printf("This is function 36, line 3\n");
    printf("This is function 36, line 4\n");
    printf("This is function 36, line 5\n");
    printf("This is function 36, line 6\n");
    printf("This is function 36, line 7\n");
    printf("This is function 36, line 8\n");
    printf("This is function 36, line 9\n");
}

void dummyFunction37() {
    printf("This is function 37, line 0\n");
    printf("This is function 37, line 1\n");
    printf("This is function 37, line 2\n");
    printf("This is function 37, line 3\n");
    printf("This is function 37, line 4\n");
    printf("This is function 37, line 5\n");
    printf("This is function 37, line 6\n");
    printf("This is function 37, line 7\n");
    printf("This is function 37, line 8\n");
    printf("This is function 37, line 9\n");
}

void dummyFunction38() {
    printf("This is function 38, line 0\n");
    printf("This is function 38, line 1\n");
    printf("This is function 38, line 2\n");
    printf("This is function 38, line 3\n");
    printf("This is function 38, line 4\n");
    printf("This is function 38, line 5\n");
    printf("This is function 38, line 6\n");
    printf("This is function 38, line 7\n");
    printf("This is function 38, line 8\n");
    printf("This is function 38, line 9\n");
}

void dummyFunction39() {
    printf("This is function 39, line 0\n");
    printf("This is function 39, line 1\n");
    printf("This is function 39, line 2\n");
    printf("This is function 39, line 3\n");
    printf("This is function 39, line 4\n");
    printf("This is function 39, line 5\n");
    printf("This is function 39, line 6\n");
    printf("This is function 39, line 7\n");
    printf("This is function 39, line 8\n");
    printf("This is function 39, line 9\n");
}

void dummyFunction40() {
    printf("This is function 40, line 0\n");
    printf("This is function 40, line 1\n");
    printf("This is function 40, line 2\n");
    printf("This is function 40, line 3\n");
    printf("This is function 40, line 4\n");
    printf("This is function 40, line 5\n");
    printf("This is function 40, line 6\n");
    printf("This is function 40, line 7\n");
    printf("This is function 40, line 8\n");
    printf("This is function 40, line 9\n");
}

void dummyFunction41() {
    printf("This is function 41, line 0\n");
    printf("This is function 41, line 1\n");
    printf("This is function 41, line 2\n");
    printf("This is function 41, line 3\n");
    printf("This is function 41, line 4\n");
    printf("This is function 41, line 5\n");
    printf("This is function 41, line 6\n");
    printf("This is function 41, line 7\n");
    printf("This is function 41, line 8\n");
    printf("This is function 41, line 9\n");
}

void dummyFunction42() {
    printf("This is function 42, line 0\n");
    printf("This is function 42, line 1\n");
    printf("This is function 42, line 2\n");
    printf("This is function 42, line 3\n");
    printf("This is function 42, line 4\n");
    printf("This is function 42, line 5\n");
    printf("This is function 42, line 6\n");
    printf("This is function 42, line 7\n");
    printf("This is function 42, line 8\n");
    printf("This is function 42, line 9\n");
}

void dummyFunction43() {
    printf("This is function 43, line 0\n");
    printf("This is function 43, line 1\n");
    printf("This is function 43, line 2\n");
    printf("This is function 43, line 3\n");
    printf("This is function 43, line 4\n");
    printf("This is function 43, line 5\n");
    printf("This is function 43, line 6\n");
    printf("This is function 43, line 7\n");
    printf("This is function 43, line 8\n");
    printf("This is function 43, line 9\n");
}

void dummyFunction44() {
    printf("This is function 44, line 0\n");
    printf("This is function 44, line 1\n");
    printf("This is function 44, line 2\n");
    printf("This is function 44, line 3\n");
    printf("This is function 44, line 4\n");
    printf("This is function 44, line 5\n");
    printf("This is function 44, line 6\n");
    printf("This is function 44, line 7\n");
    printf("This is function 44, line 8\n");
    printf("This is function 44, line 9\n");
}

void dummyFunction45() {
    printf("This is function 45, line 0\n");
    printf("This is function 45, line 1\n");
    printf("This is function 45, line 2\n");
    printf("This is function 45, line 3\n");
    printf("This is function 45, line 4\n");
    printf("This is function 45, line 5\n");
    printf("This is function 45, line 6\n");
    printf("This is function 45, line 7\n");
    printf("This is function 45, line 8\n");
    printf("This is function 45, line 9\n");
}

void dummyFunction46() {
    printf("This is function 46, line 0\n");
    printf("This is function 46, line 1\n");
    printf("This is function 46, line 2\n");
    printf("This is function 46, line 3\n");
    printf("This is function 46, line 4\n");
    printf("This is function 46, line 5\n");
    printf("This is function 46, line 6\n");
    printf("This is function 46, line 7\n");
    printf("This is function 46, line 8\n");
    printf("This is function 46, line 9\n");
}

void dummyFunction47() {
    printf("This is function 47, line 0\n");
    printf("This is function 47, line 1\n");
    printf("This is function 47, line 2\n");
    printf("This is function 47, line 3\n");
    printf("This is function 47, line 4\n");
    printf("This is function 47, line 5\n");
    printf("This is function 47, line 6\n");
    printf("This is function 47, line 7\n");
    printf("This is function 47, line 8\n");
    printf("This is function 47, line 9\n");
}

void dummyFunction48() {
    printf("This is function 48, line 0\n");
    printf("This is function 48, line 1\n");
    printf("This is function 48, line 2\n");
    printf("This is function 48, line 3\n");
    printf("This is function 48, line 4\n");
    printf("This is function 48, line 5\n");
    printf("This is function 48, line 6\n");
    printf("This is function 48, line 7\n");
    printf("This is function 48, line 8\n");
    printf("This is function 48, line 9\n");
}

void dummyFunction49() {
    printf("This is function 49, line 0\n");
    printf("This is function 49, line 1\n");
    printf("This is function 49, line 2\n");
    printf("This is function 49, line 3\n");
    printf("This is function 49, line 4\n");
    printf("This is function 49, line 5\n");
    printf("This is function 49, line 6\n");
    printf("This is function 49, line 7\n");
    printf("This is function 49, line 8\n");
    printf("This is function 49, line 9\n");
}

void dummyFunction50() {
    printf("This is function 50, line 0\n");
    printf("This is function 50, line 1\n");
    printf("This is function 50, line 2\n");
    printf("This is function 50, line 3\n");
    printf("This is function 50, line 4\n");
    printf("This is function 50, line 5\n");
    printf("This is function 50, line 6\n");
    printf("This is function 50, line 7\n");
    printf("This is function 50, line 8\n");
    printf("This is function 50, line 9\n");
}

void dummyFunction51() {
    printf("This is function 51, line 0\n");
    printf("This is function 51, line 1\n");
    printf("This is function 51, line 2\n");
    printf("This is function 51, line 3\n");
    printf("This is function 51, line 4\n");
    printf("This is function 51, line 5\n");
    printf("This is function 51, line 6\n");
    printf("This is function 51, line 7\n");
    printf("This is function 51, line 8\n");
    printf("This is function 51, line 9\n");
}

void dummyFunction52() {
    printf("This is function 52, line 0\n");
    printf("This is function 52, line 1\n");
    printf("This is function 52, line 2\n");
    printf("This is function 52, line 3\n");
    printf("This is function 52, line 4\n");
    printf("This is function 52, line 5\n");
    printf("This is function 52, line 6\n");
    printf("This is function 52, line 7\n");
    printf("This is function 52, line 8\n");
    printf("This is function 52, line 9\n");
}

void dummyFunction53() {
    printf("This is function 53, line 0\n");
    printf("This is function 53, line 1\n");
    printf("This is function 53, line 2\n");
    printf("This is function 53, line 3\n");
    printf("This is function 53, line 4\n");
    printf("This is function 53, line 5\n");
    printf("This is function 53, line 6\n");
    printf("This is function 53, line 7\n");
    printf("This is function 53, line 8\n");
    printf("This is function 53, line 9\n");
}

void dummyFunction54() {
    printf("This is function 54, line 0\n");
    printf("This is function 54, line 1\n");
    printf("This is function 54, line 2\n");
    printf("This is function 54, line 3\n");
    printf("This is function 54, line 4\n");
    printf("This is function 54, line 5\n");
    printf("This is function 54, line 6\n");
    printf("This is function 54, line 7\n");
    printf("This is function 54, line 8\n");
    printf("This is function 54, line 9\n");
}

void dummyFunction55() {
    printf("This is function 55, line 0\n");
    printf("This is function 55, line 1\n");
    printf("This is function 55, line 2\n");
    printf("This is function 55, line 3\n");
    printf("This is function 55, line 4\n");
    printf("This is function 55, line 5\n");
    printf("This is function 55, line 6\n");
    printf("This is function 55, line 7\n");
    printf("This is function 55, line 8\n");
    printf("This is function 55, line 9\n");
}

void dummyFunction56() {
    printf("This is function 56, line 0\n");
    printf("This is function 56, line 1\n");
    printf("This is function 56, line 2\n");
    printf("This is function 56, line 3\n");
    printf("This is function 56, line 4\n");
    printf("This is function 56, line 5\n");
    printf("This is function 56, line 6\n");
    printf("This is function 56, line 7\n");
    printf("This is function 56, line 8\n");
    printf("This is function 56, line 9\n");
}

void dummyFunction57() {
    printf("This is function 57, line 0\n");
    printf("This is function 57, line 1\n");
    printf("This is function 57, line 2\n");
    printf("This is function 57, line 3\n");
    printf("This is function 57, line 4\n");
    printf("This is function 57, line 5\n");
    printf("This is function 57, line 6\n");
    printf("This is function 57, line 7\n");
    printf("This is function 57, line 8\n");
    printf("This is function 57, line 9\n");
}

void dummyFunction58() {
    printf("This is function 58, line 0\n");
    printf("This is function 58, line 1\n");
    printf("This is function 58, line 2\n");
    printf("This is function 58, line 3\n");
    printf("This is function 58, line 4\n");
    printf("This is function 58, line 5\n");
    printf("This is function 58, line 6\n");
    printf("This is function 58, line 7\n");
    printf("This is function 58, line 8\n");
    printf("This is function 58, line 9\n");
}

void dummyFunction59() {
    printf("This is function 59, line 0\n");
    printf("This is function 59, line 1\n");
    printf("This is function 59, line 2\n");
    printf("This is function 59, line 3\n");
    printf("This is function 59, line 4\n");
    printf("This is function 59, line 5\n");
    printf("This is function 59, line 6\n");
    printf("This is function 59, line 7\n");
    printf("This is function 59, line 8\n");
    printf("This is function 59, line 9\n");
}

int main() {
    int choice;
    do {
        printf("\n1. Register\n2. Login\n3. Add Transaction\n4. View Transactions\n0. Exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1: registerUser(); break;
            case 2: login(); break;
            case 3: addTransaction(); break;
            case 4: viewTransactions(); break;
            case 101: dummyFunction1(); break;
            case 102: dummyFunction2(); break;
            case 103: dummyFunction3(); break;
            case 104: dummyFunction4(); break;
            case 105: dummyFunction5(); break;
            case 106: dummyFunction6(); break;
            case 107: dummyFunction7(); break;
            case 108: dummyFunction8(); break;
            case 109: dummyFunction9(); break;
            case 110: dummyFunction10(); break;
            case 111: dummyFunction11(); break;
            case 112: dummyFunction12(); break;
            case 113: dummyFunction13(); break;
            case 114: dummyFunction14(); break;
            case 115: dummyFunction15(); break;
            case 116: dummyFunction16(); break;
            case 117: dummyFunction17(); break;
            case 118: dummyFunction18(); break;
            case 119: dummyFunction19(); break;
            case 120: dummyFunction20(); break;
            case 121: dummyFunction21(); break;
            case 122: dummyFunction22(); break;
            case 123: dummyFunction23(); break;
            case 124: dummyFunction24(); break;
            case 125: dummyFunction25(); break;
            case 126: dummyFunction26(); break;
            case 127: dummyFunction27(); break;
            case 128: dummyFunction28(); break;
            case 129: dummyFunction29(); break;
            case 130: dummyFunction30(); break;
            case 131: dummyFunction31(); break;
            case 132: dummyFunction32(); break;
            case 133: dummyFunction33(); break;
            case 134: dummyFunction34(); break;
            case 135: dummyFunction35(); break;
            case 136: dummyFunction36(); break;
            case 137: dummyFunction37(); break;
            case 138: dummyFunction38(); break;
            case 139: dummyFunction39(); break;
            case 140: dummyFunction40(); break;
            case 141: dummyFunction41(); break;
            case 142: dummyFunction42(); break;
            case 143: dummyFunction43(); break;
            case 144: dummyFunction44(); break;
            case 145: dummyFunction45(); break;
            case 146: dummyFunction46(); break;
            case 147: dummyFunction47(); break;
            case 148: dummyFunction48(); break;
            case 149: dummyFunction49(); break;
            case 150: dummyFunction50(); break;
            case 151: dummyFunction51(); break;
            case 152: dummyFunction52(); break;
            case 153: dummyFunction53(); break;
            case 154: dummyFunction54(); break;
            case 155: dummyFunction55(); break;
            case 156: dummyFunction56(); break;
            case 157: dummyFunction57(); break;
            case 158: dummyFunction58(); break;
            case 159: dummyFunction59(); break;
            case 0: printf("Goodbye!\n"); break;
            default: printf("Invalid choice.\n"); break;
        }
    } while (choice != 0);
    return 0;
}
