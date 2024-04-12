#include<ftxui/dom/elements.hpp>
#include<ftxui/screen/screen.hpp>
#include<iostream>
#include<string>

using namespace std;
using namespace ftxui;

int main(int argv, char const *argv[])
{
    const string texto = "Hola Mundo";
    Element textElement = text(texto);

    Element dibujo = hbox(textElement | border);

    Dimensions Alto = Dimension::Fixed(10);
    Dimensions Ancho = Dimension::Fixed(10);

Screen pantalla = Screen::create(Ancho,Alto);

Render(pantalla,dibujo);
pantalla.print();
cout<<endl;
    return 0;
}