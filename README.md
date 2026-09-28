# Carl Animatronic: Robô Animatrônico

<p align="center">
  <img src="logo_vulkaris.png" alt="Logo Vulkaris" width="180"/>
</p>

<p align="center">
  <strong>Projeto de um personagem animatrônico inspirado em Carl, de Five Nights at Freddy's</strong>
</p>

<p align="center">
  <img alt="C++" src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white"/>
  <img alt="Arduino" src="https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white"/>
  <img alt="Impressão 3D" src="https://img.shields.io/badge/Impress%C3%A3o%203D-FF6F00?style=for-the-badge&logo=3d&logoColor=white"/>
  <img alt="STL" src="https://img.shields.io/badge/Arquivos-STL-555555?style=for-the-badge"/>
</p>

---

## 📖 Sobre o Projeto

O **Carl Animatronic** é um projeto de robótica inspirado nos personagens animatrônicos de *Five Nights at Freddy's*. A proposta combina mecânica, eletrônica, impressão 3D e programação embarcada para criar um personagem interativo.

O protótipo foi desenvolvido para explorar o controle de atuadores e a integração entre peças mecânicas e componentes eletrônicos. Entre os elementos do personagem estão os olhos, a boca e a vela, que podem ser movimentados ou acionados por servomotores e outros atuadores, conforme a montagem escolhida.

---

## 🌟 Principais Recursos

- 🤖 Estrutura de um personagem animatrônico para montagem própria.
- 👀 Peças 3D para os olhos, bases e pálpebras.
- 👄 Componentes mecânicos relacionados à boca, incluindo pistão e engrenagem.
- 🕯️ Conjunto de vela e chama para compor o visual do personagem.
- 🦷 Placa de dentes e base estrutural para a montagem.
- 🎛️ Firmware Arduino para movimentação automática e efeitos do animatrônico.
- 🔊 Reprodução de tema sonoro por buzzer usando RTTTL.
- 🎬 Vídeo demonstrativo incluído no repositório.

---

## 📸 Demonstração

O vídeo do projeto está disponível em [`carlAnimatronic.mp4`](carlAnimatronic.mp4).

<p align="center">
  <a href="carlAnimatronic.mp4">▶️ Assistir ao vídeo demonstrativo</a>
</p>

---

## 🧩 Arquivos 3D

Os arquivos STL estão na pasta [`Arquivos3D`](Arquivos3D):

- `base.stl` — base estrutural.
- `eye for base 1.stl` e `eye for base 2.stl` — olhos.
- `eyes base 1.stl`, `eyes base 2.stl` e `eyes base holder.stl` — bases e suporte dos olhos.
- `eyelid for base 1.stl` e `eyelid for base 2.stl` — pálpebras.
- `piston.stl` e `gear.stl` — componentes do mecanismo.
- `teeth plate.stl` — placa de dentes.
- `candle tube.stl` e `candle flame.stl` — conjunto da vela.

> Os nomes exibidos acima usam espaços para facilitar a leitura. Os arquivos no repositório preservam os nomes originais com `+`.

---

## 🏗️ Estrutura do Repositório

```text
.
├── Arquivos3D/
│   ├── base.stl
│   ├── candle+flame.stl
│   ├── candle+tube.stl
│   ├── gear.stl
│   ├── eye+for+base+1.stl
│   ├── eye+for+base+2.stl
│   ├── eyes+base+1.stl
│   ├── eyes+base+2.stl
│   ├── eyes+base+holder.stl
│   ├── eyelid+for+base+1.stl
│   ├── eyelid+for+base+2.stl
│   ├── piston.stl
│   └── teeth+plate.stl
├── Firmware/
│   └── Carl_Animatronic.ino
├── carlAnimatronic.mp4
├── logo_vulkaris.png
└── README.md
```

---

## 🛠️ Como Utilizar

### Impressão e montagem

1. Baixe ou clone este repositório.
2. Abra os arquivos STL no fatiador de sua preferência.
3. Ajuste escala, orientação, suportes e parâmetros de impressão conforme o material e a impressora utilizados.
4. Imprima as peças e faça o acabamento necessário.
5. Monte o conjunto mecânico e adicione os servomotores, a iluminação e o circuito de controle de acordo com o seu projeto.

### Firmware

O firmware está disponível em [`Firmware/Carl_Animatronic.ino`](Firmware/Carl_Animatronic.ino). Ele controla:

- movimentos aleatórios dos dois olhos;
- abertura e fechamento automático da boca;
- efeito de oscilação da iluminação da vela;
- reprodução e atualização do tema sonoro por buzzer.

Para carregar o programa:

1. Abra `Firmware/Carl_Animatronic.ino` na Arduino IDE.
2. Instale as bibliotecas `Servo` e `PlayRtttl`.
3. Selecione a placa e a porta correspondentes ao seu microcontrolador.
4. Confira as ligações elétricas e faça o upload do sketch.

#### Mapeamento de pinos

| Função | Pino |
|---|---:|
| Servo do olho esquerdo | 5 |
| Servo do olho direito | 3 |
| Servo da boca | 6 |
| Iluminação da vela | 9 |
| Buzzer | 11 |

O esquema elétrico e uma lista fechada de materiais ainda não estão incluídos. Os componentes exatos podem variar conforme a versão construída.

---

## ⚙️ Tecnologias e Componentes

- Modelagem e fabricação por impressão 3D.
- Arduino/C++ para programação embarcada.
- Bibliotecas `Servo` e `PlayRtttl`.
- Servomotores e atuadores para movimentação.
- Microcontrolador compatível com o firmware da montagem.
- Iluminação para representar a chama da vela.
- Buzzer para reprodução de efeitos sonoros.

Os componentes exatos podem variar conforme a versão construída e as adaptações feitas durante a montagem.

---

## 🙏 Créditos

- **Modelo de referência:** [Carl the Cupcake Animatronic – FNAF Robot, no MakerWorld](https://makerworld.com/pt/models/2538348-carl-the-cupcake-animatronic-fnaf-robot?from=search#profileId-2794322).

Este é um projeto de fã, sem vínculo oficial com *Five Nights at Freddy's*. Os direitos da franquia e de seus personagens pertencem aos respectivos detentores.

---

## 📄 Licença

Não há um arquivo `LICENSE` definido neste repositório no momento. Consulte os créditos e a página do modelo original antes de redistribuir ou publicar versões modificadas dos arquivos.
