# Sumar Materie pentru BAC 2021 la INFORMATICA


## Pseudocod

Transformare din:

1. while -> do while

cat timp .. executa ->  executa .. pana cand

Tinem cont de:
- trebuie incorporata bucla intr-un `daca .. atunci` pentru a valida conditia de la `cat timp .. executa`


2. do while -> while

executa .. pana cand -> cat timp .. executa

Tinem cont de:
- trebuie sa scriem o data codul(intr-un `daca .. atunci` cu conditia buclei) din `executa .. pana cand` inainte de structura de `cat timp .. executa`

3. for -> while

pentru .. executa -> cat timp .. executa

Tinem cont de:
- trebuie luata o variabila `i<-0` sau ca in `pentru .. executa`
- conditia trebuie sa fie ca variabila i sa nu ajunga la o anumita valoare setata in `pentru .. executa`
- trebuie modificata variabila i pentru a ajunge la valoarea din `pentru .. executa`

4. while -> for

cat timp .. executa -> pentru .. executa

Tinem cont de:
- observam o variabila ce se schimba si de care conteaza conditia si o punem in `pentru .. executa`


exemplu:

`d<-1 cât timp d*d<n executa .. d<-d+1` -> `pentru d<-1, d*d<n executa`

5. for -> do while

pentru .. executa -> executa .. pana cand

Tinem cont de:
- trebuie tinut cont de conditia din `pentru .. executa`, initializata o variabila de numarat, de ex i.
- se verifica intr-un `daca .. atunci` daca nu e indeplinita conditia si punem totul in acest `daca .. atunci`

exemplu
```
i<-1
daca [cond] atunci
    executa
    ...
    i<-i+1
    pana cand [cond]

```

6. do while -> for

executa .. pana cand -> pentru .. executa

Tinem cont de:
- vedem daca avem variabila ce se poate schimba cu 1 ca intr-un `pentru .. executa` si o folosim pe accea
- punem codul o singura data cu o singura incrementare inainte de `pentru .. executa`, dar intr-un `daca .. atunci` cu conditia din `executa .. cat timp`

```
j<-0
daca [cond] atunci
    ...
    [cod]
    ...
    j<-j+1

pentru i<-j, [cond] executa
    ...
    [cod]
    ...
```


## Vectori de frecventa

- Folosim la numarat de elemente

`vector[element]=numarul_de_elemente`

- initializare cu 0

```
for(int i=0; i<lungime_vector;i++)
    vector[i]=0;  // pentru ca incepem numaratoarea de la 0
```

## Formule grafuri

**Link catre multa teorie:** <https://www.pbinfo.ro/articole/810/grafuri-neorientate>

G un graf neorientat cu `n` varfuri si `m` muchii =>
1. Numar grafuri partiale = `2^m`
2. Numar subgrafuri = `2^n - 1`
3. Un singur unic graf complementar.
