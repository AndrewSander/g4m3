lista=[]
lista2=[]
for i in range(3):
    x,y=map(int,input().split())
    lista.append(x)
    lista.append(y)
for i in range(len(lista)):
    if i%2==0 and lista.count(lista[i])==1:
        lista2.append(lista[i])
for i in range(len(lista)):
    if i%2!=0 and lista.count(lista[i])==1:
        lista2.append(lista[i])
print(f"{lista2[0]} {lista2[1]}")