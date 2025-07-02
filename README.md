# 🎓 BCC Software Livre - Trabalho Prático: Bash, Git e Make

# Autor: Victor Giovanni Lemos de Medeiros

[![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://www.cplusplus.com/)
[![Make](https://img.shields.io/badge/Make-427819?style=for-the-badge&logo=cmake&logoColor=white)](https://www.gnu.org/software/make/)
[![Bash](https://img.shields.io/badge/Bash-4EAA25?style=for-the-badge&logo=gnu-bash&logoColor=white)](https://www.gnu.org/software/bash/)
[![Git](https://img.shields.io/badge/Git-F05032?style=for-the-badge&logo=git&logoColor=white)](https://git-scm.com/)

## 📂 Estrutura do Projeto

```
📁 BCC-Bash-Git-e-Make/
├── 📄 README.md                    # Documentação do projeto
├── 📄 Makefile                     # Arquivo de build
├── 🔧 .gitignore                   # Arquivos ignorados pelo Git
├── 💻 primo.cpp                    # Verificador de números primos
├── 💻 vetor.cpp                    # Encontra maior elemento em vetor
├── 💻 matriz.cpp                   # Operações com matrizes
├── 🧪 generate-test-primo.sh       # Gerador de casos de teste - primo
├── 🧪 generate-test-vetor.sh       # Gerador de casos de teste - vetor  
└── 🧪 generate-test-matriz.sh      # Gerador de casos de teste - matriz
```

## 🚀 Programas Disponíveis

### 🔢 **primo.cpp**
**Funcionalidade**: Verifica se um número é primo ou não.
- **Entrada**: Um número inteiro
- **Saída**: "Primo" ou "Não é Primo"
- **Algoritmo**: Utiliza otimização com teste até √n e verificação de divisibilidade por 6k±1

### 📊 **vetor.cpp**
**Funcionalidade**: Encontra o maior elemento em um vetor de inteiros.
- **Entrada**: Tamanho do vetor seguido pelos elementos
- **Saída**: O maior elemento encontrado
- **Complexidade**: O(n)

### 🎯 **matriz.cpp**
**Funcionalidade**: Realiza operações com matrizes quadradas.
- **Entrada**: Matrizes quadradas
- **Operações**: Adição, multiplicação e impressão de matrizes
- **Saída**: Resultado das operações matriciais

## 🛠️ Como Compilar

### Compilar todos os programas de uma vez:
```bash
make all
```

### Compilar programas individualmente:
```bash
# Compilar apenas o verificador de primos
make primo

# Compilar apenas o programa de vetor
make vetor

# Compilar apenas o programa de matriz
make matriz
```

### Limpar arquivos compilados:
```bash
make clean
```

## ▶️ Como Executar

### Executar o verificador de primos:
```bash
./primo
# Digite um número quando solicitado
```

### Executar o programa de vetor:
```bash
./vetor
# Digite o tamanho do vetor e os elementos
```

### Executar o programa de matriz:
```bash
./matriz
# Siga as instruções do programa
```

## 🧪 Geradores de Casos de Teste

O projeto inclui scripts Bash para gerar casos de teste automaticamente:

### **generate-test-primo.sh**
```bash
# Gerar 10 casos de teste com números até 1000 (padrão)
./generate-test-primo.sh

# Gerar 20 casos de teste com números até 5000
./generate-test-primo.sh 20 5000

# Usar com o programa primo
./generate-test-primo.sh 5 100 | ./primo
```

### **generate-test-vetor.sh**
```bash
# Gerar casos de teste para vetor
./generate-test-vetor.sh

# Usar com o programa vetor
./generate-test-vetor.sh | ./vetor
```

### **generate-test-matriz.sh**
```bash
# Gerar casos de teste para matriz
./generate-test-matriz.sh

# Usar com o programa matriz
./generate-test-matriz.sh | ./matriz
```



## 📖 Exemplos de Uso

### Exemplo 1: Testando números primos
```bash
# Compilar
make primo

# Executar
echo "17" | ./primo
# Saída: Primo

echo "15" | ./primo
# Saída: Não é Primo
```

### Exemplo 2: Encontrando maior elemento
```bash
# Compilar
make vetor

# Executar (vetor: [3, 7, 1, 9, 2])
echo -e "5\n3\n7\n1\n9\n2" | ./vetor
# Saída: 9
```

### Exemplo 3: Testando com gerador automático
```bash
# Gerar e testar 5 números primos
./generate-test-primo.sh 5 | ./primo
```



## 📚 Aprendizados

Este projeto demonstra:
- ✅ Uso do **Make** para automação de build
- ✅ Scripts **Bash** para automação de testes
- ✅ Controle de versão com **Git**
- ✅ Boas práticas de documentação
- ✅ Geração automatizada de casos de teste






