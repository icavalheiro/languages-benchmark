import Random;

class Main {
	static function main() {
		var n:Int = Std.parseInt(Sys.args()[0]);
		var vector = new haxe.ds.Vector<Int>(n);

		for (i in 0...n) {
			vector[i] = Random.int(0, n);
		}

		quickSort(vector, 0, n - 1, n);
	}

	static function swap(vector:haxe.ds.Vector<Int>, el1:Int, el2:Int) {
		var swapedElem = vector[el1];
		vector[el1] = vector[el2];
		vector[el2] = swapedElem;
	}

	static function quickSort(vector:haxe.ds.Vector<Int>, leftPos:Int, rightPos:Int, length:Int) {
		var initialLeftPos = leftPos;
		var initialRightPos = rightPos;
		var direction = true;
		var pivot = rightPos;
		while ((leftPos - rightPos) < 0) {
			if (direction) {
				if (vector[pivot] < vector[leftPos]) {
					swap(vector, pivot, leftPos);
					pivot = leftPos;
					rightPos--;
					direction = !direction;
				} else
					leftPos++;
			} else {
				if (vector[pivot] <= vector[rightPos]) {
					rightPos--;
				} else {
					swap(vector, pivot, rightPos);
					leftPos++;
					pivot = rightPos;
					direction = !direction;
				}
			}
		}
		if (pivot - 1 > initialLeftPos) {
			quickSort(vector, initialLeftPos, pivot - 1, length);
		}
		if (pivot + 1 < initialRightPos) {
			quickSort(vector, pivot + 1, initialRightPos, length);
		}
	}
}
