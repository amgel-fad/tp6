    #include <iostream>
    #include <string>
     using namespace std;
    
        int main()
{
 int edad1, edad2;
string nombre1, nombre2;



     cout <<"Ingrese primer nombre:";
      getline(cin, nombre1);
      cout<<"Ingrese segundo nombre: ";
      getline(cin, nombre2);
      /* getline: es una función miembro de cin que
	   lee una línea completa de entrada hasta que se 
	   encuentra un salto de línea ('\n') o hasta que 
	   se haya leído el número máximo de caracteres 
	   especificado.*/
	   cout <<"Ingrese edad de "<< nombre1<<":";
	   cin >>edad1;
	   cout<<"Ingrese edad de "<< nombre2<<":";
	   cin>>edad2;
	   
	   cout<<"\nNombre de la primera persona: "<<nombre1<<endl;
	   cout<<"Nombre de la segunda persona: "<<nombre2<<endl;
	   
	   cout<<"Edad de la primera persona: "<<edad1<<endl;
	   cout<<"Edad de la segunda persona: "<<edad2<<endl;
	   
	   if(edad1>=18 && edad2>=18){
	   		cout<<"Ambos son mayores de edad"<<endl;
	   }
	   else if(edad1<18 && edad2<18){
	   		cout<<"Ambos son menores de edad"<<endl;
	   }
	   else if(edad1>=18 && edad2<18){
	   		cout<<nombre1<<" es mayor de edad"<<endl;
	   		cout<<nombre2<<" es menor de edad"<<endl;
	   }
       else if(edad1<18 && edad2>=18){
	   		cout<<nombre1<<" es menor de edad"<<endl;
	   		cout<<nombre2<<" es mayor de edad"<<endl;
	   }
	  	  
return 0;}
