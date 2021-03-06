//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSObject<CLSChangeNotifiable>, NSObject<CLSQuery>, NSObject<CLSSaveResponse>, NSPredicate, NSString;

@protocol CLSDataServerInterface <NSObject>
- (oneway void)remote_publishHandoutGraph:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (oneway void)remote_authTreeWithCompletion:(void (^)(id, NSError *))arg1;
- (oneway void)remote_fetchDeletedObjectIDsNewerThanDate:(NSDate *)arg1 completion:(void (^)(NSArray *))arg2;
- (oneway void)remote_setShouldSyncTeacherBrowsedContexts:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)remote_shouldSyncTeacherBrowsedContextsWithCompletion:(void (^)(id, NSError *))arg1;
- (oneway void)remote_fetchTransparencyMessageInfoWithCompletion:(void (^)(id, NSError *))arg1;
- (oneway void)remote_deregisterDataObserverWithID:(NSString *)arg1 completion:(void (^)(void))arg2;
- (oneway void)remote_registerDataObserver:(NSObject<CLSChangeNotifiable> *)arg1 withID:(NSString *)arg2 forClassNamed:(NSString *)arg3 predicate:(NSPredicate *)arg4 sortDescriptors:(NSArray *)arg5 oldChangeTag:(unsigned long long)arg6 completion:(void (^)(NSError *))arg7;
- (oneway void)remote_currentUserWithCompletion:(void (^)(CLSCurrentUser *, NSError *))arg1;
- (oneway void)remote_contextsMatchingIdentifierPath:(NSArray *)arg1 parentContextID:(NSString *)arg2 completion:(void (^)(id, NSError *))arg3;
- (oneway void)remote_saveObjects:(NSArray *)arg1 saveResponse:(NSObject<CLSSaveResponse> *)arg2 completion:(void (^)(void))arg3;
- (oneway void)remote_executeQuery:(NSObject<CLSQuery> *)arg1 forClassNamed:(NSString *)arg2 predicate:(NSPredicate *)arg3 sortDescriptors:(NSArray *)arg4 state:(unsigned long long)arg5 limit:(unsigned long long)arg6 completion:(void (^)(void))arg7;
- (oneway void)remote_mainAppContextWithCompletion:(void (^)(id, NSError *))arg1;
@end

