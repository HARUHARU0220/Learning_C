#pragma once
class VecF {
	VecF add(const VecF& fv) const {
	}

	void print() const {
		cout << "["
			for (int i = 0; i < n; i++)
				cout << arr[i] << " "; 
		cout << "]"; 
	}
};