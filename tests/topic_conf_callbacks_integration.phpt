--TEST--
RdKafka\TopicConf
--FILE--
<?php

$topicConf = new RdKafka\TopicConf();

echo "Setting partitioner callback\n";
$topicConf->setPartitionerCb(function ($consumer, $key, $keylen, $partitionCount): int {
    echo get_class($consumer) . PHP_EOL;
    echo $key . PHP_EOL;
    echo $keylen . PHP_EOL;
    echo $partitionCount . PHP_EOL;
    return 0;
});

$conf = new RdKafka\Conf();
$conf->set('default_topic_conf', $topicConf);
$producer = new RdKafka\Producer($conf);

$topicName = sprintf("test_rdkafka_%s", uniqid());
$topic = $producer->newTopic($topicName);

$topic->produce(RD_KAFKA_PARTITION_UA, 0, "message", "key");
$producer->poll(0);

--EXPECT--
Setting partitioner callback
key
3
