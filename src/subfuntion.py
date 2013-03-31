import re
def parseCrestOutput(crestc_output,run_crest_output):
	temp = re.findall(r'\w+\sbranches',crestc_output)
        tks = temp[0].split(" ")
        branches = tks[0]
	covereds = re.findall(r'covered\s\d+',run_crest_output)
	maxBranch = 0
	print covereds
	for covered in covereds:
		maxBranch = max(maxBranch, int(covered[8:]))
	ratio = float(maxBranch)/float(branches)
        return ratio


table_depth = {} #table by depth to store the total time
def aggregatedByDepth(depth, timing, coverage):
	if depth not in table_depth:
		table_depth[depth] = [timing, coverage, 1]
	else:
		table_depth[depth][0] += timing
		table_depth[depth][1] += coverage
		table_depth[depth][2] += 1


def getAverage():
	f = open("result.txt", "w")
	f.write("depth\ttime\tcoverage\n")
	for key in table_depth:
		timing = table_depth[key][0]
		num_file = table_depth[key][2]
		coverage = table_depth[key][1]
		average_timing = timing/num_file
		average_coverage = coverage/num_file
		line = str(key) +'\t'+str(average_timing)+'\t'+str(average_coverage)+'\n'
		f.write(line)
	f.close()


runcrest = "Iteration 0 (0s): covered 0 branches [0 reach funs, 0 reach branches].\nIteration 1 (0s): covered 1 branches [1 reach funs, 8 reach branches].\nM$'s Z3 SOLVER . . . 1\nSolved the if at depth 9\nSolved the if at depth 10\nIteration 2 (0s): covered 5 branches [1 reach funs, 8 reach branches]."
crestcout = " attribute directive ignored [-Wattributes]\ngcc -D_GNUCC -o ./testfile_0_11_10_1 -I/home/xiaoye/study/crest-z3-master/bin/..\ninclude ./testfile_0_11_10_1.o /home/xiaoye/study/crest-z3-master/bin/../lib/libcrest.a -L/home/xiaoye/study/crest-z3-master/bin/../lib -lstdc++\nRead 22 branches.\nRead 37 nodes.\nWrote 20 branch edges."

print parseCrestOutput(crestcout,runcrest)

aggregatedByDepth(3, 0.003, 0.75)
aggregatedByDepth(3, 0.004, 1)
aggregatedByDepth(2, 0.003, 0.75)
aggregatedByDepth(2, 0.003, 0.15)
getAverage()


