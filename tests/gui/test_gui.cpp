#include <gtest/gtest.h>
#include "GUI.h"

TEST(GUITest, Initialize) {
    GUI gui;
    EXPECT_NO_THROW(gui.initialize());
}

TEST(GUITest, Render) {
    GUI gui;
    EXPECT_NO_THROW(gui.render());
}

TEST(GUITest, HandleEvents) {
    GUI gui;
    EXPECT_NO_THROW(gui.handleEvents());
}

TEST(GUITest, ShowError) {
    GUI gui;
    EXPECT_NO_THROW(gui.showError("Test Error"));
}

TEST(GUITest, Update) {
    GUI gui;
    EXPECT_NO_THROW(gui.update());
}
