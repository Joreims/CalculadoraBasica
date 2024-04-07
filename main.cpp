#include<iostream>
#include<cstdio>
using namespace std;
void menu();   
void suma();   
void resta();
void multiplicacion();   
void division();      
int main(){ 
    // Password/user definite by the user and password1/user1 will be use to validate
    string password, password1, user, user1;
    // Attemps to validate the user and password before the program closes
    int intentos = 3;
    cout<<"Ingrese su nombre de usuario para registrarlo: "<<endl;
    cin >> user;
    cout<<"Ingrese su contrasenia para registrarla: "<<endl;
    cin >> password;
    do
    {
        cout<<"\t Bienvenido"<<endl;
        printf("Intentos restantes: %d", intentos);
        cout<<"\nIngrese su nombre de usuario"<<endl;
        cin >> user1;
        cout<<"Ingrese su contrasenia"<<endl;
        cin >> password1;
        if(user == user1 && password == password1)
        {
            cout<<"HOLA"<<endl;
            menu();
            intentos = 0;
        }else{
            intentos-= 1;
        }  
    }while (intentos > 0);
}
void menu()
{
    int option;
    printf("\t Bienvenido a su calculadora");
    printf("\nSeleccione una opcion: ");
    printf("\n1- Suma");
    printf("\n2- Resta");
    printf("\n3- Multiplicacion");
    printf("\n4- Division");
    printf("\n5- Salir\n");
    cin >> option;
    switch (option)
    {
    case 1:
        suma();
        break;
    case 2:
        resta();
        break;
    case 3:
        multiplicacion();
        break;
    case 4:
        division();
        break;
    case 5:
        break;
    default:
        printf("Opcion invalida. Intente de nuevo");
        menu();
        break;
    }
}
void suma(){
    float num1,num2, suma;
    printf("Ingrese el 1er numero: ");
    cin >> num1;
    printf("Ingrese el 2do numero: ");
    cin >> num2;
    suma = num1+num2;
    printf("La suma de los numeros es: %f", suma);
    cout<<"\n"<<endl;
    menu();
}
void resta(){
    float num1, num2, resta;
    printf("Ingrese el 1er numero: ");
    cin >> num1;
    printf("Ingrese el 2do numero: ");
    cin >> num2;
    resta = num1-num2;
    printf("La resta de los numeros es: %f", resta);
    cout<<"\n"<<endl;
    menu();
}
void multiplicacion(){
    double num1,num2, multi;
    printf("Ingrese el 1er numero: ");
    cin >> num1;
    printf("Ingrese el 2do numero: ");
    cin >> num2;
    multi = num1*num2;
    printf("La suma de los numeros es: %f", multi);
    cout<<"\n"<<endl;
    menu();
}
void division(){
    float num1,num2, division;
    printf("Ingrese el 1er numero: ");
    cin >> num1;
    printf("Ingrese el 2do numero: ");
    cin >> num2;
    division = num1/num2;
    printf("La suma de los numeros es: %f", division); 
    cout<<"\n"<<endl;
    menu();
}





