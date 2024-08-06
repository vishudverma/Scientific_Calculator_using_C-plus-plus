// Import the WASM module
import { load } from "wasm";

// Load the WASM module
load("calculator.wasm").then((module) => {
  // Create a calculator object
  const calculator = {
    add: (num1, num2) => add(num1, num2),
    subtract: (num1, num2) => subtract(num1, num2),
    multiply: (num1, num2) => multiply(num1, num2),
    divide: (num1, num2) => divide(num1, num2),
  };

  // Create an HTML interface
  const html = `
    <input id="num1" type="number" />
    <input id="num2" type="number" />
    <select id="operation">
      <option value="+">+</option>
      <option value="-">-</option>
      <option value="*">*</option>
      <option value="/">/</option>
    </select>
    <button id="calculate">Calculate</button>
    <p id="result"></p>
  `;

  // Add event listeners and functionality
  document.getElementById("calculate").addEventListener("click", () => {
    const num1 = parseFloat(document.getElementById("num1").value);
    const num2 = parseFloat(document.getElementById("num2").value);
    const operation = document.getElementById("operation").value;

    let result;
    switch (operation) {
      case "+":
        result = calculator.add(num1, num2);
        break;
      case "-":
        result = calculator.subtract(num1, num2);
        break;
      case "*":
        result = calculator.multiply(num1, num2);
        break;
      case "/":
        result = calculator.divide(num1, num2);
        break;
    }

    document.getElementById("result").innerHTML = `Result: ${result}`;
  });
});
