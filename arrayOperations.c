#include<stdio.h>
#include<stdlib.h>

int i, val, pos, n;
int a[20];

void create();
void display();
void insert();
void delt();

int main() {
  int choice;

  while(1) {
    printf("\n MENU \n");
    printf("\n1. CREATE \n");
    printf("\n2. DISPLAY \n");
    printf("\n3. INSERT \n");
    printf("\n4. DELETE \n");
    printf("\n5. EXIT \n");

    printf("enter the choice : ");
    scanf("%d", &choice);

    switch(choice) {
      case 1:
      create();
      break;
      case 2:
      display();
      break;
      case 3:
      insert();
      break;
      case 4:
      delt();
      break;
      case 5:
      exit(0);
      default:
      printf("Please select valid option");
    }
  }
  return 0;
}

void create() {
  printf("Enter the size of the array element : ");
  scanf("%d",&n);
  printf("Enter the array elements : ");
  for ( i = 0; i < n; i++) {
    scanf("%d",&a[i]);
  }
}
void display() {
  printf("Array elements are : ");
  for (i = 0; i < n; i++) {
    printf("%d\n", a[i]);
  }
}
void insert() {
  printf("Enter the position of the new element : ");
  scanf("%d",&pos);
  if(pos >= n + 1){
    printf("Insertion not possible");
  }
  else{
    printf("Enter the element to be inserted : ");
    scanf("%d",&val);
    for (i = n - 1; i >= pos; i--) {
      a[i + 1] = a[i];
    }
    a[pos] = val;
    n++;
  }
}
void delt() {
  printf("Enter the position of the element to be deleted : ");
  scanf("%d",&pos);
  if(pos >= n + 1){
    printf("Deletion can not be done!");
  }
  else{
    val = a[pos];
    for (i = pos; i < n - 1; i++) {
      a[i] = a[i + 1];
    }
    n--;
    printf("Deleted element is : %d\n",val);
  }
}