#include <stdio.h>
#include <string.h>
int profit = 0;
void addMenu();
void addDesert();
char menuName[100][255];
int menuPrice[100];
char topping[100][255];
double calories[100];
int currentMenu = 0;
int main(){

    while(1)
    {
        for (int i = 0; i < 25; i++) puts("");        
        puts("Welcome to Opercooked");
        printf("Today Profit: $ %d\n", profit);
        puts("========================");
        puts("1. Add Dessert or Beverage");
        puts("2. View Cooking Process");
        puts("3. View Order History");
        puts("4. Order Dessert or Beverage");
        puts("5. Exit");
        int inputMenu;
        printf(">>");
        scanf ("%d", &inputMenu);
        for (int i = 0; i < 25; i++) puts("");
        if (inputMenu == 1) addMenu();        
    }

    return 0;
}

void addMenu(){

    while(1)
    {
        puts ("What do you want to add?");
        puts("1. Dessert");
        puts("2. Drink");
        printf ("Choose: ");
        int choose;
        scanf ("%d", &choose); getchar();
        if (choose == 1) addDesert(); break;
        for (int i = 0; i < 25; i++) puts("");        
    }


}

void addDesert(){
    char namaMenu[255], toppingMenu[255];
    int price;
    double calorie;
    while(1)
    {
    printf ("Input the name [at least 5 characters]: ");
    scanf ("%[^\n]", namaMenu); getchar();
    if (strlen(namaMenu) >= 5) break;
    }
    strcpy(menuName[currentMenu], namaMenu);

    while(1)
    {
        printf ("Input the price [10 - 500]: ");
        scanf ("%d", &price); getchar();
        if (price >= 10 && price <= 500) break;
    }
    menuPrice[currentMenu] = price;

    while(1)
    {
        printf ("Input the topping ['Caramel' | 'Honey' | 'Syrup'](Case Insensitive): ");
        scanf ("%s", toppingMenu); getchar();
        if(toppingMenu) break;
    }
    strcpy(topping[currentMenu], toppingMenu);

    while(1)
    {
        printf ("Insert calories [1.00 - 99.00]: ");
        scanf ("%lf", &calorie); getchar();
        if (calorie >= 1.00 && calorie <= 99.00) break;
    }
    calories[currentMenu] = calorie;
    printf("Successfully added a new menu!");
    getchar();
    currentMenu++;
}