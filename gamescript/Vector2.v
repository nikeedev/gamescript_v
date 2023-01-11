module gamescript

pub struct Vector2
{
pub mut:
	x int
	y int
}

pub fn (vec Vector2) print() {
	print("x: $vec.x, y: $vec.y")
}
