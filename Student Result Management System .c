#include <stdio.h>
#include <string.h>

#define MAX_SUBJECTS 5

// Function to calculate total marks
int calculateTotal(int marks[], int subjects)
{
    int total = 0;
    for (int i = 0; i < subjects; i++)
    {
        total += marks[i];
    }
    return total;
}

// Function to calculate percentage
float calculatePercen tage(int total, int subjects)
{
    return (float)total / subjects;
}

// Function to assign grade
char calculateGrade(float percentage)
{
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 80)
        return 'B';
    else if (percentage >= 70)
        return 'C';
    else if (percentage >= 60)
        return 'D';
    else if (percentage >= 50)
        return 'E';
    else
        return 'F';
}

int main()
{
    int n, subjects;
    
    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter number of subjects (3-5): ");
    scanf("%d", &subjects);

    if (subjects < 3 || subjects > 5)
    {
        printf("Invalid number of subjects!\n");
        return 0;
    }

    char name[n][50];
    int marks[n][MAX_SUBJECTS];
    int total[n];
    float percentage[n];
    char grade[n];

    // Input student details
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter name of student %d: ", i + 1);
        scanf(" %[^\n]", name[i]);

        printf("Enter marks in %d subjects:\n", subjects);

        for (int j = 0; j < subjects; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }

        total[i] = calculateTotal(marks[i], subjects);
        percentage[i] = calculatePercentage(total[i], subjects);
        grade[i] = calculateGrade(percentage[i]);
    }

    // Display result
    printf("\n\n========== STUDENT RESULTS ==========\n");

    printf("%-20s %-10s %-15s %-10s\n",
           "Name", "Total", "Percentage", "Grade");

    printf("-----------------------------------------------\n");

    for (int i = 0; i < n; i++)
    {
        printf("%-20s %-10d %-15.2f %-10c\n",
               name[i], total[i], percentage[i], grade[i]);
    }

    // Find student with highest percentage
    int highest = 0;

    for (int i = 1; i < n; i++)
    {
        if (percentage[i] > percentage[highest])
        {
            highest = i;
        }
    }

    printf("\n========== TOPPER ==========\n");
    printf("Student Name : %s\n", name[highest]);
    printf("Total Marks  : %d\n", total[highest]);
    printf("Percentage   : %.2f%%\n", percentage[highest]);
    printf("Grade        : %c\n", grade[highest]);

    return 0;
}