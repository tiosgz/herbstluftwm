#ifndef ROOT_H
#define ROOT_H

#include "utils.h"
#include "directory.h"

// new object tree root.
namespace herbstluft {

class HookManager;
class ClientManager;

class Root : public Directory {
public:
    static std::shared_ptr<Root> create();
    static void destroy();
    static std::shared_ptr<Root> get() { return root_; }

    // constructor creates top-level objects
    Root();

    /* convenience methods */
    static std::shared_ptr<HookManager> hooks();
    static std::shared_ptr<ClientManager> clients();

    /* external interface */
    static int cmd_ls(Input in, Output out);

private:

    static std::shared_ptr<Root> root_;
};

int print_object_tree_command(int argc, char* argv[], Output output);


}

#endif // ROOT_H
