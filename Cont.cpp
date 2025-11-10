// Contenedores Asociativos - map y multimap

#include<iostream>
#include<iterator>
#include<algorithm>
#include<map> //map y multimap
using namespace std;

typedef pair<int,string> par;

int main(){
    map<int,string> valores; //creamos un mapa
    
    //Insertar elementos en el map
    valores.insert(par(5,"John 117"));
    valores.insert(par(2,"Javier"));
    valores.insert(par(1,"Ramon Ayala"));
    valores.insert(par(4,"Fany Linux"));

    //Mostrar el map en pantalla
    map<int,string>::iterator i;
    for(i=valores.begin();i != valores.end(); i++){
        cout<<"Clave: "<<i->first<<" | Valor: "<<i->second<<endl;
    }
    cout<<endl;
    
    //Buscar un elemento en el map
    i = valores.find(2);
    
    if(i != valores.end()){
    	cout<<"Valor encontrado "<<i->second<<endl;	
	}
	else{
		cout<<"Valor no encontrado"<<endl;
	}
	
	valores.erase(1);
	
	//Eliminar un elemento del map
	for(i=valores.begin();i != valores.end(); i++){
        cout<<"Clave: "<<i->first<<" | Valor: "<<i->second<<endl;
    }
    cout<<endl;
	
    
    return 0;
}