#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

// initializing functions
void add_StdData(); 
void update_StdData();
void calculate_final_grades();
void  view_final_grade_report();


struct StdData {
    char name[50], Lname[50];
    int id;
    int Score1;
    int Score2;
    int ProjectScore;
    float final_grade;
};

int num_StdDatas = 0;
struct StdData *StdDatas;



int main() {
    int UserOption = 0;
     printf("1. Add a new StdData\n");
    printf("2. Update an existing StdData's information\n");
    printf("3. Calculate final grades\n");
    printf("4. View the final grade report\n");
    printf("5. Exit the program\n");
    scanf("%d",&UserOption);
    do
    {
        switch (UserOption)
        {
        case 1:
            add_StdData();
            main();
            break;
        case 2:
            update_StdData();
            main();
            break;
        case 3:
            calculate_final_grades();
            main();
            break;
        case 4:
            view_final_grade_report();
            main();
            break;
        case 5:
            printf("Thank you");
            break;
        }
    } while (UserOption != 5); 
  return 0;      
}

void add_StdData() {
    num_StdDatas++;
    StdDatas = realloc(StdDatas, num_StdDatas * sizeof(struct StdData));
    struct StdData new_StdData;
    printf("Enter the name of the StdData: ");
    scanf("%s %s", new_StdData.name, new_StdData.Lname);
    printf("Enter the ID of the StdData: ");
    scanf("%d", &new_StdData.id);
    new_StdData.Score1 = -1;
    new_StdData.Score2 = -1;
    new_StdData.ProjectScore = -1;
    new_StdData.final_grade = -1;
    StdDatas[num_StdDatas-1] = new_StdData;
    printf("StdData added successfully!\n");
    
}

void update_StdData() {
    int id;
    printf("Enter the ID of the StdData to update: ");
    scanf("%d", &id);
    for (int i = 0; i < num_StdDatas; i++) {
        if (StdDatas[i].id == id) {
            printf("Enter the new name of the StdData: ");
            scanf("%s %s", StdDatas[i].name, StdDatas[i].Lname);
            printf("Enter the new ID of the StdData: ");
            scanf("%d", &StdDatas[i].id);
            printf("Enter the new exam 1 grade of the StdData (-1 to skip): ");
            scanf("%d", &StdDatas[i].Score1);
            printf("Enter the new exam 2 grade of the StdData (-1 to skip): ");
            scanf("%d", &StdDatas[i].Score2);
            printf("Enter the new ProjectScore grade of the StdData (-1 to skip): ");
            scanf("%d", &StdDatas[i].ProjectScore);
            StdDatas[i].final_grade = -1;
            printf("StdData updated successfully!\n");
            return;
        }
    }
    printf("StdData with ID %d not found.\n", id); 
}

void calculate_final_grades() {
    for (int i = 0; i < num_StdDatas; i++) {
        if (StdDatas[i].Score1 >= 0 && StdDatas[i].Score2 >= 0 && StdDatas[i].ProjectScore >= 0) {
            StdDatas[i].final_grade = 0.3 * StdDatas[i].Score1 + 0.3 * StdDatas[i].Score2 + 0.4 * StdDatas[i].ProjectScore;
        }
    }
    printf("Final grades calculated successfully!\n");
}

void view_final_grade_report() {
 
    for (int i = 0; i < num_StdDatas-1; i++) {
        for (int j = 0; j < num_StdDatas-i-1; j++) {
            if (StdDatas[j].id > StdDatas[j+1].id) {
                struct StdData temp = StdDatas[j];
                StdDatas[j] = StdDatas[j+1];
                StdDatas[j+1] = temp;
            }
        }
    }
    printf("StdData ID\tName\t\t    Final Grade\n");
    for (int i = 0; i < num_StdDatas; i++) {
        printf("%d\t\t%s %s\t\t", StdDatas[i].id, StdDatas[i].name, StdDatas->Lname);
        if (StdDatas[i].final_grade >= 0) {
            printf("     %.2f", StdDatas[i].final_grade);
        } else {
            printf("N/A");
        }
        printf("\n");
    }
}