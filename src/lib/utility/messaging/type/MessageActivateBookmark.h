#ifndef MESSAGE_ACTIVATE_BOOKMARK_H
#define MESSAGE_ACTIVATE_BOOKMARK_H

#include "utility/messaging/Message.h"

#include "data/bookmark/Bookmark.h"

class MessageActivateBookmark
	: public Message<MessageActivateBookmark>
{
public:
	MessageActivateBookmark(const std::shared_ptr<Bookmark>& bookmark)
		: bookmark(bookmark)
	{
	}

	virtual ~MessageActivateBookmark()
	{
	}

	static const std::string getStaticType()
	{
		return "MessageActivateBookmark";
	}

	const std::shared_ptr<Bookmark> bookmark;
};

#endif // MESSAGE_ACTIVATE_BOOKMARK_H