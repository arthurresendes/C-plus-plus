#include <iostream>
#include <vector>
#include <string>
#include <limits>
using namespace std;

class Todo{
private:
    vector<string> tarefas;

public:
    void cadastrarProduto(string Prod){
        if (!Prod.empty()){
            tarefas.push_back(Prod);
            cout << "Produto cadastrado com sucesso!" << endl;
        }
        else{
            cout << "Erro: O nome não pode estar vazio." << endl;
        }
    }

    void listarProdutos(){
        if (tarefas.empty()){
            cout << "Sem tarefas cadastradas." << endl;
        }
        else{
            int contador = 1;
            for (const auto &item : tarefas){
                cout << "[" << contador << "] - " << item << endl;
                contador++;
            }
        }
    }

    void deletarProd(){
        if (tarefas.empty())
            return; // Segurança extra

        size_t indice;
        listarProdutos();
        cout << "Digite o indice que quer retirar: ";
        cin >> indice;
        if (indice > tarefas.size() || indice < 1){
            cout << "Indice indisponivel!" << endl;
        }
        else{
            tarefas.erase(tarefas.begin() + (indice - 1));
            cout << "Tarefa excluida\nLista atualizada: " << endl;
            listarProdutos();
        }
    }
    void atualizarProd(){
        if (tarefas.empty()){
            cout << "Lista vazia!" << endl;
            return;
        }

        size_t indice;
        string tarefaAtualizada;
        listarProdutos();

        cout << "Digite o indice que quer atualizar: ";
        cin >> indice;

        if (indice > tarefas.size() || indice < 1){
            cout << "Indice indisponivel!" << endl;
        }
        else{
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Digite o novo nome para a tarefa: ";
            getline(cin, tarefaAtualizada);
            tarefas[indice - 1] = tarefaAtualizada;
            cout << "Tarefa atualizada com sucesso!" << endl;
            listarProdutos();
        }
    }
};

int main()
{
    Todo meuTodo;
    int opcao;
    string nomeTarefa;

    do
    {
        cout << "\n1- Adicionar Tarefa\n2- Atualizar Tarefa\n3- Lista Tarefas\n4- Deletar Tarefa\n5- Sair\nEscolha: ";

        if (!(cin >> opcao))
        {
            cout << "Por favor, digite apenas numeros." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer

        switch (opcao)
        {
        case 1:
            cout << "Digite a tarefa: ";
            getline(cin, nomeTarefa);
            meuTodo.cadastrarProduto(nomeTarefa);
            break;
        case 2:
            meuTodo.atualizarProd();
            break;
        case 3:
            meuTodo.listarProdutos();
            break;
        case 4:
            meuTodo.deletarProd();
            break;
        case 5:
            cout << "Encerrando programa." << endl;
            break;
        default:
            cout << "Opcao invalida!" << endl;
        }
    } while (opcao != 5);

    return 0;
}