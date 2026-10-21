
import formatFollowers from "./instaHelpers.js";

const users = [
  { name: "Rahul", followers: 1200 },
  { name: "Priya", followers: 2500000 },
  { name: "Amit", followers: 850 }
];

users.forEach(user => {
  console.log(
    user.name + ": " + formatFollowers(user.followers)
  );
});
