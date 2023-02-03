function changeDateContent() {
    const d1    = document.getElementById('d1');
    const d2    = document.getElementById('d2');
    const d3    = document.getElementById('d3');
    const d4    = document.getElementById('d4');
    const d5    = document.getElementById('d5');
    const d6    = document.getElementById('d6');
    const today = new Date();

    d1.innerHTML = today.toDateString();
    d2.innerHTML = today.toTimeString();
    d3.innerHTML = today.getDay();
    d4.innerHTML = today.getMonth();
    d5.innerHTML = today.getFullYear();
    d6.innerHTML = today.getTimezoneOffset();
}


function changeMathContent() {
    const m1 = document.getElementById('m1');
    const m2 = document.getElementById('m2');
    const m3 = document.getElementById('m3');
    const m4 = document.getElementById('m4');
    const m5 = document.getElementById('m5');
    const m6 = document.getElementById('m6');
    const m7 = document.getElementById('m7');
    const m8 = document.getElementById('m8');
    let   x  = Number(prompt("Enter a number"));

    m1.innerHTML = `floor(${x}) = ${Math.floor(x)}`;
    m2.innerHTML = `ceil(${x}) = ${Math.ceil(x)}`;
    m3.innerHTML = `pow(${x},2) = ${Math.pow(x,2)}`;
    m4.innerHTML = `sqrt(${x}) = ${Math.sqrt(x)}`;
    m5.innerHTML = `sin(${x}) = ${Math.sin(x)}`;
    m6.innerHTML = `cos(${x}) = ${Math.cos(x)}`;
    m7.innerHTML = `tan(${x}) = ${Math.tan(x)}`;
    m8.innerHTML = `random() = ${Math.random()}`;    
}


function changeStringContent() {
    const s1 = document.getElementById('s1');
    const s2 = document.getElementById('s2');
    const s3 = document.getElementById('s3');
    const s4 = document.getElementById('s4');
    const s5 = document.getElementById('s5');
    let   x  = prompt("Enter a string:");

    s1.innerHTML = x;
    s2.innerHTML = x.toUpperCase();
    s3.innerHTML = x.toLowerCase();
    s4.innerHTML = x.length;
    s5.innerHTML = x.repeat(2);
}



function main() {
    changeDateContent();
    changeMathContent();
    changeStringContent();
}

// Runs main() once DOM has loaded
window.onload = main