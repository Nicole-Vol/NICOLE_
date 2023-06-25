#ifndef LINKEDLISTH
#define LINKEDLISTH

#define FALSE 0
#define TRUE !FALSE
#define PATH_SIZE 100

// Frame struct
typedef struct Frame
{
	char*		name;
	unsigned int	duration;
	char		path[PATH_SIZE];
} Frame;


// Link (node) struct
typedef struct FrameNode
{
	Frame* frame;
	struct FrameNode* next;
} FrameNode;


/*
function for finding a frame,
from all of the frames that are contained in the GIF,
specificly by the frame's name that passed to the function.

input: linked list(first node), frame's name
output: if frame is present - return 0
		else - message print for missing frame - return 1
*/
int find_frame_by_name(Frame* head, char* name);


// ***FUNCTIONS ACCORDING TO ACTIONS' OPTIONS*** //

/*
function for adding a new frame(node) to the GIF clip.(linked list)

input: linked list(first node), frame's name, frame's duration value, frame's path - string 
output:
*/
Frame* add_new_frame(Frame* head, char* name, unsigned int duration, char path[PATH_SIZE]);


/*
function for removing the whole made GIF clip,
by freeing the memory of each node - frame.

input: linked list(first node)
output: none
*/
void remove_whole_clip(Frame* head);


/*
function for changing the index\placement,
of a specific's frame, with a new specified index,
from the GIF clip.

input: linked list(first node), index
output:
*/
Frame* change_frame_place(Frame* head, int new_replace_index);


/*
function for changing the duration of a specific frame from the GIF,
according to the gotten value and frame name.

input: linked list(first node), duration value
output:
*/
Frame* change_frame_duration(Frame* head, int duration);


/*
function for changing the duration of the while GIF clip,
by the help of the function "change_frame_function()",
by changing the length of each frame to the same using a mathmatical calc.

input: linked list(first node), whole GIF duration value
output:
*/
Frame* change_whole_clip_duration(Frame* head, int clip_duration);


/*
function for printing the content of each node in the list,
that reperesents the info. about the specific frame-node.

input: linked list(first node)
output: none
*/
void print_linked_list(Frame* head);







#endif
