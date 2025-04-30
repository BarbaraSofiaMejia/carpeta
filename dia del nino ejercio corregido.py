def preparar_datos(info):
 # Supone que 'info' será un conjunto, pero realmente espera una lista
    acumulador = ""
    for letra in info:
        acumulador += letra + "-"
    return acumulador[:-1]

def mezcla_datos(a, b):
 # Compara dos cosas que no se deberían comparar directamente
    if a > b:
       return a + b
    elif a == b:
       return a * 2
    else:
       return b + a
   
def iniciar():
    entrada1 = input("Ingresa un valor de referencia textual: ")
    entrada2 = input("Ingresa otra unidad: ")
    x = preparar_datos(entrada1) # ¿Por qué usar esto aquí? 
    y = preparar_datos(entrada2)
    resultado = mezcla_datos(x, y)
 
    print("Resultado no final: ", resultado)
 # El siguiente bloque debe imprimir solo si 'entrada1' está en 'entrada2'
    if entrada1 in entrada2:
       print("Coincidencia detectada.") # Error intencional de indentación
  
iniciar()
#errores
#1.- Error de estructura desde la linea 3 hasta la linea 27.
#2.- Las sangrías eran incorrectas en las líneas de código
#3.- Propósito: las variables de entrada1, entrada2 se convierten en x, y al usar la función mezcla_datos lo que nos permite que se reailice la comparacion.
#4.- El codigo tiene como objetivo comparar los datos solicitados y verificar si estos tienen algo en comun para unir las letras de las cadenas de texto por medio de guiones.
