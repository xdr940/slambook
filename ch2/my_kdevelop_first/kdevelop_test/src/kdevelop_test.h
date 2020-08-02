#ifndef KDEVELOP_TEST_H
#define KDEVELOP_TEST_H

#include <interfaces/iplugin.h>

class kdevelop_test : public KDevelop::IPlugin
{
    Q_OBJECT

public:
    // KPluginFactory-based plugin wants constructor with this signature
    kdevelop_test(QObject* parent, const QVariantList& args);
};

#endif // KDEVELOP_TEST_H
