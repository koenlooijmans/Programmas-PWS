#Simple Python 3 program to create a ds-dM table from the data outputted by data_analyser.py. This program will only work on the data returned by data_analyser.py, not on the data returned by SpaceInANutshell.cpp

INPUT_FILE_PATHS = [ "dm=-1e23", "dm=1e23"] #Names of the folders in which the data from data_analyser.py is placed.
MASSES = [-1e23, 1e23] #The differences in Jupiter's mass corresponding with each folder. They have to be in the same order.
OUTPUT_FILE_PATH = "analysed_data" #Folder to which this program should output its data.
MAX_RUNS = [173, 196] #The amount of files per planet each folder contains.
TOTAL_LINES = 100 #The amount of lines those said files contain.
PLANETS = ["sun", "mercury", "venus", "earth", "mars", "jupiter", "saturn", "uranus", "neptune"] #The names of all planets used in those files.

#Method that reads a certain line from a certain file
def readline_num(input_file, x):
	print(x)
	for index, line in enumerate(iter(input_file)):
		if index + 1 == x:
			return line
	return None

#Main part of the program
for i in range(1, TOTAL_LINES): #Go through every line
	for p in PLANETS: #Go through all planets
		output_file = open(OUTPUT_FILE_PATH + "/" + p + ",t=" + str(i) + "e8" +".txt", "a") #Open an outputfile for said planet
		for j in range(len(INPUT_FILE_PATHS)): #go through all input folders
			for k in range(1, MAX_RUNS[j]): #Go through all files belonging to this planet, in this folder
				input_file = open(INPUT_FILE_PATHS[j] + "/" + p + str(k) + ".txt") #Open said file
				temp_string = readline_num(input_file, i) #Read the line that contains the relevant information
				temp_list = temp_string.split(" ") #Split the string in pieces
				input_file.close() #Close the file
				
				mass = str(MASSES[j] * k) #Calculate the difference in Jupiter's mass
				x = temp_list[1] #Read the difference in the x-value from the input file
				y = temp_list[2] #Read the difference in the y-value from the input file
				z = temp_list[3] #Read the difference in the z-value from the input file
				s = temp_list[4] #Read the difference in the s-value from the input file
				
				vx = temp_list[5] #Read the difference in the vx-value from the input file
				vy = temp_list[6] #Read the difference in the vy-value from the input file
				vz = temp_list[7] #Read the difference in the vz-value from the input file
				v = temp_list[8] #Read the difference in the v-value from the input file
				output_file.write(mass + " " + x + " " + y + " " + z + " " + s + " " + vx + " " + vy + " " + vz + " " + v) #Write all those values to the output file
	print(i)

				
				
