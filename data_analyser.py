import math #import the math-library for the sqrt-function

ORIGINAL_FILE_PATH = "original_data" #Folder that contains the data that was output by the SpaceInANutshell program, that contains the simulation data where there are no changes to the starting data
CURRENT_FILE_PATH = "dM=-10^12" #Folder that contains the data that was output by the SpaceInANutshell program, but where there were changes to the starting data.
OUTPUT_FILE_PATH = "analysed_data_-1e12" #Folder where this program's output data should be stored

PLANETS = ["sun", "mercury", "venus", "earth", "mars", "jupiter", "saturn", "uranus", "neptune"] #List of all the planets, using their names used in the SpaceInANutshell program
MAX_RUN = 174 #Number of simulations ran
STEP_SIZE = 10000 #Number of lines it can skip each time, so we don't end up with terabytes of data. (Note: this does NOT have to be the same value as the stepsize used in SpaceInANutshell)
TOTAL_LINES = 1000000 #Total number of lines in an inputfile. This should be the same value as the "Amount of Timesteps" used in SpaceInANutshell.

#Method that reads a certain line from a certain file
def readline_num(input_file, x):
	print(x)
	for index, line in enumerate(iter(input_file)):
		if index + 1 == x:
			return line
	return None

for i in range(1, MAX_RUN): #Iterate through all the simulations executed earlier.
	
	for p in PLANETS: #Go through all planets
		line = 1
		
		original_file = open(ORIGINAL_FILE_PATH + "/" + p + "1.txt") #Open the file, belonging to this planet containing the data without any changes to the starting data.
		current_file = open(CURRENT_FILE_PATH + "/" + p + str(i) + ".txt") #Open the file, belonging to this planet containing the data where there are changes to the starting data.
		output_file = open(OUTPUT_FILE_PATH + "/" + p + str(i) + ".txt", 'a') #Open the file it should output data to
		while line <= TOTAL_LINES: #Go through every line
			
			line += STEP_SIZE #Skip the amount of lines as specified by the STEP_SIZE-constant
			original_line = original_file.readline_num(line) #Read a line from the file without any changes to the starting data.
			current_line = current_file.readline_num(line) #Read a line from the file with changes to the starting data.
			original_array = original_line.split() #Split the line in pieces.
			current_array = current_line.split() #Split the line in pieces.
			
			time = int(original_array[0]) #Read in the time
			#Compare the data with changes to the starting data to the data where there are actually changes to the starting data
			dx = float(original_array[1]) - float(current_array[1]) 
			dy = float(original_array[2]) - float(current_array[2])
			dz = float(original_array[3]) - float(current_array[3])
			ds = math.sqrt(dx * dx + dy * dy + dz * dz) #Pythagorean Theorem
			
			dvx = float(original_array[4]) - float(current_array[4])
			dvy = float(original_array[5]) - float(current_array[5])
			dvz = float(original_array[6]) - float(current_array[6])
			dv = math.sqrt(dvx * dvx + dvy * dvy + dvz * dvz) #Pythagorean Theorem
			output_file.write(str(time) + " " + str(dx) + " " + str(dy) + " " + str(dz) + " " + str(ds) + " " + str(dvx) + " " + str(dvy) + " " + str(dvz) + " " + str(dv) + "\n") #Write all the data just calculated to the output file.
			
			
