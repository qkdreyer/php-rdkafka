/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 53fa93c8908858d59ab75b39a77efdea9e843675 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RdKafka_Metadata_Broker_getId, 0, 0, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_RdKafka_Metadata_Broker_getHost arginfo_class_RdKafka_Metadata_Broker_getId

#define arginfo_class_RdKafka_Metadata_Broker_getPort arginfo_class_RdKafka_Metadata_Broker_getId


ZEND_METHOD(RdKafka_Metadata_Broker, getId);
ZEND_METHOD(RdKafka_Metadata_Broker, getHost);
ZEND_METHOD(RdKafka_Metadata_Broker, getPort);


static const zend_function_entry class_RdKafka_Metadata_Broker_methods[] = {
	ZEND_ME(RdKafka_Metadata_Broker, getId, arginfo_class_RdKafka_Metadata_Broker_getId, ZEND_ACC_PUBLIC)
	ZEND_ME(RdKafka_Metadata_Broker, getHost, arginfo_class_RdKafka_Metadata_Broker_getHost, ZEND_ACC_PUBLIC)
	ZEND_ME(RdKafka_Metadata_Broker, getPort, arginfo_class_RdKafka_Metadata_Broker_getPort, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_RdKafka_Metadata_Broker(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "RdKafka\\Metadata", "Broker", class_RdKafka_Metadata_Broker_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	return class_entry;
}
