<div align="center">
<img src="https://github.com/RafaelJango/HydroLink/assets/122299872/1db9610d-6f02-46b2-9368-3263e1cd899d" width="700px"/>
</div>


## Sobre a Empresa
A **Hydrolink** é uma empresa fictícia dedicada ao desenvolvimento de soluções inovadoras para o monitoramento e preservação da qualidade da água oceânica. Como parte de um projeto da **FIAP em parceria com a Oceans 20**, a Hydrolink busca utilizar tecnologias como Arduino e sensores ultrassônicos para criar dispositivos acessíveis e eficazes que possam ser utilizados em projetos de conservação marinha e monitoramento ambiental. Nosso objetivo é contribuir para a conscientização e preservação dos ecossistemas marinhos, fornecendo ferramentas e recursos para pesquisadores, organizações não governamentais e comunidades costeiras em todo o mundo.


# Medidor de Nível de Água com Arduino

Este projeto consiste em um medidor de nível de água utilizando Arduino. O objetivo é medir a distância entre o sensor ultrassônico e o nível da água em um recipiente e exibir essa informação em um display LCD, além de controlar LEDs para indicar diferentes níveis de água.

## Componentes Utilizados
- Arduino (qualquer modelo compatível)
- Sensor ultrassônico HC-SR04
- Display LCD 16x2 com interface I2C
- LEDs (vermelho, amarelo e verde)
- Buzzer
- Resistores e jumpers

## Instalação
1. Conecte os componentes conforme o esquemático.
2. Carregue o código-fonte para o Arduino.
3. Certifique-se de que as bibliotecas LiquidCrystal_I2C e Wire estão instaladas.

## Funcionamento
O sensor ultrassônico mede a distância entre ele e o nível da água no recipiente. Essa informação é então exibida no display LCD, indicando o nível atual da água em centímetros. Além disso, LEDs e um buzzer são utilizados para indicar diferentes situações, como níveis normais, atenção e alerta.

## Controle dos LEDs
- LED Verde: Indica nível de água seguro.
- LED Amarelo: Indica nível de água moderado.
- LED Vermelho: Indica nível de água crítico, com alerta sonoro.

## Foto do circuito (WOKWI)

<div align="center">
<img src="https://github.com/RafaelJango/HydroLink/assets/122299872/562cbb86-c3ad-48d8-839e-db9f67e9c4e1" width="700px"/>
</div>

## Contribuição
Contribuições são bem-vindas! Sinta-se à vontade para abrir uma issue ou enviar um pull request.

## Licença
Este projeto está licenciado sob a [Licença MIT](https://opensource.org/licenses/MIT).
