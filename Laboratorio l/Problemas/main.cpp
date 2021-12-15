#include <iostream>
using namespace std;

int main()
{
    int opcion=1;
    while (opcion!=0)
    {
    cout<<"seleccione una opcion"<<endl;
    cout<<"0. Salir"<<endl;
    cout<<"1. identificador de letras"<<endl;
    cout<<"2. Identificador de fecha"<<endl;
    cout<<"3. Identificdor de hora"<<endl;
    cout<<"4. Suma de pares en serie fibonacci"<<endl;
    cout<<"5. Suma de cifras de un numero elevadas a si mismas"<<endl;
    cout<<"6. Minimo comun multiplo con limite"<<endl;
    cout<<"7. Maximo factor primo de un numero"<<endl;
    cout<<"8. Maximo numero palindromo resultado de un producto de dos numeros de tres cifras"<<endl;
    cout<<"9. Serie de collatz mas larga para un grupo de numeros"<<endl;
    cout<<"10. Secuencia de numeros triangulares"<<endl;

    cin>>opcion;
    switch (opcion)
        {
        case 1:
        {
            char letra;

            cout<<"ingrese una letra: ";
            cin>>letra;

            if (letra=='a' or letra=='e' or letra=='i' or letra=='o' or letra=='u' or letra=='A' or letra=='E' or letra=='I' or letra=='O' or letra=='U' )
            {
                cout<<letra<< " es una vocal "<<endl;
            }
            else
            {
                if(letra=='b' or letra=='B' or letra=='C' or letra=='c' or letra=='D' or letra=='d' or letra=='F' or letra=='f' or letra=='g' or letra=='G' or letra=='H' or letra=='h' or letra=='j' or letra=='J' or letra=='K' or letra=='k' or letra=='L' or letra=='l' or letra=='m' or letra=='M' or letra=='n' or letra=='N' or letra=='p' or letra=='P' or letra=='q' or letra=='Q' or letra=='r' or letra=='R' or letra=='s' or letra=='S' or letra=='t' or letra=='T' or letra=='v' or letra=='V' or letra=='w' or letra=='W' or letra=='x' or letra=='X' or letra=='y' or letra=='Y' or letra=='z' or letra == 'Z')
                {
                 cout<<letra<< " es una consonante "<<endl;
                }
                else
                {
                    cout<<"no es una letra"<<endl;
                }
            }

        }
            break;

        case 2:
        {
            int mes;
            cout<<"ingrese un mes: ";
            cin>>mes;

            if(mes>= 1 and mes<=12)
            {
                int dia;
                cout<<"ingrese un dia: ";
                cin>>dia;

                if(dia>=1 and dia<=31)
                {
                     if(dia<=29)
                     {
                         if(dia==29 and mes==2)
                         {
                             cout<<dia<<"/"<<mes<<" es valida en bisiesto"<<endl;
                         }
                         else
                         {
                             cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
                         }
                     }
                     else
                     {
                         if (dia==31)
                         {
                             if(mes==2 or mes==4 or mes==6 or mes==9 or mes==11)
                             {
                                 cout<<dia<<"/"<<mes<<" es una fecha invalida"<<endl;
                             }
                             else
                             {
                                 cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
                             }
                         }
                         else
                         {
                             if(mes==2)
                             {
                                 cout<<dia<<"/"<<mes<<" es una fecha invalida"<<endl;
                             }
                             else
                             {
                                  cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
                             }
                         }
                     }
                }
                else
                {
                    cout<<dia<<" es un dia invalido"<<endl;
                }
            }

            else
            {
                cout<<mes<<" es un mes invalido"<<endl;
            }

        }
            break;

        case 3:
        {
            long int num1;
            long int num2;
            int minutosnum1=0;
            int horanum1=0;
            int minutosnum2=0;
            int horanum2=0;
            int horatotal=0;
            int minutostotales=0;
            cout<<"ingrese un primer numero: "<<endl;
            cin>>num1;

            minutosnum1=num1%100;
            horanum1=num1/100;

            while(minutosnum1>59 or horanum1>23 or minutosnum1<0 or horanum1<1)
            {
                cout<<num1<<" en un tiempo invalido "<<endl;
                num1=0;
                cout<<"ingrese un numero valido"<<endl;
                cin>>num1;
                minutosnum1=num1%100;
                horanum1=num1/100;
            }

            cout<<"ingrese un segundo numero: "<<endl;
            cin>>num2;
            minutosnum2=num2%100;
            horanum2=num2/100;

            while(minutosnum2>59 or horanum2>23 or minutosnum2<0 or horanum2<0)
            {
                cout<<num2<<" en un tiempo invalido "<<endl;
                num2=0;
                cout<<"ingrese un numero valido"<<endl;
                cin>>num2;
                minutosnum2=num2%100;
                horanum2=num2/100;
            }

            horatotal=horanum1+horanum2;
            minutostotales=minutosnum1+minutosnum2;


            if(minutostotales>59)
            {
                minutostotales=minutostotales-60;
                horatotal=horatotal+1;
            }
            if(horatotal>23)
            {
                horatotal=horatotal-24;
            }

            if(minutostotales<10)
            {
                cout<<"La hora es "<<horatotal<<":0"<<minutostotales<<endl;
            }

            else
            {
                cout<<"La hora es "<<horatotal<<":"<<minutostotales<<endl;
            }

        }
            break;

        case 4:
        {
            int aux=1;
            int fib=0;
            int suma=0;
            int lim;
            cout<<"ingerse un numero para la serie de fibonacci: "<<endl;
            cin>>lim;


            if(lim>0)
            {

                for(int num=1;num<lim;num++)
                {
                    if(fib<lim)
                    {
                        aux += fib;
                        fib = aux - fib;
                        if(fib%2==0)
                        {
                            suma+=fib;
                        }
                    }
                    else
                    {
                        num+=lim;
                    }
                }
                cout<<"el resultado de la suma es: "<<suma<<endl;
            }
            else
            {
              cout << "El numero debe ser mayor a cero" << endl;
            }
        }
            break;

        case 5:
        {
            int cifras=0;
            int n=0;
            int resultado=1;
            int total=0;
            int aux=0;
            cout<<"Ingrese un numero: "<<endl;
            cin>>n;

            while(n>0)
            {
                 cifras=n%10;
                 n=n/10;
                 for(int i=1;i<=cifras;i++)
                 {
                     aux=cifras * resultado;
                     resultado=aux;

                 }
                 total=total + resultado;
                 aux=0;
                 resultado=1;
            }
            cout<<"la suma es: "<<total<<endl;

        }
           break;

        case 6:
        {
               long n;
               long maximo;
               int j;
               int contador=0;
               cout<<"ingrese el numero limite: "<<endl;
               cin>>n;

               while(n<0)
               {
                   cout<<"recuerde que debe ingresar numeros positivos"<<endl;
                   cin>>n;
               }

               maximo=n;
               while(contador!=n)
               {
                   for(j=n;j>0;j--)
                   {
                       if(maximo%j==0)
                       {
                           contador=contador+1;
                       }
                       else
                       {
                           maximo=maximo+1;
                           contador=0;
                           j=0;
                       }
                   }
               }
               cout<<"mcm es: "<<maximo<<endl;
        }
            break;

        case 7:
        {
            int n;
            int i;
            int j=2;
            int mayor=0;
            int num;
            int contador=0;
            cout<<"Ingrese el numero: "<<endl;
            cin>>num;

            n = 2;


            for(i=n;i<=num/2;i++)
            {
                if(num%i==0)
                {
                    //cout<<i<< " es factor";

                        for(j=i;j>0;j--)
                        {
                            if(i%j==0)
                            {
                                contador=contador+1;

                            }
                         }
                        if(contador==2)
                        {
                            //cout<<" y es primo"<<endl;
                            if(mayor<i)
                            {
                                mayor=i;
                            }
                        }
                        contador=0;

                }

                else
                {
                    //cout<<i<<" no es factor";
                    for(j=i;j>0;j--)
                    {
                        if(i%j==0)
                        {
                            contador=contador + 1;

                        }
                     }
                    contador=0;
                }
            }

            cout<<"el mayor factor primo de "<<num<<" es "<<mayor<<endl;

        }
            break;

        case 8:
        {
            int num;
            int num2;
            int res=0;
            int factor1 =0;
            int factor2 =0;
            int n=0;
            int mayor=0;
            int i=0;
            int palindromo=0;
            int cifras[6];

            for(num=100;num<=999;num++)
            {
                for(num2=100;num2<=999;num2++)
                {
                    res=num*num2;
                    n=res;
                    while (n>0)
                    {
                        cifras[i]=n%10;
                        n=n/10;
                        i++;
                    }

                    if(cifras[5]==0)
                    {
                        if(cifras[0]==cifras[4] and cifras[1]==cifras[3])
                        {
                            palindromo=res;

                            if(mayor<palindromo)
                            {
                                mayor=palindromo;
                                factor1=num;
                                factor2=num2;
                            }
                        }
                    }

                    else
                    {
                        if(cifras[0]==cifras[5] and cifras[1]==cifras[4]  and cifras[2] == cifras[3])
                        {
                            palindromo=res;
                            if(mayor<palindromo)
                            {
                                mayor=palindromo;
                                factor1=num;
                                factor2=num2;
                            }


                        }
                    }
                    i=0;
                }

            }
            cout<<"el palindromo mas grande es "<<mayor<<" producto de: "<<factor1 <<" y "<<factor2<<endl;
        }
            break;

        case 9:
            {
                int num;
                int n=0;
                int aux=0;
                int m=0;
                int res=0;
                int iteracionMayor=0;
                int contador=1;
                cout<<"ingrese un numero limite: "<<endl;
                cin>>num;

                while(num<=0)
                {
                   cout<<"el numero es invalido, ingreselo de nuevo: "<<endl;
                   cin>>num;
                }

                for(n=num;n>=1;n--)
                {
                    res=n;
                    while(res!=1)
                    {
                        aux=res%2;
                        if(aux==0)
                        {
                            res=res/2;
                            contador=contador+1;
                        }

                        else
                        {
                            res=(3*res)+1;
                            contador=contador+1;
                        }
                    }


                    if(iteracionMayor<contador)
                    {
                        iteracionMayor=contador;
                        m=n;
                    }

                    contador=0;
                }
            cout<<"la serie mas larga es con la semilla "<<m<<" teniendo "<<iteracionMayor+1<<" terminos"<<endl;
        }
           break;

        case 10:
        {
           int k;
           int n=0;
           int divisores=0;
           int aux=0;
           int total=0;
           int divisoresTotales=0;

           cout<<"ingrese un numero: "<<endl;
           cin>>k;
           while(k<1)
           {
               cout<<"numero invalido, recuerde ingresar un numero mayor que cero"<<endl;
               cin>>k;
           }

               for(aux=k;aux!=0;aux++)
               {
                   n=aux+1;
                   n=(n*aux)/2;
                   for(divisores=n;divisores>0;divisores--)
                   {
                       if(n%divisores==0)
                       {
                           total=total+1;
                       }
                   }

                   if (total>k)
                   {
                       aux=-1;
                       divisoresTotales=total;
                   }
                   total=0;
               }
               cout<<"El numero es: "<<n<<" que tiene "<<divisoresTotales<<" divisores"<<endl;
         }
            break;

    default:
            if(opcion !=0)
            {
            cout<<"opcion invalida"<<endl;
            }

        return 0;
        }
    }
}
