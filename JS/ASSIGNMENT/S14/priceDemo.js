
import {
  formatPrice,
  getDiscountedPrice
} from "./utils.js";

const price = 1000;
const discount = 20;

console.log("Original Price:", formatPrice(price));

const finalPrice = getDiscountedPrice(price, discount);

console.log("Discounted Price:", formatPrice(finalPrice));
