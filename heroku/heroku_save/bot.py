import os
import discord
from dotenv import load_dotenv
from discord.ext import commands

# -*- coding: utf-8 -*-

load_dotenv()
token = os.getenv('DISCORD_TOKEN')

client = discord.Client()

@client.event
async def on_ready():
	print(f'{client.user.name} has connected to Discord!')


@client.event
async def on_message(message):

    if message.author == client.user:
        return


    if message.content.startswith('!'):
        
        channel = message.channel
        message.content=message.content.replace("!","")
		  
	


@client.event
async def on_message(message):

    if message.author == client.user:
        return


    if message.content.startswith('$en'):
        
        channel = message.channel
        message.content=message.content.replace("$en","")


        enter = message.content
        print()
        enter = enter.replace(" ", "%20")
        # enter=enter.replace("!","__")
        print(enter)
        import re
        import requests
        from bs4 import BeautifulSoup as BSHTML
        import urllib.request
        page = urllib.request.urlopen('https://myanimelist.net/search/all?q=' + enter)
        print(page)
        soup = BSHTML(page, "html.parser")
        images = soup.findAll('img')
        i = 0
        for image in images:
          i += 1
          if i == 2:
            # print(image['src'])
             response1=image['src']
             #Haikyuu!To the Top
        texte = soup.findAll(class_='picSurround di-tc thumb')
        # print(texte)
        p = 0
        for cle in texte:

          test = cle.find(class_='hoverinfo_trigger')
          # expr = re.match(r"href=\"[^ ]+\"",cle)
          # if expr is not None :
          #  print(expr)
          if p == 0:
            expr = re.search(r"href=\"[^ ]+\"", str(test))
            print(expr.group(0))
            start = re.search(r"(?<=href=\")[a-zA-Z-0-9-/-_-.-]+", str(expr.group(0)))
            print(start.group(0))
            reg = start.group(0)
            # print(test)
            # print(cle)
            # print(cle['href'])
            # print(cle.get('href'))
          p += 1
# print(test)
# expr = re.match(r"href=\"[^ ]+\"",test)
# if expr is not None :
#  print(expr)
# [^href=\"][a-zA-Z-0-9-/-_-.-]+
          page = urllib.request.urlopen(reg)
          print(page)
          soup = BSHTML(page, "html.parser")
          res = soup.find(itemprop="description")
          a = res.get_text()

# print(res)

          from googletrans import Translator
          translator = Translator()
          result = translator.translate(str(a), dest='fr')
          de=result.text
         # print(result.text)

          
          await channel.send(response1)
          await channel.send("```"+a+"```")
        

          def check(m):
             return m.content == 'hello' and m.channel == channel
          msg = await client.wait_for('message', check=check)
          await channel.send('Hello {.author}!'.format(msg))


    if message.content.startswith('$gre'):
        
        channel = message.channel
        message.content=message.content.replace("$gre","")
        from requests_html import HTMLSession
        import re
        import requests
        from bs4 import BeautifulSoup as BSHTML
        import urllib.request
        session = HTMLSession()
        r = session.get('http://onnada.com/search/?q='+message.content)
        r.encoding = 'utf-8'
        e=r.text
        soup = BSHTML(e, "html.parser")
        images = soup.findAll('img')
        #print(images)
        i = 0
        for image in images:
          i += 1
          if i == 2:
             print(image['src'])
             response1=image['src']


        images = soup.findAll(class_='thumb')
        p=0
        for image in images :
         if p == 0:
            expr = re.search(r"href=\"[^ ]+\"", str(image))
            print(expr.group(0))
            start = re.search(r"(?<=href=\")[a-zA-Z-0-9-/-_-.-]+", str(expr.group(0)))
            
            reg = start.group(0)
         p+=1
        print(reg)
        page = urllib.request.urlopen(reg)
        print(page)
        soup = BSHTML(page, "html.parser")
        res = soup.find(id="animeContents")
        a = res.get_text()
        print(a)
        await channel.send(response1)
        await channel.send("```"+a+"```")
      
    if message.content.startswith('$en'):
        
        channel = message.channel
        message.content=message.content.replace("$en","")


        enter = message.content
        print()
        enter = enter.replace(" ", "%20")
        # enter=enter.replace("!","__")
        print(enter)
        import re
        import requests
        from bs4 import BeautifulSoup as BSHTML
        import urllib.request
        page = urllib.request.urlopen('https://myanimelist.net/search/all?q=' + enter)
        print(page)
        soup = BSHTML(page, "html.parser")
        images = soup.findAll('img')
        i = 0
        for image in images:
          i += 1
          if i == 2:
             print(image['src'])
             response1=image['src']
             #Haikyuu!To the Top
        texte = soup.findAll(class_='picSurround di-tc thumb')
        # print(texte)
        p = 0
        for cle in texte:

          test = cle.find(class_='hoverinfo_trigger')
          # expr = re.match(r"href=\"[^ ]+\"",cle)
          # if expr is not None :
          #  print(expr)
          if p == 0:
            expr = re.search(r"href=\"[^ ]+\"", str(test))
            print(expr.group(0))
            start = re.search(r"(?<=href=\")[a-zA-Z-0-9-/-_-.-]+", str(expr.group(0)))
            print(start.group(0))
            reg = start.group(0)
            # print(test)
            # print(cle)
            # print(cle['href'])
            # print(cle.get('href'))
          p += 1
# print(test)
# expr = re.match(r"href=\"[^ ]+\"",test)
# if expr is not None :
#  print(expr)
# [^href=\"][a-zA-Z-0-9-/-_-.-]+
          page = urllib.request.urlopen(reg)
          print(page)
          soup = BSHTML(page, "html.parser")
          res = soup.find(itemprop="description")
          a = res.get_text()

# print(res)

          from googletrans import Translator
          translator = Translator()
          result = translator.translate(str(a), dest='fr')
          de=result.text
          print(result.text)

          await channel.send(message.content)
          await channel.send(response1)
          await channel.send("```"+de+"```")
          await channel.send(reg)

          def check(m):
             return m.content == 'hello' and m.channel == channel
          msg = await client.wait_for('message', check=check)
          await channel.send('Hello {.author}!'.format(msg))
        
    
        
    if message.content.startswith('$pt'):
        
        channel = message.channel
        message.content=message.content.replace("$pt","")


        enter = message.content
        print()
        enter = enter.replace(" ", "%20")
        # enter=enter.replace("!","__")
        print(enter)
        import re
        import requests
        from bs4 import BeautifulSoup as BSHTML
        import urllib.request
        page = urllib.request.urlopen('https://myanimelist.net/search/all?q=' + enter)
        print(page)
        soup = BSHTML(page, "html.parser")
        images = soup.findAll('img')
        i = 0
        for image in images:
          i += 1
          if i == 2:
            # print(image['src'])
             response1=image['src']
             #Haikyuu!To the Top
        texte = soup.findAll(class_='picSurround di-tc thumb')
        # print(texte)
        p = 0
        for cle in texte:

          test = cle.find(class_='hoverinfo_trigger')
          # expr = re.match(r"href=\"[^ ]+\"",cle)
          # if expr is not None :
          #  print(expr)
          if p == 0:
            expr = re.search(r"href=\"[^ ]+\"", str(test))
            print(expr.group(0))
            start = re.search(r"(?<=href=\")[a-zA-Z-0-9-/-_-.-]+", str(expr.group(0)))
            print(start.group(0))
            reg = start.group(0)
            # print(test)
            # print(cle)
            # print(cle['href'])
            # print(cle.get('href'))
          p += 1
# print(test)
# expr = re.match(r"href=\"[^ ]+\"",test)
# if expr is not None :
#  print(expr)
# [^href=\"][a-zA-Z-0-9-/-_-.-]+
        page = urllib.request.urlopen(reg)
        print(page)
        soup = BSHTML(page, "html.parser")
        res = soup.find(itemprop="description")
        a = res.get_text()

# print(res)

        from googletrans import Translator
        translator = Translator()
        result = translator.translate(str(a), dest='pt')
        de=result.text
        # print(result.text)
        a=de[0:250]

        await channel.send(response1)
        embed = discord.Embed(description=a, color=0x00ff00)
        await message.channel.send(embed=embed)
        await channel.send(reg)

          

    if message.content.startswith('!hello'):
         embed = discord.Embed(title="Title", description="Desc", color=0x00ff00)
         embed.add_field(name="Field1", value="hi", inline=False)
         embed.add_field(name="Field2", value="hi2", inline=False)
         await message.channel.send(embed=embed)
    




          
      

client.run(token)

