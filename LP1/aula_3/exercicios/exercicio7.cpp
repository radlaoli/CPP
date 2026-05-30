#include <iostream>
#include <string>
using namespace std;

class ContaBancaria{
    protected:
        int numConta;
        string titular;
        double saldo;
    public:
       ContaBancaria(
        int numConta,
        string titular,
        double saldo
    ) : numConta(numConta), titular(titular), saldo(saldo){
        cout << "Conta criada com sucesso" << endl;
    }

        virtual double calcularRendimento() = 0;
        virtual void calcularTaxa() = 0;

        ~ContaBancaria(){
            cout << "Conta fechada" << endl;
        }
};

class ContaPoupanca : public ContaBancaria{
    protected:
        double taxaRendimento;
    public:
        ContaPoupanca(int n, string titular, double s, double t) : ContaBancaria(n,titular,s){
            this->taxaRendimento = t;
        }
        double calcularRendimento() override{
            return saldo * taxaRendimento;
        }
        void calcularTaxa() override {
            cout << "Conta Poupanca nao possui taxa de manutencao." << endl;
        }
};

class ContaCorrente : public ContaBancaria {
    protected:
        double taxaManutencao;
    public:
        ContaCorrente(int n, string t, double s, double taxa) 
            : ContaBancaria(n, t, s), taxaManutencao(taxa) {}

        double calcularRendimento() override {
            return 0.0;
        }
        void calcularTaxa() override {
            cout << "Taxa de manutencao da Conta Corrente: R$ " << taxaManutencao << endl;
        }
    };

int main() {
    ContaPoupanca poupanca(123, "Maria", 1000.0, 0.005);
    cout << "Rendimento da Poupanca: R$ " << poupanca.calcularRendimento() << endl;
    poupanca.calcularTaxa();

    cout << "\n-------------------\n" << endl;

    ContaCorrente corrente(456, "Joao", 2000.0, 15.00);
    cout << "Rendimento da Conta Corrente: R$ " << corrente.calcularRendimento() << endl;
    corrente.calcularTaxa();

    cout << "\n-------------------\n" << endl;

    return 0;
}