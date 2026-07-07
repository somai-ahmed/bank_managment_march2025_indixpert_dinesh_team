 
 

void checkbalance(); 

int main()
{
    checkbalance();
    return 0;
}

void checkbalance()
{
 
    char accountnumber[12];
    while (1)
    {
        do{
        printf("\tEnter 11 digit account number: ");
        scanf("%s", accountnumber);

        if (strlen(accountnumber) != 11)
        {
            perror("\tInvalid! Enter exactly 11 digits.\n");
        }
        }while(strlen(accountnumber) != 11);
/* Adding a while loop to repeatedly prompt the user until a valid account number is entered */
 /*Using perror() to display an error message whenever the entered account number
   does not contain exactly 11 digits before asking for the input again*/

        int check = 1;
        for (int j = 0; j < 11; j++)
        {
            if (!isdigit(accountnumber[j]))
            {
                check = 0;
                break;
            }
        }

        if (!check)
        {
            printf("\tInvalid! Use digits only.\n");
            continue;
        }
        if(strcmp(accountnumber,"0000000000"))
        {
            printf("\t invalid digit.!\n");
            continue;

        }

        int checkaccount = 0;
        for (int i = 0; i < 1000; i++)
        {
            if (account_no[i][0] != '\0' && strcmp(account_no[i], accountnumber) == 0)
            {
                printf("\n\t\tNote: Please ensure user has correct details.\n\n");
                printf("\tAccount Number : %s\n", account_no[i]);
                printf("\tHolder Name    : %s\n", account_holder[i]);
                printf("\tCurrent Balance: Rs.%d\n", balance[i]);
                printf("thanks to visit again.\n");
                checkaccount = 1;
                break;
            }
        }

        if (!checkaccount)
        {
            printf("\tAccount number does not exist.\n");
            continue;
        }

        break;
    }
}
