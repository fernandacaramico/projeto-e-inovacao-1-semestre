//CÓDIGO EXPLICADO LINHA POR LINHA

int pinoSensor = 0;  //<< MUDAR NÚMERO SE FOR OUTRA PORTA CONECTADA. 5 SE FOR A5, 2 SE FOR A2...
int valorLido = 0; // NÃO MUDAR PORQUE TEM QUE COMEÇAR NO ZERO, JÁ RESETA. SE TIVER ALGUM LIXO DE MEMÓRIA COM MESMO ENDEREÇO, NÃO O USA.
float temperatura = 0; // NÃO MUDAR PORQUE TEM QUE COMEÇAR NO ZERO, JÁ RESETA. SE TIVER ALGUM LIXO DE MEMÓRIA COM MESMO ENDEREÇO, NÃO O USA. 
int linha = 0; //<< ESSA INT SÓ VAI ENTRAR NO IF, POIS APAGAMOS DE ONDE APARECE ANTES. COMO O CONTADOR NÃO É IMPORTANTE, TIRAR

void setup() { 
  Serial.begin(9600); //<< NÃO MUDAR. PADRÃO DE FREQUÊNCIA NO QUAL O COMPUTADOR VAI SE COMUNICAR COM O ARDUÍNO, EM BAUDS
  Serial.println("CLEARDATA");  //<< TIRAR. NÃO QUEREMOS QUE APAREÇA
  Serial.println("LABEL, Hora, Temperatura, linha"); //<< MUDAR PARA "Temperatura"
}

void loop() { 
  valorLido = analogRead(pinoSensor); //<< VAI LER O SENSOR NA PARTE "ANALÓGICA" DO ARDUÍNO
  temperatura = (valorLido * 0.00488); //<< O LEITOR ANALÓGICO DO ARDUÍNO LÊ 5 VOLTS DIVIDIDOS EM 1023 PARTES. VAMOS PASSAR PARA mV
  temperatura = temperatura * 100; //<< PASSA DE MILIVOLTS PARA CELSIUS. 10mV = 1°C
  linha++; //<< TIRAR. INCREMENTA 1 NO CONTADOR INT LINHA
  Serial.print("DATA, TIME, "); //<< TIRAR. NÃO QUEREMOS QUE APAREÇA
  Serial.println(temperatura); //<< NÃO TIRAR. É O QUE QUEREMOS QUE IMPRIMA. LN PORQUE O PRÓXIMO VAI PRA LINHA DE BAIXO
  Serial.print(","); //<< TIRAR. NÃO QUEREMOS QUE APAREÇA
  Serial.println(linha); //<< TIRAR. NÃO QUEREMOS QUE APAREÇA


 /* if (linha > 100)  //<< LÊ ATÉ 100, DEPOIS, LINHA VIRA 0 = “REINICIA” O CONTADOR
  {
    linha = 0;
    Serial.println("ROW,SET,2"); //<< TIRAR. NÃO QUEREMOS QUE APAREÇA
  } */ 
//<< PODE TIRAR ESSE IF INTEIRO, NÃO VAMOS USAR O CONTADOR E NEM QUEREMOS QUE “ROW,SET,2” SEJA IMPRESSO.


  delay(1000); //<< MUDAR PARA O TEMPO, EM Ms (2000 = 2s, 3000 = 3s…)
}

// xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

// CÓDIGO COM COISAS QUE NÃO QUEREMOS QUE RODEM COMENTADAS

int pinoSensor = 0; 
int valorLido = 0; 
float temperatura = 0; 
/* int linha = 0; */

void setup() { 
  Serial.begin(9600); 
/*  Serial.println("CLEARDATA");  
  Serial.println("LABEL, Hora, Temperatura, linha");*/
  Serial.println("Temperatura");
}

void loop() { 
  valorLido = analogRead(pinoSensor);
  temperatura = (valorLido * 0.00488); 
  temperatura = temperatura * 100; 
/*  linha++;  
  Serial.print("DATA, TIME, "); */
  Serial.println(temperatura);
/*  Serial.print(","); 
  Serial.println(linha); 

  if (linha > 100) 
  {
    linha = 0;
    Serial.println("ROW,SET,2"); 
  } */ 
  delay(1000);
}

// xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

// CÓDIGO SEM COISAS A MAIS

int pinoSensor = 0; 
int valorLido = 0; 
float temperatura = 0; 

void setup() { 
  Serial.begin(9600); 
  Serial.println("Temperatura");
};

void loop() { 
  valorLido = analogRead(pinoSensor);
  temperatura = (valorLido * 0.00488); 
  temperatura = temperatura * 100; 
  Serial.println(temperatura);
  delay(1000);
};
