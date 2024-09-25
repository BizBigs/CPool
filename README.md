# CPool Project

## Instructions pour lancer le projet

1. **Démarrer les services Docker :**
   Pour lancer le projet, exécutez la commande suivante :
   ```sh
   docker-compose up -d --build

   ```
2. **Se connecter au conteneur :**
   Une fois les services Docker démarrés, connectez-vous au conteneur avec la commande suivante :

   ```sh
   docker exec -it cpool_cpool_1 bash
   ```

3. **Compiler le code :**
   À l'intérieur du conteneur, compilez le code en utilisant la commande `make` :

   ```sh
   make
   ```

4. **Lancer le programme :**
   Après la compilation, exécutez le programme avec la commande suivante :

   ```sh
   ./main
   ```

5. **Recompiler après modifications :**
   À chaque modification du code, n'oubliez pas de relancer la commande `make` à l'intérieur du conteneur pour recompiler le projet.
