#include<stdio.h>

#include<stdlib.h>

#include<string.h>

struct book

{

    char name[25];

    char snack[100];

    char ride[25];

    int mobile;

    int row;

    int Seat_Number;

    int  total;

}b;

struct arr

{

    int R1 [4] [20];

    int R2 [4] [20];

    int R3 [4] [20];

    int R4 [4] [20];

    int R5 [4] [20];

    int R6 [4] [20];

    int R7 [4] [20];

}a;



void View_Ride();

void Book_Ticket();

void Add_Snacks();

void display();

int main()

{

    int ch , i ,j;

    for(i=0;i<4;i++)

    {

        for(j=0;j<20;j++)

        {

            a.R1[i][j]=1;

            a.R2[i][j]=1;

            a.R3[i][j]=1;

            a.R4[i][j]=1;

            a.R5[i][j]=1;

            a.R6[i][j]=1;

            a.R7[i][j]=1;

        }

    }

    do

    {

        printf("\n||***********************************************************************||");

        printf("\n||                                                                       ||");

        printf("\n||          Welcome to Amusement Park Ticket Booking System              ||");

        printf("\n||                                                                       ||");

        printf("\n||***********************************************************************||");

        printf("\n||          Press [1]  TO VIEW AVAILABLE RIDES                           ||");

        printf("\n||-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-||");

        printf("\n||          Press [2] To Book Tickets                                    ||");

        printf("\n||-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-||");

        printf("\n||          Press [3] To Add SNACKS                                      ||");

        printf("\n||-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-||");

        printf("\n||          Press [4] To VIEW TICKET                                     ||");

        printf("\n||-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-||");

        printf("\n||          Press [5] To Exit   < ADMIN ONLY>                            ||");

        printf("\n||-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-||");

        printf("\n||          Please Enter Your Choice::                                   ||");

        printf("\n||***********************************************************************||\n\n");

        fflush(stdin);

        scanf("%d",&ch);

        switch (ch)

        {

            case1 :

                  View_Ride();

                break;

            case2:

                printf("ENTER NAME\n");

                 fflush(stdin);

                 fgets(b.name, sizeof(b.name), stdin);

             printf("ENTER MOBILE NO.\n");

             fflush(stdin);

            scanf("%d",&b.mobile);

                Book_Ticket();

                break;

            case3:

                Add_Snacks();

                break;

            case4:

                printf("YOUR TICKET IS\n");

                display();

                break;

            case5:

                 printf("\n*** Thank You! Visit Again!!! ***\n\n");

                break;

            default:

                printf("\nWrong choice!!!\nTry Again!!!");

                break;

        }

    }

    while(ch!=5);

}

void Book_Ticket()

{
    int r,c,rideno;

printf("           ENTER RIDE NO. OF RIDES TO BE BOOKED\n");

fflush(stdin);

scanf("%d",&rideno);

printf("           MOST THRILLER ZONE SEAT IS OF 1000\n");

printf("           ROW NO. FOR MOST THRILLER ZONE IS 0 \n");

printf("           CLIFF HANGER ZONE SEAT IS OF 900\n");

printf("           ROW NO. FOR CLIFF HANGER ZONE IS 1 \n");

printf("           JAW DROPPER ZONE SEAT IS OF 800\n");

printf("           ROW NO. FOR JAW DROPPER ZONE IS 2 \n");

printf("           SHOCKER ZONE SEAT IS OF 500 \n");

printf("           ROW NO. FOR SHOCKER ZONE IS 3 \n");

printf("           ENTER ROW NO. AND SEAT NUMBER \n");

fflush(stdin);

scanf("%d%d",&r,&c);


switch (rideno)

{
    case1:

            if(a.R1[r][c]==0)

            {

                printf(" SORRY THAT SEAT IS ALREADY BOOKED, TRY AGAIN! \n");

            }

            else
                {
                    b.row=r;

                    b.Seat_Number=c;

                    strcpy(b.ride,"ROLLER COASTER");

                    a.R1[r][c]=0;

                    if(r==0)

                    {

                        b.total=b.total+1000;

                    }

                    else if(r==1)

                    {

                       b.total=b.total+900;

                    }

                     else if(r==2)

                    {

                       b.total=b.total+800;

                    }

                     else if(r==3)

                    {

                       b.total=b.total+500;

                    }

            }

            break;

            case2:

            if(a.R2[r][c]==0)

            {

                printf(" SORRY THAT SEAT IS ALREADY BOOKED, TRY AGAIN! \n");

            }

            else
                {
                    b.row=r;

                    b.Seat_Number=c;

                    strcpy(b.ride,"COLUMBUS");

                    a.R2[r][c]=0;

                    if(r==0)

                    {

                        b.total=b.total+1000;

                    }

                    else if(r==1)

                    {

                       b.total=b.total+900;

                    }

                     else if(r==2)

                    {

                       b.total=b.total+800;

                    }

                     else if(r==3)

                    {

                       b.total=b.total+500;

                    }
            }

            break;

            case3:

            if(a.R3[r][c]==0)

            {

                printf(" SORRY THAT SEAT IS ALREADY BOOKED, TRY AGAIN! \n");

            }

            else
                {
                    b.row=r;

                    b.Seat_Number=c;

                    strcpy(b.ride,"THE GHOST TRAIN");

                    a.R3[r][c]=0;

                    if(r==0)

                    {

                        b.total=b.total+1000;

                    }

                    else if(r==1)

                    {

                       b.total=b.total+900;

                    }

                     else if(r==2)

                    {

                       b.total=b.total+800;

                    }

                     else if(r==3)

                    {

                       b.total=b.total+500;

                    }

            }

            break;

            case4:

            if(a.R4[r][c]==0)

            {

                printf(" SORRY THAT SEAT IS ALREADY BOOKED, TRY AGAIN! \n");

            }

            else
                {
                    b.row=r;

                    b.Seat_Number=c;

                    strcpy(b.ride,"SHUTTER ISLAND");

                    a.R4[r][c]=0;

                    if(r==0)

                    {

                        b.total=b.total+1000;

                    }

                    else if(r==1)

                    {

                       b.total=b.total+900;

                    }

                     else if(r==2)

                    {

                       b.total=b.total+800;

                    }

                     else if(r==3)

                    {

                       b.total=b.total+500;

                    }
            }

            break;

            case5:

            if(a.R5[r][c]==0)

            {

                printf(" SORRY THAT SEAT IS ALREADY BOOKED, TRY AGAIN! \n");

            }

            else
                {
                    b.row=r;

                    b.Seat_Number=c;

                    strcpy(b.ride,"SCREAM MACHINE ");

                    a.R5[r][c]=0;

                    if(r==0)

                    {

                        b.total=b.total+1000;

                    }

                    else if(r==1)

                    {

                       b.total=b.total+900;

                    }

                     else if(r==2)

                    {

                       b.total=b.total+800;

                    }

                     else if(r==3)

                    {

                       b.total=b.total+500;

                    }
            }

            break;

            case6:

            if(a.R6[r][c]==0)

            {

                printf(" SORRY THAT SEAT IS ALREADY BOOKED, TRY AGAIN! \n");

            }

            else
                {
                    b.row=r;

                    b.Seat_Number=c;

                    strcpy(b.ride,"STEEL DRAGON");


                    a.R6[r][c]=0;

                    if(r==0)

                    {

                        b.total=b.total+1000;

                    }

                    else if(r==1)

                    {

                       b.total=b.total+900;

                    }

                     else if(r==2)

                    {

                       b.total=b.total+800;

                    }

                     else if(r==3)

                    {

                       b.total=b.total+500;

                    }

            }

            break;

            case7:

            if(a.R7[r][c]==0)

            {

                printf(" SORRY THAT SEAT IS ALREADY BOOKED, TRY AGAIN! \n");

            }

            else
                {
                    b.row=r;

                    b.Seat_Number=c;

                    strcpy(b.ride,"KAKASHI");

                    a.R7[r][c]=0;

                    if(r==0)

                    {

                        b.total=b.total+1000;

                    }

                    else if(r==1)

                    {

                       b.total=b.total+900;

                    }

                     else if(r==2)

                    {

                       b.total=b.total+800;

                    }

                     else if(r==3)

                    {

                       b.total=b.total+500;

                    }
            }

            break;

            default:

                printf("SORRY WRONG CHOICE, TRY AGAIN! \n");

}

}

void View_Ride()

{
    int rideno , i , j;

    char c;

        printf("\n||=======================================================================||");

        printf("\n||                                                                       ||");

        printf("\n||                AVAILABLE RIDES                                        ||");

        printf("\n||                                                                       ||");

        printf("\n||=======================================================================||");

         printf("\nRIDE no. 1\n");

        printf("\n||          ROLLER COASTER                                                     ||");

        printf("\n||-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-||");

         printf("\nRIDE no. 2\n");

        printf("\n||          COLUMBUS                                                      ||");

        printf("\n||-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-||");

         printf("\nRIDE no. 3\n");

        printf("\n||          THE GHOST TRAIN                                              ||");

        printf("\n||-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-||");

         printf("\nRIDE no. 4\n");

        printf("\n||          SHUTTER ISLAND                                               ||");

        printf("\n||-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-||");

         printf("\nRIDE no. 5\n");

        printf("\n||          SCREAM MACHINE                                               ||");

        printf("\n||-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-||");

         printf("\nRIDE no. 6\n");

        printf("\n||          STEEL DRAGON                                                 ||");

        printf("\n||-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-||");

         printf("\nRIDE no. 7\n");

        printf("\n||          KAKASHI                                                      ||");

        printf("\n||***********************************************************************||");

        do
        {

        printf("\n||          Please Enter RIDE NO.::                                     ||");

        fflush(stdin);

        scanf("%d",&rideno);

        printf("\n||-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-||\n\n");

        printf("\n SEATS AVAILABLE ARE \n");

        switch (rideno)

        {

        case1:

            for(i=0;i<4;i++)

            {
                for(j=0;j<20;j++)

                {

                    printf("   %d   ",a.R1[i][j]);

                }

                printf("\n");
            }

        break;

         case2:

            for(i=0;i<4;i++)

            {
                for(j=0;j<20;j++)
                {

                    printf("   %d   ",a.R2[i][j]);

                }

                printf("\n");
            }

        break;

         case3:

            for(i=0;i<4;i++)
            {
                for(j=0;j<20;j++)
                {

                    printf("   %d   ",a.R3[i][j]);

                }

                printf("\n");
            }

        break;

         case4:

            for(i=0;i<4;i++)
            {
                for(j=0;j<20;j++)
                {

                    printf("   %d   ",a.R4[i][j]);

                }

                printf("\n");
            }

        break;

         case5:

            for(i=0;i<4;i++)
            {
                for(j=0;j<20;j++)
                {

                    printf("   %d   ",a.R5[i][j]);

                }

                printf("\n");
            }

        break;

         case6:

            for(i=0;i<4;i++)
            {
                for(j=0;j<20;j++)
                {

                    printf("   %d   ",a.R6[i][j]);

                }

                printf("\n");
            }

        break;

         case7:

            for(i=0;i<4;i++)
            {
                for(j=0;j<20;j++)
                {

                    printf("   %d   ",a.R7[i][j]);

                }

                printf("\n");
            }

        break;

         default:

             printf("\n=====  WRONG CHOICE  =====\n");


        }



        printf("    DO YOU WANT TO VIEW ANOTHER RIDE ENTER Y OR N\n");

         fflush(stdin);

        scanf("%c",&c);

        } while(c=='Y');

}

void Add_Snacks()

{
    int snackno;
     char c1;
     char si;

        printf("\n||=======================================================================||");

        printf("\n||                                                                       ||");

        printf("\n||                SNACKS AVAILABLE ARE                                   ||");

        printf("\n||                                                                       ||");

        printf("\n||=======================================================================||");

         printf("\nSNACK no. 1\n");

        printf("\n||          PAV BHAJI                                                     ||");

        printf("\n||-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-||");

         printf("\nSNACK no. 2\n");

        printf("\n||          SOFT DRINK                                                   ||");

        printf("\n||-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-||");

         printf("\nSNACK no. 3\n");

        printf("\n||          BURGER                                                       ||");

        printf("\n||-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-||");

         printf("\nSNACK no. 4\n");

        printf("\n||          CHOLE BHATURE                                                   ||");

        printf("\n||-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-||");

         printf("\nSNACK no. 5\n");

        printf("\n||          PATTIES                                                      ||");

        printf("\n||-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-||");

         printf("\nSNACK no. 6\n");

        printf("\n||          SAMOSA                                                       ||");

        printf("\n||-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-||");

         printf("\nSNACK no. 7\n");

        printf("\n||          SANDWICH                                                     ||");

        printf("\n||***********************************************************************||");

        do
        {

        printf("\n||          Please Enter SNACK NO.::                                     ||");

        printf("\n||-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-||\n\n");

        fflush(stdin);

        scanf("%d",&snackno);

        switch (snackno)

        {

            case1 :

                printf("\n ENTER SIZE S M L\n ");

                fflush(stdin);

                scanf("%c",&si);

                switch (si)
                {

                case'S':

                    printf("PRIZE IS 100\n");

                    strcat(b.snack,"PAV BHAJI S ");

                    b.total= b.total+ 100;

                    break;

                    case'M':

                    printf("PRIZE IS 150\n");

                    strcat(b.snack,"PAV BHAJI M ");

                    b.total= b.total+ 150;

                    break;

                    case'L':

                    printf("PRIZE IS 200\n");

                    strcat(b.snack,"PAV BHAJI L ");

                    b.total= b.total+ 200;

                    break;

                    default:

                        printf("WRONG CHOICE TRY AGAIN \n");

                    }

                    printf("PAV BHAJI ADDED \n");

                break;


            case2:

                printf("\n ENTER SIZE S M L\n ");

                scanf("%c",&si);

                switch (si)
                {

                case'S':

                    printf("PRIZE IS 100\n");

                    strcat(b.snack,"SOFT DRINK S ");

                    b.total= b.total+ 100;

                    break;

                    case'M':

                    printf("PRIZE IS 150\n");

                    strcat(b.snack,"SOFT DRINL M ");

                    b.total= b.total+ 150;

                    break;

                    case'L':

                    printf("PRIZE IS 200\n");

                    strcat(b.snack,"SOFT DRINK L ");

                    b.total= b.total+ 200;

                    break;

                    default:

                        printf("WRONG CHOICE TRY AGAIN \n");

                    }

                     printf("SOFT DRINK ADDED \n");

                break;

            case3:

                 printf("\n ENTER SIZE S M L\n ");

                 fflush(stdin);

                scanf("%c",&si);

                switch (si)
                {

                case'S':

                    printf("PRIZE IS 100\n");

                    strcat(b.snack,"BURGER S ");

                    b.total= b.total+ 100;

                    break;

                    case'M':

                    printf("PRIZE IS 150\n");

                    strcat(b.snack,"BURGER M ");

                    b.total= b.total+ 150;

                    break;

                    case'L':

                    printf("PRIZE IS 200\n");

                    strcat(b.snack,"BURGER L ");

                    b.total= b.total+ 200;

                    break;

                    default:

                        printf("WRONG CHOICE TRY AGAIN \n");

                    }

                     printf("BURGER ADDED \n");

                break;

            case4:

                 printf("\n ENTER SIZE S M L \n");

                 fflush(stdin);

                scanf("%c",&si);

                switch (si)
                {

                case'S':

                    printf("PRIZE IS 100\n");

                    strcat(b.snack,"CHOLE BHATURE S ");

                    b.total= b.total+ 100;

                    break;

                    case'M':

                    printf("PRIZE IS 150\n");

                    strcat(b.snack,"CHOLE BHATURE M ");

                    b.total= b.total+ 150;

                    break;

                    case'L':

                    printf("PRIZE IS 200\n");

                    strcat(b.snack,"CHOLE BHATURE L ");

                    b.total= b.total+ 200;

                    break;

                    default:

                        printf("WRONG CHOICE TRY AGAIN \n");

                    }

                     printf("CHOLE BHATURE ADDED \n");

                break;

                    case5:

                         b.total=b.total+50;

                         printf("PRICE IS 50\n");

                         strcat(b.snack,"PATTIES ");

                          printf("PATTIES ADDED \n");

                         break;

                          case6:

                         b.total=b.total+50;

                         strcat(b.snack,"SAMOSA ");

                         printf("PRICE IS 50\n");

                         printf("SAMOSA ADDED \n");

                         break;

                          case7:

                         b.total=b.total+50;

                         printf("PRICE IS 50\n");

                         strcat(b.snack,"SANDWICH ");

                          printf("SANDWICH ADDED \n");

                         break;

            default:

                printf("\nWrong choice!!!\nTry Again!!!");

                break;

        }

   printf("DO YOU WANT TO ADD MORE SNACKS ENTER Y OR N \n");

   fflush(stdin);

   scanf("%c",&c1);

     } while(c1=='Y');

    }
void display()
{
  printf("NAME : ");

  puts(b.name);

  printf("\nMOBILE NO.: %d ",b.mobile);

  printf("\nRIDE: ");

  puts(b.ride);

  printf("SEAT : ");

  if(b.row==0)

  {
  printf("MOST THRILLER\n");
  }

  else if(b.row==1)

  {
  printf("CLIFF HANGER\n");
  }

  else if(b.row==2)

  {
  printf("JAW DROPPING\n");
  }

  else

  {
    printf("SHOCKER ZONE\n");
  }

  printf("SEAT_NUMBER IS %d\n",b.Seat_Number);

  printf("SNACKS: ");

  puts(b.snack);

  printf("TOTAL AMOUNT : %d\n",b.total);

}
