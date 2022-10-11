//---------------------------------------------------------
// Dato de entrada: largo, ancho (double)
// Dato de Salida : perimetro, area (double)
//------------------------------------------------------------

#include "CRectangulo.h"

int main()
{
  CRectangulo  r1(20,10);
  tnumero l,a;

  cout << "Creando el objeto r1\n";
  cout << "Perimetro : " << r1.perimetro() << "\n";
  cout << "Area      : "  << r1.area() << "\n";
  //---- creamos ahora el segundo objeto
  cout << "\nObjeto r2\n";
  cout << "Largo : ";
  cin >> l;
  cout << "Ancho : ";
  cin >> a;
  CRectangulo r2(l,a);
  cout << "Perimetro : " << r2.perimetro() << "\n";
  cout << "Area      : " << r2.area() << "\n";

  //------ ahora creamos r3 usando el constructos por defecto
  CRectangulo r3;
  cout << "Datos para el objeto r3\n";
  cout << "Largo : ";
  cin >> l;
  cout << "Ancho : ";
  cin >> a;
  r3.setLargo(l);
  r3.setAncho(a);
  cout << "Perimetro : " << r3.perimetro() << "\n";
  cout << "Area      : " << r3.area() << "\n";

  //-- ahora modificamos el estado del objeto r1
  //-- el largo debe valer 20 unidades mas
  //-- el atributo ancho debe valer 5 unidades mas
  //-- y realizara el calculo nuevamente
  cout << "\ncambiando el estado del objeto r1\n";
  r1.setLargo(r1.getLargo() +20);
  r1.setAncho(r1.getAncho() + 5);
  cout << "Perimetro :  " << r1.perimetro() << "\n";
  cout << "Area      :  " << r1.area() << "\n";

  return 0;
}
