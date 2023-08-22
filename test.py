import time
def es_primo(numero):
    if numero < 2:
        return False
    for i in range(2, int(numero**0.5) + 1):
        if numero % i == 0:
            return False
    return True
def primeros_primos(n):
    primos = []
    numero = 2
    while len(primos) < n:
        if es_primo(numero):
            primos.append(numero)
        numero += 1
    return primos
inicio = time.time()
n = 10000
primeros_primos(n)
fin = time.time()
print(f"Tiempo de ejecución en Python: {fin - inicio} segundos")