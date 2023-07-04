--------------------- Tema 1 SO - Adina Grecu, 331CC --------------------------

Pentru implementarea temei, m-am documentat pentru a afla ce fac concret 
functiile din biblioteca libc. Am consultat man pages pentru acestea pentru a 
intelege mecanismul de functionare (si pentru puts pentru a vedea declararea
functiei si ce argumente primeste). Pentru manipularea stringurilor (functii 
din string.c), in general, am iterat prin fiecare string in parte si am facut 
compararile/atriburile necesare pe fiecare caracter in parte cu mentiunea ca 
functiile memcmp, memset si memmove au necesitat cast la char* pentru a fi 
posibila manipularea datelor.

Pentru functiile din io, stat si mm am facut apeluri de sistem. M-am documentat 
pentru a afla care sunt parametrii necesari syscall-ului pentru fiecare functie 
in parte si am facut verificari pentru a valida argumentele primite si diferite 
erori posibile (pentru fisiere). Argumentul pentru numarul syscall-ului l-am 
luat din syscall_list. 

Surse:
Am folosit chat gpt pentru a intelege ce fac functiile si care este 
comportamentul lor in realitate, ce posibile erori trebuie tratate si cum se 
trateaza acestea, cum functioneaza codurile de eroare si cum functioneaza 
argumentele variabile.

Pentru malloc si free m-am folosit de: 
https://stackoverflow.com/questions/8475609/implementing-your-own-malloc-free-with-mmap-and-munmap

Pentru structura timespec m-am documentat pe internet si pentru modul de
functionare al functiei sleep am consultat chat gpt. Pentru scheletul
headerului time.h am urmat modelul celorlalte headere din tema.