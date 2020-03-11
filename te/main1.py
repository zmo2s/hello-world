#import nltk
#from nltk.tokenize import word_tokenize
import os
import string
import re
from spellchecker import SpellChecker

spell = SpellChecker(language='fr')



'''>>> from spellchecker import SpellChecker
>>>
>>> spell = SpellChecker(language='fr')
>>> misspelled = ["resaissir", "matinnée", "plonbier", "tecnicien"]
>>> misspelled = spell.unknown(misspelled)
>>> for word in misspelled:
...     print(word, spell.correction(word))
plonbier plombier
matinnée matinée
tecnicien technicien
resaissir ressaisir
'''

happy=[]

nothappy=[]
f = open("1.txt",'r')
te=f.readlines()
#print(te)
happy=te

f = open("2.txt",'r')
te=f.readlines()
#print(te)
happy1=te



#print(te)
happy1 = [x.replace('\n', '') for x in happy1]
happy1=[x.lower() for x in happy1]

happy = [x.replace('\n', '') for x in happy]
happy=[x.lower() for x in happy]

#print(happy)
d=[]
#Regexp('s$|es$|era$|erez$|ions$| <etc> ')
o=[]
c=[]
z=[]
a=""
content_french = ["#URGENT,T :) aimmer régalions mangerai ⚕️🇨🇳#CORONAVIRUS Une équipe d'experts internationaux placée sous l'égide de l'Organisation mondiale de la santé (OMS) s'est envolée pour #Pékin afin d'enquêter sur l'épidémie de #coronavirus en #Chine,où le bilan a atteint 908 morts et plus de 40.000 cas de contamination."]
for i in content_french:
        #print(i)
       # print(word_tokenize(i, language='french'))
        res=i.split()
   
        res=[x.lower() for x in res]
        
      #  res = [res.replace(',', ' ') for j in content_french]
    #    res = [x.replace('.', ' ') for x in content_french]

        print(res)
        o=[i for i in res if i in happy]
        print(o)
        z=z+o
        r=[i for i in res if i in happy1]
        print(r)
        d=d+r
        #c=word_tokenize(i, language='french')+c
        #c=[n.split() for n in i]
        #print(i+'/')
        a=i
        #tokenize
        #print(re.findall(r"[\w']+",a))
        c=re.findall(r"[\w']+",a)
        #print(c)





#while ('.') in c: c.remove('.')  
#while (',') in c: c.remove(',')
#while (';') in c: c.remove(';') 
#while ('#') in c: c.remove('#')
    
v=''
w=''
print(c)
for i in res:
  if not i in c:
   if i in happy:
    [s + i for s in z]
   if i in happy1:
     [s + i for s in d]
for i in c:
  result = re.search('(erai|eras|era|ions|iez|ent)',i)
  if result:
    v=i
    w=v.replace('erai','er').replace('ions','er').replace('iez','er').replace('ent','er').replace('era','er').replace('eras','er')
    if w in happy:
       [s + i for s in z]
    if w in happy1:
      [s + i for s in d]
  
 
    print(w)
    print(v)
#correction de aimmer a aimer
for word in c:
  print(spell.correction(word))
  a=spell.correction(word)
  if a in happy:
    [s + i for s in z]
  if a in happy1:
    [s + i for s in d]
    

#c=[i for i in c if 3 < len(i)]

#print(happy)

#a=[i for i in c if i in happy]
#count=len(a)
# count nombre d'emotion positive si le count positive et suprieur a count négative alros la phrase est positive
#pour le pourcentage count positive /(count positive+ count negative)
# je odit faire la meme chose pour 2.txt 
#print(count)
#print(a)
#print(c)
count=(len(z))
print("nombre de mot postitif",count)
print("nombre de mot négatfi",len(d))
print("pourcentage mot positif",(count/(len(d)+count))*100,"%")
print("pourcentage mot négatif",(len(d)/(len(d)+count))*100,"%")
cp=(count/(len(d)+count))*100
cn=(len(d)/(len(d)+count))*100
#print(happy)
if len(z) > len(d):
  print("L'analyse des sentiments de la phrase est : positif")
if len(z) < len(d) :
  print("L'analyse des sentiments de la phrase est : negatif")
if len(z) == len(d):
 print("L'analyse des sentiments de la phrase est : neutre")

 # c c'est le tableau imparfait qu isépare jsute au virgule 
 # qui vire les smiley et fait de la merde donc
# on le compense avec res qui lui garde smiley et autres
import matplotlib.pyplot as plt
def aler2():

  
  labels = 'Positif', 'Negatif', 
  sizes = [cp, cn]
  colors = ['yellowgreen', 'gold']

  plt.pie(sizes, labels=labels, colors=colors, 
          autopct='%1.1f%%', shadow=True, startangle=90)

  plt.axis('equal')

  plt.savefig('PieChart01.png')
  plt.show()

from wordcloud import WordCloud, STOPWORDS, ImageColorGenerator
def aler():

  #convert list to string and generate
  unique_string=(" ").join(z)
  wordcloud = WordCloud(width = 1000, height = 500).generate(unique_string)
  plt.figure(figsize=(15,8))
  plt.imshow(wordcloud)
  plt.axis("off")
  plt.savefig("your_file_name"+".png", bbox_inches='tight')
  plt.show()
  plt.close()

def aler1():
  unique_string=(" ").join(d)
  wordcloud = WordCloud(width = 1000, height = 500).generate(unique_string)
  plt.figure(figsize=(15,8))
  plt.imshow(wordcloud)
  plt.axis("off")
  plt.savefig("your_file_name"+".png", bbox_inches='tight')
  plt.show()
  plt.close()

def recupere():
  print(value.get())
def aler3():


  value = StringVar() 
  value.set("Valeur")
  
  entree = Entry(fenetre, textvariable=value, width=30)
  entree.pack()

  bouton = Button(fenetre, text="Valider", command=recupere)
  bouton.pack()

from tkinter import * 
from tkinter.messagebox import showinfo
fenetre = Tk()



def alert():
    showinfo("alerte", "Bravo!")

menubar = Menu(fenetre)
photo = PhotoImage(file="unnamed.png")

canvas = Canvas(fenetre,width=350, height=200)
canvas.create_image(0, 0, anchor=NW, image=photo)
canvas.pack()

menu1 = Menu(menubar, tearoff=0)
menu1.add_command(label="mot positif", command=aler)
menu1.add_command(label="mot négatif", command=aler1)
menu1.add_command(label="graphique", command=aler2)
menu1.add_command(label="texte", command=aler3)
menu1.add_separator()
menu1.add_command(label="Quitter", command=fenetre.quit)
menubar.add_cascade(label="Fichier", menu=menu1)

menu2 = Menu(menubar, tearoff=0)
menu2.add_command(label="Couper", command=alert)
menu2.add_command(label="Copier", command=alert)
menu2.add_command(label="Coller", command=alert)
menubar.add_cascade(label="Editer", menu=menu2)

menu3 = Menu(menubar, tearoff=0)
menu3.add_command(label="A propos", command=alert)
menubar.add_cascade(label="Aide", menu=menu3)

fenetre.config(menu=menubar)
fenetre.mainloop()



print(entre)
print(bouton)