
import {
  formatPrice,
  getDiscountedPrice
} from "./utils.js";

const items = [
  { name: "Shoes", price: 2000, discount: 10 },
  { name: "T-Shirt", price: 800, discount: 15 },
  { name: "Watch", price: 1500, discount: 20 }
];

items.forEach(item => {
  const finalPrice = getDiscountedPrice(
    item.price,
    item.discount
  );

  console.log("Product:", item.name);
  console.log("Original Price:", formatPrice(item.price));
  console.log("Discounted Price:", formatPrice(finalPrice));
  console.log("---------------------");
});


import getDiscountedPrice, {
  formatPrice
} from "./utils.js";

const price = 1000;
const discount = 20;

console.log("Original Price:", formatPrice(price));

const finalPrice = getDiscountedPrice(price, discount);

console.log("Discounted Price:", formatPrice(finalPrice));
