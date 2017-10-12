class CfgPatches {
    class ADDON {
        name = "DICT";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.60;
		author = "Golias";
		url = "https://github.com/LordGolias/dict";
    };
};

#define DOUBLES(var1,var2) ##var1##_##var2
#define QUOTE(var1) #var1
#define FNC_FILE_BASE(func) QUOTE(dictionary\DOUBLES(fnc,func).sqf)
#define FNC(func) class func {file = FNC_FILE_BASE(func);}

class CfgFunctions {
    class DICT {
        class common {
            FNC(create);

            FNC(keys);

            FNC(_set);
            FNC(set);
            FNC(setGlobal);

            FNC(_get);
            FNC(get);
            FNC(exists);

            FNC(_del);
            FNC(del);
            FNC(delGlobal);

            FNC(_copy);
            FNC(copy);
            FNC(copyGlobal);

            FNC(_splitString);
            FNC(_splitStringDelimited);
            FNC(serialize);
            FNC(deserialize);

            FNC(test);
        };
    };
};
