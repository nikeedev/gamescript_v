module gamescript

import term

pub fn paint_game(position Vector2, player string, world_size Vector2)
{
	term.set_terminal_title(term.header("Gamescript", "-"))
	print(" ")
	for k := 0; k < world_size.x; k++ {
		print("___")
	}
	println("")
	for j := 0; j < world_size.y; j++
	{
		print("|")
		for i := 0; i < world_size.x; i++
		{
			print("  ")
			if i == position.x - 1
			{
				if j == position.y
				{
					print(term.hex(0x64ff1c, player))
				}
				else {
					print(" ")
				}
			}
			else {
				print(" ")
			}
		}
		print("|")
		if !(j > world_size.y - 1) {
			print("\n")
		}
	}
	print(" ")
	for g := 0; g < world_size.x; g++ {
		print("---")
	}
	println("")
}
