module main

import gamescript
import term

fn main()
{

	mut world_size := gamescript.Vector2{40, 40}
	mut position := gamescript.Vector2{20, 20}
	mut key := ""
	mut running := true
	player := "#"


	for running == true {
		term.clear()
		if position.y <= -1 {
			position.y += 1
		}

		if position.y >= world_size.y {
			position.y -= 1
		}

		if position.x >= world_size.x {
			position.x -= 1
		}

		if position.x <= -1 {
			position.x += 1
		}

		gamescript.paint_game(
			position,
			player,
			world_size
		)

		println("")
		position.print()
		println("")

		key = gamescript.get_key("Write up / w | down / s | left / a | right / d or exit or e to exit: ")


		if key == "up" || key == "u" || key == "w" {
			position.y -= 1
		}

		else if key == "down" || key == "d" || key == "s" {
			position.y += 1
		}

		else if key == "left" || key == "l" || key == "a" {
			position.x -= 1
		}

		else if key == "right" || key == "r" || key == "d" {
			position.x += 1
		}
		else if key == "exit" || key == "e" {
			running = true
		}
		else {
			continue
		}
	}

	println("\nGame Finished")

}
