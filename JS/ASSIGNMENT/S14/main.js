
import {
  formatSongTitle,
  getSongDurationInMinutes
} from "./spotifyutils.js";

const title = "shape of you";
const duration = 234;

console.log("Song Title:", formatSongTitle(title));
console.log("Song Duration:", getSongDurationInMinutes(duration));


import {
  addToCart,
  removeFromCart,
  calculateTotal
} from "./cartUtils.js";

addToCart({ name: "Mobile", price: 15000 });
addToCart({ name: "Headphones", price: 2000 });
addToCart({ name: "Charger", price: 500 });

console.log("Total:", calculateTotal());

removeFromCart("Headphones");

console.log("Updated Total:", calculateTotal());
