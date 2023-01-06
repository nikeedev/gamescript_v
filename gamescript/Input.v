module gamescript

import os

fn GetKey(info string) string
{
	print(info + " ")

	GotKey := os.get_line()

	return GotKey
}

