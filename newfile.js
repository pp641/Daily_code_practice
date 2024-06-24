const ts = [1,2,3,4,5]
const ps = [...ts , 67]
console.log("ok", ps);
console.log([930 , ...ps])

const newobj = { 
    a:1 ,
    b:3,
    c:58
}

console.log(newobj)


const summber = [1,3,4,5,67,8,9];

const sum =  summber.reduce((accumulator , currentValue) => accumulator + currentValue , 0);
const finder = summber.filter((number)=> (number < 85));
console.log("okdo", finder)


