function fact(x) {
    if (x==1) {return 1;}
    return x*fact(x-1);
}

let x = 3;
console.log(fact(x));