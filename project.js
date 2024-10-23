
const prompt = require("prompt-sync")();


const ROWS = 3;
const COLS =3;

const SYMBOLS_COUNT ={
    "A":2,
    "B":4,
    "C":6,
    "D":8
}

const SYMBOLS_VALUES ={
    "A":5,
    "B":4,
    "C":3,
    "D":2

}








const deposit = () => {
    while (true){
    const depositAmount = prompt("Enter a deposit amount: ");
    const numberdepositAmount = parseFloat(depositAmount);

    if(isNaN(numberdepositAmount) || numberdepositAmount <=0){
        console.log("Invalid deposit amount try again");
    }else{
        return numberdepositAmount;
    }
  }
};

const getnmberoflines = () =>{
    while (true){
        const lines = prompt("Enter the number of lines to bet on(1-3): ");
        const numberoflines = parseFloat(lines);
    
        if(isNaN(numberoflines) || numberoflines <=0 || numberoflines > 3){
            console.log("Invalid number of lines try again");
        }else{
            return numberoflines;
        }
      }

};
const getbet = (balance,lines) =>{
    while (true){
        const bet = prompt("Enter the total bet per line: ");
        const numberbet = parseFloat(bet);
    
        if(isNaN(numberbet) || numberbet <=0 || numberbet > balance / lines){
            console.log("Invalid bet try again");
        }else{
            return numberbet;
        }
      }


};

const spin = () =>{
    const symbols = [];
    for (const [symbol,count] of Object.entries(SYMBOLS_COUNT)){
        for (let i = 0; i<count; i++){
            symbols.push(symbol);
        }
    }
    const reels = [];
    for(let i=0; i<COLS;i++){
        reels.push([]);
        const reelsymbols = [...symbols];
        for(let j = 0;j < ROWS;j++){
            const randomIndex = Math.floor(Math.random()*reelsymbols.length);
           const selectedSymbol = reelsymbols[randomIndex];
           reels[i].push(selectedSymbol);
           reelsymbols.splice(randomIndex, 1);

        }
    }
    return reels;
};
const transpose = (reels) =>{
    const rows =[];

    for(i = 0; i < ROWS; i++){
        rows.push([]);
        for(let j = 0; j < COLS; j++){
            rows[i].push(reels[j][i])
        }
    }
    return rows;
};
const printrows = (rows)=>{
    for(const row of rows){
        let rowString = "";
        for(const[i,symbol] of row.entries()){
            rowString += symbol
            if (i != row.length - 1){
                rowString += " | "
            }
        }
        console.log(rowString)
    }
};
const getwinnings = (rows,bet,lines) =>{
    let winnings = 0;
    for (let row = 0; row < lines; row++){
        const symbols = rows[row];
        let allsame = true;

        for (const symbol of symbols){
            if(symbol != symbol[0]){
                allsame = false;
                break;
            };
        }
        if(allsame){
            winnings += bet*SYMBOLS_VALUES[symbols[0]];
        }
        
    }
    return winnings;
};
const game = () =>{



let balance = deposit();
while(true){
    console.log("You have a balance of $"+ balance);
    const numberoflines = getnmberoflines();
    const bet = getbet(balance,numberoflines);
    balance -= bet*numberoflines;

const reels= spin();
const rows = transpose(reels);
printrows(rows);
const winnings = getwinnings(rows,bet,numberoflines);
balance += winnings;
console.log ("You won,$" + winnings.toString());

if(balance <=0){
    console.log("You ran out of money");
    break;
}
const playagain = prompt("Do you want to play again?(y/n) ")
if (playagain !="y") 
    break;
    }
};
game();