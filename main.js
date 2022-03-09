// exercice 1 

function doubeValues() {
    var arr = [0, 2, 5, 4, 1, 0, 3, 3, 6, 7];
    let res = [];
    for (let index = 0; index < arr.length; index++) {
        if (arr[index] === arr[index + 1]) {
            arr[index] = 0;
        } else {
            arr[index] = arr[index] * 2;
        }
        res.push(arr[index]);
    }
    document.getElementById("ex1").innerHTML = res;
    console.log(res);
    return res;
}

// exercice 3


function mostFrequentElement() {
    var arr = [2, 4, 4, 5, 2, 3, 3, 4, 5, 6, 6, 6, 1];
    let res = [];
    for (let x of arr) {
        let count = 0;
        for (let i of arr) {
            if (i === x) {
                count++;
            }
        }
        res.push(count);
    }
    document.getElementById("ex3").innerHTML = arr[res.indexOf(Math.max(...res))];
    return arr[res.indexOf(Math.max(...res))];
}

// exercice 4


function findIndex() {
    var names = ["Annie", "Bernard", "Daniel", "Jack", "Noel", "Paul", "Stela", "Tom"];
    var index = names.indexOf("Paul");
    document.getElementById("ex4").innerHTML = index;
}