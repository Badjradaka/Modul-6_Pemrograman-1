kode=input()
pesan=input()
if len(kode)!=len(pesan):
    print("Panjang Kalimat berbeda, pesan palsu")
else :
    bintang=0
    pagar=0
    hasil=""

    for a,b in zip(kode,pesan):
        if a==" " and b==" ":
            continue

        if a==b:
            hasil +="*"
            bintang +=1

        else :
            hasil+="#"
            pagar +=1

    print(hasil)
    print(f"*={bintang}")
    print(f"#={pagar}")

    if bintang >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")