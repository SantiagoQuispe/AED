/* EjemploTipos.cpp
 * Pruebas asserts con diversos tipos de datos
 * Santiago Agustín Quispe
 * 08/05/2022
 */

#include<cassert>
#include<string>
using namespace std::literals;

int main()
{
    //Asserts para datos de tipo booleano
    assert(true);
    assert(false==false);
    assert(true!=false);
    assert(not false);
    assert(7>3 == 4 < 8);
    assert((35 == 35) and (35<40));
    assert(false or true);
    assert(true and true);
    assert(false or true and false==false);
    //Asserts para datos de tipo double (números decimales cuya precisión es variable.)
    assert(3.001==2.0+1.001);
    assert(10.5==21.0/2.0);
    assert(4.0==2.8+1.2);
    assert(2==1+1.0);
    //Asserts para datos de tipo string (cadena de caracteres)
    assert("Hola, mundo!"s=="Hola,"s+" mundo!"s);
    assert("String (cadena)"s.length()==15); //Longitud del string (texto)
    assert("Día 1"s.length() == 6); //Caracter con tilde cuenta como 2 caracteres.
    //Asserts para datos de tipo int (números enteros desde -2,147,483,648 hasta 2,147,483,647)
    assert(-4 == -4);
    assert(17+4 == 21);
    assert(-78 == 156/(-2));
    //Asserts para datos de tipo char (caracter almacenado en 1 byte)
    assert("abc" == "abc");
    assert("4568" == "4568");
    assert("re78" == "re78");
    //Asserts para datos de tipo unsigned (números naturales desde 0 hasta 65535)
    assert(4568 == 4568);
    assert(787 >782);
    assert(2574 == (2000 + 500 + 70 + 4));
}
