# Utiliser une image de base avec CMake et un compilateur C
FROM gcc:latest

# Installer CMake
RUN apt-get update && apt-get install -y cmake

# Définir le répertoire de travail
WORKDIR /app

# Copier le contenu du projet dans le conteneur
COPY . .

# Créer le répertoire de build
RUN mkdir -p build

# Configurer, construire et installer le projet
RUN cd build && cmake .. && make && make install

# Définir le point d'entrée du conteneur pour exécuter l'exécutable main
CMD ["./build/main"]
