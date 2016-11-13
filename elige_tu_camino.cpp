#include <iostream>
using namespace std;

int main(){

//Variable de eleccion
int opc;
//prologo de inicio de elegir tu propia aventura
cout << "Cuentan las leyendas si buscas en las montañas un" << endl;
cout << "una pequeña grieta en las capilla de las ceremonias un espiritu" << endl;
cout << "te concedera un deseo solo si superas sus pruebas" << endl;
cout << "entras a la pequeña estancia de la capilla y entras a la grieta" << endl;
cout << "al entrar aparece una bola de luz azul" << endl << endl;
//Primeras decisiones de la aventura
cout << ".-1 Tratas de Hablar con la bola de luz" << endl;
cout << ".-2 Pasas de la bola de luz y te adentras mas en la grieta" << endl;
cout << ".-3 Te regresas por donde has venido" << endl << endl;

cout << "elige opcion: ";
cin >> opc;

cout << endl << endl;

if (opc == 1) {
  cout << "La bola de luz responde con un pequeño tintineo y empieza" << endl;
  cout << "a hablar con voz baja y preguntarte que deseas" << endl;
  cout <<" -humano, estas dispuesto a probar tu valor?" << endl << endl;
//Decisiones opc == 1
    cout << ".-1 Claro que estoy dispuesto" << endl;
    cout << ".-2 Preguntas que pruebas" << endl;
    cout << ".-3 Te haces el sordo" << endl << endl;

    cout << "elige opcion: ";
    cin >> opc;
    //Inicio Decisiones opc == 1(interno)
    if(opc == 1){
      cout << "La bola de luz de elogia al ser tan decidido y te da tu premio" << endl;
      cout << "un huesito para perros" << endl;
    }
    else if(opc == 2){
      cout << "La bola de luz felicita tu precaucion, piensas las cosas" << endl;
      cout << "la bola penso que aceptarias instantaneamente" << endl;
    }
    else if(opc == 3){
      cout << "La bola se molesta y te mata" << endl << endl;
      cout << ".-FIN-." << endl;
    }
    else{
      cout << "esa opcion no es valida" << endl;
    }
    //Fin decisiones opc == 1(interno)
}
//Inicio de decisiones opc == 2(interno)
  else if (opc == 2){
    cout << "Te adentras mas y vas a lo desconocido la bola de luz empieza" << endl;
    cout << "a hacer ruidos extraños temes lo peor" << endl;
  }
  //Fin Decisiones opc == 2(interno)
  else if (opc == 3){
    cout << "Te das cuenta que no tienes suficiente valor para ser un" << endl;
    cout << "un aventurero y eres un gallina" << endl << endl;

    cout << ".-FIN-." << endl;
  }
  else{
    cout << "esa opcion no es valida" << endl;
  }





return 0;
}
