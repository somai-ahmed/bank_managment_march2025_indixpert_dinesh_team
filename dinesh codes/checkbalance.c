 
 

void checkbalance(); 

int main()
{
    checkbalance();
    return 0;
}

void checkbalance()
{
 
    char accountnumber[12];
    int check ;
    while (1)
    {
           check = 1 ;
       
           printf("\tEnter 11-digit account number: ");
           scanf("%11s", accountnumber); /*for digit count*/
       
           /* Checking the length of input account number */
           if (strlen(accountnumber) != 11)
           {
               printf("\tInvalid! Enter exactly 11 digits.\n");
               check = 0;
               continue;
           }
       
           /* Check that every character is a digit */
           for (int j = 0; j < 11; j++)
           {
               if (!isdigit((unsigned char)accountnumber[j]))
               {
                   printf("\tInvalid! Use digits only.\n");
                   check = 0;
                   break;
               }
           }
       
           if (!check)
               continue;
       
           /* Reject if all numbers are zeros */
           if (strcmp(accountnumber, "00000000000") == 0)
           {
               printf("\tInvalid account number!\n");
               check = 0;
           }
       
       } while (!check);
                


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
