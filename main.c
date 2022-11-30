#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
	int      ID;
	char     name[20];
	double   grade;
};

int main(int argc, char *argv[]) {
	
	struct student s1={2011194, "Gildonghong", 4.2};
	
	s1.ID=2011198;
	strcpy(s1.name,"SeoyeonBaek");
	s1.grade=4.0;
	
	printf("%d %s %f", s1.ID, s1.name, s1.grade);
	
	
	return 0;
}
