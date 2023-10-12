import os
import shutil

def zip_folders_in_directory(source_directory, destination_directory):
    if not os.path.exists(source_directory):
        print(f"O diretório de origem '{source_directory}' não existe.")
        return

    if not os.path.exists(destination_directory):
        os.makedirs(destination_directory)

    for item in os.listdir(source_directory):
        item_path = os.path.join(source_directory, item)
        if os.path.isdir(item_path):
            zip_filename = f"{item}.zip"
            shutil.make_archive(os.path.join(destination_directory, zip_filename), 'zip', item_path)
            print(f"Pasta '{item}' zipada como '{zip_filename}'.")

# Substitua 'diretorio_origem' e 'diretorio_destino' pelos caminhos dos diretórios que você deseja usar.
diretorio_origem = input("qual o diretorio terá as pastas zipadas?")
diretorio_destino = input("qual a pasta de destino?")
zip_folders_in_directory(diretorio_origem, diretorio_destino)
