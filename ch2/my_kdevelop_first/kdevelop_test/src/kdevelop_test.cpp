#include "kdevelop_test.h"

#include <debug.h>

#include <KPluginFactory>

K_PLUGIN_FACTORY_WITH_JSON(kdevelop_testFactory, "kdevelop_test.json", registerPlugin<kdevelop_test>(); )

kdevelop_test::kdevelop_test(QObject *parent, const QVariantList& args)
    : KDevelop::IPlugin(QStringLiteral("kdevelop_test"), parent)
{
    Q_UNUSED(args);

    qCDebug(PLUGIN_KDEVELOP_TEST) << "Hello world, my plugin is loaded!";
}

// needed for QObject class created from K_PLUGIN_FACTORY_WITH_JSON
#include "kdevelop_test.moc"
