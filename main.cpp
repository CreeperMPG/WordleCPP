#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;

const int Word_Length = 5;
const string Version = "1.0";
const vector<string> words = {
    "aback", "abate", "abbot", "abhor", "abide", "abode", "abort", "about",
    "above", "abuse", "abyss", "acorn", "acute", "adapt", "adept", "admit",
    "adopt", "adore", "adult", "aegis", "bacon", "badge", "badly", "baker",
    "barge", "basic", "basil", "batch", "beach", "beard", "beast", "beech",
    "begin", "beige", "below", "bench", "berry", "bible", "bigot", "biker",
    "cabin", "cable", "caddy", "cadet", "cagey", "cairn", "cakey", "camel",
    "cameo", "candy", "canoe", "caper", "carat", "cargo", "carve", "catch",
    "cater", "cause", "cello", "chaff", "dairy", "dance", "dandy", "darts",
    "datum", "daunt", "dawny", "decay", "decor", "defer", "delay", "delta",
    "denim", "depot", "depth", "derby", "deter", "devil", "dingo", "dirty",
    "eager", "eagle", "early", "earth", "easel", "ebony", "edict", "edify",
    "eerie", "eject", "elbow", "elect", "elite", "elope", "elude", "email",
    "embed", "ember", "empty", "enact", "faced", "facet", "fairy", "faith",
    "faker", "false", "fancy", "fangs", "farce", "fatal", "feast", "feign",
    "fence", "ferry", "fetch", "fever", "fiber", "field", "fiery", "fifth",
    "gable", "gaffe", "gaily", "gains", "galax", "galea", "galls", "gamba",
    "gamut", "gauze", "gavel", "gawky", "gazes", "gecko", "genie", "genre",
    "germs", "giddy", "gills", "guild", "habit", "hairy", "halve", "handy",
    "happy", "hardy", "harpy", "haste", "hatch", "haunt", "havoc", "hazel",
    "heavy", "hedge", "heist", "hello", "hence", "henna", "heron", "hexed",
    "icing", "ideal", "idiom", "idiot", "igloo", "image", "imbed", "impel",
    "imply", "inane", "incur", "index", "infer", "inlet", "input", "inset",
    "inter", "intro", "irate", "irony", "jabot", "jaded", "jazzy", "jeans",
    "jelly", "jenny", "jetty", "jewel", "jiffy", "jingo", "jivey", "jocky",
    "jolly", "joust", "judge", "juice", "juicy", "jumbo", "junta", "juror",
    "kabob", "kafir", "kayak", "kebab", "kedge", "kefir", "kelpy", "kempt",
    "kendo", "ketch", "khaki", "kiddy", "kilns", "kinky", "kiosk", "kitty",
    "knave", "knead", "knife", "knock", "label", "laced", "lager", "laity",
    "lanky", "lapel", "larch", "large", "laser", "latch", "later", "latex",
    "laugh", "laura", "layer", "leach", "leafy", "learn", "leech", "legal",
    "maced", "macho", "macro", "madam", "magic", "magma", "major", "maker",
    "malty", "mania", "maple", "march", "marry", "match", "maybe", "mayor",
    "mealy", "medal", "media", "mercy", "nabob", "nacho", "nadir", "naive",
    "naked", "nancy", "nanny", "nasal", "nasty", "natal", "naval", "navel",
    "needy", "nerve", "never", "newel", "newly", "nexus", "niche", "night",
    "oaken", "oasis", "obese", "ocean", "octal", "octet", "odium", "offer",
    "often", "ogive", "ohmic", "oiler", "olden", "olive", "omega", "onset",
    "opine", "optic", "orbit", "paced", "pacer", "paddy", "pagan", "pager",
    "paint", "paler", "panel", "panic", "pants", "paper", "parch", "party",
    "patch", "patio", "pause", "peace", "peach", "pearl", "pedal", "quack",
    "quail", "quake", "qualm", "quart", "quash", "quasi", "quays", "queen",
    "queer", "quell", "query", "quest", "queue", "quick", "quiet", "quilt",
    "quirk", "quite", "quoin", "rabid", "racer", "radio", "radix", "rainy",
    "raise", "rally", "ramen", "ranch", "range", "rapid", "rarer", "ratty",
    "raven", "razor", "reach", "react", "ready", "realm", "rebar", "saber",
    "sable", "sadly", "safer", "saggy", "saint", "salad", "salve", "sandy",
    "sappy", "sassy", "satin", "sauce", "saute", "saved", "saver", "scale",
    "scalp", "scant", "scare", "table", "tacit", "taffy", "taint", "taken",
    "talon", "tango", "taper", "tarot", "tasty", "teach", "tease", "teeth",
    "tempo", "tempt", "tenor", "terse", "testy", "thank", "theft", "ulcer",
    "ultra", "umbel", "umber", "uncle", "under", "undue", "unify", "union",
    "unite", "unity", "unlit", "unmet", "unpin", "until", "untie", "unzip",
    "upend", "upper", "vacuo", "vague", "valid", "valor", "valve", "vamps",
    "vapid", "vapor", "vault", "vaunt", "vegan", "veiny", "venom", "venue",
    "verge", "verve", "vesta", "vexed", "video", "vigil", "wacky", "wagon",
    "waist", "waive", "waken", "waltz", "wands", "wanly", "wards", "wares",
    "washy", "waste", "watch", "water", "waxen", "weary", "weave", "wedge",
    "weedy", "weigh", "xebec", "xenia", "xenon", "xeric", "xerox", "xylem",
    "xylic", "xylol", "xylyl", "xysti", "xysts", "xanth", "xebec", "xerus",
    "xylan", "xylem", "xylol", "xylor", "xysti", "xysts", "yacht", "yamen",
    "yanks", "yapok", "yards", "yarns", "yawns", "yearn", "yeast", "yells",
    "yelps", "yield", "yodel", "yogic", "yogis", "yoked", "yokes", "yonic",
    "young", "yours", "zaire", "zamia", "zappy", "zebra", "zebus", "zeins",
    "zests", "zesty", "zilch", "zings", "zippy", "zitis", "zloty", "zonal",
    "zoned", "zones", "zonks", "zooms", "zowie"};

class GuessState {
  public:
    enum PointState {
        STATE_AC, // STATE_AC: 包含字母，正确的位置
        STATE_PC, // STATE_PC: 包含字母，错误的位置
        STATE_WA  // STATE_WA: 不正确的字母
    };

  private:
    array<PointState, Word_Length> state;

  public:
    PointState Get(int index) { return state[index]; }
    void Set(int index, PointState new_state) { state[index] = new_state; }
    bool is_success() {
        for (int i = 0; i < Word_Length; i++) {
            if (Get(i) != STATE_AC) {
                return false;
            }
        }
        return true;
    }
};

GuessState get_result(string guess, string target) {
    GuessState state;
    map<char, int> target_cnt;
    target_cnt.clear();
    for (int i = 0; i < Word_Length; i++) {
        target_cnt[target[i]]++;
    }
    for (int i = 0; i < Word_Length; i++) {
        if (guess[i] == target[i]) {
            state.Set(i, GuessState::STATE_AC);
            target_cnt[target[i]]--;
            if (target_cnt[target[i]] == 0) {
                target_cnt.erase(target[i]);
            }
        }
    }
    for (int i = 0; i < Word_Length; i++) {
        if (guess[i] == target[i]) {
            continue;
        } else if (target_cnt.count(guess[i])) {
            state.Set(i, GuessState::STATE_PC);
            target_cnt[guess[i]]--;
            if (target_cnt[guess[i]] == 0) {
                target_cnt.erase(guess[i]);
            }
        } else {
            state.Set(i, GuessState::STATE_WA);
        }
    }
    return state;
}

struct ConsoleColor {
	WORD Value;
	ConsoleColor(WORD value) {
		Value = value;
	}
	ConsoleColor operator | (const ConsoleColor &Other) const {
		ConsoleColor result = Value;
		result.Value |= Other.Value;
		return result;
	}
	ConsoleColor operator | (const WORD &Other) const {
		ConsoleColor result = Value;
		result.Value |= Other;
		return result;
	}
};

namespace colors {
	const ConsoleColor Black = 0;
	const ConsoleColor DarkBlue = 1;
	const ConsoleColor Green = 2;
	const ConsoleColor LightBlue = 3;
	const ConsoleColor Red = 4;
	const ConsoleColor Purple = 5;
	const ConsoleColor Orange = 6;
	const ConsoleColor LightGray = 7;
	const ConsoleColor DarkGray = 8;
	const ConsoleColor Blue = 9;
	const ConsoleColor LightGreen = 10;
	const ConsoleColor Azure = 11;
	const ConsoleColor Pink = 12;
	const ConsoleColor LightPurple = 13;
	const ConsoleColor Yellow = 14;
	const ConsoleColor DefaultColor = 15;
}

// 设置颜色
// 用法1：set_color(colors::Azure); 这个将颜色设置为了浅蓝色，设置后打印的内容可以变色
// 用法2：cout << set_color(colors::Green) << 内容; 同“用法1”效果但是更简便
string set_color(const ConsoleColor &color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color.Value);
	return "";
}

// 移动光标
// 用法1: cur(X坐标, Y坐标); 将鼠标移动到指定位置
// 用法2: cout << cur(X坐标, Y坐标) << 内容; 同上但是更简便。详情请看 Launch() 函数
// 注意：X 指横坐标，Y 指纵坐标
string cur(const short &x, const short &y) {
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { x, y });
	return "";
}

// 设置窗口标题
// 用法：set_title("我是标题");
void set_title(const LPCSTR &Name) {
	SetConsoleTitleA(Name);
}
void set_title(const string &Name) {
	set_title(Name.c_str());
}

string clear_console() {
	COORD topLeft  = { 0, 0 };
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO screen;
	DWORD written;

	GetConsoleScreenBufferInfo(console, &screen);
	FillConsoleOutputCharacterA(
	    console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written
	);
	FillConsoleOutputAttribute(
	    console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE,
	    screen.dwSize.X * screen.dwSize.Y, topLeft, &written
	);
	SetConsoleCursorPosition(console, topLeft);
	return "";
}

string clear_console_line(short top) {
	COORD topLeft  = { (short)0, top };
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO screen;
	DWORD written;

	GetConsoleScreenBufferInfo(console, &screen);
	FillConsoleOutputCharacterA(
	    console, ' ', screen.dwSize.X * (screen.dwSize.Y - top), topLeft, &written
	);
	FillConsoleOutputAttribute(
	    console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE,
	    screen.dwSize.X * (screen.dwSize.Y - top), topLeft, &written
	);
	SetConsoleCursorPosition(console, topLeft);
	return "";
}

bool is_pressed(vector<char> args) {
	for (char ch : args) {
		if (!(GetKeyState(ch) & 0x8000)) {
			return 0;
		}
	}
	return 1;
}

bool is_pressed(char arg) {
    return is_pressed((vector<char>){arg});
}

int main() {
    // cout << lower_bound(words.begin(), words.end(), "irate") - words.begin();
    srand(time(0));
    set_color(colors::DefaultColor);
    while (true) {
        clear_console();
        cout << set_color(colors::Blue) << "Welcome to Wordle!" << endl << set_color(colors::DefaultColor) << "Version " << Version << endl << endl;
        cout << set_color(colors::Green) << "* New Game [N]" << endl;
        cout << set_color(colors::DarkGray) << "* Word List [L]" << endl;
        set_color(colors::DefaultColor);
        while (true) {
            char ch = getch();
            if (ch == 'N' || ch == 'n') {
                clear_console();
                string target = words[rand() % words.size()];
                for (char &ch : target) {
                    ch = ch - 'a' + 'A';
                }
                cout << set_color(colors::Blue) << "Wordle" << endl << set_color(colors::DefaultColor) << "Version " << Version << endl << endl;
                short cursor_top = 3;
                while (true) {
                    string guess;
                    cout << set_color(colors::DarkGray) << "Enter something: " << set_color(colors::Yellow);
                    cin >> guess;
                    for (char &ch : guess) {
                        if (ch >= 'a' && ch <= 'z') {
                            ch = ch - 'a' + 'A';
                        }
                    }
                    cursor_top++;
                    if (guess.size() != Word_Length) {
                        clear_console_line(--cursor_top);
                        cout << set_color(colors::Red) << "Your word's length is not " << Word_Length << ". Press any key to continue..." << endl;
                        Sleep(500);
                        getch();
                        clear_console_line(cursor_top);
                    } else {
                        clear_console_line(--cursor_top);
                        cout << set_color(colors::DefaultColor) << guess;
                        GuessState state = get_result(guess, target);
                        for (int i = 0; i < Word_Length; i++) {
                            Sleep(500);
                            ConsoleColor color = colors::LightGray;
                            if (state.Get(i) == GuessState::STATE_AC) {
                                color = colors::Green;
                            } else if (state.Get(i) == GuessState::STATE_PC) {
                                color = colors::Yellow;
                            }
                            DWORD written;
                            FillConsoleOutputAttribute(
                                GetStdHandle(STD_OUTPUT_HANDLE), color.Value * 0x10, 1, { (short)i, cursor_top }, &written
                            );
                        }
                        cout << endl;
                        if (state.is_success()) {
                            cout << set_color(colors::Green) << "Success!!!" << endl << endl << set_color(colors::DefaultColor) << "Press any key to continue...";
                            getch();
                            break;
                        }
                        cursor_top++;
                    }
                }
                break;
            } else if (ch == 'L' || ch == 'l') {
                clear_console();
                cout << set_color(colors::Blue) << "Word List" << endl << set_color(colors::Orange);
                CONSOLE_SCREEN_BUFFER_INFO screen;
                GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &screen);
                short sizex = (screen.dwSize.X - 1) / (Word_Length + 1);
                if (sizex == 0) {
                    cout << set_color(colors::Red) << "Sorry, the console is too small to display that." << endl << endl << set_color(colors::DefaultColor) << "Press any key to continue...";
                    getch();
                    break;
                }
                for (size_t i = 0; i < words.size(); i++) {
                    CONSOLE_SCREEN_BUFFER_INFO screen;
                    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &screen);
                    sizex = (screen.dwSize.X - 1) / (Word_Length + 1);
                    if (i % sizex == 0) {
                        cout << endl;
                    }
                    cout << words[i] << " ";
                    Sleep(5);
                }
                cout << endl << endl << set_color(colors::DefaultColor) << "Press any key to continue...";
                getch();
                break;
            }
        }
    }
    return 0;
}
