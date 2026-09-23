// 1. Pehle HTML se Button aur Heading ko dhoodh kar JS me laye
const button = document.getElementById("myBtn");
const heading = document.getElementById("demo");

// 2. Button par click hone ka intezar karo (Event Listener)
button.addEventListener("click", function() {
    // Jaise hi click hoga, ye andar ka maal chal jayega
    heading.innerHTML = "Hello Arya! 👋";
    heading.style.color = "lightgreen"; // Thoda style bhi badal dete hain!
});