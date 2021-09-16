/*----------------------A MINI PROJECT IN C-------------------------------\
---------------------- BANK  MANAGEMENT SYSTEM-----------------------------\
|----PLEASE CREATE AN ACCOUNT FIRST TO BE ABLE TO RUN THE OTHER FEATURES--\
|---------------------------DEVELOPED BY----------------------------------\
|-----------------------|  BIPLOP GIRI    |-------------------------------\
|-----------------------| ANIRUDRA DAHAL  |-------------------------------\
|-----------------------| DARWIN AACHARYA |-------------------------------\
|-----------------------| RENSA NEUPANE   |-------------------------------\
|-------------------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include<conio.h>
#include<unistd.h>
void welcomeScreen();
void loginCheck();
void displayMenu();
void createAccount();
void checkAccount();
void editacc();
void sendMoney();
void developers();
void removeacc();
void findInterest();
void printList();
float interest(long int, float, float);
void giveTime();
void load();
struct account
{
  char name[50];
  char correspondence[50];
  char permanent_address[50];
  char fathers_name[50];
  char mothers_name[50];
  char work[50];
  char gender[50];
  char email[50];
  char education_level[40];
  char marital_status[20];
  char acc_type[20];
  char date[20];
  int acc_num;
  long int phone;
  int age;
  long int deposit;
  long int sec_phone;
  long int citizenship_number;
  char transfer_name[20];
  long int money;
  long int withdraw;
  long int add;
  char wdate[20];
};
struct account accinf;
int main()
{
  welcomeScreen();
  loginCheck();
}

void welcomeScreen(){

	system("cls");
		giveTime();
	int i;
	printf("\t\t\t\t%c",201);
	 for(i=0;i<57;i++){
  printf("%c",205);}
  	printf("%c",187);
  printf("\n\t\t\t\t%c\e[7;55m                    DABIREAN BANK LIMITED                \e[m%c",186,186);
  printf("\n\t\t\t\t%c                                                         %c",186,186);
   printf("\n\t\t\t\t%c\e[7;55m                    BANK MANAGEMENT SYSTEM               \e[m%c%c",186,186);
printf("\n\t\t\t\t%c",200);
 for(i=0;i<57;i++){
  printf("%c",205);}

printf("%c\n\n",188);}

void loginCheck()
{
  int try = 3, i = 0;
  char user[20], pass[20];
  printf("\n\n\n                \e[44;4m ENTER THE USERNAME AND PASSOWRD FOR LOGIN\e[m\n");
usercheck:
  printf("                         \033[39;2m \n               you have %d tries left now\033[m\n",try);
  printf("                         Enter username : ");
  scanf("%[^\n]s", user);
  getchar();
  printf("                         Enter the password :");
  printf("\033[30;15m ");
  scanf("%[^\n]s", pass);
  getchar();
  printf("\033[m");
 printf("                         checking login credintals");
  load();
  if (strcmp(user, "admin") == 0 && strcmp(pass, "admin") == 0)
  {
    printf("\e[1;32mLOGIN SUCCESSFUL. Press any key to continue\e[m");
    getch();
    system("cls");
    printf("loading main menu");
    load();
    displayMenu();
  }
  if (try == 1)
  {
    printf(" \e[35;5m                                   limit exceeded...quitting program\033[m");
    exit(1);
  }
  else
  {
    printf("\033[35;10m                                    invalid credintals entered,try again\033[m");
    try--;
    goto usercheck;
  }
}

void displayMenu()
{
  system("cls");
  welcomeScreen();
  int choice;
  printf("\n                                \033[104;55m WELCOME TO THE SYSTEM PANNEL \033[m\n\n");
  printf("                                   \033[36;1m CHOOSE AN OPTION FROM BELOW\n\n");
  printf("                                   1. CREATE AN ACCOUNT \n");
  printf("                                   2. CHECK  ACCOUNT DETAILS\n");
  printf("                                   3. EDIT ACCOUNT\n");
  printf("                                   4. REMOVE ACCOUNT\n");
  printf("                                   5. PERFORM A TRANSACTION \n");
  printf("                                   6. PRINT THE LIST OF CUSTOMERS\n");
  printf("                                   7. CALCULATE THE INTEREST \n");
  printf("                                   8. ABOUT DEVELOPERS\n");
  printf("                                   9. EXIT THE PROGRAM\n\033[m ");
  printf("                                   \033[32;5m enter a choice (1-9) :\033[m ");
  scanf("%d", &choice);
  getchar();

  if (choice == 1)
  {
    createAccount();
  }
  else if (choice == 2)
  {
    checkAccount();
  }
  else if (choice == 3)
  {
    editacc();
  }
  else if (choice == 4)
  {
    removeacc();
  }

  else if (choice == 5)
  {
    sendMoney();
  }
  else if (choice == 6)
  {
    printList();
  }
  else if (choice == 7)
  {
    findInterest();
  }
  else if (choice == 8)
  {
    developers();
  }
  else if (choice == 9)
  {
    
    exit(0);
    
  }
  else
  {
    printf("invalid choice\npress any key to go to main menu\n");
    getch();
    load();
    displayMenu();
  }
}

void createAccount()
{
  FILE *customeracc;
  customeracc = fopen("accs.txt", "a");
  int c;
  system("cls");
  welcomeScreen();
  printf("\n\033[10;45m WELCOME TO ACCOUNT CREATION SECTION\033[m\n");
  rewind(customeracc);
  printf("\033[1;93m Enter Today's date:");
  scanf("%[^\n]s", accinf.date);
  getchar();
  printf("Enter account number of your choice :");
  scanf("%d", &accinf.acc_num);
  getchar();
  printf("ACCOUNT TYPE (saving or current) :\033[m ");
  scanf("%[^\n]s", accinf.acc_type);
  getchar();
  system("cls");
  printf("\033[10;45m ENTER YOUR PERSONAL DETAILS BELOW\033[m\n");
  printf("\n\033[1;93m NAME :");
  scanf("%[^\n]s", accinf.name);
  getchar();
  printf("GENDER : ");
  scanf("%[^\n]s", accinf.gender);
  getchar();
  printf("AGE :");
  scanf("%d", &accinf.age);
  getchar();
  printf("PERMANENT ADDRESS: ");
  scanf("%[^\n]s", accinf.permanent_address);
  getchar();
  printf("CORRESPONDENCE: ");
  scanf("%[^\n]s", accinf.correspondence);
  getchar();
  printf("FATHER'S NAME: ");
  scanf("%[^\n]s", accinf.fathers_name);
  getchar();
  printf("MOTHER'S NAME: ");
  scanf("%[^\n]s", accinf.mothers_name);
  getchar();
  printf("EDUCATION LEVEL : ");
  scanf("%[^\n]s", accinf.education_level);
  getchar();
  printf("MARITAL STATUS : ");
  scanf("%[^\n]s", accinf.marital_status);
  getchar();
  printf("WORK : ");
  scanf("%[^\n]s", accinf.work);
  getchar();
  printf("EMAIL : ");
  scanf("%[^\n]s", accinf.email);
  getchar();
  printf("PHONE : ");
  scanf("%ld", &accinf.phone);
  getchar();
  printf("SECONDARY PHONE : ");
  scanf("%ld", &accinf.sec_phone);
  getchar();
  printf("CITIZENSHIP NUMBER : ");
  scanf("%ld", &accinf.citizenship_number);
  getchar();
  printf("ENTER DEPOSIT AMOUNT:\033[m ");
  scanf("%ld", &accinf.deposit);
  getchar();
  fwrite(&accinf, sizeof(accinf), 1, customeracc);
  fclose(customeracc);
  printf("creating account....");
  load();
  printf("\033[32;5m Account successfully created\033[m\n");
  printf("\n\nwhat do you want to do?\n1.add another account\n2.quit to main menu\n(typing alphabetical character will exit the program to main menu)\n->>");
  scanf("%d", &c);
  getchar();
  if (c == 1)
  {
    createAccount();
  }
  else if (c == 2)
  {
    displayMenu();
  }
  else
  {
    printf("invalid choice\npress any key to go to main menu\n");
    getch();
    displayMenu();
  }
}

void checkAccount()
{
  int test, i = 1, j = 1;
  system("cls");
  welcomeScreen();
  char check_name[20];
  int choice, choice2;
  FILE *customeracc;
  customeracc = fopen("accs.txt", "r");
  rewind(customeracc);
  printf("ENTER THE ACCOUNT HOLDER'S NAME TO FIND THE DETAILS OF :");
  scanf("%[^\n]s", check_name);
  getchar();
  printf("looking for account....\n");
  load();
  while (fread(&accinf, sizeof(accinf), 1, customeracc) != 0)
  {
    if (strcmp(check_name, accinf.name) == 0)
    {
      test = 1;
      system("cls");
      printf("THE DETAILS OF THE ENTERED ACCOUNT NAME: \n ");
      printf("\n\e[1;93m Date created : %s\n Account number : %d\n Account type: %s\n Name : %s\n Gender :%s\n Age : %d\n Citizenship number: %ld\n Permanent Address : %s\n Correspondence: %s\n",
      accinf.date, accinf.acc_num, accinf.acc_type, accinf.name,
      accinf.gender, accinf.age, accinf.citizenship_number,
      accinf.permanent_address, accinf.correspondence);
      printf(" Father's Name :%s\n Mother's name %s\n Education level: %s\n Work :%s\n",
      accinf.fathers_name, accinf.mothers_name, accinf.education_level,
      accinf.work);
      printf(" Marital status : %s\n Email address : %s\n Phone number: %ld\n Secondary phonenumber: %ld\n Total Money: %ld\e[m\n",
      accinf.marital_status, accinf.email, accinf.phone,accinf.sec_phone, accinf.deposit);
    }
  }
  rewind(customeracc);
  
  while (fread(&accinf, sizeof(accinf), 1, customeracc) != 0)
  {
    if (strcmp(check_name, accinf.name) == 0)
    {
      printf("_________________________________________________________________________________\n");
      printf("TRANSACTIONS MADE(only displays the last transaction) : \n");
      test = 1;
      printf("\e[1;93mDate : %s\nMoney sent\n", accinf.wdate);
      printf("To : %s\nAmount: %ld \n", accinf.transfer_name,
             accinf.money);
      printf("__________________\e[m\n");
      printf("Date : %s \nDeposit : %ld\nWithdrawal :  %ld \n", accinf.wdate, accinf.add, accinf.withdraw);
      printf("__________________________________________\n");
      j++;
    }
  }
  fclose(customeracc);

  if (test != 1)
  {
    printf("\033[35;5m account not found\033[m");
  }

  printf("\n\nEnter a choice \n(typing alphabetical character will exit the program to main menu)\n\n1.Quit to main menu\n2.Check details of another account\n->>");
  scanf("%d", &choice);
  getchar();
  system("cls");
  if (choice == 1)
  {
    displayMenu();
  }
  else if (choice == 2)
  {
    checkAccount();
  }
  else
  {
    printf("invalid choice\npress any key to go to main menu\n");
    getch();
    displayMenu();
  }
}

void sendMoney()
{
  system("cls");
  welcomeScreen();
  FILE *customeracc, *tempfile;
  customeracc = fopen("accs.txt", "r+");
  tempfile = fopen("temp.txt", "a");
  rewind(tempfile);
  int test, choice = 0, choice2;
  char check_name[20], confirm;
  system("cls");
  printf("\033[1;45m WELCOME THE TRANSACTING SECTION\033[m\n");
  printf("enter your account name: ");
  scanf("%[^\n]s", check_name);
  getchar();
  printf("searching for name....");
  load();
  while (fread(&accinf, sizeof(accinf), 1, customeracc) != 0)
  {
    if (strcmp(check_name, accinf.name) == 0)
    {

      system("cls");
      test = 1;

      printf("\n\e[3;10mName : %s\nAmount available: %ld\n\n", accinf.name, accinf.deposit);
      printf("enter todays date: ");
      scanf("%[^\n]s", accinf.wdate);
      getchar();
      printf("What do you want to do?\n1.Send money\n2.Withdraw\n3.Deposit\n->>");
      scanf("%d", &choice2);
      getchar();
      if (choice2 == 1)
      {
        printf("Enter the account name to transfer the money to : ");
        scanf("%[^\n]s", accinf.transfer_name);
        getchar();
        printf("\nenter the amount to transfer : ");
        scanf("%ld", &accinf.money);
        getchar();
        if (accinf.deposit < accinf.money)
        {
          printf("no sufficient money available\npress any key to try again\n->>");

          getch();
          sendMoney();
        }
        else
        {
          accinf.deposit = accinf.deposit - accinf.money;
          fwrite(&accinf, sizeof(accinf), 1, tempfile);
          printf("sending money....");
          load();
        }
      }

      else if (choice2 == 2)
      {
        printf("enter the amount to withdraw:");
        scanf("%ld", &accinf.withdraw);
        getchar();
        if (accinf.withdraw > accinf.deposit)
        {
          printf("can't withdraw more than your balance\npress any key to try again\n->>");
          getch();
          sendMoney();
        }
        else
        {
          accinf.deposit = accinf.deposit - accinf.withdraw;
          fwrite(&accinf, sizeof(accinf), 1, tempfile);
        printf("processing your withdraw....");
          load();
        }
      }
      else if (choice2 == 3)
      {
        printf("enter the amount to deposit : ");
        scanf("%ld", &accinf.add);
        getchar();
        accinf.deposit = accinf.deposit + accinf.add;
        fwrite(&accinf, sizeof(accinf), 1, tempfile);
         printf("processing your deposit....");
          load();
      }
      else
      {
        printf("invalid choice\e[m\npress any key to go to main menu\n");
        getch();
        displayMenu();
      }
    }

    else
    {
      fwrite(&accinf, sizeof(accinf), 1, tempfile);
    }
  }

  fclose(customeracc);
  fclose(tempfile);
  remove("accs.txt");
  rename("temp.txt", "accs.txt");
  if (test == 1)
  {

    printf("\e[32;5m TRANSACTION SUCCESFUL\e[m\n");
    printf("enter a choice\n(typing alphabetical character will exit the program to main menu)\n\n1.Quit to main menu\n2.Transact again\n->>");
    scanf("%d", &choice);
    getchar();
    if (choice == 1)
    {
      displayMenu();
    }
    else if (choice == 2)
    {
      sendMoney();
    }
    else
    {
      printf("invalid choice\npress any key to go to main menu\n");
      getch();
      displayMenu();
    }
  }
  if (test != 1)
  {
    printf("\e[1;31m your account was not found \e[m\n");
    printf("enter a choice\n\n(typing alphabetical character will exit the program to main menu)\n1.Quit to main menu\n2.Transact again\n->>");
    scanf("%d", &choice);
    getchar();
    if (choice == 1)
    {
      displayMenu();
    }
    else if (choice == 2)
    {
      sendMoney();
    }
    else
    {
      printf("invalid choice\npress any key to go to main menu\n");
      getch();
      displayMenu();
    }
  }
}
void editacc()
{
  system("cls");
  welcomeScreen();
  int choice, choice2, test;
  char check_name[20];
  FILE *customeracc, *editor;
  customeracc = fopen("accs.txt", "r");
  editor = fopen("temp.txt", "w+");
  printf("\033[15;40m WELCOME TO ACCOUNT EDITING SECTION\033[m\n");
  printf("Enter the name of the account to edit : ");
  scanf("%[^\n]s", check_name);
  getchar();
  printf("looking for account....\n");
  load();
  rewind(customeracc);
  rewind(editor);
  while (fread(&accinf, sizeof(accinf), 1, customeracc) != 0)
  {
    if (strcmp(check_name, accinf.name) == 0)
    {
      test = 1;
      system("cls");
      printf("\e[1;34m The details of the entered account name is: \n ");
      printf("\n Date created : %s\n Account number : %d\n Account type: %s\n Name : %s\n Gender :%s\n Age : %d\n citizenship number: %ld\n Permanent Address : %s\n Correspondence : %s\n",
      accinf.date, accinf.acc_num, accinf.acc_type, accinf.name,
      accinf.gender, accinf.age, accinf.citizenship_number,
      accinf.permanent_address, accinf.correspondence);
      printf(" Father's Name :%s\n Mother's name %s\n Education level: %s\n Work :%s\n",
      accinf.fathers_name, accinf.mothers_name, accinf.education_level,
      accinf.work);
      printf(" Marital status : %s\n Email address : %s\n Phone number: %ld\n secondary phonenumber: %ld\n Total Money: %ld\e[m\n",
      accinf.marital_status, accinf.email, accinf.phone,
      accinf.sec_phone, accinf.deposit);
      printf("\n\n\e[1;93m Which info would you like to edit?\n1.Name\n2.Permanent Address\n3.Correspondence address \n4.Phone number\n5.Gender\n5.Father'sname\n7.Mother's name\n8.Educationl evel\n9.Work\n10.Age\n11.Marital Status\n12.Email\n13.Secondary phone\n14.Citizenship number\n->>\e[m");
      scanf("%d", &choice);
      getchar();
      system("cls");
      if (choice == 1)
      {
        printf("Enter the new name  : ");
        scanf("%[^\n]s", accinf.name);
        getchar();
        fwrite(&accinf, sizeof(accinf), 1, editor);
        break;
      }
      else if (choice == 2)
      {
        printf("\nenter the new Permanent Address : ");
        scanf("%[^\n]s", accinf.permanent_address);
        getchar();
        fwrite(&accinf, sizeof(accinf), 1, editor);
      }
      else if (choice == 3)
      {
        printf("\nenter the new Correspondence : ");
        scanf("%[^\n]s", accinf.correspondence);
        getchar();
        fwrite(&accinf, sizeof(accinf), 1, editor);
      }
      else if (choice == 4)
      {
        printf("\nenter the new phone number : ");
        scanf("%ld", &accinf.phone);
        getchar();
        fwrite(&accinf, sizeof(accinf), 1, editor);
      }
      else if (choice == 5)
      {
        printf("\nenter your gender : ");
        scanf("%[^\n]s", accinf.gender);
        getchar();
        fwrite(&accinf, sizeof(accinf), 1, editor);
      }
      else if (choice == 6)
      {
        printf("\nenter your fathers name : ");
        scanf("%[^\n]s", accinf.fathers_name);
        getchar();
        fwrite(&accinf, sizeof(accinf), 1, editor);
      }
      else if (choice == 7)
      {
        printf("\nenter your mothers name : ");
        scanf("%[^\n]s", accinf.mothers_name);
        getchar();
        fwrite(&accinf, sizeof(accinf), 1, editor);
      }
      else if (choice == 8)
      {
        printf("\nenter your education level : ");
        scanf("%[^\n]s", accinf.education_level);
        getchar();
        fwrite(&accinf, sizeof(accinf), 1, editor);
      }
      else if (choice == 9)
      {
        printf("\nenter your new work : ");
        scanf("%[^\n]s", accinf.work);
        getchar();
        fwrite(&accinf, sizeof(accinf), 1, editor);
      }
      else if (choice == 10)
      {
        printf("\nenter your age : ");
        scanf("%d", &accinf.age);
        getchar();
        fwrite(&accinf, sizeof(accinf), 1, editor);
      }
      else if (choice == 11)
      {
        printf("\nenter your marital status : ");
        scanf("%[^\n]s", accinf.marital_status);
        getchar();
        fwrite(&accinf, sizeof(accinf), 1, editor);
      }
      else if (choice == 12)
      {
        printf("\nenter your email : ");
        scanf("%[^\n]s", accinf.email);
        getchar();
        fwrite(&accinf, sizeof(accinf), 1, editor);
      }
      else if (choice == 13)
      {
        printf("\nenter your secondary phone number  : ");
        scanf("%ld", &accinf.sec_phone);
        getchar();
        fwrite(&accinf, sizeof(accinf), 1, editor);
      }
      else if (choice == 14)
      {
        printf("\nenter your citizenship number  :");
        scanf("%ld", &accinf.citizenship_number);
        getchar();
        fwrite(&accinf, sizeof(accinf), 1, editor);
      }
      else
      {
        printf("invalid choice\npress any key to go to main menu\n");
        getch();
        displayMenu();
      }
    }
    else
    {
      fwrite(&accinf, sizeof(accinf), 1, editor);
    }
  }
  fclose(customeracc);
  fclose(editor);
  remove("accs.txt");
  rename("temp.txt", "accs.txt");

  if (test == 1)
  {
    system("cls");
    printf("saving changes....\n");
  load();
    printf("\033[32;5m INFO SUCCESSFULLY EDITED\033[m\n");
    printf("\n\nenter a choice\n(typing alphabetical character will exit the program to main menu)\n\n1.main menu\n2.edit more\n->>");
    scanf("%d", &choice2);
    getchar();
    if (choice2 == 1)
    {
      displayMenu();
    }
    else if (choice2 == 2)
    {
      editacc();
    }
    else
    {
      printf("invalid choice\npress any key to go to main menu\n");
      getch();
      displayMenu();
    }
  }
  else if (test != 1)
  {
    system("cls");
    printf("\e[1;31m The name you entered was not found  in the database \e[m \n");
    printf("enter a choice\\n(typing alphabetical character will exit the program to main menu)\nn1.main menu\n2.edit more\n");
    scanf("%d", &choice2);
    getchar();
    if (choice2 == 1)
    {
      displayMenu();
    }
    else if (choice2 == 2)
    {
      editacc();
    }
    else
    {
      printf("invalid choice\npress any key to go to main menu\n");
      getch();
      displayMenu();
    }
  }
}

void removeacc()
{
  int test, choice;
  FILE *customeracc, *editor;
  customeracc = fopen("accs.txt", "r");
  editor = fopen("temp.txt", "w+");
  system("cls");
  welcomeScreen();
  char check_name[20], ch;
  if( customeracc==NULL){

  	printf("no accounts have been made yet.\n\n");
  }
  else{
  printf("\033[15;40m WELCOME TO ACCOUNT REMOVAL SECTION\033[m\n");
  printf("\nEnter the name of the account to remove : ");
  scanf("%[^\n]s", check_name);
  getchar();
  printf("looking for account....\n");
  load();
  rewind(customeracc);
  rewind(editor);
  while (fread(&accinf, sizeof(accinf), 1, customeracc) != 0)
  {
    if (strcmp(accinf.name, check_name) == 0)
    {
      test = 1;
      printf("The details of the entered account name is : \n ");
      printf("\n \e[1;34mDate created : %s\n Account number : %d\n Account type: %s\n Name : %s\n Gender :%s\n Age : %d\n citizenship number: %ld\n Permanent Address : %s\n Correspondence: %s\n",
      accinf.date, accinf.acc_num, accinf.acc_type, accinf.name,
      accinf.gender, accinf.age, accinf.citizenship_number,
      accinf.permanent_address, accinf.correspondence);
      printf(" Father's Name :%s\n Mother's name %s\n Education level: %s\n Work :%s\n",
      accinf.fathers_name, accinf.mothers_name, accinf.education_level,
      accinf.work);
      printf(" Marital status : %s\n Email address : %s\n Phone number: %ld\n secondary phonenumber: %ld\n Total Money: %ld\e[m\n",
      accinf.marital_status, accinf.email, accinf.phone,
      accinf.sec_phone, accinf.deposit);
      printf("ARE YOU SURE TO REMOVE THE ACCOUNT(TYPE 'Y' OR 'N')\nCancelling the operation will take you to the main menu\n->>");
      scanf("%c", &ch);
      getchar();
      if (ch == 'Y' || ch == 'y')
      {
        continue;
      }
      else if (ch == 'N' || ch == 'n')
      {
        printf("\nNOT REMOVED\nPRESS ANY KEY TO GO TO MAIN MENU\n");
        getch();
        displayMenu();
      }
      else
      {
        printf("invalid choice\npress any key to try again\n");
        getch();
        removeacc();
      }
    }
    else
    {
      fwrite(&accinf, sizeof(accinf), 1, editor);
    }
  }
}
  fclose(customeracc);
  fclose(editor);
  remove("accs.txt");
  rename("temp.txt", "accs.txt");

  if (test == 1 && ch == 'y' || ch == 'Y')
  {
    system("cls");
	 printf("deleting account\n");
	load();
    printf("\033[32;5m info successfully removed\033[m\n");
    printf("enter a choice\n\n(typing alphabetical character will exit the program to main menu)\n1.main menu\n2.remove more\n");
    scanf("%d", &choice);
    getchar();
    if (choice == 1)
    {
      displayMenu();
    }
    else if (choice == 2)
    {
      removeacc();
    }
    else
    {
      printf("invalid choice\npress any key to go to main menu\n");
      getch();
      displayMenu();
    }
  }
  else if (test != 1)
  {
    system("cls");
    printf("\e[1;31mThe name of the account you entered was not found in the database \e[m\n");
    printf("enter a choice\n\n(typing alphabetical character will exit the program to main menu)\n1.main menu\n2.remove other account\n->>");
    scanf("%d", &choice);
    getchar();
    if (choice == 1)
    {
      displayMenu();
    }
    else if (choice == 2)
    {
      removeacc();
    }
    else
    {
      printf("invalid choice\npress any key to go to main menu\n");
      getch();
      displayMenu();
    }
  }
}

void findInterest()
{
  system("cls");
  welcomeScreen();
  int choice, test;
  float T;
  FILE *customeracc;
  customeracc = fopen("accs.txt", "r");
  rewind(customeracc);
  char checkaccount[20];
  printf("ENTER THE NAME OF ACCOUNT TO FIND THE INTEREST AMOUNT FOR :");
  scanf("%[^\n]s", checkaccount);
  getchar();
  printf("looking for account....\n");
  load();

  while (fread(&accinf, sizeof(accinf), 1, customeracc) != 0)
  {
    if (strcmp(checkaccount, accinf.name) == 0)
    {
    	printf("\e[1;42m account found\e[m\n\n");
      test = 1;
      printf("\n\nenter the tenure of your account in years : ");
      scanf("%f", &T);getchar();
      printf("your total money is %ld\n", accinf.deposit);
      printf("calculating interest...\n");
      load();
      printf("Your interest will be  %.2lf",interest(accinf.deposit, T, 6.3));
    }
  }
  if (test == 1)
  {
    printf("\n\nenter a choice\n(typing alphabetical character will exit the program to main menu)\n1.Main menu\n2.Check interest of other account\n->>");
    scanf("%d", &choice);
    if (choice == 1)
    {
      displayMenu();
    }
    else if (choice == 2)
    {
      findInterest();
    }

    else
    {
      printf("invalid choice\npress any key to go to main menu\n");
      getch();
      displayMenu();
    }
  }

  if (test != 1)
  {
    printf("\e[1;31m The account name you entered was not found\e[m");
    printf("\nenter a choice\n\n(typing alphabetical character will exit the program to main menu)\n1.Main menu\n2.Check interest of other account\n->>");
    scanf("%d", &choice);
    if (choice == 1)
    {
      displayMenu();
    }
    else if (choice == 2)
    {
      findInterest();
    }

    else
    {
      printf("invalid choice\npress any key to go to main menu\n");
      getch();
      displayMenu();
    }
  }
}

void printList()
{
  int choice, i,j=1;
  FILE *customeracc;
  customeracc = fopen("accs.txt", "r");
  system("cls");
  rewind(customeracc);
  printf("fetching database...\n");
  load();
 printf(" THE LIST OF ALL THE COSTUMERS IN THE BANK\n");
  for(i=0;i<100;i++){
  printf("%c",205);}
  while (fread(&accinf, sizeof(accinf), 1, customeracc) != 0)
  {
    printf("\nCUSTOMER %d", j);
    printf("\n\e[1;96m Date created : %s\n Account number : %d\n Account type: %s\n Name : %s\n Gender :%s\n Age : %d\n Permanent Address : %s\n Correspondence: %s\n",
    accinf.date, accinf.acc_num, accinf.acc_type, accinf.name,
    accinf.gender, accinf.age, accinf.permanent_address,
    accinf.correspondence);
    printf(" Father's Name :%s\n Mother's name %s\n Education level: %s\n Work :%s\n",
    accinf.fathers_name, accinf.mothers_name, accinf.education_level,
    accinf.work);
    printf(" Marital status : %s\n Email address : %s\n Phone number %ld \n Secondary phone number %ld\e[m\n",
    accinf.marital_status, accinf.email, accinf.phone, accinf.sec_phone);
    for(i=0;i<100;i++){
  printf("%c",205);}
    j++;
  }
  
  fclose(customeracc);
  printf("\nenter choice\n(typing alphabetical character will exit the program to main menu)\n \n1.main menu\n2.view again\n->>");
  scanf("%d", &choice);
  if (choice == 1)
  {
    displayMenu();
  }
  if (choice == 2)
  {
    system("cls");
    printList();
  }
  else
  {
    printf("invalid choice\npress any key to go to main menu\n");
    getch();
    displayMenu();
  }
}

float interest( long int P, float T, float R)
{
  float interest;
  interest = (float)(P * T * R) / 100;
  return interest;
}

void developers()
{

system("cls");
printf("\e[1;44m|---------------------------DEVELOPED BY----------------------------------|\n");
printf("|-----------------------|  BIPLOP GIRI    |-------------------------------|\n");
printf("|-----------------------| ANIRUDRA DAHAL  |-------------------------------|\n");
printf("|-----------------------| DARWIN AACHARYA |-------------------------------|\n");
printf("|-----------------------| RENSA NEUPANE   |-------------------------------|\n");
printf("|-------------------------------------------------------------------------|\e[m");

  printf("\npress any key to go to the main menu\n");
  getch();
  displayMenu();
}
void giveTime()
{

  time_t t;
  time(&t);

  printf("current time : %s", ctime(&t));
}
void load(){
	int i;;
	for(i=1;i<15;i++){
		printf(" \e[44;4m \e[m");
		usleep(30000);

	}
	printf("\n");
}
