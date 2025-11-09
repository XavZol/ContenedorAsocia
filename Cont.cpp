// Contenedores Asociativos - Set y Multiset

#include<iostream>
#include<iterator>
#include<algorithm>
#include<set> //para set y multiset
using namespace std;

int main(){
    set<int> valores; //Creando un set (Conjunto
    
    //Insertamos elementos
    valores.insert(5);
    valores.insert(3);
    valores.insert(10);
    valores.insert(1);
    valores.insert(15);
    
    //Mostrar nuestro set en pantalla
    copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));
    cout<<endl;
    
    //Busqueda de un elemnento
    set<int>::iterator i = valores.find(3);
    
    if(i != valores.end()){
        cout<<"\nEl elemento "<<*i<<" si ha sido encontrado"<<endl;
    }
    else{
        cout<<"El elemento no ha sido encontrado"<<endl;
    }
    
    //Eliminar un elemento del set (conjunto)
    valores.erase(1);
    
    //Mostrar nuestro set en pantalla
    copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));
    cout<<endl;

    return 0;
}