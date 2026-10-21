
let wishlist = [];

export function addToWishlist(item) {
  wishlist.push(item);
  console.log(item + " added to wishlist");
}

export function removeFromWishlist(item) {
  wishlist = wishlist.filter(product => product !== item);
  console.log(item + " removed from wishlist");
}

export function listWishlist() {
  console.log("Wishlist:", wishlist);
}
