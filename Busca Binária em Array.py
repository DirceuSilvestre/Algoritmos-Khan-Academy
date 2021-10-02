primos = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97]
min = 1
max = int(len(primos)-1)
numero = int(input("Qual numero primo quer encontrar? "))
while True:
    media = (min + max)//2
    x = primos[media]
    if max < min:
        print('Valor não encontrado, {} não é primo'.format(numero))
        break
    elif numero == x:
        print('Valor encontrado no array, {} é primo'.format(primos[media]))
        break
    elif x < numero:
        print('buscando mais')
        min = media + 1
    else:
        print('buscando menos')
        max = media - 1
print('Parabéns!')
