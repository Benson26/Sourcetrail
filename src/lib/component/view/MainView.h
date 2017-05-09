#ifndef MAIN_VIEW_H
#define MAIN_VIEW_H

#include <string>
#include <vector>

#include "component/view/ViewLayout.h"

struct SearchMatch;

class MainView
	: public ViewLayout
{
public:
	MainView();
	virtual ~MainView();

	virtual void loadLayout() = 0;
	virtual void saveLayout() = 0;

	virtual void hideStartScreen() = 0;
	virtual void setTitle(const std::string& title) = 0;
	virtual void activateWindow() = 0;

	virtual void updateRecentProjectMenu() = 0;
	virtual void updateHistoryMenu(const std::vector<SearchMatch>& history) = 0;
};

#endif // MAIN_VIEW_H
