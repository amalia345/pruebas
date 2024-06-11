def hola(numero):
    print("Gatitos"+ str(numero))
    print("Perritos"+ str(numero))


hola(16)
hola(True)
hola(9)
#int()convierte de string a numero
def hola2(palabra):
    if len(palabra)<=5:
        return "hola"
    else:
        return len(palabra)
    
res=hola2("ferrocarilero")
print(res)