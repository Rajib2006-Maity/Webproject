// let random = Math.random();
// let a = prompt("Enter first number")
// let c = prompt("Enter operation")

// let b = prompt("Enter second number")

// let obj = {
//     "+": "-",
//     "*": "+",
//     "-": "/",
//     "/": "**",
// }

// if (random < 0.1) {
//     console.log(`The result is ${a} ${c} ${b}`)
//     alert(`The result is ${eval(`${a} ${c} ${b}`)}`)
// }

// else {
//     c = obj[c]
//      alert(`The result is ${eval(`${a} ${b} ${c}`)}`)
// }

let random = Math.random();
let a = Number(prompt("Enter first number:"));
let c = prompt("Enter operation (+, -, *, /):");
let b = Number(prompt("Enter second number:"));

let obj = {
    "+": "-",
    "*": "+",
    "-": "/",
    "/": "**",
};


if (isNaN(a) || isNaN(b) || !obj.hasOwnProperty(c)) {
    alert("Invalid input. Please enter valid numbers and an operation (+, -, *, /).");
} else {
    if (random < 0.1) {
        console.log(`The result is ${a} ${c} ${b}`);
        alert(`The result is ${eval(`${a} ${c} ${b}`)}`);
    } else {
        let twistedOp = obj[c];
        console.log(`Twisted operation: ${a} ${twistedOp} ${b}`);
        alert(`The result is ${eval(`${a} ${twistedOp} ${b}`)}`);
    }
}

