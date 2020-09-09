<?php 

require 'library/bootstrap.php';
require 'library/mysql.php';
require 'questionManager.php';
$bdd->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
//$reponse = $bdd->query('SELECT phrase FROM question where numero=1');
   
//echo $reponse;
//$donne=$reponse->fetchAll();
//echo $donne['phrase'];
$db = new PDO('mysql:host=127.0.0.1;dbname=quiz', 'phpmyadmin', 'Password1011%');

$manager = new QuestionManager($db);

?>

<nav class="navbar navbar-light bg-primary">
    <a class="navbar-brand" href="#">
        <img src="public/brain.jpeg" width="30" height="30" alt="" loading="lazy"> Quiz
    </a>
</nav>




<div class="container py-md-5 mt-5">

<style>
@media (min-width: 1200px ) { .container{ max-width: 500px; } } 
</style>

<a class="btn btn-primary" href="#" role="button" id="ques">Question n°1</a>

  <?php 
  
  $array=$manager->listQuestion(1);

?><div id="compteur" data="1"><div id="marche"></div> <div id="champ"> <form id="rad"> <?php 
  foreach($array as $question)
  {
    ?>
    <div class="form-check mt-5">
  <input class="form-check-input mt-3" type="radio" name="exampleRadios" id="exampleRadios1" value="option1" checked>
  <label class="form-check-label" for="exampleRadios1">
  <a class="btn btn-primary" id="type1" href="#" role="button"><?= $question->getPhrase() ?></a>
  </label>
</div>
<?php
  }

  ?>
</div>
</div>
<button type="button" id="suiv" class="btn btn-secondary mt-5" onclick="loadDoc()">Suivant</button>
<div id="demo">
<script>

function loadDoc() {
/*
a =  document.getElementById("type1").val;
console.log(a);
*/









  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      let myObj = JSON.parse(this.responseText);
      console.log(myObj);
   // document.getElementById("demo").innerHTML = myObj[0].numero;


   $('#suppr').remove();
   $('#champ').remove();
  $('#avec').remove();
  $('#ques').remove();


  var elementAjoute = document.createElement("div");

  elementAjoute.setAttribute("id","avec");

  document.getElementById("marche").appendChild(elementAjoute);

  var elementAjoute5 = document.createElement("a");
  elementAjoute5.setAttribute("class","btn btn-primary");
  elementAjoute5.setAttribute("href","#");
  elementAjoute5.setAttribute("id","met");
  elementAjoute5.setAttribute("role","button");
  a=parseInt(document.getElementById("compteur").getAttribute("data"))+1;
  elementAjoute5.innerHTML="la question n°"+a;
  document.getElementById("avec").appendChild(elementAjoute5);
/* --*/

max=0;

// $('#avec input:radio:checked').val();
for(i=0;i< myObj.length;i++)
{
  var elementAjoute = document.createElement("div");
  elementAjoute.setAttribute("class","form-check mt-5");
  elementAjoute.setAttribute("id","suppr"+i);

  document.getElementById("avec").appendChild(elementAjoute);
  var elementAjouteInput = document.createElement("input");
  elementAjouteInput.setAttribute("class","form-check-input mt-3");
  elementAjouteInput.setAttribute("type","radio");
  elementAjouteInput.setAttribute("name","exampleRadios");
  elementAjouteInput.setAttribute("value",""+myObj[i].phrase+"");
  document.getElementById("suppr"+i).appendChild(elementAjouteInput);
  var elementAjouteA = document.createElement("a");
  elementAjouteA.setAttribute("class","btn btn-primary");
  elementAjouteA.setAttribute("href","#");
  elementAjouteA.setAttribute("role","button");
  elementAjouteA.setAttribute("id","type"+i);
  elementAjouteA.setAttribute("value",myObj[i].phrase);
  elementAjouteA.innerHTML= myObj[i].phrase;
  document.getElementById("suppr"+i).appendChild(elementAjouteA);

if(max <= myObj[i].numero)
{
max=myObj[i].numero;
}


}
a=document.getElementById("compteur").getAttribute("data");
b=parseInt(a)+1;
document.getElementById("compteur").setAttribute("data",b);
//console.log(max);
max=parseInt(max)+1;
console.log(max);

//' 4 = max idéalement

if(b ==4)
{
  alert("test reussie félicitations");
  $('#suiv').remove();
        $('#ques').remove();
        $('#marche').remove();
}






//mysql il max(numero == data stop quizz)
//$('#suiv').remove();
/*
$rep104 = $bdd->query('SELECT * FROM question');
  $rep104 = $rep104->fetch();
if($rep104==b)
{
}
*/




    }
  };
  a=document.getElementById("compteur").getAttribute("data");
  
  xhttp.open("GET", "test.php?nb="+a, true);
  xhttp.send();


loadDoc1();
// incrémente a
}


function loadDoc1() {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      let myObj = JSON.parse(this.responseText);
      console.log(myObj);
    //  document.getElementById("demo").innerHTML = this.responseText;
      if(document.getElementById("compteur").getAttribute("data")==this.responseText+1)
      {
        $('#suiv').remove();
        $('#ques').remove();
        $('#marche').remove();
        //feliciation quizz terminer votre score
 // créer un bouton fin
      }
    }
  };
  xhttp.open("GET", "teste1.php", true);
  xhttp.send();
}


</script>

<!--
<div class="form-check mt-5">
  <input class="form-check-input mt-3" type="radio" name="exampleRadios" id="exampleRadios1" value="option1" checked>
  <label class="form-check-label" for="exampleRadios1">
  <a class="btn btn-primary" href="#" role="button">Choix1</a>
  </label>
</div>
<div class="form-check mt-3">
  <input class="form-check-input mt-3" type="radio" name="exampleRadios" id="exampleRadios2" value="option2">
  <label class="form-check-label" for="exampleRadios2">
  <a class="btn btn-primary" href="#" role="button">Choix2</a>
  </label>
</div>
<div class="form-check mt-3">
  <input class="form-check-input mt-3" type="radio" name="exampleRadios" id="exampleRadios3" value="option3">
  <label class="form-check-label" for="exampleRadios3">
  <a class="btn btn-primary" href="#" role="button">Choix3</a>
  </label>
</div>
-->