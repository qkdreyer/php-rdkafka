/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: a84f8bd542d46b72179ff6aa0d9d17bed530a2de */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RdKafka_Metadata_Collection_count, 0, 0, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_RdKafka_Metadata_Collection_current arginfo_class_RdKafka_Metadata_Collection_count

#define arginfo_class_RdKafka_Metadata_Collection_key arginfo_class_RdKafka_Metadata_Collection_count

#define arginfo_class_RdKafka_Metadata_Collection_next arginfo_class_RdKafka_Metadata_Collection_count

#define arginfo_class_RdKafka_Metadata_Collection_rewind arginfo_class_RdKafka_Metadata_Collection_count

#define arginfo_class_RdKafka_Metadata_Collection_valid arginfo_class_RdKafka_Metadata_Collection_count


ZEND_METHOD(RdKafka_Metadata_Collection, count);
ZEND_METHOD(RdKafka_Metadata_Collection, current);
ZEND_METHOD(RdKafka_Metadata_Collection, key);
ZEND_METHOD(RdKafka_Metadata_Collection, next);
ZEND_METHOD(RdKafka_Metadata_Collection, rewind);
ZEND_METHOD(RdKafka_Metadata_Collection, valid);


static const zend_function_entry class_RdKafka_Metadata_Collection_methods[] = {
	ZEND_ME(RdKafka_Metadata_Collection, count, arginfo_class_RdKafka_Metadata_Collection_count, ZEND_ACC_PUBLIC)
	ZEND_ME(RdKafka_Metadata_Collection, current, arginfo_class_RdKafka_Metadata_Collection_current, ZEND_ACC_PUBLIC)
	ZEND_ME(RdKafka_Metadata_Collection, key, arginfo_class_RdKafka_Metadata_Collection_key, ZEND_ACC_PUBLIC)
	ZEND_ME(RdKafka_Metadata_Collection, next, arginfo_class_RdKafka_Metadata_Collection_next, ZEND_ACC_PUBLIC)
	ZEND_ME(RdKafka_Metadata_Collection, rewind, arginfo_class_RdKafka_Metadata_Collection_rewind, ZEND_ACC_PUBLIC)
	ZEND_ME(RdKafka_Metadata_Collection, valid, arginfo_class_RdKafka_Metadata_Collection_valid, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_RdKafka_Metadata_Collection(zend_class_entry *class_entry_Countable, zend_class_entry *class_entry_Iterator)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "RdKafka\\Metadata", "Collection", class_RdKafka_Metadata_Collection_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);
	zend_class_implements(class_entry, 2, class_entry_Countable, class_entry_Iterator);

	return class_entry;
}
