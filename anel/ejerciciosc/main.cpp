#include <iostream>

using namespace std;

//1

/*int main()
{
    float n, k=1000, milla=1.609;
    cout <<"ingrese la cantidad de millas que desea convertir:";
    cin>>n;
    cout<<n<<" millas equivale a :"<<n*milla<<" kilometros ";

    return 0;
}*/

//2

/*int main()
{
    cout<<"F°"<<"    "<<"C°"<<endl;
    float f,c;
    int a=0;
    for(f=0;f<=300;f=f+20){
        //cout<<f<<"     "<<c<<endl;

        c=(f-32)*5/9;
        cout<<f<<"    "<< c<<endl;
    }
    return 0;
}*/

//3

/*int main()
{

    cout<<"----Verificar si el numero es par o impar----"<<endl;
    int n;
    cout<<"ingrese un numero: ";
    cin>>n;

    while(n!=-1){
        if(n%2==0){
            cout<<"es par"<<endl;
        }
        else{
            cout<<"es impar"<<endl;
        }
        cout<<"ingrese un numero: ";
        cin>>n;
    }
    return 0;
}*/

//4

/*int main()
{
    int base,exponente;
    cout<< "ingrese la base: "; cin>> base;
    cout<< "ingrese la exponente: "; cin>> exponente;
    int r=1;
    for (int i = 1 ; i <= exponente ; ++i)
      r *= base;
    cout << base << "^" << exponente << " = " << r << endl;
    return 0;


}*/

//5

/*int main()
{
    int num;
    cout <<"ingrese un numero 0 al 9: "<<endl;
    cin>> num;

    while(num!=-1){
        switch(num){

        case 0:
            cout<<"cero"<<endl;
            break;
        case 1:
            cout<<"uno"<<endl;
            break;
        case 2:
            cout<<"dos"<<endl;
            break;
        case 3:
            cout<<"tres"<<endl;
            break;
        case 4:
            cout<<"cuatro"<<endl;
            break;
        case 5:
            cout<<"cinco"<<endl;
            break;
        case 6:
            cout<<"seis"<<endl;
            break;
        case 7:
            cout<<"siete"<<endl;
            break;
        case 8:
            cout<<"ocho"<<endl;
            break;
        case 9:
            cout<<"nueve"<<endl;
            break;
        default:
            cout<<"numero no permitido"<<endl;
            break;

        }
        cout<<"ingrese un numero del 0 al 9 : ";cin>>num;

    }
    return 0;
}*/

//7
//void intercambio(int& a,int& b);
/*int main()

{
    int a,b;
    cout<<"ingrese un numero a: "<<endl;
    cin>>a;
    cout<<"ingrese un numero b: "<<endl;
    cin>>b;
    intercambio(a,b);

    cout <<"ahora a es: "<< a <<endl;
    cout << "ahora b es: "<<b <<endl;

    return 0;



}
void intercambio(int& a,int& b){
    int t=a;cout<< "ingrese la base: "; cin>> base;
    a=b;
    b=t;


}*/
//8
//void interPtr(int *aptr,int *bptr);
/*int main()
{
    int a=3,b=4;
    interPtr(&a,&b);
    cout <<"ahora a es: "<< a <<endl;
    cout << "ahora b es: "<<b <<endl;

    return 0;
}
void interPtr(int *aptr,int *bptr)
{
    int t=*aptr;
    *aptr=*bptr;
    *bptr=t;


}*/

//9

/*
void insertionSort(int arr[], int length) {
      int i, j, key;
      for (j = 1; j < length; j++) {
            i = j;
            while (i > 0 && arr[i - 1] > arr[i]) {
                  key = arr[i];
                  arr[i] = arr[i - 1];
                  arr[i - 1] = key;
                  i=i-1;
            }
      }
}*/

//10

//15
