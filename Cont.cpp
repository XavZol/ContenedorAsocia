// Contenedores Asociativos - map y multimap

#include<iostream>
#include<iterator>
#include<algorithm>
#include<map> 
using namespace std;

typedef pair<int,string> par;

int main(){
    multimap<int,string> valores;

    //Insertar valores
    valores.insert(par(3,"Estefany"));
    valores.insert(par(1,"Luis"));
    valores.insert(par(5,"Alejandro"));
    valores.insert(par(2,"Maria"));

    //Insertamos pares con claves repetidas 
    valores.insert(par(1,"Carla"));
    valores.insert(par(5,"Paola"));
    valores.insert(par(5,"Fernando"));

    //Mostrar en pantalla el multimap
    multimap<int,string>::iterator i;
    for(i=valores.begin(); i!=valores.end();i++){
        cout<<"Clave: "<<i->first<<" | Valor: "<<i->second<<endl;
    }
    cout<<endl;

    //Conteo de las claves
    int clave = 1;
    cout<<"Conteo de la clave "<<clave<<": "<<valores.count(clave)<<endl;
    for(i=valores.lower_bound(clave);i!=valores.upper_bound(clave);i++){
        cout<<i->second<<" | ";
 
    }
    return 0;
}