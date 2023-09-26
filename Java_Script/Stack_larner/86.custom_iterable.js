/*
Recourse link: https://www.geeksforgeeks.org/how-to-create-custom-iterators-and-iterables-in-javascript/

How to do Iterators and Iterables Work in JavaScript?

In JavaScript, an iterable is any object that has a Symbol.iterator property that returns an iterator. The Symbol.iterator is a built-in symbol that represents the default iterator for an object. The iterator itself is an object with a next() method that returns an object with two properties: value and done. The value property contains the next item in the collection, while the done property is a Boolean value that indicates whether the iterator has reached the end of the collection.

Example: Let’s take a look at an example to better understand how iterators and iterables work in JavaScript:

*/



let iterable = [1, 2, 3, 4, 5];
let iterator = iterable[Symbol.iterator]();

console.log(iterator.next());
console.log(iterator.next());
console.log(iterator.next());
console.log(iterator.next());
console.log(iterator.next());
console.log(iterator.next());



/*
In the above example, we created an array named iterable with five items. We then obtained an iterator for this array using the Symbol.iterator property and stored it in the variable iterator. We then called the next() method on the iterator five times to retrieve each item in turn. When we called next() for the sixth time, it returned an object with done: true, indicating that the iterator had reached the end of the collection. 

Creating Custom Iterators and Iterables: JavaScript also allows developers to create their own custom iterators and iterables. To do this, you need to define an object with a Symbol.iterator property that returns an iterator object. The iterator object should have a next() method that returns an object with the next item in the collection.
Here’s the syntax for creating iterators:

const iterator = {
      next: function() {
        // Return the next value in the sequence or
        // { done: true } if the sequence is complete
      }
};


The next() method returns an object with two properties: value, which is the next value in the sequence, and done, which is a boolean that indicates whether the sequence is complete.

Example: Here’s an example of creating a custom iterator for an array:

*/


const myArray = [1, 2, 3];

const myIterator = {
  currentIndex: 0,
  next: function () {
    if (this.currentIndex < myArray.length) {
      return {
        value: myArray[this.currentIndex++],
        done: false
      };
    } else {
      return { done: true };
    }
  }
};

console.log(myIterator.next()); // { value: 1, done: false }
console.log(myIterator.next()); // { value: 2, done: false }
console.log(myIterator.next()); // { value: 3, done: false }
console.log(myIterator.next()); // { done: true }

/*
In this example, myArray is an array with three elements. myIterator is an object with a next() method that returns an object with a value property and a done property. The currentIndex property keeps track of the current index in the array.

When the next() method is called, it first checks whether the currentIndex is less than the length of the array. If it is, it returns an object with the value at the current index and sets the done property to false. If the currentIndex is equal to or greater than the length of the array, it returns an object with the done property set to true.

Syntax for Creating an Iterable:

const iterable = {
      [Symbol.iterator]: function() {
    // Return an iterator object
      }
};
The [Symbol.iterator] method returns an iterator object that can be used to iterate over the values in the iterable. 

Example: Here’s an example of using a custom iterable:

*/

let myIterable = {
  items: [1, 2, 3, 4, 5],
  [Symbol.iterator]() {
    let index = 0;
    return {
      next: () => {
        if (index < this.items.length) {
          return {
            value: this.items[index++],
            done: false,
          };
        } else {
          return { value: undefined, done: true };
        }
      },
    };
  },
};

for (let item of myIterable) {
  console.log(item);
}


/*


In the above example, we defined an object named myIterable that has an array of items and a Symbol.iterator property that returns an iterator object. The iterator object has a next() method that returns the next item in the items array until it reaches the end of the array. We can then use a for…of loop to iterate over the items in myIterable.

Conclusion: Iterators and iterables are powerful tools in JavaScript that allow developers to work with collections of data in a flexible and efficient way. JavaScript has built-in support for iterators and iterables, and also allows developers to create their own custom implementations. Understanding these concepts is essential for writing more advanced and effective code in JavaScript.



*/
