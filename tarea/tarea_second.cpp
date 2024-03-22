#include<iostream>
#include<iomanip>
#include<array>


using namespace std;
void imprimirArreglo( const array<array<int,3>,2> );
int main()

{
  array<array<int,3>,2> arreglo1= {{
                        {1, 2, 2},{4, 2, 6} 
                                  }} ;
  array<array<int,3>,2> arreglo2 { 1, 2, 3, 2, 2, 6 } ;
  array<array<int,3>,2> arreglo3 {{ {1, 2}, {2} } } ;
  cout << "Los valores en arreglo1 por fila:" << endl;
  imprimirArreglo( arreglo1 );
  cout << "\nLos valores en arreglo2 por fila:" << endl;
  imprimirArreglo( arreglo2 );
  cout << "\nLos valores en arreglo3 por fila:" << endl;
  imprimirArreglo( arreglo3 );

  return 0;
}

void imprimirArreglo( const array<array<int,3>,2>arreglo  )
{
  // itera a través de las filas del arreglo
  for ( int i=0;i<2;i++){
  // itera a través de las columnas de la fila actual
   for ( int j=0;j<3;j++ )
     cout << arreglo[i][j] << ' ';
   cout << endl; // empieza nueva línea de salida
  }
}
