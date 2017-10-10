#ifndef PLANE_H
#define PLANE_H

struct seat
{
	char status;
	bool is_booked;
};
class plane
{
	seat **first_class_;
	seat **economy_;
	int first_class_rows_, first_class_cols_, econ_rows_, econ_cols_;
public:
	plane();
	plane(int f_row, int f_col, int e_row, int e_col);
	void display_seats();
	void book_seat();
	void check_seat();
	void clear_seat();
	void clear_all_seats();
	~plane();
};

#endif //PLANE_H