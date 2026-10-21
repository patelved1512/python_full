
let cart = [];

export function addToCart(item) {
  cart.push(item);
  console.log(item.name + " added to cart");
}

export function removeFromCart(itemName) {
  cart = cart.filter(item => item.name !== itemName);
  console.log(itemName + " removed from cart");
}

export function calculateTotal() {
  return cart.reduce((total, item) => total + item.price, 0);
}
