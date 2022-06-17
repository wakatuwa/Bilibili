// const mark = {
// 	fullName: 'Mark Miller',
// 	mass: 78,
// 	height: 1.69,
// 	calcBMI: function () {
// 		this.bmi = this.mass / this.height ** 2;
// 		return this.bmi;
// 	}
// };
// const john = {
// 	fullName: 'John Smith',
// 	mass: 92,
// 	height: 1.95,
// 	calcBMI: function () {
// 		this.bmi = this.mass / this.height ** 2;
// 		return this.bmi;
// 	}
// }


// mark.calcBMI();
// john.calcBMI();
// console.log(mark.bmi, john.bmi);

// if (mark.bmi > john.bmi) {
// 	console.log(+mark.fullName + 's BMI' + '');
// }

// const jonasArray = {
// 	'Jonas',
// 	'Schmedtmann',
// 	2037 - 1991,
// 	'teacher',
// 	['Michael', 'Peter', 'Steven']
// };

// for (let rep = 1; rep <= 10; rep++) {
// 	console.log(`Lifting weights repetition ${rep} );
// };


//console.log(jonas[0])
//console.log(jonas[1])
//...
//console.log(jonas[4])
// for (let i = 0; i < 5; i++) {
// 	console.log(jonas[i]);
// }

// const jonasArray = [
// 	'Jonas',
// 	'Schmedtmann',
// 	2037 - 1991,
// 	'teacher',
// 	['Michael', 'Peter', 'Steven']
// ];
/*
const jonas = {
	firstName: 'Jonas',
	lastName: 'Schmedtmann',
	age: 2037 - 1991,
	job: 'teacher',
	friends: ['Michael', 'Peter', 'Steven']
};

console.log(jonas);
console.log(jonas.lastName);
console.log(jonas['lastName']);

const nameKey = 'Name';
console.log(jonas['first' + nameKey]);
console.log(jonas['last' + nameKey]);

//console.log(jonas.'last) + nameKey;
const interestedIn = prompt('What do you want to know about Jonas? Choose between firstName, lastName, age, job and friends');
//console.log(interestedIn);

if (jonas[interestedIn]) {
	console.log(jonas[interestedIn]);
} else {
	console.log('Wrong request! Choose between firstName, lastName, age, job and friends');
}

jonas.location = 'Portugal';
jonas['twitter'] = '@jonasschmedtmann';
console.log(jonas);

//Challenge
//"Jonas has 3 friends, and his best friend is
//called Michael"
console.log(`${jonas.firstName} has ${jonas.friends.length} friends, and his best friend is called ${jonas.friends[0]}`);
*/
/*
const jonas = {
	firstName: 'Jonas',
	lastName: 'Schmedtmann',
	birthYeah: 1991,
	job: 'teacher',
	friends: ['Michael', 'Peter', 'Steven'],
	hasDriversLicense: false,

	// calcAge: function (birthYeah) {
	// 	return 2037 - birthYeah;
	// }
	calcAge: function () {
		//console.log(this.birthYeah);
		this.age = 2037 - this.birthYeah;
		return this.age;
	},

	getSummary: function () {
		return `${this.firstName} is a ${this.calcAge()}-year old ${jonas.job}, and he has ${this.hasDriversLicense ? 'a' : 'no'} drivers's license.`
	}
};

console.log(jonas.calcAge());
console.log(jonas.age);
//console.log(jonas['calcAge'](1991));
console.log(jonas.getSummary());

//Challenge
//"Jonas is a 46-year old teacher., and he a has a driver's licenses"

for (let rep = 1; rep <= 10; rep++) {
	console.log(`Lifting weights repetition ${rep}`);
}


const types = [];

for (let i = 0; i < jonas.length; i++) {
	//Reading from jonas array
	console.log(jonas[i], typeof jonas[i]);

	//Filling types array
	//types[i] = typeof jonas[i];
	types.push(typeof jonas[i]);
}

console.log(types);

const years = [1991, 2007, 1969, 2020];
const ages = [];

for (let i = 0; i < years.length; i++) {
	ages.push(2037 - years[i]);
}
console.log(ages);

//continue and break

for (let i = 0; i < jonas.length; i++) {
	if (typeof jonas[i] !== 'string') continue;

	console.log(jonas[i], typeof jonas[i]);
}
const jonas = [
	'Jonas',
	'Schmedtmann',
	2037 - 1991,
	'teacher',
	['Michael', 'Peter', 'Steven'],
	true,
];

for (let i = jonas.length - 1; i >= 0; i--) {
	console.log(i, jonas[i]);
}


let dice = Math.trunc(Math.random() * 6) + 1;

console.log(dice);
while (dice !== 6) {
	console.log(`You rolled a ${dice}`);
	dice = Math.trunc(Math.random() * 6) + 1;
	if (dice === 6) console.log('Loop is about to end...');
}

const bills = [22, 295, 176, 440, 37, 105, 10, 1100, 86, 52];
const tips = [];
const totals = [];
const calcTip = function (bill) {
	return bill >= 50 && bill <= 300 ? bill = bill * 0.15 : bill * 0.2;
}
for (let i = 0; i < bills.length; i++) {
	const tip = calcTip(bills[i]);
	tips.push(tip);
	totals.push(tip + bills[i]);
}
console.log(bills, tips, totals);

const calcAverage = function (arr) {
	let sum = 0;
	for (let i = 0; i < arr.length; i++) {
		sum += arr[i];
	}
	console.log(sum);
	return sum / arr.length;
}

console.log(calcAverage[2, 3, 7]);
console.log(calcAverage(totals));
console.log(calcAverage(tips));
*/
/*




"use strict";

const temperatures = [3, -2, -6, -1, 'error', 9, 13, 17, 15, 14, 9, 5];
const calcTempAmplitude = function (t1, t2) {
	const temps = t1.concat(t2);
	console.log(temps);

	let max = temps[0];
	let min = temps[0];

	for (let i = 1; i < temps.length; i++) {
		const curTemp = temps[i];
		if (typeof curTemp !== 'number') continue;
		if (curTemp > max)
			max = curTemp;
		if (curTemp < min)
			min = curTemp;
	}
	console.log(max, min);
	return max - min;
};

const amplitudeNew = calcTempAmplitude([3, 5, 1], [9, 0, 5]);
const amplitude = calcTempAmplitude(temperatures);
console.log(amplitude);

const measureKelvin = function () {
	const measurement = {
		type: 'temp',
		unit: 'celsius',
		value: prompt('Degrees celsius:'),
	}

	console.table(measurement);
	// console.log(measurement.value);
	// console.warn(measurement.value);
	// console.error(measurement.value);
	const kelvin = parseInt(measurement.value) + 273;
	return kelvin;
}
console.log(measureKelvin());

const printForecast = function (arr) {

	for (let i = 0; i < arr.length; i++) {
		console.log(`${arr[i]}℃ in ${i} days.`);
	}
}
arr1 = [17, 21, 23];
arr2 = [12, 5, -5, 0, 4];
printForecast(arr1);
printForecast(arr2);
*/