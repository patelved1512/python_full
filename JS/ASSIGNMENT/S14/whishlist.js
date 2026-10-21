
import {
  addToWishlist,
  removeFromWishlist,
  listWishlist
} from "./wishlistUtils.js";

addToWishlist("Mobile");
addToWishlist("Laptop");
addToWishlist("Headphones");

listWishlist();

removeFromWishlist("Laptop");

listWishlist();
