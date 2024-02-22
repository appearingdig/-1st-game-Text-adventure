#include <iostream>
using namespace std;

int main() {

	//asking to start game
	int gs;
	cout << "Game start?\n";
	cout << "1) Yes\n2) No\n";
	cin >> gs;

	if (gs == 1) {
		cout << "Game start\n";
	}
	else if (gs == 2) {
		cout << "Closing Goodbye\n";
		return 0;
	}
	else
	{
		cout << "Invaild try again\n";
		return 0;
	}
	for (int i = 3; i >= 1; i--) {
		cout << i << "\n";
	}

	//first choice 
	int c1;
	cout << "You have decided to head to the city of Helemithn\n";
	cout << "You are heading down a path and you come across what looks to be a bandit's camp.\nYou see a few people sitting by a fire.\n";
	cout << "1) Attack them\n2) Sneak past them\n3) Turn around\n";
	cin >> c1;
	if (c1 == 1) {
		cout << "Walking up to the bandit’s camp you find a stick on the ground. You\nuse that to cave in the first bandit head. Doing this you break the stick\nforcing you to pull out your sword using it to run through the first one\nand cut open the second one’s stomach. You get enjoyment from\nwatching the life leave his eyes as his organs fall out of his stomach\non the ground in front of you. Next, you check the tents. You see\nwomen and children sleeping. You make sure to take their heads as \ntrophies. there were no bandits. This is when you have a revelation \nthat you can’t be forgiven and head deep into the woods so that no one can find you.\n";
		cout << "END";
		return 0;
	}
	else if (c1 == 2) {
		cout << "When trying to sneak past them you broke a twig alerting the \nbandits to your presents. There were no survivors just the blood mess\nyou left of the bodies of the families. There were no bandits. There \nwas one that you didn't kill in cold blood a boy that was hidden by his \nmother corps. He was under her and not able to move her for three\ndays before someone found him. He still hunts for you. He is going to \nkill you if it is the last thing he does\n";
		cout << "The cycle continues";
		
	}
	else if (c1 == 3) {
		cout << "You turn back and go home ending your quest. \n";
		cout << "END";
		return 0;
	}

	else
	{
		cout << "Invaild try again\n";
		return 0;
	}

	//choice 2
	int c2;
	cout << "You continue your travels trying to put the faces of the people you \nkilled in cold blood out of your head. They were going to attack you.\n";
	cout << "Keep telling yourself that...\n";
	cout << "After traveling for a bit you come across a river.\n";
	cout << "1) Just wade throught it\n2) See if there is another path\n3). . . \n";
	cin >> c2;

	if (c2 == 1) {
		cout << " You try and wade through the river but it becomes too deep so you \nhave to try and swim. Not wanting to turn around you continue \nswimming. You only make it about halfway before you drown. \n";
		cout << "END\n";
		return 0;
	}
	else if (c2 == 2) {
		cout << "You walk along the water's edge for a bit until you find a tree that \nhas fallen over letting you cross the river safely. Or so you think the \ntree snaps under your weight when you try to cross over. You drown in\nthe river weighed down by your armor.\n";
		cout << "END\n";
		return 0;
	}
	else if (c2 == 3) {
		cout << "That was a family.\nYou hear a voice yelling behind you. You turn to \nsee where the voice is coming from, there is nothing just the path that\nyou have been walking down for the last couple of days. You start \nrunning along the water's edge for a bit until you find a tree that has fallen.\n You use the tree to leap over the river. You think you are being \nfollowed, but you're not sure. The voice sounded familiar, you shook \nthe thought from your mind.\n";
		
	}
	else
	{
		cout << "Invaild try again\n";
		return 0;
	}

	//choice 3
	int c3;
	cout << "After a bit of running, you are becoming tired.\nYou have no idea if anything is following you.\nYou never thought to look behind you\n";
	cout << "1) Keep running \n2) Take a break\n";
	cin >> c3;

	if (c3 == 1) {
		cout << "You run until your legs collapse under you. You can't fight back\nwhen the people in the family that you didn’t murder find you. \n . . .\nThey dounspeakable things to you and… your dead body. \n";
		cout << "END";
		return 0;
	}

	else if (c3 == 2) {
		cout << "After your legs start to tire you decide to take a break from running\nand set up camp for the night. You're sure that nothing is following you. You make something to eat and turn in for the night. You start \ndreaming, your dream is more vivid this night than any other dream \nyou've had. You see a farm and a field in the middle of the field there \nis a woman and flowers all around her gently flowing the the breeze. \nYou can’t see her you can only see the white dress that she is \n wearing. You don’t need to see her face to know that the person is she is your wife.\n";

	}
	else
	{
		cout << "Invaild try again\n";
		return 0;
	}

	//choice 4
	int c4;
	cout << "1) Go to her \n";
	cout << "2) Try to wake up\n";
	cin >> c4;

		if (c4 == 1) {
			cout << "You have the feeling you can start over and be a family again. You \nrun to her but with every step you take things change and get worse in \nways that you can't describe. You don’t care you want nothing more\nthan to hold her in your arms even if it is just a dream. You can just \ndream forever.  You make it to her. You see that her skin is a pal white.\nYou go to put your arms around her. As you touch her she blows away\nand everything around you blows away. You drop to your knees. \nSuddenly your eyes shoot open you hear a noise.\n";

		}

		else if (c4 == 2) {
			cout << "You know this is fake what you had is gone, never coming back. \nYou take out your sword and drive it through your stomach. You don't\nwake up again.\n";
			cout << "END";
			return 0;
		}
		else
		{
			cout << "Invaild try again\n";
			return 0;
		}

	//choice 5
	int c5;
	cout << "1) Hide\n2) See what the noise is\n";
	cin >> c5;
		
		if (c5 == 1) {
			
			cout << "You hid letting whatever was making the noise get close to you \nhoping whatever it is won't find you. You hear the voice again saying \nYou will never be forgiven GOD CAN'T LOVE YOU ANYMORE\nAs the noise gets closer to where you're hiding the voice becomes\n unbearable. You just want the voice to stop. You know what the voice\n wants you to do. You jump out of your hiding spot and you see a\nfamily of 6 who don’t seem to have any weapons on them. You don't \ncare you kill all of them. After a while, a hunting party was sent out to\nfind whoever was killing and eating people in the forest. They \neventually find you and you’re publicly hung for your crimes.\n";
			cout << "END";
			return 0;
		}

		else if (c5 == 2) {
			cout << "You start walking toward the noise ready to fight the thing that has \nbeen following you. It is a traveling family of 6 a father, a \nmother, and 4 kids. They don't seem to be armed and look very poor\nThe father speaks up after seeing you. He asks you where you are \nheading. You explain to them that you are heading to the city for . . .\nThey seem worried about your answer, so they don’t ask you any \nmore questions except if you would like to join them.\n";
			
		}
		else
		{
			cout << "Invaild try again\n";
			return 0;
		}

	//choise 6
	int c6;
	cout << "1) Join them\n2) Don't Join\n";
	cin >> c6;

		if (c6 == 1) {
			
			cout << "You decide to join them. A couple of days go by you start hearing \nthe voice again\n\nThe little ones . . . the LITTLE ONES. . . THE LITTLE ONES\n\nThey keep going on and on. You wait for the cover of darkness. \n\n\nThe little ones have the softest flesh.";
			cout << "END\n";
			return 0;
		}
		//Ending 
		else if (c6 == 2) {
			cout << "You decide not to join them. They would slow you down anyway. \nYou wish them luck in their travels and you go on your way. After \nanother day or so of travel, you hear the voices turn into voices. They \nstarted slow and quiet slowly becoming faster and louder until they \nwere unbearable. You know what to do. The family you left behind \nfinds your lifeless body swaging in the wind. \n";
			return 0;
		}
		else
		{
			cout << "Invaild try again\n";
			return 0;
		}

}