from random import randint
computador = randint(1, 100)
usuario = int(input('Qual número acha que o computador pensou, de 1 a 100?'))
while True:
    if usuario == computador:
        print('Você advinhou, o numero pensado foi {}'.format(computador))
        break
    elif usuario < computador:
        print(f'Número digitado menor que o pensado')
        usuario = int(input('tente de novo: '))
    else:
        print(f'Número digitado maior que o pensado')
        usuario = int(input('digite novamente: '))
print(f'Só tenho duas palavras a dizer: Para, Béns!')
