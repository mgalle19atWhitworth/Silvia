#include <iostream>
#include <string>
#include "Header.h"
#include <cctype>

using namespace std;
int win = 0;
string randomRooms()
{
	int r = rand() % 2;
	string Rooms[2] = { "Ghosts", "Carnivorous Plants" };
	string randomR = Rooms[r];
	
	if (randomR == "Ghosts")
		ghosts();
	else if (randomR == "Carnivorous Plants")
		carnivorousPlants();

	return randomR;
}

string randomCreatures()
{
	int r = rand() % 2;
	string Creatures[2] = { "Chimaera", "Minotaur" };
	string randomC = Creatures[r];

	if (randomC == "Minotaur")
		minotaur();
	else if (randomC == "Chimaera")
		chimaera();

	return randomC;
}

void opening()
{
	string name;
	cout << "System started. Please identify: ";
	getline(cin, name);
	cout << endl;
	cout << "Name recognized. Welcome back captain " << name << "." << endl;
	cout << "I assume that you want to try the last adventure again, so I won't waste your valuable time. Here we go!" << endl;
	cout << endl;
	cout << "Fantasy adventure data loaded. Starting simulation..." << endl;
	cout << "." << endl;
	cout << "." << endl;
	cout << "." << endl;
	cout << "You are in a dark forest. You have nothing save the clothes on your back and a lantern to guide the way.\n";
	cout << "You come to a crossroad. Two paths are in front of you to the left and right. Which way do you go: Left(L), Right(R), or Back(B)? ";
}
void restart()
{
	cout << endl;
	cout << "You are in a dark forest. You have nothing save the clothes on your back and a lantern to guide the way.\n";
	cout << "You come to a crossroad. Two paths are in front of you to the left and right. Which way do you go: Left(L), Right(R), or Back(B)? ";

}
void back()
{
	cout << endl;
	cout << "You go back the way you came, figurative tail tucked between your legs, apparently afraid to make ONE SIMPLE CHOICE.\n";
	cout << "Game Over. Try again (and make a choice this time)? (Y/N)";
}
void leftPath()
{
	cout << endl;
	cout << "You take the left path. As you walk along, you spot something shining on the ground. You pick it up." << endl;
	cout << "Obtained the Bronze Sword!" << endl;
	cout << "You equipped the Bronze Sword and continued on." << endl;
}
void leftPathSkeleton()
{
	cout << endl;
	cout << "You press on, eyes scanning the area for any break in the woods.\n";
	cout << "However, you should probably have been looking where you were going, as you've just fallen into a pitfall trap.\n";
	cout << "As you painfully arise from your fall, you hear ominous sounds of clicking and clanging. You raise your lanturn to reveal three skeleton warriors approaching from all sides.\n";
	cout << "You raise your sword and prepare to fight.\n"; 
	battle(60, 100, "Skeleton Warriors", 20, 30);
	
}
void skeletonVictory()
{
	cout << endl;
	cout << "You grab a sword from the piles of bones.\n";
	cout << "Obtained the Steel Sword!\n";
	cout << "You equipped the Steel Sword.\n";
	cout << "The exit is too high above you to reach. While inspecting the trap, you notice that it leads into what looks like a cave. You enter, hoping to find a new way out.\n";
}
void rightPath()
{
	cout << endl;
	cout << "You take the right path. As you go, you notice a strange smell growing stronger and stronger.\n";
	cout << "Eventually you come across a clearing to find a Cyclops blocking the path, resting on it's side. It appears to be sleeping...\n";
	cout << "There is a chest in the beast's further hand. A thick club is resting in the other.\n";
	cout << "What will you do?\n";
	cout << "A) Sneak up to get into the chest\n";
	cout << "B) Attempt to go around\n";
	cout << "C) Attack!\n";
}
void sneak()
{
	cout << endl;
	cout << "You tiptoe your way closer to the chest. Closer and closer, the stink of the creature is becoming unbearable.\n";
	cout << "You're almost there. The chest is within your grasp...\n";
	cout << "...You step on a twig.\n";
	cout << "The cyclops awakes.\n";
	cout << endl;
	cout << "Congrats! You are now a decorative splotch on a cyclops' club.\n";
	cout << "Game Over. Try again? (Y/N).";
}
void goAround()
{
	cout << endl;
	cout << "You carefully make your way around the beast, trying not to awake it.\n";
	cout << "Suddenly, there's movement. You quickly scramble out of the way as the beast begins to roll over onto its back, dropping both club and chest.\n";
	cout << "Sensing an opportunity, you make your way to the chest and carefully open it.\n";
	cout << "Obtained the Bronze Sword!\n";
	cout << "Suddenly, a roar is heard behind you. The cyclops is awake and ANGRY. The creature charges.\n";
	battle(40, 100, "Cyclops", 20, 45);
}
void cyclopsVictory()
{
	cout << endl;
	cout << "With the beast slain, you continue on your way.\n";
	cout << "As you go, you notice that the darkness is slowly becoming harder to penetrate with your little lanturn.\n";
	cout << "A fog is rolling in, and it somehow carries with it a sense of dread.\n";
}
void attack()
{
	cout << endl;
	cout << "You go in with fists swinging. Crying out the most heroic cry you can muster, you rush at the beast with all your might!\n";
	cout << "The cyclops lazily smacks you into the ground with his club, grumbling about an alarm.\n";
	cout << "Game Over. Try again? (Y/N)."; 
}
void centaurs()
{
	cout << endl;
	cout << "Within the gloom of the forest, you hear the clopping of hooves. You lift up your lantern to see the shapes of people on horseback.\n";
	cout << "Relieved at the prospect of help at last, you run to them, hollering and waving your arms in the hopes of getting their attention.\n";
	cout << "That is, of course, until you find yourself being held at arrowpoint by a group of centaurs.\n";
	cout << "What will you do?\n";
	cout << "A) Attempt to reason with them.\n";
	cout << "B) Fight.\n";
}
void reason()
{
	cout << endl;
	cout << "You attempt to explain why you're here, all the while trying to avoid any sudden movements with the centaurs as suspicious as they are.\n";
	cout << "Even after explaining, they still seem suspicious, cautiously eyeing the sword on your back.\n";
	cout << "As an act of good faith you decide to set the weapon on the ground, kicking it away.\n";
	cout << "The centaurs seem satisfied and let you pass. As you go, they tell you to be wary of any abandoned-looking house you may find.\n";
	cout << "Bronze Sword Lost.\n";
}
void fight()
{
	cout << endl;
	cout << "You doubt these guys will believe anything you tell them. You pull out your sword and knock away the bow pointed at you.\n";
	cout << "The centaurs charge.\n";
	battle(70, 100, "Centaurs", 20, 60);
}
void victoryCentaurs()
{
	cout << endl;
	cout << "The way is now clear to move onward. You start forth when one of the centaurs grabs your leg, stopping you.\n";
	cout << "'Before you go,' the centaur says with a smile, 'I'll give you a tip for being so strong as to defeat us.'\n";
	cout << "'There is an abandoned-looking house here in these woods that's run by the sweetest of couples. It holds every comfort you can imagine. Just tell them we sent you.'\n";
}
void reasonHouse()
{
	cout << endl;
	cout << "Further on in the fog, you see the outline of the house. You want to check the place in case there's something you can use, but you remember the centaurs' warning.\n";
	cout << "Cautiously you approach and open the door.\n";
	cout << ".\n";
	cout << ".\n";
	cout << "The place is filled from ceiling to floor with large webs, but in the corner you can see something shining.\n";
	cout << "You carefully make your way to it, taking every precaution to avoid getting stuck in webbing.\n";
	cout << "Upon arrival, you find the shiny thing is a sword sticking out from a web bundle. A bit freaked out and disgusted, you gently remove it.\n";
	cout << "Obtained the Steel Sword!\n";
	cout << "Sword in hand, you now throw caution to the wind, slicing up any web in your way if only to escape.\n";
	cout << "As you dash out the door, you can hear inhuman sounds of rage coming from within the house, only serving to make you move faster.\n";
}
void fightHouse()
{
	cout << endl;
	cout << "You come across the house that the centaur mentioned very quickly.\n";
	cout << "The place looks like a dump with rotted shingles, a warped frame and multiple other problems. You can hardly believe anyone lives here.\n";
	cout << "You knock before opening the door to find a wall of spider webs. Disgusted, you take your sword and cut through them carelessly.\n";
	cout << "You step inside to find that the webs are everywhere, covering every nook and cranny. Seems like someone needs to call pest control.\n";
	cout << "You then notice the human-sized web bundle. Seems as though they did.\n";
	cout << endl;
	cout << "They are upon you before you take your second step.\n";
	cout << endl;
	cout << "The spiders are massive, easily twice your height. They surround you, blocking the entrance. You try to fend them off, but the bronze sword breaks against their hard exoskeletons.\n";
	cout << "Then you notice a glint coming from the mass of webs. You rush toward it to find a sword.\n";
	cout << "Obtained the Steel Sword!\n";
	cout << "Rather than fight and risk this new sword being broken as well, you look around for another exit.\n";
	cout << "You find your exit in a nearby broken window. You rush toward it and jump through, but one of the spiders leaves a memento on your leg before you escape. HP at 80.\n";
}
void chimaera()
{
	cout << endl;
	cout << "You continue to walk along when suddenly you feel intense heat to your left. You move just in time as a immense fireball scorches the ground where you just were.\n";
	cout << "You draw your sword and get into position. In response your actions, your attacker steps into the light of your lantern, flames pouring from its first two heads like something from the depths of hell as the third glares at you from its backside.\n";
	cout << "The Chimaera has challenged you to a fight.\n";
	cout << endl;
	// Call on the battle in the main function
}

void minotaur()
{
	cout << endl;
	cout << "After a while of walking, air is suddenly filled with the sounds of snarls and echoing battlecries. You barely have time to react before the monster mixture of man and bull attacks.\n";
	cout << "The minotaur is hungry for you.\n";
	cout << endl;
	// See Chimaera
}
void ghosts()
{
	cout << endl;
	cout << "As your path continues, eerie sounds catch your attention. The darkness seems amorphous as faces filled with agony and hatred seem to fade in and out of view.\n";
	cout << "You quicken your pace. Monsters you can handle, but vengeful spirits aren't something you can really kill, so you plan on nopeing the heck out.\n";
	cout << endl;
	cout << "Which makes it all the more frightning when one fully appears in front of you.\n";
	cout << endl;
	cout << "You run forward pell-mell, trying to put as much distance between you and the spirits as possible. In your haste, you end up tripping on a rock and rolling out of control.\n";
	cout << "You're stopped by an old-looking chest. After collecting yourself, you check around to make sure that you'd put the ghosts far behind you before opening the chest to see what you'd find.\n";
	cout << "Obtained the Glass Sword!\n";
	cout << "You inspect your new weapon. It looks like it could definitely do some damage, but it'll likely break in the process. Best to save it for the stronger enemies.\n";
}
void carnivorousPlants()
{
	cout << endl;
	cout << "On your way, you find that your path has been blocked by strange-looking plants. They are immense in size with a large bud-like tops. Grabbing your sword, you prepare to cut your way through.\n";
	cout << "The moment your sword connects however, you find that is stuck in some strange, sticky substance. Suddenly you find that your being lifted by a vine connected to the plant. The plant itself seems to change as the strange bud opens up to reveal a gaping maw, which the vine is pulling you straight into.\n";
	cout << "The desperateness of the situation gives you strength as you pull your sword from the muck, cutting the plant's stem in the process. You are immediately dropped to the ground.\n";
	cout << "The commotion has drawn the attention of the other plants. You continue to attack like you were possessed, hacking and slashing down the errant flora.\n";
	cout << endl;
	cout << "With the carnage over, you look over the area with a calmed mind. In the corner of your eye, something catches your attention, causing you to walk over and pick it up.\n";
	cout << "Obtained the Glass Sword!\n";
	cout << "You inspect your new weapon. It looks like it could definitely do some damage, but it'll likely break in the process. Best to save it for the stronger enemies.\n";
} //glass sword is obtained with steel sword
void Griffin()
{
	cout << endl;
	cout << "In the dark gloom of the forest, you hear a sharp screech from above. Frantically you raise your lantern in search of the source.\n";
	cout << "You can't see anything through the fog this time, but you can faintly hear the flapping of large wings.\n";
	cout << "The flapping sound gets louder and louder until suddenly the fog begins to part with a great force of air.\n";
	cout << "The creature lands surprisingly softly given how large it is.\n";
	cout << "Its lion paws shift on the ground as its eagle eyes stare you down with intense scrutiny.\n";
	cout << "It's a powerful griffin, standing directly in your path. It lets out another mighty screech before charging.\n";
	battle(210, 100, "Griffin", 70, 80);
}
void victoryGriffin()
{
	cout << endl;
	cout << "With the fog temporarily removed, you can see a tower in the distance. However, you feel that the end of the road is not far away.\n";
	cout << "What will you do?\n";
	cout << "A) Continue on\n"; //goes on to the boss woods, no legendary sword, glass sword and steel 
	cout << "B) Search the tower\n"; // detour
}
void tower()
{
	cout << endl;
	cout << "You approach the tower, watching as is looms above you. Looking at it, you somehow just know that there's something truly great resting at it's top.\n";
	cout << "You approach the door and attempt to enter, but it's locked shut. Worse, there's no keyhole, doorknob, or anything else to enter with.\n";
	cout << "Just as you are about to give up, you hear a voice call seemingly from the heavens. 'Answer correctly to proceed. Answer wrong and you leave.'\n";
	cout << "'You cannot see me, hear me, or touch me. I lie behind the stars and alter what is real, I am what you really fear. Close your eyes and I come near. What am I?'\n";
	cout << "You have one chance.\n";
}
void tower2()
{
	cout << endl;
	cout << "'Correct!' the voice exclaims, 'Come in, traveler.'\n";
	cout << "The door opens by itself to reveal a lavish room. There is a bookshelf lining the walls with a plethora of stories. The furnature is soft to the touch and very homely. There's even a cozy-looking fire in the corner to complete the scene.\n";
	cout << "Despite the comfort of the room, this isn't the great treasure that you were expecting. You notice a staircase leading upwards and decide to climb it to see if there's anything else\n";
	cout << "Halfway up, the voice can be heard once again. 'Ah. I see. You're here for it aren't you. I warn you though, I will not give up this treasure easily.\n";
	cout << "The stair comes up to a trapdoor. Like the front door, it will not budge despite your efforts. From above, the voice calls another riddle:\n";
	cout << "'A nightmare for some. For others, as a savior I come. My hands, cold and bleak, it's the warm hearts they seek. What am I?'\n";
	cout << "You have one chance.\n";
}
void tower3()
{
	cout << endl;
	cout << "'Correct!' the voice calls again, 'Proceed if you dare.'\n";
	cout << "You continue through the now-open trapdoor, and come out in what looks like the top room. There is only one other thing here is a strange creature with the face of a human and the body of a lion.\n";
	cout << "The Sphinx stares you down, eyes seemingly glaring into your soul. Then she spoke, and you recognize her as the voice you've been hearing.\n";
	cout << "Her voice rang out in great strength.\n";
	cout << "'You have come far, human. If you wish to have this great treasure, you must answer this last riddle. Answer wrong and you are gone!'\n";
	cout << "'Keep me with you to survive, In the fields of death few keep alive. I am like a taller knife, deadly enough to end a life. What am I?'\n";
	cout << "You have one chance.\n";
}
void tower4()
{
	cout << endl;
	cout << "The great sphinx sighs in defeat. 'Correct. The great tresure is yours.'\n";
	cout << "The sphinx reaches behind her and grabs something. She pulls it out to reveal the most magnificent sword you've ever seen. 'This Legendary Sword is the most powerful in existance. Any foe you use it on will fall.'\n";
	cout << "Obtained the Legendary Sword!\n";
	cout << "Now go! Leave me!'\n";
	cout << "An immense gust of winds blows in out of nowhere and sends you flying out a nearby window. You do your best to aim for the trees below to break your fall, and just barely survive.\n";
	cout << "While taking a quick inventory, you realize that you dropped the Steel Sword in all the confusion. You have no hope of finding it now with this undergrowth. Finding your path, you continue on.\n";
	win = 1;
} // has legendary sword, lost steel, has glass sword

void towerFail()
{
	cout << endl;
	cout << "'Wrong!' boomed the voice as you felt the air around you shift violently. With a great force of wind you are thrown far away from the tower and back on the path.\n";
	cout << "You have the feeling that you will not be welcomed a second time, so you decide to push on.\n"; //no legendary sword, just steel sword and glass sword
	win = 2;
}
void towerFunctions()
{
	//char choice;
	string answer;
	tower();
	cin >> answer;
	if (answer == "Dark")
	{
		tower2();
		cin >> answer;
		if (answer == "Death")
		{
			tower3();
			cin >> answer;
			if (answer == "Sword")
			{
				tower4(); //legendary and glass
				BOSS();
			}
			else
				towerFail(); //steel and glass
		}
		else
			towerFail();
	}
	else
		towerFail();
}

void finalBossWoods()
{
	cout << endl;
	cout << "The fog abruptly thickens, sending a chill down your spine. You continue walking until you see a shadow lurking in the murk.\n";
	cout << "The shadow suddenly lunges at you with incredible speed. You just barely dodge in time to avoid certain death.\n";
	cout << "As quickly as it came, the fog lifts to reveal the ghastly demonic form before you, cackling madly.\n";
	cout << "Smiling darkly, the demon steps aside to let you pass. Ahead you can see light shining through the treeline. It's the end of the woods.\n";
	cout << "What do you do?\n";
	cout << "A) Victoriously make your way to the exit\n";
	cout << "B) Fight the demon\n";
}
void exit()
{
	cout << endl;
	int hpLevel = 75;
	string BossName = "Demon Lord";
	cout << "You politely thank the demon for his kindness and strut your way toward the lighted exit. Finally, you're getting out of these crazy woods.\n";
	cout << "As you approach, you start to feel the sun's warmth and begin to relax. Already all the intense fights you had seem distant.\n";
	cout << "It makes it all the more surprising, therefore, when you run face-first into what feels like a wall. It's an invisible barrier!\n";
	cout << "No sooner do you realize what's going on when you sense movement behind you. You dodge out of the way, but the demon lord manages to slash your side. HP now at 75.\n";
	cout << "No choice but to fight now. You draw your sword and ready your stance.\n";
	stuff(hpLevel, BossName);

}
void fightDemon()
{
	cout << endl;
	int hpLevel = 100;
	string BossName = "Demon Lord";
	cout << "Not falling for the demon's tricks, either through intuition or multiple playthroughs, you draw your sword and prepare to fight.\n";
	cout << "Grimacing at his failure to fool you, the demon lord plunges the area further into darkness with his menacing aura. The final battle begins.\n";
	//battle(250, 100, "Demon Lord", 70, 100);
	stuff(hpLevel, BossName);
}
void dragon()
{
	cout << endl;
	cout << "As you go, you begin to notice a putrid stench, a scent you recognise as brimstone. The scent fills you with dread, knowing what it likely belongs to.\n";
	cout << "The stench only gets stronger as you go. Eventually, your suspicions are confirmed when you suddenly come across a large room, in which sleeps a giant dragon.\n";
	cout << "You carefully consider your options. A head-on assault would be undesirable, as the dragon would surely tear you to pieces.\n";
	cout << "You decide that it would be best to sneak aroud it and get past without confrontation.\n";
	cout << "Unfortunately, in the time it took for you to decide this, the dragon has awoken and noticed you. It's roar shakes the ground and echoes throughout the cave.\n";
	cout << "So much for sneaking. Looks like the only option left is to fight.\n";
	cout << "Looking at it's scaly hide, you doubt that the Glass Sword will be able to do anything, so you decide to stick with your Steel Sword.\n";
}

void dragonBattle()
{
	//char choice = 'A';
	cout << endl;
	cout << "Player at 100 HP. Enemy Great Dragon at 1000 HP.\n";
	cout << "Game saved.\n";
	cout << "What will you do?\n";
	cout << "A) Attack\n";
	cout << "B) Dodging strike\n";
	cin >> choice;
	cout << "You dealt 1 damage to the opponent.\n";
	cout << "You were dealt 99 damage.\n";
	cout << "What will you do?\n";
	cout << "A) Attack\n";
	cout << "B) Dodging strike\n";
	cin >> choice;
	cout << "Critical Hit!\n";
	cout << "You dealt 999 damage to the opponent.\n";
	cout << "Victory! Congratulations! On with the adventure!\n";
	cout << "Enemy health heart found. HP fully restored.\n";
	cout << "Save file deleted\n";
}

void dragonVictory()
{
	cout << endl;
	cout << "Dumbfounded by your apparant knack for the critical hit, you retrieve your sword from the beast. After you've collected yourself, you take a look around.\n";
	cout << "Ahead lies the way forward, and from the sinister look of the path ahead, you guess that you're in for a fight.\n";
	cout << "Next to the path is a large, ornate chest. You guess that this is what the dragon was guarding. Looks like it required a four-digit code to open it though. Wonder if you've seen it around...\n";
	cout << "What will you do?\n";
	cout << "A) Go forward\n"; //steel and glass sword
	cout << "B) Open the chest\n";
}

void openChest()
{
	int ans;
	cout << "Enter code:";
	cin >> ans; 
	if (ans == 1814) {
		cout << "The chest springs open, causing you to jump back in surprise, fearing a trap. When nothing happens, you cautiously approach.\n";
		cout << "The item within the chest glows brilliantly, giving off a holy aura. A sword of great might lies within your grasp.\n";
		cout << "Obtained the Legendary Sword!\n";
		cout << "With this in hand, you feel ready to take on any foe.\n";
		cout << "Woops, looks like the chest needs to have something inside it, as it has taken your Steel Sword and disappeared. Oh well.\n";
		win = 1;
	} //lost steel sword, gained legendary sword
	else {
		cout << "There is a loud click from the lock. You did it! The chest is open!\n";
		cout << "...or not. As soon as the click is heard, the chest begins to glow and disappear. You desperately try to grab it back, but you only end up grabbing air.\n";
		cout << "Oh well. That leaves only one choice left.\n"; //only steel sword
	}
}

void necromancer()
{
	
	cout << endl;
	int hpLevel = 100;
	string BossName = "Necromancer";
	cout << "You bravely press forward, Carefully taking note of your surroundings as the darkness becomes more and more profound. Eventually, come out into a large room.\n";
	cout << "Here at the cave's depths, the darkness reigns absolute. A malevolent aura drenches everything in an evil light. Needless to say, you're feeling very unsettled.\n";
	cout << "As if that weren't enough, the place reeks of rotting corpses and death. Covering your nose and mouth, you press onward.\n";
	cout << "There's a crunch below you. Looking down, you find the remnants of a skull that you accidently crushed in the darkness. That is the last straw. You're getting out of here one way or another.\n";
	cout << "A raspy laugh echoes through the room. Following the sound, you turn your head upwards to find an evil-looking old man looking down upon you from a throne made from human skeletons.\n";
	cout << "As he finishes his maniacal laughter, he picks up a staff from the side of his throne, waving it around and chanting in a strange language.\n";
	cout << "'Thank you', he says, cackling as his staff begins to glow, 'If it weren't for you, I would never have obtained such a powerful addition to my army of the undead!'\n";
	cout << "There's a loud thumping coming from the room before. You turn around just in time to see the dragon that you had slain shamble down into the room.\n";
	cout << "With a single command, the dragon flies to the old man's side, who is still cackling with madness. No doubt your dealing with a necromancer on his home turf.\n";
	cout << "As the necromancer calls forth his army from the dead bodies around you, you draw your sword and prepare for the fight of your life.\n";
	//battle(300, 100, "Necromancer", 70, 80);
	stuff(hpLevel, BossName);
}

void necromancerVictory()
{
	cout << endl;
	cout << "Having taken down the majority of your opposition, you run straight toward the necromancer, sword raised high.\n";
	cout << "Behind your quarry, the resurrected dragon rears back in an attempt to deal massive damage to you. You won't reach the necromancer in time.\n";
	cout << "Thinking quickly, you get a good grip on your sword and send it flying at the necromancer blade-first.\n";
	cout << "Your aim is true and the surprised death-wizard falls to the ground in a heap. All around you, his army falls with him, returning to the corpses that they were.\n";
	cout << "The dragon falls like the others, falling backwards onto one of the walls of the room. Its immense weight causes the wall to crumble.\n";
	cout << endl;
	cout << "Sunlight pours into the room from the ruined wall.\n";
	cout << endl;
	cout << "You give a cheer for your incredible luck. The end of your journey was so close, and all it took was a dragon to bring it forth.\n";
	cout << "Finally able to sheath your sword, you step out of the caves and into freedom.\n";
	cout << "Congratulations! You win! Play again(Y/N)?\n";
}

void victoryDemon()
{
	cout << endl;
	cout << "With one finalizing swing of your sword, the demon falls. With his influence gone, the fog lifts and the darkness fades.\n";
	cout << "Sheathing your sword, you turn and head for the forest's exit. With the barrier gone, nothing's stopping you.\n";
	cout << "With the sunlight now lighting your path, you shut off your trusty lanturn, slinging it over your back, no longer needing it until the next adventure.\n";
	cout << endl;
	cout << "Congratulations! You win! Play again(Y/N)?\n";
}

void endProgram()
{
	cout << endl;
	cout << "S1mulation end. 8r1nging you b4ck to reality.\n";
	cout << ".\n";
	cout << ".\n";
	cout << ".\n";
	cout << "Welcome back to reality Captain. Come again any time you want.\n";
}
void endProgramFromBattle()
{
	cout << endl;
	cout << "Simulation end. Bringing you back to reality.\n";
	cout << ".\n";
	cout << ".\n";
	cout << ".\n";
	cout << "Welcome back to reality Captain. Come again any time you want.\n";
}
void BOSS()
{

	finalBossWoods();
	cin >> choice;
	if (choice == 'A')
	{
		exit();
		victoryDemon();
		cin >> choice;
		if (choice == 'Y')
			restart();
		else 
			endProgram();
	
	}
	else
	{
		fightDemon();
		victoryDemon();
		cin >> choice;
		if (choice == 'Y')
			restart();
		else
		{
			endProgram();
		}
		
	}
}
void towerVictoryAndOpenChestSwordChoice(int hp, string BossName)
{
	int hpLevel=hp;

	string wordChoice;
	cout << "Which sword would you like to use for this battle?\n";
	cout << "Legendary Sword or the Glass Sword?\n";
	cin >> wordChoice;

	if (wordChoice == "Legendary")
		battle(250, hpLevel, BossName, 250, 100);
	else 
		battle(250, hpLevel, BossName, 249, 100);
}
void towerFailAndForwardAndNoChestSwordChoice(int hp, string BossName)
{
	int hpLevel = hp;
	string wordChoice;
	cout << "Which sword would you like to use for this battle?\n";
	cout << "Steel Sword or the Glass Sword?\n";
	cin >> wordChoice;
	if (wordChoice == "Steel")
		battle(250, hpLevel,BossName, 70, 100);
	else
		battle(250, hpLevel, BossName, 249, 100);
}
void stuff(int hp, string BossName)
{
	if (win == 1 )
		towerVictoryAndOpenChestSwordChoice(hp, BossName);
	else if (win == 2)
		towerFailAndForwardAndNoChestSwordChoice(hp, BossName);

}
void battle(int enemyHealth, int playerHealth, string enemyName, int swordStrength, int enemyStrength)
{
	// Implement some way to detect if the glass sword is used
	//char choice = 'C';
	int totalEnemyHealth;
	int totalPlayerHealth;
		do
		{
			totalPlayerHealth = playerHealth;
			totalEnemyHealth = enemyHealth;
			cout << endl;
			cout << "Player at " << playerHealth << " HP. Enemy " << enemyName << " at " << enemyHealth << " HP.\n";
			cout << "Game saved.\n";
			while (totalEnemyHealth > 0 && totalPlayerHealth > 0)
			{
				cout << "What will you do?\n";
				cout << "A) Attack\n";
				cout << "B) Dodging strike\n";
				cin >> choice;
				if (choice == 'A')
				{
					totalPlayerHealth = totalPlayerHealth - enemyStrength;
					totalEnemyHealth = totalEnemyHealth - swordStrength;
					cout << "You dealt " << swordStrength << " damage to the opponent.\n";
					cout << "You were dealt " << enemyStrength << " damage.\n";
				}
				else if (choice == 'B')
				{
					totalPlayerHealth = totalPlayerHealth - (enemyStrength / 5);
					totalEnemyHealth = totalEnemyHealth - (swordStrength / 2);
					cout << "You dealt " << swordStrength / 2 << " damage to the opponent.\n";
					cout << "You were dealt " << enemyStrength / 5 << " damage.\n";
				}
			}
			if (totalPlayerHealth <= 0)
			{
				cout << "You died.\n";
				cout << endl;
				cout << "Game Over. Try again from last save (Y/N)?";
				cin >> choice;
				if (choice == 'N')
				{
					endProgramFromBattle();
					break;
					exit();
				}

			}
			else
			{
				cout << endl;
				cout << "Victory! Congratulations! On with the adventure!\n";
				cout << "Enemy health heart found. HP fully restored.\n";
				cout << "Save file deleted\n";
			}
		} while (choice != 'N' && totalPlayerHealth <= 0);

}
