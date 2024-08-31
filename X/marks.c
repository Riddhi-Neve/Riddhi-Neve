#include <stdio.h>
int main (){
int num=0;


printf("Enter the marks");
scanf("%d",&num);

if (num<=100 && num >=80){
printf("Grade A\n");
}
else if (num<=79 && num >=70){
printf("Grade B\n");
}
else if (num<=69 && num >=50){
printf("Grade i\n");
}
else {
printf(" Sorry You are Fail\n ");
}

}
