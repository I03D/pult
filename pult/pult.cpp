#include <iostream>
#include "garagedoor.h"
#include "light.h"
#include "stereo.h"
#include "tv.h"

public interface Command {
    public void execute();
};

public class LightOnCommand implements Command {
    Light light;

    public:
        LightOnCommand(Light light) {
            this.light = light;
        }

        void execute() {
            light.on();
        }
};

int main()
{
    std::cout << "Hello World!\n";
}
