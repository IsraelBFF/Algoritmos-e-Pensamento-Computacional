#include <stdio.h>

void main(){
    float faturamento = 0.0;
    int valor = 0;
    int qntdVendas = 0;
    int qntdValorAcima = 0;
    
    printf("Informe o valor da venda: ");
    scanf("%d", &valor);

    while (valor != 0){
        qntdVendas++;
        faturamento += valor;

        if(valor > 200){
            qntdValorAcima++;
        }

        printf("Informe o valor da venda: ");
        scanf("%d", &valor);
    }

    float valorMedio = faturamento/qntdVendas;

    printf("\n===== RESUMO DAS VENDAS =====\n");
    printf("Quantidade de vendas: %d\n", qntdVendas);
    printf("Faturamento: %.2f\n", faturamento);
    printf("Valor medio: %.2f\n", valorMedio);
    printf("Vendas acima de R$ 200: %d\n", qntdValorAcima);
}