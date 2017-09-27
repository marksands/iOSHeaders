//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSThread.h"

@interface NSThread (TSPersistence)
+ (void)tsp_performSynchronousOperationWithThreadDictionaryObject:(id)arg1 forKey:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (void)tsp_performSynchronousOperationWithReadFileAccessUsingBlock:(CDUnknownBlockType)arg1;
+ (_Bool)tsp_hasReadFileAccess;
+ (void)tsp_runFinalizeHandlersForReadCoordinator:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (_Bool)tsp_isRunningFinalizeHandlersForLegacyDocument;
+ (_Bool)tsp_isRunningFinalizeHandlersForUpgrade;
+ (void)tsp_performSynchronousArchiverOperationUsingBlock:(CDUnknownBlockType)arg1;
+ (_Bool)tsp_isArchiverThread;
+ (_Bool)tsp_isUnarchiverThread;
+ (id)tsp_newUnarchiverQueueWithName:(const char *)arg1;
@end

