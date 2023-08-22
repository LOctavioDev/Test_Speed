function esPrimo(numero) {
    if (numero < 2) return false;
    for (let i = 2; i * i <= numero; i++) {
      if (numero % i === 0) return false;
    }
    return true;
  }
  function primerosPrimos(n) {
    const primos = [];
    let numero = 2;
    while (primos.length < n) {
      if (esPrimo(numero)) {
        primos.push(numero);
      }
      numero++;
    }
    return primos;
  }
  const inicio = new Date().getTime();
  const n = 10000;
  primerosPrimos(n);
  const fin = new Date().getTime();
  const tiempo = (fin - inicio) / 1000;
  console.log(`Tiempo de ejecución en JavaScript: ${tiempo} segundos`);