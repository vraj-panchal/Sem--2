// Write user defined function to read a file “Student_info.txt”, “University_info.txt”,”Bank_info.txt” 
// simultaneously and write all details in file “Student_details.txt” File. Also write user defined function to 
// display all details of file “details.txt”.
// Note: student_info.txt file contains student personal information like name, address, age, email etc.
//  University_info.txt file contains university details in which student is pursuing a degree. 
//  Bank_info.txt file contains student’s bank details


#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>

struct student{
    int rollno;
    char name[20];
    int age;

        struct university{
            char uniName[20];
            char degree[20];

        }u[2];

            struct bank{
                char bName[20];
                int AccNO;
            }b[2];


}s[2];

void printmenu()
{
    printf("\n 1. INSERT STUDENT DETAILS : \n");
    printf("2. DISPLAY STUDENT DETAILS : \n");
    printf("3. Exit\n");
}

void insert()
{
        FILE *fp1;
        FILE *fp2;
        FILE *fp3;
        

            fp1=fopen("Student_info.txt","a");

                for(int i=0 ; i<2 ; i++)
                {
                    printf("\nEnter Student Roll No : ");
                        scanf("%d",&s[i].rollno);
                    
                    printf("Enter Student Name : ");
                        scanf("%s",s[i].name);

                    printf("Enter Student Age : ");
                        scanf("%d",&s[i].age);

                    fwrite(&s[i], sizeof(s[i]) ,1, fp1);
                }

            fclose(fp1);


            fp2=fopen("University_info.txt","a");


                for(int i=0 ; i<2 ; i++)
                {
                    printf("\nEnter University Name : ");
                        scanf("%s",s[i].u[i].uniName);

                    printf("Enter Student Degree : ");
                        scanf("%s",s[i].u[i].degree);
                    
                    fwrite(&s[i].u[i], sizeof(s[i].u[i]) ,1, fp2);

                }

            fclose(fp2);


            fp3=fopen("Bank_info.txt","a");

                for(int i=0 ; i<2 ; i++)
                {
                    printf("\nEnter Student Bank Name : ");
                        scanf("%s",s[i].b[i].bName);

                    printf("Enter Student Bank AccNO : ");
                        scanf("%d",&s[i].b[i].AccNO);

                    fwrite(&s[i].b[i], sizeof(s[i].b[i]) ,1, fp2);

                }

            fclose(fp3);







}



// void display()
// {
//     FILE *fp1, *fp2, *fp3;

//     fp1 = fopen("Student_info.txt", "r");
//     fp2 = fopen("University_info.txt", "r");
//     fp3 = fopen("Bank_info.txt", "r");

   

//     printf("\n\t ROLL NO \t NAME \t AGE \t UNIVERSITY \t DEGREE \t B_NAME \t ACC_NO \n");
//     for (int i = 0; i < 2; i++) 
//     {
//         fread(&s[i], sizeof(struct student), 1, fp1);
//         printf("\t %d \t\t %s \t %d \t", s[i].rollno, s[i].name, s[i].age);

//         fread(&s[i].u[i], sizeof(struct university), 1, fp2);
//         printf(" %s \t\t %s \t", s[i].u[i].uniName, s[i].u[i].degree);

//         fread(&s[i].b[i], sizeof(struct bank), 1, fp3);
//         printf("\t %s \t\t %d \n", s[i].b[i].bName, s[i].b[i].AccNO);
//     }

//     fclose(fp1);
//     fclose(fp2);
//     fclose(fp3);


//     FILE *fp;
//     char result;

//     fp1 = fopen("Student_info.txt", "r");
//     fp2 = fopen("University_info.txt", "r");
//     fp3 = fopen("Bank_info.txt", "r");

//         fp=fopen("details.txt","w");

//         while((result = fgetc(fp1)) != EOF)
//         {
//             fputc(result,fp);
//         }
//         while((result = fgetc(fp2)) != EOF)
//         {
//             fputc(result,fp);
//         }
//         while((result = fgetc(fp3)) != EOF)
//         {
//             fputc(result,fp);
//         }

        
//         printf("\n\t ROLL NO \t NAME \t AGE \t UNIVERSITY \t DEGREE \t B_NAME \t ACC_NO \n");
        
//         for (int i = 0; i < 2; i++) 
//         {
//             printf("%s",result);
//         }




//     fclose(fp1);
//     fclose(fp2);
//     fclose(fp3);\

//         fclose(fp);

//         printf("FILE COPIED SUCCESSFULLY.!!\n");

        
       


// }

void display() {
    FILE *fp1, *fp2, *fp3, *fp;
    

    fp1 = fopen("Student_info.txt", "r");
    fp2 = fopen("University_info.txt", "r");
    fp3 = fopen("Bank_info.txt", "r");
    fp = fopen("details.txt", "w");

        if (fp1 == NULL || fp2 == NULL || fp3 == NULL || fp == NULL) {
            printf("Error opening files.\n");
            return;
        }

        printf("\n\tROLL NO\tNAME\tAGE\tUNIVERSITY\tDEGREE\tB_NAME\tACC_NO\n");

        for(int i=0 ; i<2 ; i++)
        {
            while (fread(&s[i], sizeof(s[i]), 1, fp1) == 1 && fread(&s[i].u[i], sizeof(s[i].u[i]), 1, fp2) == 1 &&  fread(&s[i].b[i], sizeof(s[i].b[i]), 1, fp3) == 1)
             
          
            {
            // fprintf(fp, "%d\t%s\t%d\t%s\t%s\t%s\t%d\n", s[i].rollno, s[i].name, s[i].age, s[i].u[i].uniName, s[i].u[i].degree, s[i].b[i].bName, s[i].b[i].AccNO);
            printf("\t%d\t%s\t%d\t%s\t%s\t%s\t%d\n", s[i].rollno, s[i].name, s[i].age, s[i].u[i].uniName, s[i].u[i].degree, s[i].b[i].bName, s[i].b[i].AccNO);
            
            }
        } 
        
        

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    fclose(fp);

    printf("Details written to details.txt.\n");
}


int main()
{
    int choice;

        do
        {
            printmenu();

            printf("Enter  Your choice : ");
                scanf("%d",&choice);

                switch (choice)
                {
                    case 1:

                            insert();
                        break;

                    case 2:

                            display();
                        break;

                    case 3:

                        printf("\nExit This Program !! THANK YOU !! \n");

                        exit(0);

                    
                    default:

                        printf("\nINVALID INPUT\n");
                        break;
                }
        }

        while(1);

        return 0;
}

