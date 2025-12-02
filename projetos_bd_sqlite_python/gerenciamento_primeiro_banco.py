import sqlite3
import os

os.system('cls')

def conectar_banco (primeiro_banco):
    conexao = sqlite3.connect(primeiro_banco)
    return conexao

def criar_tabelas(conexao):
    cursor = conexao.cursor()

    cursor.execute('''CREATE TABLE IF NOT EXISTS Locais (
                      id INTEGER PRIMARY KEY AUTOINCREMENT,
                      nome TEXT NOT NULL,
                      endereco TEXT NOT NULL)''')
    
    cursor.execute('''CREATE TABLE IF NOT EXISTS Eventos (
                      id INTEGER PRIMARY KEY AUTOINCREMENT,
                      nome TEXT NOT NULL,
                      data TEXT NOT NULL,
                      local_id INTEGER NOT NULL,
                      FOREIGN KEY(local_id) REFERENCES Locais(id))''')
    
    cursor.execute('''CREATE TABLE IF NOT EXISTS Participantes (
                      id INTEGER PRIMARY KEY AUTOINCREMENT,
                      nome TEXT NOT NULL,
                      email TEXT NOT NULL,
                      evento_id INTEGER NOT NULL,
                      FOREIGN KEY(evento_id) REFERENCES Eventos(id))''')
    
    conexao.commit()


if __name__ == '__main__':
    pasta_do_script = os.path.dirname(os.path.abspath(__file__))
    caminho_completo = os.path.join(pasta_do_script, 'primeiro_banco_teste.db')
    print(f"Conectando ao banco em: {caminho_completo}")
    conexao = conectar_banco(caminho_completo)
    
    criar_tabelas(conexao)
    conexao.close()



    