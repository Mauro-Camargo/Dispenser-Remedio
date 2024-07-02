#define set 0
#define mais 1
#define menos 6

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int hora = 0, minuto = 0, hora1 = 0, minuto1 = 0;
int hora2 = 0, minuto2 = 0, hora3 = 0, minuto3 = 0;
int hora4 = 0, minuto4 = 0;
int remedios[4];
int qtdremedio;


void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
    
  //configurando o botão
  pinMode(set,INPUT_PULLUP);
  pinMode(mais,INPUT_PULLUP);
  pinMode(menos,INPUT_PULLUP);
  
  // Print a message to the LCD.
   while(digitalRead(set)){
  
 	 lcd.setCursor(0,0);
  	lcd.print("Pressione para");
     lcd.setCursor(0,1);
  	lcd.print("continuar");
  }
  
  lcd.clear();
  //Função para hora

  
}

void loop() {

           
  while (digitalRead(set)){
    
  if (!digitalRead(mais)){
    
    qtdremedio++;
    delay(300);
    lcd.clear();
    if (qtdremedio>4) {
      qtdremedio = 1; }
 }
   
  if (!digitalRead(menos)){
    
    qtdremedio--;
    delay(300);
    lcd.clear();
    if (qtdremedio<1) {
      qtdremedio = 4; }
    
    
 }  
  lcd.setCursor(0,0);
   lcd.print("Quantos remedios?");
  lcd.setCursor(0,1);
  lcd.print(qtdremedio);
 
  }
  

  if (qtdremedio != 0) {
    	lcd.clear();
    
   while (digitalRead(set)){ 
  	  
     switch (qtdremedio) {

// Configurando o case 1
        
        case 1: 
       	lcd.setCursor(0,0);
        lcd.print("Insira1horario");

       while (digitalRead(set)){        
      
  if (!digitalRead(mais)){
    
    hora1++;
    delay(300);
    lcd.clear();
    
          if (hora1>23) {
      hora1 = 0; }
 }
     
  if (!digitalRead(menos)){
    
    hora1--;
    delay(300);
    lcd.clear();
	 minuto1 = minuto1*10;   
   
    if (hora1<0) {
      hora1 = 23; }
 
  }  
  
  lcd.setCursor(0,0);
  lcd.print("Insira1horario");   
  lcd.setCursor(2,1);
  lcd.print("h");
  lcd.setCursor(3,1);
  lcd.print(":");
  lcd.setCursor(0,1);
  lcd.print(hora1);
  lcd.setCursor(7,1);
  lcd.print("m");  


}     
  
// Configurando os minutos

       if(hora1 > -1){  
    

delay(200);
lcd.clear();  

         while (digitalRead(set)){
    
  if (!digitalRead(mais)){
   
    minuto1+=10;
    delay(300);
    lcd.clear(); 
    
   
    if (minuto1>50) {
      minuto1 = 0;
    
    }
     
 }
   
  if (!digitalRead(menos)){
    
   
    minuto1-=10;
    delay(300);
    lcd.clear();
    
    if (minuto1<0) {    
      minuto1 = 50;
     
    }

     
 }  
  
  lcd.setCursor(0,0);
  lcd.print("Insira1horario");   
  lcd.setCursor(2,1);
  lcd.print("h");
  lcd.setCursor(3,1);
  lcd.print(":");
  lcd.setCursor(0,1);
  lcd.print(hora1);
  lcd.setCursor(5,1);

  lcd.print(minuto1);
  lcd.setCursor(7,1);
  lcd.print("m");
		}	
}      
        
       break; 

// Configurando o case 2

		case 2: 
       	
       
       
// Configurando primeiro horário de 2 horários.       
       
       while (digitalRead(set)) {        
      
  if (!digitalRead(mais)){
    
    hora1++;
    delay(300);
    lcd.clear();
    
          if (hora1>23) {
      hora1 = 0; }
 }
     
  if (!digitalRead(menos)){
    
    hora1--;
    delay(300);
    lcd.clear();
   
    if (hora1<0) {
      hora1 = 23; }
 
  } 
         
  lcd.setCursor(0,0);
  lcd.print("Insira1de2");   
  lcd.setCursor(2,1);
  lcd.print("h");
  lcd.setCursor(3,1);
  lcd.print(":");
  lcd.setCursor(0,1);
  lcd.print(hora1);
  lcd.setCursor(7,1);
  lcd.print("m");  


}     
  
// Configurando os minutos

       if(hora1 > -1){  
    

delay(200);
lcd.clear();  
while (digitalRead(set)){
    
   if (!digitalRead(mais)){
   
    minuto1+=10;
    delay(300);
    lcd.clear(); 
    
   
    if (minuto1>50) {
      minuto2 = 0;
    
    }
     
 }
   
  if (!digitalRead(menos)){
    
   
    minuto1-=10;
    delay(300);
    lcd.clear();
    
    if (minuto1<0) {    
      minuto1 = 50;
     
    }

     
 }
  
  lcd.setCursor(0,0);
  lcd.print("Insira1de2");   
  lcd.setCursor(2,1);
  lcd.print("h");
  lcd.setCursor(3,1);
  lcd.print(":");
  lcd.setCursor(0,1);
  lcd.print(hora1);
  lcd.setCursor(5,1);
  lcd.print(minuto1);
  lcd.setCursor(7,1);
  lcd.print("m");
		}	
}        
                    
       
// Configurando segundo horário de 2 horários.       
       
       
       if (hora1 > -1) {
       
         
         delay(400);
         lcd.clear();
       while (digitalRead(set)) { 
       
         if (!digitalRead(mais)){
    
    hora2++;
    delay(300);
    lcd.clear();
    
          if (hora2>23) {
      hora2 = 0; }
 }
     
  if (!digitalRead(menos)){
    
    hora2--;
    delay(300);
    lcd.clear();
   
    if (hora2<0) {
      hora2 = 23; }
 
  }  
  
  
  lcd.setCursor(0,0);
  lcd.print("Insira2de2");   
  lcd.setCursor(2,1);
  lcd.print("h");
  lcd.setCursor(3,1);
  lcd.print(":");
  lcd.setCursor(0,1);
  lcd.print(hora2);
  lcd.setCursor(7,1);
  lcd.print("m");  


}     
  
// Configurando os minutos
    
       if (hora2 > -1) {
         
delay(300);
lcd.clear();  
         
while (digitalRead(set)){
    
   if (!digitalRead(mais)){
   
    minuto2+=10;
    delay(300);
    lcd.clear(); 
    
   
    if (minuto2>50) {
      minuto2 = 0;
    
    }
     
 }
   
  if (!digitalRead(menos)){
    
   
    minuto2-=10;
    delay(300);
    lcd.clear();
    
    if (minuto2<0) {    
      minuto1 = 50;
     
    }

     
 } 
  
  
  lcd.setCursor(0,0);
  lcd.print("Insira2de2");   
  lcd.setCursor(2,1);
  lcd.print("h");
  lcd.setCursor(3,1);
  lcd.print(":");
  lcd.setCursor(0,1);
  lcd.print(hora2);
  lcd.setCursor(5,1);
  lcd.print(minuto2);
  lcd.setCursor(7,1);
  lcd.print("m");
	}
}
       }  
       
        break; 
       
// Configurando o case 3

		case 3: 
       	
       
       
// Configurando primeiro horário de 3 horários.       
       
       while (digitalRead(set)) {        
      
  if (!digitalRead(mais)){
    
    hora1++;
    delay(300);
    lcd.clear();
    
          if (hora1>23) {
      hora1 = 0; }
 }
     
  if (!digitalRead(menos)){
    
    hora1--;
    delay(300);
    lcd.clear();
   
    if (hora1<0) {
      hora1 = 23; }
 
  } 
         
  lcd.setCursor(0,0);
  lcd.print("Insira1de3");   
  lcd.setCursor(2,1);
  lcd.print("h");
  lcd.setCursor(3,1);
  lcd.print(":");
  lcd.setCursor(0,1);
  lcd.print(hora1);
  lcd.setCursor(7,1);
  lcd.print("m");  


}     
  
// Configurando os minutos

       if(hora1 > -1){  
    

delay(200);
lcd.clear();  
while (digitalRead(set)){
    
   if (!digitalRead(mais)){
   
    minuto1+=10;
    delay(300);
    lcd.clear(); 
    
   
    if (minuto1>50) {
      minuto1 = 0;
    
    }
     
 }
   
  if (!digitalRead(menos)){
    
   
    minuto1-=10;
    delay(300);
    lcd.clear();
    
    if (minuto1<0) {    
      minuto1 = 50;
     
    }

     
 }
  
  lcd.setCursor(0,0);
  lcd.print("Insira1de3");   
  lcd.setCursor(2,1);
  lcd.print("h");
  lcd.setCursor(3,1);
  lcd.print(":");
  lcd.setCursor(0,1);
  lcd.print(hora1);
  lcd.setCursor(5,1);
  lcd.print(minuto1);
  lcd.setCursor(7,1);
  lcd.print("m");
		}	
}        
                    
       
// Configurando segundo horário de 3 horários.       
       
       
       if (hora1 > -1) {
       
         
         delay(400);
         lcd.clear();
       
         while (digitalRead(set)) { 
       
         if (!digitalRead(mais)){
    
    hora2++;
    delay(300);
    lcd.clear();
    
          if (hora2>23) {
      hora2 = 0; }
 }
     
  if (!digitalRead(menos)){
    
    hora2--;
    delay(300);
    lcd.clear();
   
    if (hora2<0) {
      hora2 = 23; }
 
  }  
  
  
  lcd.setCursor(0,0);
  lcd.print("Insira2de3");   
  lcd.setCursor(2,1);
  lcd.print("h");
  lcd.setCursor(3,1);
  lcd.print(":");
  lcd.setCursor(0,1);
  lcd.print(hora2);
  lcd.setCursor(7,1);
  lcd.print("m");  

         }
}     
  
// Configurando os minutos
    
       if (hora2 > -1) {
         
delay(300);
lcd.clear();  
         
while (digitalRead(set)){
    
   if (!digitalRead(mais)){
   
    minuto2+=10;
    delay(300);
    lcd.clear(); 
    
   
    if (minuto2>50) {
      minuto2 = 0;
    
    }
     
 }
   
  if (!digitalRead(menos)){
    
   
    minuto2-=10;
    delay(300);
    lcd.clear();
    
    if (minuto2<0) {    
      minuto2 = 50;
     
    }

     
 } 
  
  
  lcd.setCursor(0,0);
  lcd.print("Insira2de3");   
  lcd.setCursor(2,1);
  lcd.print("h");
  lcd.setCursor(3,1);
  lcd.print(":");
  lcd.setCursor(0,1);
  lcd.print(hora2);
  lcd.setCursor(5,1);
  lcd.print(minuto2);
  lcd.setCursor(7,1);
  lcd.print("m");
	}
}
         
  // Configurando a parte 3 de 3 horarios
         
         if (hora2 > -1) {
       
         
         delay(400);
         lcd.clear();
       while (digitalRead(set)) { 
       
         if (!digitalRead(mais)){
    
    hora3++;
    delay(300);
    lcd.clear();
    
          if (hora3>23) {
      hora3 = 0; }
 }
     
  if (!digitalRead(menos)){
    
    hora3--;
    delay(300);
    lcd.clear();
   
    if (hora3<0) {
      hora3 = 23; }
 
  }  
  
  
  lcd.setCursor(0,0);
  lcd.print("Insira3de3");   
  lcd.setCursor(2,1);
  lcd.print("h");
  lcd.setCursor(3,1);
  lcd.print(":");
  lcd.setCursor(0,1);
  lcd.print(hora3);
  lcd.setCursor(7,1);
  lcd.print("m");  


}     
  
// Configurando os minutos
    
       if (hora3 > -1) {
         
delay(300);
lcd.clear();  
         
while (digitalRead(set)){
    
   if (!digitalRead(mais)){
   
    minuto3+=10;
    delay(300);
    lcd.clear(); 
    
   
    if (minuto3>50) {
      minuto3 = 0;
    
    }
     
 }
   
  if (!digitalRead(menos)){
    
   
    minuto3-=10;
    delay(300);
    lcd.clear();
    
    if (minuto3<0) {    
      minuto3 = 50;
     
    }

     
 } 
  
  
  lcd.setCursor(0,0);
  lcd.print("Insira3de3");   
  lcd.setCursor(2,1);
  lcd.print("h");
  lcd.setCursor(3,1);
  lcd.print(":");
  lcd.setCursor(0,1);
  lcd.print(hora3);
  lcd.setCursor(5,1);
  lcd.print(minuto3);
  lcd.setCursor(7,1);
  lcd.print("m");
	
}

       }
         
       }  
       
        break;        
       
// Configurando o case 4, o último case.
       
       // Configurando o case 4

		case 4: 
       	
       
       
// Configurando 1 horário de 4 horários.       
       
       while (digitalRead(set)) {        
      
  if (!digitalRead(mais)){
    
    hora1++;
    delay(300);
    lcd.clear();
    
          if (hora1>23) {
      hora1 = 0; }
 }
     
  if (!digitalRead(menos)){
    
    hora1--;
    delay(300);
    lcd.clear();
   
    if (hora1<0) {
      hora1 = 23; }
 
  } 
         
  lcd.setCursor(0,0);
  lcd.print("Insira1de4");   
  lcd.setCursor(2,1);
  lcd.print("h");
  lcd.setCursor(3,1);
  lcd.print(":");
  lcd.setCursor(0,1);
  lcd.print(hora1);
  lcd.setCursor(7,1);
  lcd.print("m");  


}     
  
// Configurando os minutos

       if(hora1 > -1){  
    

delay(200);
lcd.clear();  
while (digitalRead(set)){
    
   if (!digitalRead(mais)){
   
    minuto1+=10;
    delay(300);
    lcd.clear(); 
    
   
    if (minuto1>50) {
      minuto1 = 0;
    
    }
     
 }
   
  if (!digitalRead(menos)){
    
   
    minuto1-=10;
    delay(300);
    lcd.clear();
    
    if (minuto1<0) {    
      minuto1 = 50;
     
    }

     
 }
  
  lcd.setCursor(0,0);
  lcd.print("Insira1de4");   
  lcd.setCursor(2,1);
  lcd.print("h");
  lcd.setCursor(3,1);
  lcd.print(":");
  lcd.setCursor(0,1);
  lcd.print(hora1);
  lcd.setCursor(5,1);
  lcd.print(minuto1);
  lcd.setCursor(7,1);
  lcd.print("m");
		}	
}        
                    
       
// Configurando 2 horário de 4 horários.       
       
       
       if (hora1 > -1) {
       
         
         delay(400);
         lcd.clear();
       
         while (digitalRead(set)) { 
       
         if (!digitalRead(mais)){
    
    hora2++;
    delay(300);
    lcd.clear();
    
          if (hora2>23) {
      hora2 = 0; }
 }
     
  if (!digitalRead(menos)){
    
    hora2--;
    delay(300);
    lcd.clear();
   
    if (hora2<0) {
      hora2 = 23; }
 
  }  
  
  
  lcd.setCursor(0,0);
  lcd.print("Insira2de4");   
  lcd.setCursor(2,1);
  lcd.print("h");
  lcd.setCursor(3,1);
  lcd.print(":");
  lcd.setCursor(0,1);
  lcd.print(hora2);
  lcd.setCursor(7,1);
  lcd.print("m");  

         }
}     
  
// Configurando os minutos
    
       if (hora2 > -1) {
         
delay(300);
lcd.clear();  
         
while (digitalRead(set)){
    
   if (!digitalRead(mais)){
   
    minuto2+=10;
    delay(300);
    lcd.clear(); 
    
   
    if (minuto2>50) {
      minuto2 = 0;
    
    }
     
 }
   
  if (!digitalRead(menos)){
    
   
    minuto2-=10;
    delay(300);
    lcd.clear();
    
    if (minuto2<0) {    
      minuto2 = 50;
     
    }

     
 } 
  
  
  lcd.setCursor(0,0);
  lcd.print("Insira2de4");   
  lcd.setCursor(2,1);
  lcd.print("h");
  lcd.setCursor(3,1);
  lcd.print(":");
  lcd.setCursor(0,1);
  lcd.print(hora2);
  lcd.setCursor(5,1);
  lcd.print(minuto2);
  lcd.setCursor(7,1);
  lcd.print("m");
	}
}
         
  // Configurando a parte 3 de 4 horarios
         
         if (hora2 > -1) {
       
         
         delay(400);
         lcd.clear();
       while (digitalRead(set)) { 
       
         if (!digitalRead(mais)){
    
    hora3++;
    delay(300);
    lcd.clear();
    
          if (hora3>23) {
      hora3 = 0; }
 }
     
  if (!digitalRead(menos)){
    
    hora3--;
    delay(300);
    lcd.clear();
   
    if (hora3<0) {
      hora3 = 23; }
 
  }  
  
  
  lcd.setCursor(0,0);
  lcd.print("Insira3de4");   
  lcd.setCursor(2,1);
  lcd.print("h");
  lcd.setCursor(3,1);
  lcd.print(":");
  lcd.setCursor(0,1);
  lcd.print(hora3);
  lcd.setCursor(7,1);
  lcd.print("m");  


}     
  
// Configurando os minutos
    
       if (hora3 > -1) {
         
delay(300);
lcd.clear();  
         
while (digitalRead(set)){
    
   if (!digitalRead(mais)){
   
    minuto3+=10;
    delay(300);
    lcd.clear(); 
    
   
    if (minuto3>50) {
      minuto3 = 0;
    
    }
     
 }
   
  if (!digitalRead(menos)){
    
   
    minuto3-=10;
    delay(300);
    lcd.clear();
    
    if (minuto3<0) {    
      minuto3 = 50;
     
    }

     
 } 
  
  
  lcd.setCursor(0,0);
  lcd.print("Insira3de4");   
  lcd.setCursor(2,1);
  lcd.print("h");
  lcd.setCursor(3,1);
  lcd.print(":");
  lcd.setCursor(0,1);
  lcd.print(hora3);
  lcd.setCursor(5,1);
  lcd.print(minuto3);
  lcd.setCursor(7,1);
  lcd.print("m");
	
}

       }
         
       
  // Configurando a parte 4 de 4 horarios
         
         if (hora3 > -1) {
       
         
         delay(400);
         lcd.clear();
       while (digitalRead(set)) { 
       
         if (!digitalRead(mais)){
    
    hora4++;
    delay(300);
    lcd.clear();
    
          if (hora4>23) {
      hora4 = 0; }
 }
     
  if (!digitalRead(menos)){
    
    hora4--;
    delay(300);
    lcd.clear();
   
    if (hora4<0) {
      hora4 = 23; }
 
  }  
  
  
  lcd.setCursor(0,0);
  lcd.print("Insira4de4");   
  lcd.setCursor(2,1);
  lcd.print("h");
  lcd.setCursor(3,1);
  lcd.print(":");
  lcd.setCursor(0,1);
  lcd.print(hora4);
  lcd.setCursor(7,1);
  lcd.print("m");  


}     
  
// Configurando os minutos
    
       if (hora4 > -1) {
         
delay(300);
lcd.clear();  
         
while (digitalRead(set)){
    
   if (!digitalRead(mais)){
   
    minuto4+=10;
    delay(300);
    lcd.clear(); 
    
   
    if (minuto4>50) {
      minuto4 = 0;
    
    }
     
 }
   
  if (!digitalRead(menos)){
    
   
    minuto4-=10;
    delay(300);
    lcd.clear();
    
    if (minuto4<0) {    
      minuto4 = 50;
     
    }

     
 } 
  
  
  lcd.setCursor(0,0);
  lcd.print("Insira4de4");   
  lcd.setCursor(2,1);
  lcd.print("h");
  lcd.setCursor(3,1);
  lcd.print(":");
  lcd.setCursor(0,1);
  lcd.print(hora4);
  lcd.setCursor(5,1);
  lcd.print(minuto4);
  lcd.setCursor(7,1);
  lcd.print("m");
	
}

       }         
         
         } 
         
         }  
       
        break;
 

} // switch 
     if(hora1 > -1){
    delay(1000);
  	while (digitalRead(set)){
	lcd.clear();
    lcd.print("qtd configurada");
      delay(1000);
    }
     
} // while dos cases 
    
} // if dos horários de remédio  
  }
  
} // loop
 
