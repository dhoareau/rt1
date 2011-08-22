function saisirTexte(message) {
    return prompt(message)
}

function saisirNombre(message) {
    var r = prompt(message) ;
    return eval(r) ;
}

function afficher(s) {
    document.write(s) ;
}

function afficherL(s) {
    document.write(s +"</br>") ; 
}


