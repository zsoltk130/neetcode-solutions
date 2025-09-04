class DynamicArray {
    /**
     * @constructor
     * @param {number} capacity
     */
    constructor(capacity) {
        this.capacity = capacity;
        this.size = 0;
        this.array = new Array(capacity);
    }

    /**
     * @param {number} i
     * @returns {number}
     */
    get(i) {
        if (i < 0 || i >= this.size) {
            throw new Error("Index out of bounds");
        }
        return this.array[i];
    }
    
    /**
     * @param {number} i
     * @param {number} n
     * @returns {void}
     */
    set(i, n) {
        if (i < 0 || i >= this.size) {
            throw new Error("Index out of bounds");
        }
        this.array[i] = n;
    }

    /**
     * @param {number} n
     * @returns {void}
     */
    pushback(n) {
        if (this.size === this.capacity) {
            this.resize();
        }
        this.array[this.size] = n;
        this.size++;
    }

    /**
     * @returns {number}
     */
    popback() {
        return this.array[--this.size];
    }

    /**
     * @returns {void}
     */
    resize() {
        this.capacity *= 2;
        const newArray = new Array(this.capacity);
        for (let i = 0; i < this.size; i++) {
            newArray[i] = this.array[i];
        }
        this.array = newArray;
    }

    /**
     * @returns {number}
     */
    getSize() {
        return this.size;
    }

    /**
     * @returns {number}
     */
    getCapacity() {
        return this.capacity;
    }
}
