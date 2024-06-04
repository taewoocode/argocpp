console.time("test")
let sum = 0;
for(let i = 0; i < 100000; i++){
    sum += 1;
}
console.timeEnd("test")