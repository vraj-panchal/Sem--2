// Define a structure that can describe a hotel. It should have members that include the name, address,
// grade, average room charge, and number of rooms. Write functions to perform the following 
// operations.
// - To print out hotels of a given grade in order of charges.
// - To print out hotels with room charges less than a given value


// #include<stdio.h>
// #include<string.h>
// struct hotel{
//     char h_name[30];
//     char h_add[50];
//     char grade[2];
//     int room_charg;
//     int num_room;
// }h[5];
// int main()
// {
//     int i;
//     for(i=0;i<5;i++)
//     {
//         printf("Enter hotel name.");
//         scanf("%s",h[i].h_name);
//         printf("\nEnter hotel address.");
//         scanf("%s",h[i].h_add);
//         printf("Enter grade (grade should be 'A,B,C,D').\n");
//         scanf("%s",h[i].grade);
//         printf("Enter room charg.\n");
//         scanf("%d",&h[i].room_charg);
//         printf("Enter number of rooms in hotel.\n");
//         scanf("%d",&h[i].num_room);
//         getchar();
//     }

//     char u_grade[2];
//     printf("Enter grade for hotels list.\n");
//     scanf("%s",u_grade);
//     printf("\nHotel\tAddress\tCharge\tRoom");
//     for(i=0;i<5;i++)

//     {
//         if(strcmp(h[i].grade , u_grade) == 0){
//             printf("\n%s\t%s\t%d\t%d\t",h[i].h_name,h[i].h_add,h[i].room_charg,h[i].num_room);
//         }
//     }

//     int buget;
//     printf("\nEnter your buget for the rooms.\n");
//     scanf("%d", &buget);
//     printf("\nHotel\tAddress\tCharge\tRoom");
//     for(i=0;i<5;i++){
//         if(h[i].room_charg<buget)
//         {
//             printf("\n%s\t%s\t%d\t%d\t",h[i].h_name,h[i].h_add,h[i].room_charg,h[i].num_room);
//         }
//     }

//     return 0;
// }


#include<stdio.h>
#include<string.h>

struct Hotel {
    char h_name[50];  // Increased size to accommodate longer names
    char h_add[50];   // Increased size to accommodate longer addresses
    char grade[3];    // Increased size to accommodate longer grades
    int r_charge;
    int r_no;
} h[3];

void insert() {
    for(int i = 0; i < 3; i++) 
    {
        printf("\nEnter Hotel Name: ");
        scanf("%49s", h[i].h_name);  // Limit input to 49 characters

        printf("Enter The Hotel Address: ");
        scanf("%49s", h[i].h_add);  // Limit input to 49 characters

        printf("Enter Hotel Grade: ");
        scanf("%2s", h[i].grade);  // Limit input to 2 characters

        printf("Enter The Room Charge: ");
        scanf("%d", &h[i].r_charge);

        printf("Enter The Room Number: ");
        scanf("%d", &h[i].r_no);
    }
}

void display() 
{
    printf("\nHotel\tAddress\tGrade\tCharge\tRoom\n");
    for(int i = 0; i < 3; i++) 
    {
        printf("%s\t%s\t%s\t%d\t%d\n", h[i].h_name, h[i].h_add, h[i].grade, h[i].r_charge, h[i].r_no);
    }
}

void search() 
{
    int Rs;
    printf("\nEnter your Budget: ");
    scanf("%d", &Rs);
    printf("\nHotel\tAddress\tGrade\tCharge\tRoom\n");
    for(int i = 0; i < 3; i++)
    {
        if(Rs >= h[i].r_charge) 
        {
            printf("%s\t %s \t%s\t%d\t%d\n", h[i].h_name, h[i].h_add, h[i].grade, h[i].r_charge, h[i].r_no);   
        }
    }
}

void shot() 
{
    struct Hotel temp;
    for(int i = 0; i < 3; i++) 
    {
        for(int j = i + 1; j < 3; j++) 
        {
            if(h[i].r_charge < h[j].r_charge) 
            {
                temp = h[j];
                h[j] = h[i];
                h[i] = temp;
            }
        }
    }

    display();  // Display the sorted data once after sorting
}


int main() {
    int choice;

    while(1) {
        printf("\nPress 1 to Insert\n");
        printf("Press 2 to Display\n");
        printf("Press 3 to Search\n");
        printf("Press 4 to Sort Data\n");
        printf("Press 5 to Exit\n");

        printf("Enter Your Choice: "); 
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert();
                break;

            case 2:
                display();
                break;

            case 3:
                search();
                break;

            case 4:
                shot();
                printf("\nData Sorted!\n");
                break;

            case 5:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Please Enter Valid Choice.\n");
                break;
        }
    }

    return 0;
}
