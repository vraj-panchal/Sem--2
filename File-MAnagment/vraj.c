#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student {

    int rollno;
    char name[20];
    int mono;

}s[3];

void printmenu()
{
    printf("\n 1. insert student data : \n");
    printf(" 2. dislplay student data : \n");
    printf(" 3. search the student data : \n");
    printf(" 4. count the total student : \n"); 
    printf(" 5. update the data : \n");
    printf(" 6. short the data : \n");
    printf(" 7. delete the data : \n");
    printf(" 8. exit \n");

}

void insert()
{   
    FILE *fp;

        fp=fopen("student_data.txt","a");

        for(int i=0 ; i<3 ; i++)
        {
            printf("\n Enter Roll no : " );
                scanf("%d",&s[i].rollno);

            printf(" Enter Name : ");
                scanf("%s",s[i].name);

            printf(" Enter Nobile Number : ");
                scanf("%d",&s[i].mono);

                fwrite(&s[i] , sizeof(s[i]) , 1, fp);

        }

        fclose(fp);

}
void display()
{
    FILE *fp;
    fp=fopen("student_data.txt","r");

   

    printf("\n \tROLLNO \t NAME \t MOBILE NO\n");

    for (int i = 0; i <3; i++)
    {
        while(fread(&s[i], sizeof(s[i]), 1, fp))
        {
             printf("\n \t%d \t %s \t %d\n", s[i].rollno, s[i].name, s[i].mono);
        }
       
    }

    fclose(fp);
}

int avlrollno(int rno) 
{

    FILE *fp;
    
    fp = fopen("student_data.txt", "r");
   
    for(int i=0 ; i<3 ; i++)
    {
        
        while (fread(&s[i], sizeof(s[i]), 1, fp) == 1) 
        {
            if (rno == s[i].rollno) 
            {
                fclose(fp);
                return 1; // Indicate success
            }
        }
    }
    fclose(fp);
    return 0; // Indicate failure

}

void search() 
{
    int no, avl;
    
    printf("Enter the roll number you want to search: ");
        scanf("%d", &no);

    avl = avlrollno(no);

    if (avl == 0) 
    {
        printf("Roll number not found.\n");
        return;
    }

    FILE *fp;

    fp=fopen("student_data.txt","r");
    

    printf("\n \tROLLNO \t NAME \t MOBILE NO\n");
    for(int i=0 ;i<3 ; i++)
    {
        while (fread(&s[i], sizeof(s[i]), 1, fp) == 1) 
        {
            if (s[i].rollno == no) {
                printf("\n \t%d \t %s \t %d\n", s[i].rollno, s[i].name, s[i].mono);
                fclose(fp);
                return;
            }
        }
    }
    fclose(fp);
}

int count()
{
    int cunt=0;

    FILE *fp;

    fp=fopen("student_data.txt","r");

    for(int i=0 ; i<3 ; i++)
    {

        while (fread(&s[i] , sizeof(s[i]) , 1 ,fp))
        {
            cunt++;
        }
        

    }

    fclose(fp);

    return cunt;

}




void update()
{
    int se , no ,choice;

        printf("Enter Roll NO You want to update : ");
            scanf("%d",&no);

            if(avlrollno(no)==0)
            {
                printf("Roll no  is not Found  !! ");
                return ;
            }

    FILE *fp;
    FILE *fpo;

        fp=fopen("student_data.txt","r");
        fpo=fopen("temp.txt","w");

            for(int i=0 ; i<3 ;i++)
            {

                fread(&s[i] , sizeof(s[i]) , 1, fp);

                 se=s[i].rollno;

                if(se==no)
                {

                        printf("\n 1. update roll no : \n");
                        printf(" 2. update name : \n");
                        printf(" 3. update mobile number : \n");
                        printf(" 4. update roll no or name : \n");

                        printf("Enter your Choice : ");
                            scanf("%d",&choice);

                            switch (choice)
                            {
                            case 1:
                                    printf("\n Enter Roll no : " );
                                        scanf("%d",&s[i].rollno);

                                break;
                            case 2: 


                                    printf(" Enter Name : ");
                                        scanf("%s",s[i].name);

                                break;
                            case 3:

                                    printf(" Enter Nobile Number : ");
                                        scanf("%d",&s[i].mono);

                                break;
                            case 4:
                                     printf("\n Enter Roll no : " );
                                        scanf("%d",&s[i].rollno);

                                    printf(" Enter Name : ");
                                        scanf("%s",s[i].name);

                                break;
                            default:

                                 printf("INVALID INPUT !!");
                                break;

                            }


                }

                fwrite(&s[i], sizeof(s[i]) , 1 , fpo);


            }
    fclose(fp);
    fclose(fpo);

    remove("student_data.txt");
    rename("temp.txt","student_data.txt");



}


void sort()
{
    FILE *fp;
    struct student temp;

        fp=fopen("student_data.txt","r");

        int i , j;

            for(i=0 ; i<3 ; i++)
            {
                fread(&s[i], sizeof(struct student), 1, fp);
            }

            fclose(fp);

                for(i=0 ; i<3 ; i++)
                {
                    for(j=0 ; j<3 ; j++)
                    {
                        if(s[i].rollno > s[j].rollno)
                        {
                            temp=s[j];
                            s[j]=s[i];
                            s[i]=temp;
                        }
                    }
                }

        printf("\n \tROLLNO \t NAME \t MOBILE NO\n");

        for (int i = 0; i <3; i++)
        {
            
            printf("\n \t%d \t %s \t %d\n", s[i].rollno, s[i].name, s[i].mono);
            
        
        }

}



void delete()
{

    int no , se;
    int found=0;

        printf("Enter Roll No You Want to Delete : ");
            scanf("%d",&no);

        if(avlrollno(no) == 0)
        {
            printf("Roll NO is Not availabel. \n");
        }

    FILE *fp;
    FILE *fpo;

        fp=fopen("student_data.txt","r");
        fpo=fopen("temp.txt","w");

            for(int i=0 ; i<3 ; i++)
            {
                while (fread(&s[i] , sizeof(s[i]), 1, fp))
                {
                    se=s[i].rollno;

                        if(se!=no)
                        {
                            fwrite(&s[i] , sizeof(s[i]) , 1, fpo);
                        }

                        else
                        {
                            found=1;
                        }
                }
                
            }

        fclose(fp);
        fclose(fpo);

            if(!found)
            {
                printf("Roll NO NOt found : ");
                return ;
            }

        fp=fopen("student_data.txt","w");
        fpo=fopen("temp.txt","r");

            for(int i=0 ; i<3 ; i++)
            {
                while (fread(&s[i] , sizeof(s[i]) , 1, fpo))

                {
                    fwrite(&s[i] , sizeof(s[i]) , 1 , fp);
                }
                
            }
        
        fclose(fp);
        fclose(fpo);



}


int main()
{
    int choice ;

        

            do{
                printmenu();

                printf("\n Enter Your Choice : ");
                    scanf("%d",&choice);

                    switch (choice)
                    {
                    case 1: 

                            insert();
                        break;
                    
                    case 2 : 
                            
                            display();
                        break;

                    case 3:
                            search();

                        break;

                    case 4:

                            printf("\n Total Number of student : %d",count());

                        break;

                    case 5:
                            update();
                        break;
                    
                    case 6:

                            sort();
                        break;

                    case 7:

                            delete();

                        break;

                    case 8:

                        printf("EXIT THIS PROGRAM ..THANK YOU!!!");
                        exit(0);
                    default:

                            printf("INVALID CHOICE !!!");

                        break;
                    }
            }

            while(1);

            return 0;
}