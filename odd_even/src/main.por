programa {
  funcao printar_elementos_de(inteiro vetor[]) {
    escreva("[ ")
    
    para(inteiro j = 0; j < 10; j++) {
      escreva(vetor[j], " ")
    }
    
    escreva("]\n")
  }

  funcao inicio() {
    inteiro numeros_pares[10]
    inteiro numeros_impares[10]
    inteiro input

    para(inteiro i = 0; i < 10; i++) {
      escreva("Digite um número: ")
      leia(input)

      se(input % 2 == 0) {
        numeros_pares[i] = input
      }
      senao {
        numeros_impares[i] = input
      }
    }
    escreva("\nNúmeros pares: ")
    printar_elementos_de(numeros_pares)
    
    escreva("Números ímpares: ")
    printar_elementos_de(numeros_impares)
  }
}