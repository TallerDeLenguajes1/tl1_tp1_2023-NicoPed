
# .gitignore
A continuación hablaremos de una "herramienta" importante al usar git como lo es el archivo _.gitignore_
## ¿Qué es y Para que sirve?
_Es un archivo de texto que le dice a Git qué archivos o carpetas ignorar en un proyecto._
## ¿Cuándo se debe hacer?
Cuando tenemos una gran cantidad de archivos que, o no se realizan cambios en esos archivos, o simplemente no queremos que git le haga seguimiento y/o "comitearlo" 

## ¿Cómo configuraría el archivo .gitignore?
Para crear un archivo .gitignore local, crea un archivo de texto y asígnale el nombre ".gitignore" (recuerda incluir el . al principio). Luego, edita este archivo según sea necesario. Cada nueva línea debe incluir un archivo o carpeta adicional que quieras que Git lo ignore.

  Las entradas de este archivo también pueden seguir un patrón coincidente:

- "*" se utiliza como una coincidencia comodín.
- "/" se usa para ignorar las rutas relativas al archivo .gitignore.
- "#" es usado para agregar comentarios

### Ejemplos
_# Ignora archivos del sistema Mac_ 
**.DS_store**

_# Ignora la carpeta node_modules_
**node_modules**

_# Ignora todos los archivos de texto_
***.txt**

## Ejemplo ¿Cómo ignorar un archivo llamado ignorado.txt?

Sencillamente dentro del archivo de texto _.gitignore_ escribir ignorado.txt para que Git lo pase por alto.

----------------------------------------------------------------------------------------------------------------
#DEL PUNTO 3
El 2 y 3 (De hecho el 1 y 2)son lo mismo ya que el puntero apunta a la dirección de memoria del dato
y el 4(3) no es el mismo ya que el puntero se almacena en otro lado de la memoria