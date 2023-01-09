module gamescript

import os

pub fn get_key(info string) string
{
	print(info + " ")

	got_key := os.get_line()

	return got_key
}

