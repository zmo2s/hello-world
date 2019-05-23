/*const express = require('express')
const path = require('path')
const PORT = process.env.PORT || 5000

express()
  .use(express.static(path.join(__dirname, 'public')))
  .set('views', path.join(__dirname, 'views'))
  .set('view engine', 'ejs')
  .get('/', (req, res) => res.render('pages/index'))
  .listen(PORT, () => console.log(`Listening on ${ PORT }`))

/**/
const Discord = require("discord.js");
const bot = new Discord.Client();

//fichier ou enrigistre les lvl
const prefix="m!";


//recupe le token
var token = process.env.Discord_token ||  process.argv[2];


bot.login('NDcxNTkzMDI0NjkwODQ3Nzc0.DlYPgw.XJ6P6M1t8oi0O3lewbZSPqrG2Ic');




//les message

bot.on('message', mes => {
	var resu = mes.content.toLowerCase();

	if(resu=== "salut"||resu==="hello"||resu==="hi"){
	mes.reply("salut a toi!");
	}
	if (resu.startsWith("id")) {
		if(resu==="id")
			mes.channel.send(mes.author.id);
		else if(decoupe(resu,mes.mentions.users.first().id))
		mes.channel.send(mes.mentions.users.first().id);
	};

	if (resu === "avatar") { mes.reply(mes.author.avatar); };

	if(resu==="/language"){
		mes.channel.send("en cour mais on va ajoute js java c c# html css et dautre");
	}
});

bot.on('guildMemberAdd', guilds => {guilds.guild.defaultChannel.send(`${guilds.user.username} vien de rejoind le salon`);});
//function par me
function decoupe(entre,personne){
var phrase=[];
var depart=0;
for(var i=0;i<entre.length;i++){

if(entre[i]==" "){

phrase.push(entre.substring(depart,i));
depart=i+1; }

if( i == (entre.length-1))
phrase.push(entre.substring(depart,(i+1)));
}
if(phrase[1]==='<@' + personne +'>' && phrase.length===2)
return true;
else
return false;
}
