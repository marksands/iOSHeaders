//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@interface NSManagedObject (IC)
+ (id)objectIDsMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)objectIDsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 context:(id)arg3;
+ (id)objectsMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)objectsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 relationshipKeyPathsForPrefetching:(id)arg3 context:(id)arg4;
+ (id)objectsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 context:(id)arg3;
+ (id)resultsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 resultType:(unsigned long long)arg3 relationshipKeyPathsForPrefetching:(id)arg4 context:(id)arg5;
+ (id)permanentObjectIDsFromObjects:(id)arg1;
+ (id)objectIDsFromObjects:(id)arg1;
+ (id)objectsFromObjectIDs:(id)arg1 context:(id)arg2;
+ (id)objectsFromObjectIDs:(id)arg1 relationshipKeyPathsForPrefetching:(id)arg2 context:(id)arg3;
+ (id)objectFromObjectID:(id)arg1 context:(id)arg2;
- (void)postNotificationOnMainThreadAfterSaveWithName:(id)arg1;
- (void)postNotificationOnMainThreadWithName:(id)arg1;
- (id)permanentObjectID;
- (_Bool)obtainPermanentObjectIDIfNecessary;
@end

