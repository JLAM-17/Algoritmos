letrasProposicionales = ['p', 'q', 'r']
interps = []
aux = {}

for a in letrasProposicionales:
    aux[a] = 1

interps.append(aux)

for a in letrasProposicionales:
    interps_aux = [i for i in interps]
    
    for i in interps_aux:
        aux1 = {}
        
        for b in letrasProposicionales:
            if a == b:
                aux1[b] = 1 -i[b]
            else:
                aux1[b] = i[b]
        interps.append(aux1)

print('Interpretaciones: ')
for i in interps_aux:
    print(i)
