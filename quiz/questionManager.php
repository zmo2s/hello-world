<?php require 'question.php'; // J'inclus la classe.
// employe manager  qui prend en arametre la base de donnee et ajoute des employer 
class QuestionManager
{
    private $db;

    public function __construct($db)
    {
        $this->db=$db;
    }

    public function addQuestion(Question $emp)
    {
       
        $q=$this->db->prepare('INSERT INTO question(numero,phrase) VALUES(:numero,:phrase)');
        $q->bindValue(':numero',$emp->getNumero());
        $q->bindValue(':phrase',$emp->getPhrase());
   

        $q->execute();
    }

    public function listQuestion($nb)
    {
            $emp=[];

    

        $q=$this->db->query('SELECT * FROM question where numero='.$nb);



            while ($donnes =$q->fetch(PDO::FETCH_ASSOC))
             {
                 $emp[]=new Question($donnes['numero'],$donnes['phrase']);
             }

return $emp;
    }
}


/*
var_dump($manager);
$perso = new Question(1,"ouep");
$manager->addQuestion($perso);
var_dump($manager);
$manager->listQuestion();
echo "<pre>";
var_dump($manager->listQuestion());
echo "<pre>";
*/