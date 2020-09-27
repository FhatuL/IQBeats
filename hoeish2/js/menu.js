function toggleClass(menu) {
    menu.classList.toggle("burgerMenu");
    
}

const menuIcon = document.querySelector(".ham-icon");

menu = document.querySelector(".menu");

menuIcon.addEventListener("click", function (){
    toggleClass(menu);
});