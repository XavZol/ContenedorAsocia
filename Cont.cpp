// Contenedores Asociativos - Set y Multiset

#include<iostream>
#include<iterator>
#include<algorithm>
#include<set> //para set y multiset
using namespace std;

int main(){
    multiset<int> valores;
    
    //Insertamos elementos al multiset (multiconjunto)
    valores.insert(10);
    valores.insert(2);
    valores.insert(5);
    valores.insert(20);
    valores.insert(3);
    
    //Mostrar en pantall
    copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));
    cout<<endl;
    
    //Insertar valores duplicados
    valores.insert(10);
    valores.insert(3);
    valores.insert(3);
    valores.insert(3);
    valores.insert(3);
    
    
    //Mostrar en pantall
    copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));
    cout<<endl;
    
    //Buscar un elememto en el multiset
    multiset<int>::iterator i = valores.find(2);

    if(i != valores.end()){
        cout<<"\nEl elemento "<<*i<<" si ha sido encontrado "<<endl;
    }
    else{
        cout<<"\nEl elemento no ha sido encontrado "<<endl;
    }

    //Contar cuantas veces aparece el numero 3
    cout<<"El numero 3 aparece "<<valores.count(3)
    <<" veces en el multiset"<<endl;
    
    //Eliminar un elemento del multiset
    valores.erase(3);
    
    //Mostrar en pantall
    copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));
    cout<<endl;

    return 0;
}