#include <stdio.h>
struct employee {
    int empId;
    char name[50];
    char bloodGroup[50];
    int mobNo;
};

int main() {
    struct employee e1;

    printf ("enter the empId");
    scanf ("%d",&e1.empId);

    printf ("enter the name");
    scanf (" %[^\n]",e1.name);

    printf ("enter the blood group");
    scanf (" %[^\n]",e1.bloodGroup);

    printf ("enter the mob no");
    scanf("%d",&e1.mobNo);

    printf("\nemployee\n");

    printf ("emp id = %d\n",e1.empId);
    printf("name=%s\n",e1.name);
    printf ("blood group=%s\n",e1.bloodGroup);
    printf ("mob=%d\n",e1.mobNo);
        return 0;
}