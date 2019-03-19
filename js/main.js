window.addEventListener("DOMContentLoaded", setup, false);

//gloabal variable :
var modal;
var btn;
var span;

function setup() {
    console.log("V5");

    // Get the modal
    modal = document.getElementsByClassName('modal');
    // Get the button that opens the modal
    btn = document.getElementsByClassName("modalOpener");

    // Get the <span> element that closes the modal
    span = document.getElementsByClassName("close");

    for (var i = 0; i < modal.length; i++) {
        
        btn[i].indx = i;
        modal[i].indx = i;
        span[i].indx = i;

        // When the user clicks the button, open the modal 
        btn[i].addEventListener("click", function () { 
            displayModal(modal[this.indx]);
        }, false);


        // When the user clicks on <span> (x), close the modal
        span[i].addEventListener("click", function () {
            closeModal(modal[this.indx]);
        }, false);

    }
}

function displayModal(modal) {
    modal.style.display = "block";
}

function closeModal(modal) {
    modal.style.display = "none";
}