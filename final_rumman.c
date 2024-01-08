#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>
#include<dos.h>

struct login{
    char first_name[20];
    char last_name[20];
    char username[20];
    char password[20];
};

struct alogin{
    char afirst_name[20];
    char alast_name[20];
    char ausername[20];
    char apassword[20];
};

struct offer
{
    char name[30],cata[20];
    int price;


}list;
char query[20],name[20];

FILE *fp, *ft;

int i,n,ch,l,found;
/************************************************* Login Admin ********************************************/

aregiste (){
    FILE *log;
    log=fopen("Alogin.dll","w");
    struct alogin l;
    printf("\n\n\n\t\t\t                 |========================|\n ");
    printf("      \t\t\t                 | Enter your information | \n");
    printf("      \t\t\t                 |========================| \n");

    printf("\n\t |============================================| ");
    printf("\n\t | Enter your first name:    ");
    scanf("%s",l.afirst_name);
    printf("\n\t | Enter your last name:     ");
    scanf("%s",l.alast_name);
    printf("\n\t | Enter your username:      ");
    scanf("%s",l.ausername);
    printf("\n\t | Enter your password:      ");
    scanf("%s",l.apassword);
    printf("\n\t |============================================| ");
    fwrite(&l,sizeof(l),1,log);
    fclose(log);

    printf("\n\n \t\t\t\t\t###### Registration Successful ###### \t\t\n ");
    printf("\t\t\t\n\n Now login with your username and password : ");
    printf("\t\t\t\n\n Press any key to continue....... ");
    getch();
    system("CLS");
    alogin();
}
alogin(){
    char ausername [20],apassword[20];
    FILE *log;
    log =fopen("Alogin.dll","r");
    struct alogin l;
    printf("\n\n\n\t\t\t         |==============================================|\n");
    printf("      \t\t\t         | ###### Enter your Username & Password ###### |\n");
    printf("      \t\t\t         |==============================================|\n");
    printf("\n\n\t\t\tUsername:");
    scanf("%s",&ausername);
    printf("\n\n\t\t\tPassword:");
    scanf("%s",&apassword);

     while(fread(&l,sizeof(l),1,log)){
        if (strcmp(ausername,l.ausername)==0 && strcmp (apassword,l.apassword)==0)
        {
             printf("\n\n\n\t\t\t\t\n");
             printf("\t\t\t\t\t *************** Welcome ***************\n");
             printf("\t\t\t\t\t       ********Admin Panel******** \n");
             printf("\t\t\t\t\t            ***************** \n\n");
             printf("\t\t |=======================|\n");
             printf("\t\t |Enter What you Want--> |\n");
             printf("\t\t |=======================|\n");
             printf("\t\t\t\t\t\t\t|=======================| \n");
             printf("\t\t\t\t\t\t\t|1. ADMIN SECTION-->    |\n");
             printf("\t\t\t\t\t\t\t|2. CUSTOMER SECTION--> |\n");
             printf("\t\t\t\t\t\t\t|=======================| \n\n");
             printf("\t\t\t\t\t\t\tEnter Your Choice --->");

             int ch;
                scanf("%d", &ch);
                switch(ch)
                {
                case 1:
                    ADMIN_SECTION();
                    break;
                case 2:
                    CUSTOMER_SECTION();
                    break;

                default:
                    printf("Wrong Input\n");

                }

        }

        else{
          printf("\t\t\tPlease Enter Correct UserID And Password\n");
        }
     }
     fclose(log);

}

//*************************User Login

registe (){
    FILE *log;
    log=fopen("Ulogin.dll","w");
    struct login l;
    printf("\n\n\n\t\t\t                 |========================|\n ");
    printf("      \t\t\t                 | Enter your information | \n");
    printf("      \t\t\t                 |========================| \n");
    printf("\n\t |============================================| ");
    printf("\n\t |Enter your first name : ");
    scanf("%s",l.first_name);
    printf("\n\t |Enter your last name : ");
    scanf("%s",l.last_name);
    printf("\n\t |Enter your username : ");
    scanf("%s",l.username);
    printf("\n\t |Enter your password : ");
    scanf("%s",l.password);
    printf("\n\t |============================================| ");
    fwrite(&l,sizeof(l),1,log);
    fclose(log);

    printf("\n\n \t\t\t\t\t###### Registration Successful ###### \t\t\n ");
    printf("\t\t\t\n\n Now login with your username and password : ");
    printf("\t\t\t\n\n Press any key to continue....... ");
    getch();
    system("CLS");
    login();
}
login(){
    char username [20],password[20];
    FILE *log;
    log =fopen("Ulogin.dll","r");
    struct login l;
    printf("\n\n\n\t\t\t ****************Enter your Username & Password*************");
    printf("\n\n\t\t\tUsername:");
    scanf("%s",&username);
    printf("\n\n\t\t\tPassword:");
    scanf("%s",&password);

     while(fread(&l,sizeof(l),1,log)){
        if (strcmp(username,l.username)==0 && strcmp (password,l.password)==0)
        {
             printf("\n\n\n\t\t\t\t\n");
             printf("\t\t\t\t\t *************** Welcome ***************\n");
             printf("\t\t\t\t\t       ********User  Panel******** \n");
             printf("\t\t\t\t\t            ***************** \n\n");

             printf("\t\t\t\t\t\t\t|=======================| \n");
             printf("\t\t\t\t\t\t\t|1. CUSTOMER SECTION--> |\n");
             printf("\t\t\t\t\t\t\t|=======================| \n\n");
             printf("\t\t\t\t\t\t\tEnter Your Choice --->");
             int ch;
                scanf("%d", &ch);
                switch(ch)
                {
                case 1:
                    CUSTOMER_SECTION();
                    break;
                default:
                    printf("Wrong Input\n");

                }

        }

        else{
          printf("\t\t\tPlease Enter Correct UserID And Password\n");
        }
     }
     fclose(log);

}

//************************User Login End

/******************************************** Login End ***********************************************/


int ADMIN_SECTION()
{
    printf("\t\t\t\t\t\t\t\t|================================| \n");
    printf("\t\t\t\t\t\t\t\t|                                | \n");
    printf("\t\t\t\t\t\t\t\t|   Admin PANEL OF THE PROJECT:  | \n");
    printf("\t\t\t\t\t\t\t\t|                                | \n");
    printf("\t\t\t\t\t\t\t\t|================================| \n");
    printf("\t\t\t\t\t\t\t\t|                                |  \n");
    printf("\t\t\t\t\t\t\t\t| 1. Add Product                 | \n");
    printf("\t\t\t\t\t\t\t\t| 2. Update Product              | \n");
    printf("\t\t\t\t\t\t\t\t| 3. Delete Product              | \n");
    printf("\t\t\t\t\t\t\t\t| 4. View Product                | \n");
    printf("\t\t\t\t\t\t\t\t| 5. Log Out                     | \n");
    printf("\t\t\t\t\t\t\t\t|================================| \n");
    printf("\n\t\t\tEnter What You Want: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {

    case 1:
        AddProduct();
        break;
    case 2:
        updateProduct();
        break;
    case 3:
      deleteProduct();
        break;
    case 4:
        ViewProduct();
        break;
    case 5:
        logout();
        break;

    default:
        printf("Wrong Input\n");

    }
}


int AddProduct()
{
    {
    char name[30],cata[20];
    FILE *fp;
    int price;

    //float intake, section;
    fp = fopen("product.txt", "w+");/*  open for writing */
    if (fp == NULL)
    {
        printf("File does not exists \n");
        return;
    }
    printf("\t Enter product Name:");
    scanf("%s", name);
    fprintf(fp,"|productName=%s|\n", name);
    printf("\t Price:");
    scanf("%d", &price);
    fprintf(fp," |Price=%d|\n", price);
    printf("\t Enter Category :");
    scanf("%s", &cata);
    fprintf(fp,"|Category=%s|\n", cata);
     printf("\t \n\n");

    fclose(fp);

    FILE *ft;
   char buff[255];//creating char array to store data of file
   ft = fopen("product.txt", "r");
   while(fscanf(ft, "%s\n", buff)!=EOF){
   printf("\t\t%s ", buff);
   }
   fclose(ft);
}
   int ch;
   printf("\n\n");
   printf("\n\t\t\t\t\t\t\t|----------------------------------|");
   printf("\n\t\t\t\t\t\t\t|Enter 0 for back to main menu --->|");
   printf("\n\t\t\t\t\t\t\t ----------------------------------|");
    scanf("%d", &ch);
      switch(ch)
{

    case 0:
     ADMIN_SECTION();
    break;
}

}


int updateProduct()
{

     char cata[20];
    FILE *fp;
    int price;

     FILE *fp1, *fp2;
    struct offer O1, O2;
    char name[30];
    printf("Enter the Product Name you want to update:\n");
    scanf("%s",&name);
    fp1=fopen("product.txt","r+");
    fp2=fopen("copy.dat","a+");
    if(fp1==NULL)
    {
        fprintf(stderr,"Error opening the file");
        exit(1);
    }
    while(fread(&O1,sizeof(struct offer),1,fp1))
    {
        if(O1.name!=name)
        {
            fwrite(&O1,sizeof(struct offer),1,fp2);
        }
    }
    printf("\n\n");
    printf("\t Enter Product Name:");
    scanf("%s", name);
    fprintf(fp2, "|product Name= %s|\n", name);
    printf("\t Price:");
    scanf("%d", &price);
    fprintf(fp2, "|Price = %d|\n", price);
    printf("\t Enter Category :");
    scanf("%s", &cata);
    fprintf(fp2, "|Category = %s|\n", cata);
    fclose(fp1);
    fclose(fp2);
    remove("product.txt");
    rename("copy.dat","product.txt");
    printf("\nRecord updated successfully");

    int ch;
    printf("\n\n");
   printf("\n\t\t\t\t\t\t\t|----------------------------------|");
   printf("\n\t\t\t\t\t\t\t|Enter 0 for back to main menu --->|");
   printf("\n\t\t\t\t\t\t\t|----------------------------------|");
    scanf("%d", &ch);
      switch(ch)
{

    case 0:
     ADMIN_SECTION();
    break;
}
    return 0;

}

int deleteProduct()
{
    FILE *fp1, *fp2;
    struct offer O1;
    char name;
    printf("Enter the Product Name you want to delete:\n");
    scanf("%s",&name);
    fp1=fopen("product.txt","r+");
    fp2=fopen("copy.dat","a+");
    if(fp1==NULL)
    {
        fprintf(stderr,"can't open file");
        exit(0);
    }
    while(fread(&O1,sizeof(struct offer),1,fp1))
    {
        if(O1.name!=name)
        {
            fwrite(&O1,sizeof(struct offer),1,fp2);
        }
    }
    fclose(fp1);
    fclose(fp2);
    remove("product.txt");
    rename("copy.dat","product.txt");
    printf("Record deleted successfully");
    int ch;
printf("\n\n");
   printf("\n\t\t\t\t\t\t\t|----------------------------------|");
   printf("\n\t\t\t\t\t\t\t|Enter 0 for back to main menu --->|");
   printf("\n\t\t\t\t\t\t\t|----------------------------------|");
    scanf("%d", &ch);
      switch(ch)
{

    case 0:
     ADMIN_SECTION();
    break;
}
    return 0;
}

int  ViewProduct()
{


{
   FILE *ft;
   char buff[255];//creating char array to store data of file
   ft = fopen("product.txt", "r");
   while(fscanf(ft, "%s\n", buff)!=EOF){
   printf("\t%s ", buff);
   }
   fclose(ft);
}
   int ch;
   printf("\n\t\t\t\t\t\t\t|----------------------------------|");
   printf("\n\t\t\t\t\t\t\t|Enter 0 for back to main menu --->|");
   printf("\n\t\t\t\t\t\t\t|----------------------------------|");
    scanf("%d", &ch);
      switch(ch)
{

    case 0:
     ADMIN_SECTION();
    break;
}
}

/////////////////////////////////////////   CUSTOMER  SECTION  //////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////





int CUSTOMER_SECTION()
{
    printf("\t\t\t\t\t\t\t\t|================================| \n");
    printf("\t\t\t\t\t\t\t\t|                                | \n");
    printf("\t\t\t\t\t\t\t\t|   USER PANEL OF THE PROJECT:   | \n");
    printf("\t\t\t\t\t\t\t\t|                                | \n");
    printf("\t\t\t\t\t\t\t\t|================================| \n");
    printf("\t\t\t\t\t\t\t\t|                                | \n");
    printf("\t\t\t\t\t\t\t\t| 1. Search here:                | \n");
    printf("\t\t\t\t\t\t\t\t| 2. Customer Care               | \n");
    printf("\t\t\t\t\t\t\t\t| 3. On sale now                 | \n");
    printf("\t\t\t\t\t\t\t\t| 4. Category                    | \n");
    printf("\t\t\t\t\t\t\t\t| 5. Hot Offer                   | \n");
    printf("\t\t\t\t\t\t\t\t| 6. Log Out                     | \n");
    printf("\t\t\t\t\t\t\t\t|================================| \n");
    printf("\n\t\t\tEnter What You Want: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {

    case 1:
        Search_here();
        break;
    case 2:
        CustomerCare();
        break;
    case 3:
        Onsalenow();
        break;
    case 4:
        Category();
        break;
    case 5:
        hotoffer();
        break;
    case 6:
        logout();
        break;

    default:
        printf("Wrong Input\n");

    }

}
int logout()
{
    printf(" ***** Logged Out. *****\n\n");

}

int Search_here()
{
    do

        {

            found=0;

            printf("\n\n\t..::Product SEARCH\n\t===========================\n\t..::Name of Product to search: ");

            fflush(stdin);

            scanf("%[^\n]",&query);

            l=strlen(query);

            fp=fopen("product.txt","r");

            system("cls");

            printf("\n\n..::Search result for '%s' \n===================================================\n",query);

            while(fread(&list,sizeof(list),1,fp)==1)

            {

                for(i=0; i<=l; i++)

                    name[i]=name[i];

                name[l]='\0';

                if(stricmp(name,query)==0)

                {

                    printf("\n..::Name\t: %s\n..::Price\t: %d\n..::Category\t: %s\n",list.name,list.price,list.cata);

                    found++;

                    if (found%4==0)

                    {

                        printf("..::Press any key to continue...");

                        getch();

                    }

                }

            }

            if(found==0)

                printf("\n..::No match found!");

            else

                printf("\n..::%d match(s) found!",found);

            fclose(fp);

            printf("\n ..::Try again?\n\n\t[1] Yes\t\t[0] No\n\t");

            scanf("%d",&ch);

        }
        while(ch==1);
         printf("\n\n");
        printf("\t\t\ |-------------------------------|");
        printf("\t\t\ |Back To Main menu Enter (0):-->|");
        printf("\t\t\ |-------------------------------|");
       int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 0:
          CUSTOMER_SECTION();
        break;
    default:
        printf("Wrong Input\n");

    }
}

int CustomerCare()
{
    printf("\t\t\t\t\t\t\t\t|================================| \n");
    printf("\t\t\t\t\t\t\t\t|                                | \n");
    printf("\t\t\t\t\t\t\t\t|         Customer Care:         | \n");
    printf("\t\t\t\t\t\t\t\t|                                | \n");
    printf("\t\t\t\t\t\t\t\t|================================| \n");
    printf("\t\t\t\t\t\t\t\t|                                |  \n");
    printf("\t\t\t\t\t\t\t\t|   Mobile:01933954***           | \n");
    printf("\t\t\t\t\t\t\t\t|   Email:admin@email.com        | \n");
    printf("\t\t\t\t\t\t\t\t|  Address:Mirpur-2,Dhaka-1216   | \n");
    printf("\t\t\t\t\t\t\t\t|                                | \n");
    printf("\t\t\t\t\t\t\t\t|                                | \n");
    printf("\t\t\t\t\t\t\t\t|================================| \n");
    printf("\n\t\t   1/ Help center:   You can get any kinds of information and help from our help center.\n");
    printf("\t\t   To contact with use call us on this number [019339***58]. or you can also Email us.\n");
    printf("\t\t   Our Email: aemaltech@gmail.com. You can also contact with us using Whatsapp.  \n");
    printf("\n\t\t   2/ Shipping & Delivery:   We import all kinds of authentic products from China each month.\n");
    printf("\t\t   Our shipment occurs at the very first of every month.  \n");
    printf("\t\t   Our delivery system is pure . We send all the products within 2-3 days when a customer places\n");
    printf("\t\t   an order. inside Dhaka the charge is  60/- and outside Dhaka it's 120/- \n");
    printf("\n\t\t   3/ Payment System:   If you want to buy a product , you can pay when the parcel arrives\n");
    printf("\t\t   Or you can pay for the product using Bikash app or Rocket app.\n");
    printf("\n\n\n\t\t\t ## Return back to home page press [1] or Logout press [2] ## : ");
   printf("\n\t\t\t   ----------------------------------------------------------> ");

    int ch;
    scanf("%d", &ch);
    switch(ch)
    {

    case 1:
       CUSTOMER_SECTION();
        break;
    case 2:
        logout();
        break;
    }
}



int  Category()
{
    printf("     ONLINE STORE: \n");
    printf(" ---------------------------- \n\n");
    printf("1. --  phone sets  -- \n");
    printf("2. --Computer parts-- \n");
    printf("3. --  Accessories --\n");


    int ch;
    printf("\nEnter (1,2or3) to find item:");
    scanf("%d", &ch);
    printf("\n");
    switch(ch)
    {
    case 1:
        phonesets();
        break;
    case 2:
        Computerparts();
        break;
    case 3:
        Accessories();
        break;


    default:
        printf("Wrong Input\n");

    }
}

int Accessories()
{
    printf(" Display-> \n");
    printf(" _________\n\n");
    printf("\t\t|============================================================|  \n");
    printf("\t\t| Serial --   Accessories       --    Quantity    -- Price   |   \n");
    printf("\t\t|============================================================|  \n");
    printf("\t\t|  1.    --  lenovo lp1         --        50     --   850/-  |  \n");
    printf("\t\t|  2.    --  lenovo livepods    --        50     --   950/-  |  \n");
    printf("\t\t|  3.    --  Mpow flame S       --        50     --   2400/- |  \n");
    printf("\t\t|  4.    --  power bank20000mah --        50     --  2500/-  |  \n");
    printf("\t\t|  5.    --  power bank30000mah --        50     --   3000/- |  \n");
    printf("\t\t|  6.    --  solar ls05         --        50     --  2350/-  |  \n");
    printf("\t\t|  7.    --  solar ls02         --        50     --  1800/-  |  \n");
    printf("\t\t|  8.       E.T.C                                            |  \n");
    printf("\t\t|============================================================|  \n");



    int ch;
    printf("\n\t\t|-----------------------|    |--------------------------------| ");
    printf("\n\t\t|Enter (1) to get item  | or | [2] to return back to home page|");
    printf("\n\t\t|-----------------------|    |--------------------------------| ");
    scanf("%d", &ch);
    printf("\n");
    switch(ch)
    {
    case 1:
      various();
        break;
     case 2:
      CUSTOMER_SECTION();
        break;


    default:
        printf("Wrong Input\n");

    }
}


int phonesets()
{

     printf(" Display-> \n");
    printf(" __________\n\n");
    printf("\t\t|============================================================|  \n");
    printf("\t\t| Serial --   Phones   --      Quantity  -- Price --         |  \n");
    printf("\t\t|============================================================|  \n");
    printf("\t\t|  1.    --  Oneplus 7  --        50     --   32000/-        |  \n");
    printf("\t\t|  2.    --  Oneplus 6  --        50     --   30000/-        |  \n");
    printf("\t\t|  3.    --  Iphone 11  --        50     --   1,005,00/-     |  \n");
    printf("\t\t|  4.    --Iphone 11pro --        50     --   1,010,00/-     |  \n");
    printf("\t\t|  5.    --  Xiaomi 9   --        50     --   24000/-        |  \n");
    printf("\t\t|  6.    --  Mi A1 pro  --        50     --   25000/-        |  \n");
    printf("\t\t|  7.    --  Huawei Y9  --        50     --   20000/-        |  \n");
    printf("\t\t|  8.       E.T.C                                            |  \n");
    printf("\t\t|============================================================|  \n");

    int ch;
    printf("\n\t\t|-----------------------|    |--------------------------------| ");
    printf("\n\t\t|Enter (1) to get item  | or | [2] to return back to home page|");
    printf("\n\t\t|-----------------------|    |--------------------------------| ");
    scanf("%d", &ch);
    printf("\n");
    switch(ch)
    {
    case 1:
        phone();
        break;
    case 2:
       CUSTOMER_SECTION();
        break;


    default:
        printf("Wrong Input\n");

    }
}

int Computerparts()
{
    printf("  Display->  \n");
    printf(" _________\n\n");
    printf("\t\t|======================================================================|  \n");
    printf("\t\t| Serial --        Parts             --     Quantity    -- Price --    |   \n");
    printf("\t\t|======================================================================|  \n");
    printf("\t\t|  1.    --  Processor: Ryzen based  --        50     --   18000/-     |  \n");
    printf("\t\t|  2.    --  Processor: Intel based  --        50     --   17500/-     |  \n");
    printf("\t\t|  3.    --  B450 Aorus              --        50     --   10400/-     |  \n");
    printf("\t\t|  4.    --  AMD ryzen 5 3400g       --        50     --   17,500/-    |  \n");
    printf("\t\t|  5.    --  ram 16gb ddr4           --        50     --   8500/-      |  \n");
    printf("\t\t|  6.    --  ram 8gb ddr4            --        50     --   4000/-      |  \n");
    printf("\t\t|  7.    --  graphics card ddr4      --        50     --   1,30000/-   |  \n");
    printf("\t\t|  8.          E.T.C                                                   |  \n");
    printf("\t\t|======================================================================|  \n");


    int ch;
    printf("\n\t\t|-----------------------|    |--------------------------------| ");
    printf("\n\t\t|Enter (1) to get item  | or | [2] to return back to home page|");
    printf("\n\t\t|-----------------------|    |--------------------------------| ");
    scanf("%d", &ch);
    printf("\n");
    switch(ch)
    {
    case 1:
      computer();
        break;
     case 2:
      CUSTOMER_SECTION();
        break;


    default:
        printf("Wrong Input\n");

    }
}

int computer()
{
     int num1=50,num2,sub1,sub2,sub3,sub4,sub5,sub6,sub7,num3,num4,num5,num6,num7,num8;
    printf("|============|\n");
    printf("|Add to cart:|\n");
    printf("|============|\n\n\n");


    printf("Processor: Ryzen based--> \t");
    scanf(" %d",&num2);
    sub1=num1-num2;

    printf("Processor: Intel based--> \t");
     scanf(" %d",&num3);
    sub2=num1-num3;

     printf("B450 Aorus           --> \t");
     scanf(" %d",&num4);
    sub3=num1-num4;

     printf("AMD ryzen 5 3400g    --> \t");
     scanf(" %d",&num5);
    sub4=num1-num5;

    printf("ram 16gb ddr4         --> \t");
     scanf(" %d",&num6);
    sub5=num1-num6;

     printf(" ram 8gb ddr4        --> \t");
     scanf(" %d",&num7);
    sub6=num1-num7;

    printf("graphics card ddr4    --> \t");
     scanf(" %d",&num8);
    sub7=num1-num8;

    printf(" \n\n\n");
    printf("  Display->  \n");
    printf(" _________\n\n");
    printf("\t\t|======================================================================|  \n");
    printf("\t\t| Serial --        Parts             --     Quantity    -- Price --    |   \n");
    printf("\t\t|======================================================================|  \n");
    printf("\t\t|  1.    --  Processor: Ryzen based  --        %d     --   18000/-     |  \n",sub1);
    printf("\t\t|  2.    --  Processor: Intel based  --        %d     --   17500/-     |  \n",sub2);
    printf("\t\t|  3.    --  B450 Aorus              --        %d     --   10400/-     |  \n",sub3);
    printf("\t\t|  4.    --  AMD ryzen 5 3400g       --        %d     --   17,500/-    |  \n",sub4);
    printf("\t\t|  5.    --  ram 16gb ddr4           --        %d     --   8500/-      |  \n",sub5);
    printf("\t\t|  6.    --  ram 8gb ddr4            --        %d     --   4000/-      |  \n",sub6);
    printf("\t\t|  7.    --  graphics card ddr4      --        %d     --   1,30000/-   |  \n",sub7);
    printf("\t\t|  8.          E.T.C                                                   |  \n");
    printf("\t\t|======================================================================|  \n");

    printf("\n\n");
    printf("\n\t\t\t |----------------------------| or |--------------| : ");
    printf("\n\t\t\t |Press(1) to return home page| or |Buy Product(2)| : ");
    printf("\n\t\t\t |----------------------------| or |--------------| : ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {

    case 1:
       CUSTOMER_SECTION();
        break;
    case 2:
        payment();
        break;

    }
}

int phone()
{
     int num1=50,num2,sub1,sub2,sub3,sub4,sub5,sub6,sub7,num3,num4,num5,num6,num7,num8;
    printf("|============|\n");
    printf("|Add to cart:|\n");
    printf("|============|\n\n\n");



    printf("Oneplus 7--> \t");
    scanf(" %d",&num2);
    sub1=num1-num2;

    printf("Oneplus 6--> \t");
     scanf(" %d",&num3);
    sub2=num1-num3;

     printf("Iphone 11--> \t");
     scanf(" %d",&num4);
    sub3=num1-num4;

     printf("Iphone11pro-->\t");
     scanf(" %d",&num5);
    sub4=num1-num5;

    printf("Xiaomi 9 --> \t");
     scanf(" %d",&num6);
    sub5=num1-num6;

     printf("Mi A1 pro--> \t");
     scanf(" %d",&num7);
    sub6=num1-num7;

    printf("Huawei Y9--> \t");
     scanf(" %d",&num8);
    sub7=num1-num8;

    printf(" \n\n\n");
    printf(" Display-> \n");
    printf(" __________\n\n");
    printf("\t\t|============================================================|  \n");
    printf("\t\t| Serial --   Phones   --      Quantity  -- Price --         |  \n");
    printf("\t\t|============================================================|  \n");
    printf("\t\t|  1.    --  Oneplus 7  --        %d     --   32000/-        |  \n",sub1);
    printf("\t\t|  2.    --  Oneplus 6  --        %d     --   30000/-        |  \n",sub2);
    printf("\t\t|  3.    --  Iphone 11  --        %d     --   1,005,00/-     |  \n",sub3);
    printf("\t\t|  4.    --Iphone 11pro --        %d     --   1,010,00/-     |  \n",sub4);
    printf("\t\t|  5.    --  Xiaomi 9   --        %d     --   24000/-        |  \n",sub5);
    printf("\t\t|  6.    --  Mi A1 pro  --        %d     --   25000/-        |  \n",sub6);
    printf("\t\t|  7.    --  Huawei Y9  --        %d     --   20000/-        |  \n",sub7);
    printf("\t\t|  8.       E.T.C                                            |  \n");
    printf("\t\t|============================================================ |  \n");

   printf("\n\n");
   printf("\n\t\t\t |----------------------------|    |--------------| : ");
   printf("\n\t\t\t |Press(1) to return home page| or |Buy Product(2)| : ");
   printf("\n\t\t\t |----------------------------|    |--------------| : ");

    int ch;
    scanf("%d", &ch);
    switch(ch)
    {

    case 1:
       CUSTOMER_SECTION();
        break;
    case 2:
        payment();
        break;

    }

}

int various()
{
    int num1=50,num2,sub1,sub2,sub3,sub4,sub5,sub6,sub7,num3,num4,num5,num6,num7,num8;
    printf("|============|\n");
    printf("|Add to cart:|\n");
    printf("|============|\n\n\n");

    printf("lenovo lp1         --> \t");
    scanf(" %d",&num2);
    sub1=num1-num2;

    printf("lenovo livepods    --> \t");
     scanf(" %d",&num3);
    sub2=num1-num3;

     printf("Mpow flame S      --> \t");
     scanf(" %d",&num4);
    sub3=num1-num4;

     printf("power bank20000mah--> \t");
     scanf(" %d",&num5);
    sub4=num1-num5;

     printf("power bank30000mah--> \t");
     scanf(" %d",&num6);
    sub5=num1-num6;

     printf("solar ls05        --> \t");
     scanf(" %d",&num7);
    sub6=num1-num7;

    printf("solar ls02         --> \t");
     scanf(" %d",&num8);
    sub7=num1-num8;

    printf(" \n\n\n");
    printf("  Display->  \n");
    printf(" _________\n\n");
    printf("\t\t|======================================================================|  \n");
    printf("\t\t| Serial --        Parts             --     Quantity    -- Price --    |   \n");
    printf("\t\t|======================================================================|  \n");
    printf("\t\t|  1.    --  lenovo lp1              --        %d     --   18000/-     |  \n",sub1);
    printf("\t\t|  2.    --  lenovo livepods         --        %d     --   17500/-     |  \n",sub2);
    printf("\t\t|  3.    --  Mpow flame              --        %d     --   10400/-     |  \n",sub3);
    printf("\t\t|  4.    --  power bank20000mah      --        %d     --   17,500/-    |  \n",sub4);
    printf("\t\t|  5.    --  power bank30000mah      --        %d     --   8500/-      |  \n",sub5);
    printf("\t\t|  6.    --  solar ls05              --        %d     --   4000/-      |  \n",sub6);
    printf("\t\t|  7.    --  solar ls02              --        %d     --   1,30000/-   |  \n",sub7);
    printf("\t\t|  8.          E.T.C                                                   |  \n");
    printf("\t\t|======================================================================|  \n");


   printf("\n\n");
   printf("\n\t\t\t |----------------------------|    |--------------| : ");
   printf("\n\t\t\t |Press(1) to return home page| or |Buy Product(2)| : ");
   printf("\n\t\t\t |----------------------------|    |--------------| : ");

    int ch;
    scanf("%d", &ch);
    switch(ch)
    {

    case 1:
       CUSTOMER_SECTION();
        break;
    case 2:
        payment();
        break;

    }
}
















int hotoffer()
{
       {
   FILE *ft;
   char buff[255];//creating char array to store data of file
   ft = fopen("product.txt", "r");
   while(fscanf(ft, "%s\n", buff)!=EOF){
   printf("\t%s ", buff);
   }
   fclose(ft);
}
   int ch;
   printf("\n\t\t\t\t\t\t\t|Enter 0 for back to main menu|");
   printf("\n\t\t\t\t\t\t\t| Buy Now Press [1] --->      | ");
    scanf("%d", &ch);
      switch(ch)
{

    case 0:
     CUSTOMER_SECTION();
    break;
    case 1:
     payment();
    break;
}
}
int Onsalenow ()
{
    printf("\t\t\t\t|===============================================================================|\n");
    printf("\t\t\t\t|                                    ONLINE STORE:                              |\n");
    printf("\t\t\t\t|==|================================|=====================|=====================|\n");
    printf("\t\t\t\t|#.| Get Big Discount On!:          |  Regular Price:     |    Offer Price:     |\n");
    printf("\t\t\t\t|==|================================|=====================|=====================|\n");
    printf("\t\t\t\t|1.| imilab kw66 hand watch [#icon#]|      3000/-         |       2500/-        |\n");
    printf("\t\t\t\t|2.| 1plus 8pro             [#icon#]|      94,900/-       |       80,900/-      |\n");
    printf("\t\t\t\t|3.| Xiaomi Redmi note 9    [#icon#]|      27,999/-       |       22,500/-      |\n");
    printf("\t\t\t\t|4.| led wall lights        [#icon#]|      3500/-         |       3000/-        |\n");
    printf("\t\t\t\t|===================================|===========================================|\n");
    printf("\t\t\t\t|5.| Back [ <-- ]                   |                                           |\n");
    printf("\t\t\t\t|===============================================================================|\n");
    int ch;
    printf("\n\t\t|Enter what you want:");
    printf("\n\t\t---------------------------------------------------------> ");
    scanf("%d", &ch);
    printf("\n");
    switch(ch)
    {
    case 1:
        payment();
        break;
     case 2:
      payment();
        break;
    case 3:
        payment();
        break;
    case 4:
        payment();
        break;
    case 5 :
        CUSTOMER_SECTION();
        break;



    default:
        printf("Wrong Input\n");

    }
}

int payment()
{
    printf("     Payment Methods: \n");
    printf(" ---------------------------- \n\n");
    printf("1. Home Delivery  \n");
    printf("2. pay with Bkash \n");
    printf("3. pay with Rocket \n");
    printf("4. Back \n");
    int ch;
    printf("\nEnter your Choice:");
    scanf("%d", &ch);
    printf("\n");
    switch(ch)
    {
    case 1:
        HomeDelivery();
        break;
     case 2:
      bkash();
        break;
    case 3:
        roket();
        break;
    case 4:
        CUSTOMER_SECTION();
        break;


    default:
        printf("Wrong Input\n");

    }
}
int HomeDelivery ()
{
   char name[30];
    char Cname[30];
    FILE *fptr;
    int code;

    float intake;
    fptr = fopen("payment.txt", "w+");/*  open for writing */
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return;
    }
    printf(" CODE No. ->\n");
    scanf("%d", &code);
    fprintf(fptr, "|code=%d|\n", code);

    printf(" Your name -> \n");
    scanf("%s", name);
    fprintf(fptr, "    |name=%s|", name);

    printf(" Location-> \n");
    scanf("%s", Cname);
    fprintf(fptr, "        |location=%s|", Cname);

    printf("Confirm code->\n");
    scanf("%f", &intake);
    fprintf(fptr, "    |Amount=%.2f|", intake);

    fclose(fptr);
     printf("\n\t\t\t ##### Your order has been successfully placed #####\n\n ");


    FILE *fp;
   char buff[255];//creating char array to store data of file
   fp = fopen("payment.txt", "r");
   while(fscanf(fp, "%s", buff)!=EOF){
   printf("%s ", buff);
   }
   fclose(fp);
   printf("\n\n ");
   printf("\n\t\t\t |----------------------------|    |---------| : ");
   printf("\n\t\t\t |Press(1) to return home page| or |logout(2)| : ");
   printf("\n\\t\t\t|----------------------------|    |---------| : ");

    int ch;
    scanf("%d", &ch);
    switch(ch)
    {

    case 1:
       CUSTOMER_SECTION();
        break;
    case 2:
        logout();
        break;

    }
}

int bkash()
{
   char name[30];
    char Cname[30];
    FILE *fptr;
    int code;

    float intake;
    fptr = fopen("payment.txt", "w+");/*  open for writing */
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return;
    }
    printf(" Bkash CODE No. ->\n");
    scanf("%d", &code);
    fprintf(fptr, "|code=%d|\n", code);

    printf(" Your name -> \n");
    scanf("%s", name);
    fprintf(fptr, "    |name=%s|", name);

    printf(" Location-> \n");
    scanf("%s", Cname);
    fprintf(fptr, "        |location=%s|", Cname);

    printf("Amount of money->\n");
    scanf("%f", &intake);
    fprintf(fptr, "    |Amount=%.2f|", intake);


    fclose(fptr);
    printf("\n\t\t\t ##### Your order has been successfully placed #####\n\n ");


    FILE *fp;
   char buff[255];//creating char array to store data of file
   fp = fopen("payment.txt", "r");
   while(fscanf(fp, "%s", buff)!=EOF){
   printf("%s ", buff);
   }
   fclose(fp);
   printf("\n\n ");
   printf("\n\t\t\t |----------------------------|    |---------| : ");
   printf("\n\t\t\t |Press(1) to return home page| or |logout(2)| : ");
   printf("\n\t\t\t |----------------------------|    |---------| : ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {

    case 1:
       CUSTOMER_SECTION();
        break;
    case 2:
        logout();
        break;

    }
}

int roket()
{
      char name[30];
    char Cname[30];
    FILE *fptr;
    int code;

    float intake;
    fptr = fopen("payment.txt", "w+");/*  open for writing */
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return;
    }
    printf("Rocket CODE No. ->\n");
    scanf("%d", &code);
    fprintf(fptr, "|code=%d|\n", code);

    printf(" Your name -> \n");
    scanf("%s", name);
    fprintf(fptr, "    |name=%s|", name);

    printf(" Location-> \n");
    scanf("%s", Cname);
    fprintf(fptr, "        |location=%s|", Cname);

    printf("Amount of money->\n");
    scanf("%f", &intake);
    fprintf(fptr, "   | Amount=%.2f|", intake);


    fclose(fptr);
    printf("\n\t\t\t ##### Your order has been successfully placed #####\n\n ");

    FILE *fp;
   char buff[255];//creating char array to store data of file
   fp = fopen("payment.txt", "r");
   while(fscanf(fp, "%s", buff)!=EOF){
   printf("%s ", buff);
   }
   fclose(fp);
   printf("\n\n ");
   printf("\n\t\t\t |----------------------------|    |---------| : ");
   printf("\n\t\t\t |Press(1) to return home page| or |logout(2)| : ");
   printf("\n\t\t\t |----------------------------|    |---------| : ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {

    case 1:
       CUSTOMER_SECTION();
        break;
    case 2:
        logout();
        break;

    }
}







int USER_Dashboard()
{
    printf("1. Create Account\n");
    printf("2. Login\n");
    printf("\n\t\t\tEnter Your Choice ");
    printf("\n\t\t\t>-----------------> ");
   int ch;

    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        registe ();
        break;
    case 2:
        login();
        break;


    default:
        printf("\t\t\tWrong Input\n");
    }

    return 0;

}

int  Admin_Dashboard()
{

    printf("1. Create Account\n");
    printf("2. Login\n");
    printf("\n\t\t\tEnter Your Choice ");
    printf("\n\t\t\t>-----------------> ");
   int ch;

    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        aregiste ();
        break;
    case 2:
        alogin();
        break;


    default:
        printf("\t\t\tWrong Input\n");
    }

    return 0;

}




 int main() //main function
{
    system("COLOR 6");
    printf("\n\n\n\n\t\t\t\t\t\t |Group Name: Gryffindor. intake:44 , Sec:05|\n");
    printf("\n\n\t\t\t\t\t\t     |PROJECT NAME : ONLINE GADEGET STORE MANAGEMENT SYSTEM|\n\n\n\n\n\n");
 int i;
 for(i=1;i<=5;i++)
    printf("   ;*; ;*;  ;*;  ;*;  ~*~  ~*~  ;*;  ;*;  ;*; ;*;  ;*;  ;*;  ~*~  ~*~  ;*;  ;*;  ;*;  ~*~  ~*~  ;*;  ;*;  ;*;  ~*~  ~*~  ;*;  ;*;  ;*;  ~*~  ~*~  ;*;  ;*;  ;*;  \n");

    printf("                                                                  |--><--><--><--><--><--><--><--| \n\n");
    printf("                                                                  |       {{{Aemal tech}}}       | \n\n");
    printf("                                                                  | {{{The Online Gadget Store}}}| \n\n");
    printf("                                                                  |--><--><--><--><--><--><--><--| \n\n");
    printf("1. Became a User\n");
    printf("2. Became An Admin\n");
    printf("\n\t\t\tEnter Your Choice ");
    printf("\n\t\t\t>----------------> ");
 int ch;

    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        USER_Dashboard();
        break;
    case 2:
        Admin_Dashboard();
        break;


    default:
        printf("\t\t\tWrong Input\n");
    }

    return 0;

}
