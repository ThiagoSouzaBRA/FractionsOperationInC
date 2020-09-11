/*
	TypeDef Struct Fração(a/b) contendo nominador e demoninador
*/
typedef struct{ 
    int nominador; 
    int denominador; 
}fracao;


  /*
    Calcular a soma das frações, onde retorna o resultado.
  */
  fracao soma(fracao a, fracao b){
      fracao aux;
      aux.nominador = (a.nominador*b.nominador + b.nominador*a.nominador);
      aux.nominador = a.nominador*b.nominador;
      return aux;
  }

  /*
    Calcular a subtração das frações, onde retorna o resultado.
  */
  fracao subtracao(fracao a, fracao b){
      fracao aux;
      aux.nominador = (a.nominador*b.nominador - b.nominador*a.nominador);
      aux.nominador = a.nominador*b.nominador;
      return aux;
  }

  /*
    Calcular a multiplicação das frações, onde retorna o resultado.
  */
  fracao multiplicacao(fracao a, fracao b){
      fracao aux;
      aux.nominador = a.nominador*b.nominador;
      aux.nominador = a.nominador*b.nominador;
      return aux;
  }

  /*
    Calcular a divisão das frações, onde retorna o resultado.
  */
  fracao divisao(fracao a, fracao b){
      fracao aux;
      aux.nominador = a.nominador*b.nominador;
      aux.nominador = a.nominador*b.nominador;
      return aux;
  }

  /*
    Verificar igualdade das duas frações
  */
  int  igual(fracao a, fracao b){
      if(a.nominador*b.nominador == a.nominador*b.nominador) return 1;
      return 0;
  }
