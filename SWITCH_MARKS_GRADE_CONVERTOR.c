// WRITE A PROGRAME TO FIND GRADE OF A STUDENT GIVEN HIS MARKS IN BELOW :-
// 90 - 100 --> A
// 80 - 90 --> B
// 70 - 80 --> C
// 60 - 70 --> D
// < 70 --> DEFAULT E
// WE CAN WRITE CASE'S DECENDING OR ASENDING ORDER
// WE WRITE CASE'S IN DECENDING ORDER --> CASE 10 : CASE 9 : CASE 8 : CASE 7 :
// SWITCH( MARKS / 10 ) --> WHEN MARKS ARE 100 SO 100 / 10 = 10 --> WE CAN GIVE CASE 10 AND CASE 9 BOTH ARE SAME STATEMENT 
// SWITCH( MARKS / 10 ) --> WHEN MARKS ARE 100 SO 100 / 10 = 10 --> THIS IS 'A' GRADE
// SWITCH( MARKS / 10 ) --> WHEN MARKS ARE 90 SO 90 / 10 = 9 --> THIS IS 'A' GRADE
// SWITCH( MARKS / 10 ) --> WHEN MARKS ARE 80 SO 80 / 10 = 8 --> THIS IS 'B' GRADE
// SWITCH( MARKS / 10 ) --> WHEN MARKS ARE 70 SO 70 / 10 = 7 --> THIS IS 'C' GRADE
//  DEFAULT --> WHEN MARKS ARE LESS THEN 60 --> THIS IS 'E' GRADE

#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks (1-100) \n");
    scanf("%d", &marks);
    switch (marks / 10)
    {
    case 10:
    case 9:
        printf("Your grade is a");
        break;
    case 8:
        printf("Your grade is b");
        break;
    case 7:
        printf("Your grade is c");
        break;
    case 6:
        printf("Your grade is d");
        break;
    default:
        printf("Your grade is e");
        break;
    }

    return 0;
}