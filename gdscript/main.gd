extends SceneTree

var rng = RandomNumberGenerator.new()

func _init():
	var args = OS.get_cmdline_args ()
	var n = int(args[2])
	
	var array = []
	
	rng.randomize()
	
	for _i in range(n):
		array.push_back(rng.randf_range(0, n))
	
	
	array.sort()
	quit()
